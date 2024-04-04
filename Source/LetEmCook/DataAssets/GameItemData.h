// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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
UCLASS()
class LETEMCOOK_API UGameItemData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FString AssetName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ALetEmCookProjectile> Projectile;

	UPROPERTY(EditDefaultsOnly)
	EProjectileType ProjectileType;

	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ProjectileType == EProjectileType::Utensil"))
	float ProjectileCooldown = 1.5f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHeldProjectileMesh> HeldMesh;

	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = "ProjectileType == EProjectileType::Modular"))
	TArray<TObjectPtr<UGameItemData>> NestedGameItems;

public:

	FString GetAssetName() const { return AssetName; }

	TSubclassOf<ALetEmCookProjectile> GetProjectile() const { return Projectile; }

	TSubclassOf<AHeldProjectileMesh> GetHeldMesh() const { return HeldMesh; }

	float GetProjectileCooldown() const { return ProjectileCooldown; }
};
