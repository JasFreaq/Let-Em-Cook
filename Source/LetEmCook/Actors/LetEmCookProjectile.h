// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LetEmCook/Interfaces/Interactable.h"
#include "LetEmCookProjectile.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UGameItemData;
class UProjectileWeightData;
class ALetEmCookCharacter;

UCLASS(config=Game)
class ALetEmCookProjectile : public AActor, public IInteractable
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
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> GameItemData;

	UPROPERTY(EditDefaultsOnly)
	float LifeTime = 5.f;

	UPROPERTY(EditDefaultsOnly)
	int NoDamageBufferTime = 1.f;

	TObjectPtr<UProjectileWeightData> WeightData;
	
	TObjectPtr<ALetEmCookCharacter> OwnerCharacter;

	FTimerHandle LifeTimeTimerHandle;

	bool bCanDamage = false;

	float LastMovementCheckTime = 0.f;

	FVector LastMovementCheckLocation = FVector::ZeroVector;

public:

	virtual void Tick(float DeltaSeconds) override;

	// Function to be called when hit
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	UBoxComponent* GetCollisionComp() const { return CollisionComp; }

	UStaticMeshComponent* GetMesh() const { return Mesh; }
	
	virtual TObjectPtr<UGameItemData> GetGameItem() const override { return GameItemData; }

	virtual ALetEmCookProjectile* GetProjectile() override { return this; }

	bool GetLaunchImpulseData(float& Impulse, bool& bLaunchStraight) const;

	TObjectPtr<ALetEmCookCharacter> GetOwnerCharacter() const { return OwnerCharacter; }

	void SetOwnerCharacter(TObjectPtr<ALetEmCookCharacter> Character) { OwnerCharacter = Character; }

	void AddImpulseToProjectile(FVector ImpulseDirection);

	void StartProjectileTimers();

	void StopProjectileTimers();

	void SetProjectileEnabled(bool bIsEnabled);

	bool CanDamage() const { return bCanDamage; }

protected:

	virtual void BeginPlay() override;

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetProjectileEnabled(bool bIsEnabled);

private:

	bool GetLaunchImpulseData(float& Impulse, float& AngularImpulse, bool& bLaunchStraight) const;

	void SendCollisionEventToGameMode(AActor* SelfActor, AActor* OtherActor);

	void OnLifeTimeExpired();
};