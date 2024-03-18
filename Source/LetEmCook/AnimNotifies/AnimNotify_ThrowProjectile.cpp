// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCook/AnimNotifies/AnimNotify_ThrowProjectile.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"

FString UAnimNotify_ThrowProjectile::GetNotifyName_Implementation() const
{
	return TEXT("Throw Projectile");
}

void UAnimNotify_ThrowProjectile::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	ALetEmCookCharacter* Character = Cast<ALetEmCookCharacter>(MeshComp->GetOwner());
	if (Character != nullptr && Character->IsLocallyControlled())
	{
		Character->LaunchProjectile();
	}
}
