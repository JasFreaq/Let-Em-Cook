// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LetEmCook/Interfaces/Interactable.h"
#include "ItemTransmuter.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UTransmuteData;
class AHeldProjectileMesh;

UCLASS()
class LETEMCOOK_API AItemTransmuter : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemTransmuter();

private:
	/** Box collision component */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> CollisionComp;

	/** Static mesh component */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> TransmuterMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = Interaction)
	FName MeshSocketToAttach = FName("BaseSocket");

	UPROPERTY(EditDefaultsOnly, Category = Interaction)
	TArray<TObjectPtr<UTransmuteData>> Transmutations;

	UPROPERTY(Replicated)
	TObjectPtr<ALetEmCookProjectile> CurrentlyProcessingItem;

	TObjectPtr<UTransmuteData> CurrentTransmutation;

	TObjectPtr<UStaticMeshComponent> ItemMesh;

	float CurrentProcessStartTime = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function to be called when hit
	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	virtual TObjectPtr<UGameItemData> GetGameItem() const override;

	virtual ALetEmCookProjectile* GetProjectile() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_InstantiateProjectileMeshRepresentation(ALetEmCookProjectile* Projectile);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UpdateProjectileMeshRepresentation(ALetEmCookProjectile* Projectile);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyProjectileMeshRepresentation();
};
