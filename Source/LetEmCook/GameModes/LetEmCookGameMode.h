// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LetEmCookGameMode.generated.h"

class UGameItemData;
class UInteractionData;
class ALetEmCookCharacter;



UCLASS()
class ALetEmCookGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ALetEmCookGameMode();
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	float GameModeTime;

	float CurrentMapInitTime;

public:

	virtual void PostSeamlessTravel() override;

	virtual void Logout(AController* Exiting) override;

	virtual void OnPostLogin(AController* NewPlayer) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGameModeTimeRemaining() const;
};
