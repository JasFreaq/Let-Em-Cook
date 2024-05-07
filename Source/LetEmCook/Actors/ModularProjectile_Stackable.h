// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularProjectile.h"
#include "ModularProjectile_Stackable.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AModularProjectile_Stackable : public AModularProjectile
{
	GENERATED_BODY()

	TArray<FVector> SiblingsLocationDifferences;

	TArray<FVector> ItemRelativeLocations;

protected:

	virtual void BeginPlay() override;

	virtual void AdjustProjectileState() override;
};
