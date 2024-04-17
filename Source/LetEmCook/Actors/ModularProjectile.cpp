// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile.h"

#include "LetEmCook/ActorComponents/ProjectileSubobjectMeshComponent.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "Components/BoxComponent.h"

void AModularProjectile::BeginPlay()
{
	Super::BeginPlay();

	GetMesh()->GetChildrenComponents(true, MeshChildren);
	MeshChildren.Add(GetMesh());

	for (TObjectPtr<USceneComponent> SceneComponent : MeshChildren)
	{
		if (UProjectileSubobjectMeshComponent* Subobject = Cast<UProjectileSubobjectMeshComponent>(SceneComponent); Subobject != nullptr)
		{
			Subobject->SetVisibility(false);
		}
	}
}

// Called on the Server when a collision is processed by ALetEmCookGameMode
void AModularProjectile::ProcessCollision(TObjectPtr<UGameItemData> GameItem)
{
	for (TObjectPtr<USceneComponent> SceneComponent : MeshChildren)
	{
		UProjectileSubobjectMeshComponent* Subobject = Cast<UProjectileSubobjectMeshComponent>(SceneComponent);

		if (Subobject != nullptr && Subobject->GetGameItem() == GameItem)
		{
			Multicast_ApplyCollisionEffects(Subobject);

			ItemsPossessed.Add(GameItem);

			break;
		}
	}

	GetCollisionComp()->SetPhysicsLinearVelocity(FVector::ZeroVector);
	GetCollisionComp()->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

void AModularProjectile::Multicast_ApplyCollisionEffects_Implementation(USceneComponent* Subobject)
{
	Subobject->SetVisibility(true);

	AdjustProjectileState();
}