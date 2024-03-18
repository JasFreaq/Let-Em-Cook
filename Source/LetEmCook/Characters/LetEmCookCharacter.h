// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "LetEmCookCharacter.generated.h"

class UInputComponent;
class UInputMappingContext;
class UInputAction;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;
class ALetEmCookProjectile;
class UGameItemData;
class AHeldProjectileMesh;
class UUserWidget;

UCLASS(config=Game)
class ALetEmCookCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:

	ALetEmCookCharacter();

private:

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FirstPersonCameraComponent;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> Mesh1P;

	/** AnimMontage Throw section name */
	UPROPERTY(EditDefaultsOnly, Category = Mesh)
	FName HandSocketName = FName("hand_rSocket");

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	/** Throw Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> AimAction;/** Throw Input Action */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ThrowAction;

	/** Select Utensil Input Actions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> SelectPreviousAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> SelectNextAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> PickupAction;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TArray<TObjectPtr<UGameItemData>> UtensilProjectiles;
	
	/** Sound to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TObjectPtr<USoundBase> ThrowSound;

	/** AnimMontage to play each time we throw */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TObjectPtr<UAnimMontage> ThrowAnimation;

	/** Speed of AnimMontage to play */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	float ThrowAnimationRate = 1.f;

	/** AnimMontage Throw section name */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	FName ThrowSectionName = FName("Throw");

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	FVector ThrowOffset;

	UPROPERTY(Replicated, ReplicatedUsing = OnCurrentProjectileIndexChanged)
	int CurrentProjectileIndex;
	
	TSubclassOf<ALetEmCookProjectile> CurrentProjectileClass;

	TArray<AHeldProjectileMesh*> ProjectileRepresentationMeshes;

	TMap<TSubclassOf<ALetEmCookProjectile>, float> ProjectileCooldownMap;

	UPROPERTY(Replicated)
	TObjectPtr<ALetEmCookProjectile> CurrentlyOverlappedIngredient;

	UPROPERTY(Replicated, ReplicatedUsing = OnPickedUpIngredient)
	TObjectPtr<ALetEmCookProjectile> CurrentlyHeldIngredient;

	UPROPERTY()
	AHeldProjectileMesh* HeldIngredientRepresentationMesh;

public:
	
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	void LaunchProjectile();

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	float GetProjectileCooldownRatio(TSubclassOf<ALetEmCookProjectile> ProjectileClass) const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:

	virtual void BeginPlay();

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

private:

	AHeldProjectileMesh* InstantiateRepresentationMesh(TSubclassOf<AHeldProjectileMesh> HeldMesh);

	/** Aim a Utensil/Ingredient */
	void AimProjectile();

	/** Throw a Utensil/Ingredient */
	void ThrowProjectile();

	void SetProjectileToPrevious();

	void SetProjectileToNext();

	void SetProjectile();

	void PickupIngredient();

	void SetOverlappingIngredient(AActor* Actor);

	/** Launch the actual Utensil/Ingredient */
	UFUNCTION(Server, Reliable)
	void Server_LaunchProjectile();

	UFUNCTION(Server, Reliable)
	void Server_AimProjectile();

	UFUNCTION(Server, Reliable)
	void Server_ThrowProjectile();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleProjectileAimedEffects();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleProjectileThrownEffects();
	
	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToPrevious();
	
	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToNext();
	
	UFUNCTION()
	void OnCurrentProjectileIndexChanged();
		
	void HandleHeldMeshVisibility(bool bHideAll = false);

	UFUNCTION(Client, Reliable)
	void Client_UpdateProjectileMap(TSubclassOf<ALetEmCookProjectile> ProjectileClass);

	bool CanThrowProjectile(float* out_RealtimeSeconds = nullptr);

	UFUNCTION(Server, Reliable)
	void Server_SetOverlappingIngredient(AActor* Actor);

	UFUNCTION(Server, Reliable)
	void Server_PickupIngredient();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleIngredientPickedEffects();

	UFUNCTION()
	void OnPickedUpIngredient();
};