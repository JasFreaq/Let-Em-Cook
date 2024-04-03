// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookProjectile.h"
#include "ModularProjectile.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class LETEMCOOK_API AModularProjectile : public ALetEmCookProjectile
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
	
	virtual void AdjustMeshView() PURE_VIRTUAL(AModularProjectile::AdjustMeshView, );
};
