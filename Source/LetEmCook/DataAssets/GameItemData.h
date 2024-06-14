// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LetEmCook/DataAssets/ProjectileWeightData.h"
#include "GameItemData.generated.h"

class ALetEmCookProjectile;
class AHeldProjectileMesh;

UENUM(BlueprintType)
enum class EProjectileType : uint8
{
	Simple UMETA(DisplayName = "Simple"),
	Modular UMETA(DisplayName = "Modular"),
	Utensil UMETA(DisplayName = "Utensil")
};

/**
 * 
 */
UCLASS(BlueprintType)
class LETEMCOOK_API UGameItemData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FString AssetName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ALetEmCookProjectile> Projectile;

	UPROPERTY(EditDefaultsOnly)
	EProjectileType ProjectileType;

	UPROPERTY(EditDefaultsOnly)
	EProjectileWeightClass WeightClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<TObjectPtr<UGameItemData>> CompositeGameItems;

	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ProjectileType == EProjectileType::Utensil"))
	float ProjectileCooldown = 1.5f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHeldProjectileMesh> HeldMesh;

	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ProjectileType == EProjectileType::Modular"))
	TArray<TObjectPtr<UGameItemData>> NestedGameItems;

public:

	FString GetAssetName() const { return AssetName; }

	TSubclassOf<ALetEmCookProjectile> GetProjectile() const { return Projectile; }

	EProjectileType GetProjectileType() const { return ProjectileType; }

	EProjectileWeightClass GetWeightClass() const { return WeightClass; }

	TArray<TObjectPtr<UGameItemData>> GetCompositeGameItems() const { return CompositeGameItems; }

	float GetProjectileCooldown() const { return ProjectileCooldown; }

	TSubclassOf<AHeldProjectileMesh> GetHeldMesh() const { return HeldMesh; }

	TArray<TObjectPtr<UGameItemData>> GetNestedGameItems() const { return NestedGameItems; }
};
