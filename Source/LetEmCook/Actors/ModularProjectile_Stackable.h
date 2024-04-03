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

	UPROPERTY(EditDefaultsOnly, Category = Items)
	TArray<TObjectPtr<UGameItemData>> ChildGameItems;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UStaticMeshComponent>> ItemMeshes;

	TArray<TObjectPtr<USceneComponent>> MeshChildren;

	TArray<FVector> ItemRelativeLocations;

protected:

	virtual void BeginPlay() override;

	virtual void AdjustMeshView() override;
};
