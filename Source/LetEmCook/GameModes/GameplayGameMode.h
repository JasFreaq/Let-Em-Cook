// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookGameMode.h"
#include "LetEmCook/Enums/ETeam.h"
#include "GameplayGameMode.generated.h"

class UGameItemData;
class UInteractionData;
class ALetEmCookCharacter;

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

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AGameplayGameMode : public ALetEmCookGameMode
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Character Selection")
	float GameTime = 600.0f;

	bool bInGame = false;

	UPROPERTY()
	TArray<AActor*> BlueSpawnPoints;

	UPROPERTY()
	TArray<AActor*> RedSpawnPoints;

	// Collision Handling

	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<UInteractionData>> Interactions;

	TQueue<FCollisionEventData> CollisionEventsQueue;

	UPROPERTY()
	TSet<TObjectPtr<AActor>> ProcessedActors;

public:

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void BeginGame();

	UFUNCTION(BlueprintCallable)
	void GetGameRemainingTime(int& RemainingMinutes, int& RemainingSeconds);
	
	void SpawnPlayerCharacter(APlayerController* Player, TSubclassOf<ALetEmCookCharacter> CharacterClass, ETeam Team);

	void RaiseCollisionEvent(AActor* ActorA, AActor* ActorB);

private:

	FTransform GetPlayerSpawnTransform(ETeam Team);

	void ProcessColision();
};
