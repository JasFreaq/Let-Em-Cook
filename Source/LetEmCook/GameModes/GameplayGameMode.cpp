// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayGameMode.h"

#include "Engine/TargetPoint.h"
#include "GameFramework/GameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "LetEmCook/Actors/ModularProjectile.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"
#include "LetEmCook/DataAssets/InteractionData.h"
#include "LetEmCook/DataAssets/OrderInfoData.h"
#include "LetEmCook/PlayerControllers/LetEmCookPlayerController.h"

void AGameplayGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bInGame)
	{
		const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

		if (CurrentTime - CurrentMapInitTime >= GameTime)
		{
			bInGame = false;

			UE_LOG(LogTemp, Warning, TEXT("Game Over"));
		}

		if (CurrentTime - LastOrderSpawnTime >= OrderSpawnCooldown)
		{
			if (ActiveOrders.Num() < MaxOrders)
			{

				ActiveOrders.Add(OrdersInfo[FMath::RandRange(0, OrdersInfo.Num() - 1)]);

				LastOrderSpawnTime = CurrentTime;
			}
		}

		ProcessCollision();
	}
}

void AGameplayGameMode::BeginGame()
{
	bInGame = true;

	CurrentMapInitTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

	UGameplayStatics::GetAllActorsOfClassWithTag(this, ATargetPoint::StaticClass(), FName(TEXT("Blue")), BlueSpawnPoints);
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ATargetPoint::StaticClass(), FName(TEXT("Red")), RedSpawnPoints);
}

void AGameplayGameMode::GetGameRemainingTime(int& RemainingMinutes, int& RemainingSeconds)
{
	const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
	const float RemainingTime = FMath::Max(0.f, GameTime - CurrentTime + CurrentMapInitTime);

	RemainingMinutes = FMath::FloorToInt(RemainingTime / 60);
	RemainingSeconds = FMath::RoundToInt(RemainingTime) % 60;
}

void AGameplayGameMode::SpawnPlayerCharacter(APlayerController* Player, TSubclassOf<ALetEmCookCharacter> CharacterClass, ETeam Team)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	const FTransform SpawnTransform = GetPlayerSpawnTransform(Team);

	AActor* SpawnedCharacter = GetWorld()->SpawnActor(CharacterClass, &SpawnTransform, SpawnParams);

	Player->Possess(Cast<APawn>(SpawnedCharacter));
}

void AGameplayGameMode::RaiseCollisionEvent(AActor* ActorA, AActor* ActorB)
{
	if (HasAuthority())
	{
		const FCollisionEventData Event(ActorA, ActorB);
		CollisionEventsQueue.Enqueue(Event);
	}
}

void AGameplayGameMode::ReceiveOrders(AActor* OrderActor)
{
	for (TObjectPtr<UOrderInfoData> OrderInfo : ActiveOrders)
	{
		ALetEmCookProjectile* OrderItem = Cast<ALetEmCookProjectile>(OrderActor);
		if (OrderInfo->GetOrderItem() == OrderItem->GetGameItem())
		{
			ALetEmCookCharacter* Character = OrderItem->GetOwnerCharacter();

			ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Character->GetController());
			if (PlayerController != nullptr)
			{
				AGameplayGameMode* GameMode = Cast<AGameplayGameMode>(GetWorld()->GetAuthGameMode());
				GameMode->AddOrderPoints(PlayerController->GetPlayerTeam(), OrderInfo->GetPoints());
			}
		}
	}
}

FTransform AGameplayGameMode::GetPlayerSpawnTransform(ETeam Team)
{
	switch (Team)
	{
		case ETeam::Blue:
			return BlueSpawnPoints[FMath::RandRange(0, BlueSpawnPoints.Num() - 1)]->GetActorTransform();

		case ETeam::Red:
			return RedSpawnPoints[FMath::RandRange(0, RedSpawnPoints.Num() - 1)]->GetActorTransform();
	}

	UE_LOG(LogTemp, Error, TEXT("No Team found"));
	return FTransform();
}

void AGameplayGameMode::ProcessCollision()
{
	if (HasAuthority())
	{
		// Process the interaction queue
		while (!CollisionEventsQueue.IsEmpty())
		{
			FCollisionEventData Event;
			CollisionEventsQueue.Dequeue(Event);

			if (ProcessedActors.Contains(Event.ActorA) || ProcessedActors.Contains(Event.ActorB))
			{
				continue;
			}

			TObjectPtr<UInteractionData> RaisedInteraction;
			UGameItemData* ActorAItem;
			UGameItemData* ActorBItem;

			for (const TObjectPtr<UInteractionData> Interaction : Interactions)
			{
				if (Interaction->GetItemA() == nullptr || Interaction->GetItemB() == nullptr)
				{
					UE_LOG(LogTemp, Error, TEXT("Missing references in %s"), *Interaction->GetName());
					continue;
				}

				if (Event.ActorA->IsA(Interaction->GetItemA()->GetProjectile())
					&& Event.ActorB->IsA(Interaction->GetItemB()->GetProjectile()))
				{
					RaisedInteraction = Interaction;
					ActorAItem = Interaction->GetItemA();
					ActorBItem = Interaction->GetItemB();

					break;
				}

				if (Event.ActorA->IsA(Interaction->GetItemB()->GetProjectile())
					&& Event.ActorB->IsA(Interaction->GetItemA()->GetProjectile()))
				{
					RaisedInteraction = Interaction;
					ActorAItem = Interaction->GetItemB();
					ActorBItem = Interaction->GetItemA();

					break;
				}

				UE_LOG(LogTemp, Warning, TEXT("No Interaction Found"));
			}

			if (RaisedInteraction != nullptr)
			{
				if (RaisedInteraction->IsInteractionModular())
				{
					if (AModularProjectile* ModularProjectile = Cast<AModularProjectile>(Event.ActorA); ModularProjectile != nullptr)
					{
						ModularProjectile->ProcessCollision(ActorBItem);

						ProcessedActors.Add(Event.ActorB);
					}
					else if (ModularProjectile = Cast<AModularProjectile>(Event.ActorB); ModularProjectile != nullptr)
					{
						ModularProjectile->ProcessCollision(ActorAItem);

						ProcessedActors.Add(Event.ActorA);
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("No Modular Projectile found in %s"), *RaisedInteraction->GetName());
					}
				}
				else
				{
					if (RaisedInteraction->GetResultItem() != nullptr)
					{
						FVector SpawnLocation = (Event.ActorA->GetActorLocation() + Event.ActorB->GetActorLocation()) / 2;

						FActorSpawnParameters SpawnParams;
						SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

						GetWorld()->SpawnActor<AActor>(RaisedInteraction->GetResultItem()->GetProjectile(), SpawnLocation, FQuat::Identity.Rotator(), SpawnParams);

						ProcessedActors.Add(Event.ActorA);
						ProcessedActors.Add(Event.ActorB);
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("No Result Item set in %s"), *RaisedInteraction->GetName());
					}
				}
			}
		}

		for (const TObjectPtr<AActor> ProcessedActor : ProcessedActors)
		{
			ProcessedActor->Destroy();
		}

		ProcessedActors.Empty();
	}
}

void AGameplayGameMode::AddOrderPoints(ETeam Team, int Points)
{
	switch (Team)
	{
		case ETeam::Blue:
			BlueTeamPoints += Points;
			break;

		case ETeam::Red:
			RedTeamPoints += Points;
			break;
	}
}
