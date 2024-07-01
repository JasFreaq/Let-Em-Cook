// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameplayPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AGameplayPlayerState : public APlayerState
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	float HealthRatio = 1.f;

public:
	
	float GetHealthRatio() const { return HealthRatio; }
	
	void SetHealthRatio(float NewHealthRatio) { HealthRatio = NewHealthRatio; }

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
