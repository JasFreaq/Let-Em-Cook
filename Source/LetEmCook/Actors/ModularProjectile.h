// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LetEmCookProjectile.h"
#include "ModularProjectile.generated.h"

class UGameItemData;
class UProjectileSubobjectMeshComponent;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API AModularProjectile : public ALetEmCookProjectile
{
	GENERATED_BODY()

protected:

	TArray<TObjectPtr<USceneComponent>> MeshSiblings;

	TArray<TObjectPtr<USceneComponent>> MeshChildren;

private:

	TArray<TObjectPtr<UGameItemData>> ItemsPossessed;

public:

	void InitializeProjectile(TArray<UGameItemData*> GameItems);

	void ProcessCollision(TObjectPtr<UGameItemData> GameItem);

	TArray<TObjectPtr<USceneComponent>> GetActiveChildren() const;

	TArray<TObjectPtr<UGameItemData>> GetItemsPossessed() const { return ItemsPossessed; }

protected:

	virtual void BeginPlay() override;

	virtual void Multicast_SetProjectileEnabled_Implementation(bool bIsEnabled) override;

	virtual void AdjustProjectileState();

private:

	void UpdateProjectile(TObjectPtr<UGameItemData> GameItem);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ApplyUpdateEffects(UProjectileSubobjectMeshComponent* Subobject);
};
