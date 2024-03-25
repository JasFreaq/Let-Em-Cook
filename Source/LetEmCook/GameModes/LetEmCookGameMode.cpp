// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookGameMode.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "UObject/ConstructorHelpers.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/DataAssets/InteractionData.h"
#include "Kismet/KismetSystemLibrary.h"

ALetEmCookGameMode::ALetEmCookGameMode(): Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/_Game/Blueprints/Characters/BP_CharacterBase"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PrimaryActorTick.bCanEverTick = true;
}

void ALetEmCookGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

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
			for (const TObjectPtr<UInteractionData> Interaction : Interactions)
			{
				if (Interaction->GetItemA() == nullptr || Interaction->GetItemB() == nullptr)
				{
					UE_LOG(LogTemp, Error, TEXT("Missing references in %s"), *Interaction->GetName());
					continue;
				}

				if ((Event.ActorA->IsA(Interaction->GetItemA()->GetProjectile())
					&& Event.ActorB->IsA(Interaction->GetItemB()->GetProjectile()))
					|| Event.ActorA->IsA(Interaction->GetItemB()->GetProjectile())
					&& Event.ActorB->IsA(Interaction->GetItemA()->GetProjectile()))
				{
					RaisedInteraction = Interaction;
					break;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("No Interaction Found"));
				}
			}

			if (RaisedInteraction != nullptr)
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

		for (const TObjectPtr<AActor> ProcessedActor : ProcessedActors)
		{
			ProcessedActor->Destroy();
		}

		ProcessedActors.Empty();
	}
}

void ALetEmCookGameMode::RaiseCollisionEvent(AActor* ActorA, AActor* ActorB)
{
	if (HasAuthority())
	{
		const FCollisionEventData Event(ActorA, ActorB);
		CollisionEventsQueue.Enqueue(Event);
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