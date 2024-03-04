// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameItemData.generated.h"

class ALetEmCookProjectile;
class AHeldProjectileMesh;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UGameItemData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FString AssetName;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ALetEmCookProjectile> Projectile;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHeldProjectileMesh> HeldMesh;

	UPROPERTY(EditDefaultsOnly)
	FVector MeshRepresentationAttachmentLocation;

	UPROPERTY(EditDefaultsOnly)
	FRotator MeshRepresentationAttachmentRotation;

public:

	FString GetAssetName() const { return AssetName; }

	TSubclassOf<ALetEmCookProjectile> GetProjectile() const { return Projectile; }

	TSubclassOf<AHeldProjectileMesh> GetHeldMesh() const { return HeldMesh; }

	FVector GetMeshRepresentationAttachmentLocation() const { return MeshRepresentationAttachmentLocation; }

	FRotator GetMeshRepresentationAttachmentRotation() const { return MeshRepresentationAttachmentRotation; }
};
