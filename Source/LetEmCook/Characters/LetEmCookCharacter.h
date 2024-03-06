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

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	void LaunchProjectile();

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

	/** Aim a Utensil/Ingredient */
	void AimProjectile();

	/** Throw a Utensil/Ingredient */
	void ThrowProjectile();

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

	void SetProjectileToPrevious();

	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToPrevious();

	void SetProjectileToNext();

	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToNext();

	void SetProjectile();

	UFUNCTION()
	void OnCurrentProjectileIndexChanged();
	
	void HandleHandleHeldMeshVisibility();

	bool CanThrowProjectile(float* out_RealtimeSeconds = nullptr);
};