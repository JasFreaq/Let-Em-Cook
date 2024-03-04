// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AimingProjectile.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "Aiming Projectile"))
class LETEMCOOK_API UAnimNotify_AimingProjectile : public UAnimNotify
{
	GENERATED_BODY()
public:

	// Begin UAnimNotify interface
	virtual FString GetNotifyName_Implementation() const override;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
