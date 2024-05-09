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
		const float ServerTimeSeconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

		if (ServerTimeSeconds - CurrentMapInitTime >= GameTime)
		{
			bInGame = false;

			UE_LOG(LogTemp, Warning, TEXT("Game Over"));
		}

		if (ServerTimeSeconds - LastOrderSpawnTime >= OrderSpawnCooldown)
		{
			if (ActiveOrders.Num() < MaxOrders)
			{

				ActiveOrders.Add(OrdersInfo[FMath::RandRange(0, OrdersInfo.Num() - 1)]);

				LastOrderSpawnTime = ServerTimeSeconds;
			}
		}

		ProcessCollision();

		if (!RespawnTimestamps.IsEmpty())
		{
			FRespawnData* RespawnData = RespawnTimestamps.Peek();
			const float SecondsElapsedSince = ServerTimeSeconds - RespawnData->DeathTime;

			if (SecondsElapsedSince > RespawnCooldown)
			{
				RespawnData->PlayerController->MakeNewCharacterRequest();

				FRespawnData _;
				RespawnTimestamps.Dequeue(_);
			}
		}
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

void AGameplayGameMode::SpawnPlayerCharacter(ALetEmCookPlayerController* Player, TSubclassOf<ALetEmCookCharacter> CharacterClass, ETeam Team)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	const FTransform SpawnTransform = GetPlayerSpawnTransform(Team);

	AActor* SpawnedCharacter = GetWorld()->SpawnActor(CharacterClass, &SpawnTransform, SpawnParams);

	Player->Possess(Cast<APawn>(SpawnedCharacter));
}

void AGameplayGameMode::SpawnSpectator(ALetEmCookPlayerController* Player, const FTransform SpawnTransform)
{
	float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
	FRespawnData RespawnData(Player, CurrentTime);
	RespawnTimestamps.Enqueue(RespawnData);

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AActor* SpawnedCharacter = GetWorld()->SpawnActor(SpectatorPawn, &SpawnTransform, SpawnParams);

	Player->Possess(Cast<APawn>(SpawnedCharacter));
}

void AGameplayGameMode::RaiseCollisionEvent(ALetEmCookProjectile* ProjectileA, ALetEmCookProjectile* ProjectileB)
{
	if (HasAuthority())
	{
		const FCollisionEventData Event(ProjectileA, ProjectileB);
		CollisionEventsQueue.Enqueue(Event);
	}
}

void AGameplayGameMode::ReceiveOrders(ALetEmCookProjectile* Order)
{
	for (TObjectPtr<UOrderInfoData> OrderInfo : ActiveOrders)
	{
		AModularProjectile* OrderItem = Cast<AModularProjectile>(Order);
		if (OrderInfo->GetOrderItem() == OrderItem->GetGameItem())
		{
			TArray<TObjectPtr<UGameItemData>> ItemsInOrder = OrderItem->GetItemsPossessed();
			for (TObjectPtr<UGameItemData> GameItem : OrderInfo->GetOrderItem()->GetCompositeGameItems())
			{
				if (!ItemsInOrder.Contains(GameItem))
				{
					return;
				}
			}

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

			if (ProcessedActors.Contains(Event.ProjectileA) || ProcessedActors.Contains(Event.ProjectileB))
			{
				continue;
			}

			TObjectPtr<UInteractionData> RaisedInteraction;
			UGameItemData* ProjectileAItem;
			UGameItemData* ProjectileBItem;

			for (const TObjectPtr<UInteractionData> Interaction : Interactions)
			{				
				if (Interaction->GetItemA() == nullptr || Interaction->GetItemB() == nullptr)
				{
					UE_LOG(LogTemp, Error, TEXT("Missing references in %s"), *Interaction->GetName());
					continue;
				}

				// Interaction lookup

				TArray<TObjectPtr<UGameItemData>> ProjectileALookup;
				ProjectileALookup.Add(Event.ProjectileA->GetGameItem());
				ProjectileALookup.Append(Event.ProjectileA->GetGameItem()->GetCompositeGameItems());

				TArray<TObjectPtr<UGameItemData>> ProjectileBLookup;
				ProjectileBLookup.Add(Event.ProjectileB->GetGameItem());
				ProjectileBLookup.Append(Event.ProjectileB->GetGameItem()->GetCompositeGameItems());
				
				for (TObjectPtr<UGameItemData> ItemA : ProjectileALookup)
				{
					for (TObjectPtr<UGameItemData> ItemB : ProjectileBLookup)
					{
						if (ItemA == Interaction->GetItemA()
							&& ItemB == Interaction->GetItemB())
						{
							ProjectileAItem = ItemA;
							ProjectileBItem = ItemB;
							RaisedInteraction = Interaction;
							break;
						}
					}
				}

				for (TObjectPtr<UGameItemData> ItemA : ProjectileALookup)
				{
					for (TObjectPtr<UGameItemData> ItemB : ProjectileBLookup)
					{
						if (ItemA == Interaction->GetItemB()
							&& ItemB == Interaction->GetItemA())
						{
							ProjectileAItem = ItemA;
							ProjectileBItem = ItemB;
							RaisedInteraction = Interaction;
							break;
						}
					}
				}
			}

			if (RaisedInteraction != nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Interaction Found: %s"), *RaisedInteraction->GetName());

				if (RaisedInteraction->IsInteractionModular())
				{
					if (AModularProjectile* ModularProjectile = Cast<AModularProjectile>(Event.ProjectileA); ModularProjectile != nullptr)
					{
						ModularProjectile->ProcessCollision(ProjectileBItem);

						ProcessedActors.Add(Event.ProjectileB);
					}
					else if (ModularProjectile = Cast<AModularProjectile>(Event.ProjectileB); ModularProjectile != nullptr)
					{
						ModularProjectile->ProcessCollision(ProjectileAItem);

						ProcessedActors.Add(Event.ProjectileA);
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
						FVector SpawnLocation = (Event.ProjectileA->GetActorLocation() + Event.ProjectileB->GetActorLocation()) / 2;

						FActorSpawnParameters SpawnParams;
						SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

						AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(RaisedInteraction->GetResultItem()->GetProjectile(), SpawnLocation, FQuat::Identity.Rotator(), SpawnParams);

						AModularProjectile* ModularProjectile = Cast<AModularProjectile>(SpawnedActor);

						if (ModularProjectile != nullptr)
						{
							TArray<UGameItemData*> GameItems;
							GameItems.Add(ProjectileAItem);
							GameItems.Add(ProjectileBItem);

							ModularProjectile->InitializeProjectile(GameItems);
						}

						ProcessedActors.Add(Event.ProjectileA);
						ProcessedActors.Add(Event.ProjectileB);
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("No Result Item set in %s"), *RaisedInteraction->GetName());
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("No Interaction Found"));
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
