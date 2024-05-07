// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookProjectile.h"
#include "ModularProjectile.generated.h"

class UGameItemData;

/**
 * 
 */
UCLASS(Abstract)
class LETEMCOOK_API AModularProjectile : public ALetEmCookProjectile
{
	GENERATED_BODY()

protected:

	TArray<TObjectPtr<USceneComponent>> MeshSiblings;

	TArray<TObjectPtr<USceneComponent>> MeshChildren;

private:

	TArray<TObjectPtr<UGameItemData>> ItemsPossessed;

public:

	void ProcessCollision(TObjectPtr<UGameItemData> GameItem);

protected:

	virtual void BeginPlay() override;

	virtual void AdjustProjectileState() PURE_VIRTUAL(AModularProjectile::AdjustProjectileState, );

private:

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ApplyCollisionEffects(USceneComponent* Subobject);
};
