// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookProjectile.h"
#include "ModularProjectile.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AModularProjectile : public ALetEmCookProjectile
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Items)
	TArray<TObjectPtr<UGameItemData>> ChildGameItems;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UStaticMeshComponent>> ItemMeshes;

	TArray<float> ItemDistances;

protected:

	virtual void BeginPlay() override;
};
