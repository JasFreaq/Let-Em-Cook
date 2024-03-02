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

UCLASS(config=Game)
class ALetEmCookCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:

	ALetEmCookCharacter();

private:

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Throw Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AimAction;/** Throw Input Action */

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;

	/** Select Utensil Input Actions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SelectPreviousAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SelectNextAction;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TArray<TSubclassOf<ALetEmCookProjectile>> ProjectileClasses;

	/** Sound to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	USoundBase* ThrowSound;

	/** AnimMontage to play each time we throw */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	UAnimMontage* ThrowAnimation;

	/** Speed of AnimMontage to play */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	float ThrowAnimationRate = 1.f;

	/** Speed of AnimMontage to play */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	FName ThrowSectionName = FName("Throw");

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	FVector ThrowOffset;

	int CurrentProjectileIndex;

	TSubclassOf<ALetEmCookProjectile> CurrentProjectileClass;

public:

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	void LaunchProjectile();

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
};