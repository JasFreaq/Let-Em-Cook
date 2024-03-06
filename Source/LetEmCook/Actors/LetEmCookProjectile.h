// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LetEmCookProjectile.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class UStaticMesh;

UCLASS(config=Game)
class ALetEmCookProjectile : public AActor
{
	GENERATED_BODY()

public:
	ALetEmCookProjectile();

private:

	/** Box collision component */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComp;

	/** Static mesh component */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly,  meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	float ProjectileInitialVelocity = 30000.f;

protected:
	/** Array of user data stored with the asset */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Instanced, Category = StaticMesh)
	TArray<TObjectPtr<UAssetUserData>> AssetUserData;

public:

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	UBoxComponent* GetCollisionComp() const { return CollisionComp; }

	UStaticMesh* GetStaticMesh() const { return Mesh->GetStaticMesh(); }

	void AddImpulseToProjectile(FVector ImpulseDirection);
};