// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile.h"

#include "LetEmCook/ActorComponents/ProjectileSubobjectMeshComponent.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "Components/BoxComponent.h"

void AModularProjectile::BeginPlay()
{
	Super::BeginPlay();

	GetCollisionComp()->GetChildrenComponents(false, MeshSiblings);

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

void AModularProjectile::InitializeProjectile(TArray<UGameItemData*> GameItems)
{
	for (UGameItemData* GameItem : GameItems)
	{
		UpdateProjectile(GameItem);
	}
}

// Called on the Server when a collision is processed by ALetEmCookGameMode
void AModularProjectile::ProcessCollision(TObjectPtr<UGameItemData> GameItem)
{
	UpdateProjectile(GameItem);

	GetCollisionComp()->SetPhysicsLinearVelocity(FVector::ZeroVector);
	GetCollisionComp()->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

TArray<TObjectPtr<USceneComponent>> AModularProjectile::GetActiveChildren() const
{
	TArray<TObjectPtr<USceneComponent>> ActiveChildren;

	for (TObjectPtr<USceneComponent> SceneComponent : MeshChildren)
	{
		if (SceneComponent == GetMesh())
		{
			continue;
		}
		
		if (UProjectileSubobjectMeshComponent* Subobject = Cast<UProjectileSubobjectMeshComponent>(SceneComponent); Subobject != nullptr)
		{
			if (ItemsPossessed.Contains(Subobject->GetGameItem())) 
			{
				ActiveChildren.Add(Subobject);
			}
		}
		else
		{
			ActiveChildren.Add(SceneComponent);
		}
	}

	return ActiveChildren;
}

void AModularProjectile::UpdateProjectile(TObjectPtr<UGameItemData> GameItem)
{
	for (TObjectPtr<USceneComponent> SceneComponent : MeshChildren)
	{
		UProjectileSubobjectMeshComponent* Subobject = Cast<UProjectileSubobjectMeshComponent>(SceneComponent);

		if (Subobject != nullptr && Subobject->GetGameItem() == GameItem)
		{
			Multicast_ApplyUpdateEffects(Subobject);

			ItemsPossessed.Add(GameItem);

			break;
		}
	}
}

void AModularProjectile::Multicast_ApplyUpdateEffects_Implementation(UProjectileSubobjectMeshComponent* Subobject)
{
	Subobject->SetVisibility(true);
	ItemsPossessed.Add(Subobject->GetGameItem());

	AdjustProjectileState();
}