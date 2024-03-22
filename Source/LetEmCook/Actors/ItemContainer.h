// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LetEmCook/Interfaces/Interactable.h"
#include "ItemContainer.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UGameItemData;

UCLASS()
class LETEMCOOK_API AItemContainer : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemContainer();

private:
	/** Box collision component */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComp;

	/** Static mesh component */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> ContainerMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UStaticMeshComponent>> ItemMeshes;
	
	UPROPERTY(EditDefaultsOnly, Category = Items)
	TObjectPtr<UGameItemData> GameItemData;

	UPROPERTY(EditDefaultsOnly, Category = Items)
	float ItemCooldown = 20.f;

	int ContainerCapacity;

	TQueue<float> CooldownTimestamps;

	int CurrentContainerAmount;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaSeconds) override;

	virtual TObjectPtr<UGameItemData> GetGameItem() const override { return GameItemData; }

	virtual ALetEmCookProjectile* GetProjectile() override;
};
