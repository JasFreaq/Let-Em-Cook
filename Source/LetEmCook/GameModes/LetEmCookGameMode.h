// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LetEmCookGameMode.generated.h"

class UGameItemData;
class ALetEmCookProjectile;
class UInteractionData;

USTRUCT()
struct FCollisionEventData
{
	GENERATED_BODY()

	FCollisionEventData() { }

	FCollisionEventData(AActor* A, AActor* B) : ActorA(A), ActorB(B) { }

	UPROPERTY()
	AActor* ActorA;

	UPROPERTY()
	AActor* ActorB;
};

UCLASS()
class ALetEmCookGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALetEmCookGameMode();

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<UInteractionData>> Interactions;
	
	TQueue<FCollisionEventData> CollisionEventsQueue;

	UPROPERTY()
	TSet<TObjectPtr<AActor>> ProcessedActors;

public:
	virtual void Tick(float DeltaSeconds) override;

	void RaiseCollisionEvent(ALetEmCookProjectile* ActorA, ALetEmCookProjectile* ActorB);

//private:
//
//	UPROPERTY(EditDefaultsOnly, Category = ProjectilePool)
//	TArray<TObjectPtr<UGameItemData>> UtensilProjectiles;
//
//	UPROPERTY(EditDefaultsOnly, Category = ProjectilePool)
//	int InitialPoolSize = 8;
//
//public:
//
//	ALetEmCookProjectile* GetProjectileFromPool(TSubclassOf<ALetEmCookProjectile> ProjectileClass);
//
//protected:
//
//	virtual void BeginPlay();
//
//private:
//
//	TMap<TSubclassOf<ALetEmCookProjectile>, TArray<TObjectPtr<ALetEmCookProjectile>>> ProjectileCooldownMap;
};
