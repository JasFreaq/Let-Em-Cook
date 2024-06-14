// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProjectileWeightData.generated.h"

UENUM(BlueprintType)
enum class EProjectileWeightClass : uint8
{
	Bullet UMETA(DisplayName = "Bullet"),
	Light UMETA(DisplayName = "Light"),
	Medium UMETA(DisplayName = "Medium"),
	Heavy UMETA(DisplayName = "Heavy")
};

USTRUCT(BlueprintType)
struct FProjectileImpulse
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float Impulse = 2400.f;

	UPROPERTY(EditDefaultsOnly)
	float AngularImpulse = 360.f;
};

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UProjectileWeightData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Bullet")
	FProjectileImpulse BulletImpulse;

	UPROPERTY(EditDefaultsOnly, Category = "Light")
	FProjectileImpulse LightImpulse;

	UPROPERTY(EditDefaultsOnly, Category = "Medium")
	FProjectileImpulse MediumImpulse;

	UPROPERTY(EditDefaultsOnly, Category = "Heavy")
	FProjectileImpulse HeavyImpulse;

public:

	FProjectileImpulse GetProjectileImpulse(EProjectileWeightClass WeightClass) const;
};
