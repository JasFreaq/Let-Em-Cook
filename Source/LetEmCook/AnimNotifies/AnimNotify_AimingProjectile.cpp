// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCook/AnimNotifies/AnimNotify_AimingProjectile.h"

#include "LetEmCook/Characters/LetEmCookCharacter.h"

FString UAnimNotify_AimingProjectile::GetNotifyName_Implementation() const
{
	return TEXT("Aiming Projectile");
}

void UAnimNotify_AimingProjectile::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	ALetEmCookCharacter* Character = Cast<ALetEmCookCharacter>(MeshComp->GetOwner());
	if (Character != nullptr && Character->IsLocallyControlled())
	{
		Character->DisplayAimedProjectileTrajectory();
	}
}
