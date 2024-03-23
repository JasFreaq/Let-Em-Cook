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
class UHealthComponent;

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Damage, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UHealthComponent> HealthComponent;

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

	/** Aim Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> AimAction;

	/** Throw Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ThrowAction;

	/** Select Utensil Input Actions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> SelectPreviousAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> SelectNextAction;

	/** Pickup Input Action */
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

	/** Projectile's offset from the characters location */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	FVector ThrowOffset = FVector(150.f, 0.f, 0.f);

	UPROPERTY(EditDefaultsOnly, Category = Pickup)
	float RaycastDistance = 150.f;

	UPROPERTY(Replicated, ReplicatedUsing = OnCurrentProjectileIndexChanged)
	int CurrentProjectileIndex;

	TArray<AHeldProjectileMesh*> ProjectileRepresentationMeshes;

	TMap<TSubclassOf<ALetEmCookProjectile>, float> ProjectileCooldownMap;

	UPROPERTY(Replicated)
	TObjectPtr<AActor> CurrentlyOverlappedIngredient;

	UPROPERTY(Replicated, ReplicatedUsing = OnPickedUpIngredient)
	TObjectPtr<ALetEmCookProjectile> CurrentlyHeldIngredient;

	UPROPERTY()
	AHeldProjectileMesh* HeldIngredientRepresentationMesh;

public:
	
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	
	virtual void Tick(float DeltaTime) override;

	void LaunchProjectile();

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
		
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

	void PickupIngredient();
	
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void SetOverlappingInteractable(AActor* Actor);

	/** Launch the actual Utensil/Ingredient */
	UFUNCTION(Server, Reliable)
	void Server_LaunchProjectile();

	UFUNCTION(Server, Reliable)
	void Server_AimProjectile();

	UFUNCTION(Server, Reliable)
	void Server_ThrowProjectile();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleProjectileAimed();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleProjectileThrowing();

	void GetProjectileSpawnLocationAndRotation(bool bUseCameraRotation, FVector& SpawnLocation, FRotator& SpawnRotation) const;

	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToPrevious();
	
	UFUNCTION(Server, Reliable)
	void Server_SetProjectileToNext();
	
	UFUNCTION()
	void OnCurrentProjectileIndexChanged();
		
	void HandleHeldMeshVisibility(bool bHideAll = false);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HandleProjectileThrown(float Time);

	bool CanThrowProjectile(float* out_RealtimeSeconds = nullptr);

	UFUNCTION(Server, Reliable)
	void Server_SetOverlappingIngredient(AActor* Actor);

	UFUNCTION(Server, Reliable)
	void Server_PickupIngredient();

	UFUNCTION()
	void OnPickedUpIngredient();

	void DropHeldIngredient(bool bUseCameraRotation, bool bLaunch);

	UFUNCTION(Server, Reliable)
	void Server_TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};