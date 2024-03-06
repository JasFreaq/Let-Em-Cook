// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameItemData.generated.h"

class ALetEmCookProjectile;
class AHeldProjectileMesh;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UGameItemData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FString AssetName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ALetEmCookProjectile> Projectile;

	UPROPERTY(EditDefaultsOnly)
	float ProjectileCooldown = 1.5f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHeldProjectileMesh> HeldMesh;

public:

	FString GetAssetName() const { return AssetName; }

	TSubclassOf<ALetEmCookProjectile> GetProjectile() const { return Projectile; }

	TSubclassOf<AHeldProjectileMesh> GetHeldMesh() const { return HeldMesh; }

	float GetProjectileCooldown() const { return ProjectileCooldown; }
};
