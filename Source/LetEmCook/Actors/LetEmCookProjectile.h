// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LetEmCookProjectile.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class UStaticMesh;
class UGameItemData;

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
	float ProjectileInitialVelocity = 2400.f;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TObjectPtr<UGameItemData> GameItemData;

public:

	// Function to be called when hit
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	UBoxComponent* GetCollisionComp() const { return CollisionComp; }

	UStaticMesh* GetStaticMesh() const { return Mesh->GetStaticMesh(); }
	
	TObjectPtr<UGameItemData> GetGameItem() const { return GameItemData; }

	void AddImpulseToProjectile(FVector ImpulseDirection) const;

	void SetProjectileEnabled(bool bIsEnabled);

protected:

	virtual void BeginPlay() override;

private:

	void SendCollisionEventToGameMode(AActor* SelfActor, AActor* OtherActor);

	UFUNCTION(Server, Reliable)
	void Server_SendCollisionEventToGameMode(AActor* SelfActor, AActor* OtherActor);
	
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetProjectileEnabled(bool bIsEnabled);
};