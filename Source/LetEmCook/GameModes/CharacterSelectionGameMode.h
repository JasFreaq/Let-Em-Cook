// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookGameMode.h"
#include "CharacterSelectionGameMode.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ACharacterSelectionGameMode : public ALetEmCookGameMode
{
	GENERATED_BODY()

	// Networking

	UPROPERTY(EditDefaultsOnly)
	FString GameMap = "Sasha/KitchenLVL1";

	UPROPERTY(EditDefaultsOnly)
	FString TestMap = "Maps/GameplayTest_Level";

	UPROPERTY(EditDefaultsOnly)
	bool bUseTestMap = false;

	UPROPERTY(EditDefaultsOnly)
	int QueueSize = 2;

	bool bInCharacterSelection = false;

public:

	virtual void OnPostLogin(AController* NewPlayer) override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void BeginCharacterSelection();
};
