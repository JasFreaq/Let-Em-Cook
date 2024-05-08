// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookGameMode.h"
#include "LetEmCook/Enums/ETeam.h"
#include "GameplayGameMode.generated.h"

class UGameItemData;
class UInteractionData;
class UOrderInfoData;

class ALetEmCookCharacter;
class ALetEmCookPlayerController;
class ALetEmCookProjectile;

USTRUCT()
struct FRespawnData
{
	GENERATED_BODY()

	FRespawnData() { }

	FRespawnData(ALetEmCookPlayerController* Controller, float Time) :
	PlayerController(Controller), DeathTime(Time) { }

	UPROPERTY()
	ALetEmCookPlayerController* PlayerController;

	UPROPERTY()
	float DeathTime;
};

USTRUCT()
struct FCollisionEventData
{
	GENERATED_BODY()

	FCollisionEventData() { }

	FCollisionEventData(ALetEmCookProjectile* A, ALetEmCookProjectile* B) : ProjectileA(A), ProjectileB(B) { }

	UPROPERTY()
	ALetEmCookProjectile* ProjectileA;

	UPROPERTY()
	ALetEmCookProjectile* ProjectileB;
};

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AGameplayGameMode : public ALetEmCookGameMode
{
	GENERATED_BODY()

private:

	bool bInGame = false;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	float GameTime = 600.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	TArray<TObjectPtr<UOrderInfoData>> OrdersInfo;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	float OrderSpawnCooldown = 30.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	int MaxOrders = 4;

	float LastOrderSpawnTime = 0.0f;

	// Player Management

	UPROPERTY(EditDefaultsOnly, Category = "Respawn")
	TSubclassOf<APawn> SpectatorPawn;

	UPROPERTY(EditDefaultsOnly, Category = "Respawn")
	float RespawnCooldown = 10;

	TQueue<FRespawnData> RespawnTimestamps;

	UPROPERTY()
	TArray<AActor*> BlueSpawnPoints;

	UPROPERTY()
	TArray<AActor*> RedSpawnPoints;

	int BlueTeamPoints = 0;

	int RedTeamPoints = 0;

	// Collision Handling

	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<UInteractionData>> Interactions;

	TQueue<FCollisionEventData> CollisionEventsQueue;

	UPROPERTY()
	TSet<TObjectPtr<AActor>> ProcessedActors;

	UPROPERTY()
	TArray<TObjectPtr<UOrderInfoData>> ActiveOrders;

public:

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void BeginGame();

	UFUNCTION(BlueprintCallable)
	void GetGameRemainingTime(int& RemainingMinutes, int& RemainingSeconds);
	
	void SpawnPlayerCharacter(ALetEmCookPlayerController* Player, TSubclassOf<ALetEmCookCharacter> CharacterClass, ETeam Team);

	void SpawnSpectator(ALetEmCookPlayerController* Player, const FTransform SpawnTransform);

	void RaiseCollisionEvent(ALetEmCookProjectile* ProjectileA, ALetEmCookProjectile* ProjectileB);

	void ReceiveOrders(ALetEmCookProjectile* Order);

private:

	FTransform GetPlayerSpawnTransform(ETeam Team);

	void ProcessCollision();

	void AddOrderPoints(ETeam Team, int Points);
};
