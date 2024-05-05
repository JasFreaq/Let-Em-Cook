// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookGameMode.h"

#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "LetEmCook/Actors/ModularProjectile.h"
#include "UObject/ConstructorHelpers.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/DataAssets/InteractionData.h"
#include "Kismet/KismetSystemLibrary.h"
#include "LetEmCook/GameInstances/LetEmCookGameInstance.h"

ALetEmCookGameMode::ALetEmCookGameMode(): Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/_Game/Blueprints/Characters/BP_CharacterBase"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PrimaryActorTick.bCanEverTick = true;

	bUseSeamlessTravel = true;
}

void ALetEmCookGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	LoggedControllers.Remove(Exiting);

	UE_LOG(LogTemp, Warning, TEXT("Logged Controllers: %d"), LoggedControllers.Num());

	if (LoggedControllers.Num() == 0)
	{
		if (ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance()); GameInstance != nullptr)
		{
			GameInstance->InitiateServerShutdown();
		}
	}
}

void ALetEmCookGameMode::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	UE_LOG(LogTemp, Warning, TEXT("Post Login"));

	LoggedControllers.Add(NewPlayer);

	UE_LOG(LogTemp, Warning, TEXT("Logged Controllers: %d"), LoggedControllers.Num());
}

void ALetEmCookGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bHasGameBegun)
	{
		ProcessColision();
	}
}

void ALetEmCookGameMode::SetGameBegun(bool bGameBegun)
{
	bHasGameBegun = bGameBegun;
}

void ALetEmCookGameMode::RaiseCollisionEvent(AActor* ActorA, AActor* ActorB)
{
	if (HasAuthority())
	{
		const FCollisionEventData Event(ActorA, ActorB);
		CollisionEventsQueue.Enqueue(Event);
	}
}

void ALetEmCookGameMode::ProcessColision()
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

//void ALetEmCookGameMode::BeginPlay()
//{
//	Super::BeginPlay();
//
//	if (HasAuthority())
//	{
//		// Initialize the projectile pool
//		for (UGameItemData* UtensilProjectile : UtensilProjectiles)
//		{
//			for (int i = 0; i < InitialPoolSize; i++)
//			{
//				if (i == 0)
//				{
//					TArray<TObjectPtr<ALetEmCookProjectile>> ProjectileArray;
//					ProjectileCooldownMap.Add(UtensilProjectile->GetProjectile(), ProjectileArray);
//				}
//
//				ALetEmCookProjectile* NewProjectile = GetWorld()->SpawnActor<ALetEmCookProjectile>(UtensilProjectile->GetProjectile());
//				NewProjectile->SetActorHiddenInGame(true);
//				NewProjectile->SetActorEnableCollision(false);
//
//				ProjectileCooldownMap[UtensilProjectile->GetProjectile()].Add(NewProjectile);
//			}
//		}
//	}
//}
//
//ALetEmCookProjectile* ALetEmCookGameMode::GetProjectileFromPool(TSubclassOf<ALetEmCookProjectile> ProjectileClass)
//{
//	if (ProjectileCooldownMap.Contains(ProjectileClass))
//	{
//		for (ALetEmCookProjectile* Projectile : ProjectileCooldownMap[ProjectileClass])
//		{
//			if (Projectile->IsHidden())
//			{
//				return Projectile;
//			}
//		}
//	}
//
//	return nullptr;
//}