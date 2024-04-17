// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ProjectileSubobjectMeshComponent.generated.h"

class UGameItemData;

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class LETEMCOOK_API UProjectileSubobjectMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TObjectPtr<UGameItemData> GameItemData;

public:

	TObjectPtr<UGameItemData> GetGameItem() const { return GameItemData; }
};
