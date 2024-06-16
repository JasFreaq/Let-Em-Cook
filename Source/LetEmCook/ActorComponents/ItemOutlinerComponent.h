// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ItemOutlinerComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class LETEMCOOK_API UItemOutlinerComponent : public USphereComponent
{
	GENERATED_BODY()
	
	TObjectPtr<UStaticMeshComponent> OutlineRoot;

	TArray<TObjectPtr<UStaticMeshComponent>> OutlineChildren;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true", UseComponentPicker, AllowedClasses = "StaticMeshComponent"))
	int32 StencilValue = 252;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:

	void SetOutlineRoot(UStaticMeshComponent* Root) { OutlineRoot = Root; }
};
