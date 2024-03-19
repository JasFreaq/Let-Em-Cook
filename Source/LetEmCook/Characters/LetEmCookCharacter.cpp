// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookCharacter.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "LetEmCook/Actors/HeldProjectileMesh.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/PlayerControllers/LetEmCookPlayerController.h"
#include "LetEmCook/ActorComponents/DamageComponent.h"
#include "LetEmCook/ActorComponents/HealthComponent.h"


//////////////////////////////////////////////////////////////////////////
// ALetEmCookCharacter

ALetEmCookCharacter::ALetEmCookCharacter()
{	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	Tags.Add(FName("Interactable"));

	bReplicates = true;
	SetReplicatingMovement(true);
}

//////////////////////////////////////////////////////////////////////////
// Lifecycle Functions

void ALetEmCookCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	
	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ALetEmCookCharacter::OnBeginOverlap);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &ALetEmCookCharacter::OnEndOverlap);

	const int ProjectileClassesSize = UtensilProjectiles.Num();
	if (ProjectileClassesSize > 0)
	{
		for (int i = 0; i < ProjectileClassesSize; i++)
		{
			const UGameItemData* GameItem = UtensilProjectiles[i];

			AHeldProjectileMesh* HeldMeshActor = InstantiateRepresentationMesh(GameItem->GetHeldMesh());
			ProjectileRepresentationMeshes.Add(HeldMeshActor);
		}
		
		CurrentProjectileIndex = 0;
		ProjectileRepresentationMeshes[0]->GetProjectileMesh()->SetVisibility(true);
	}

	for (const TObjectPtr<UGameItemData> Utensil : UtensilProjectiles)
	{
		ProjectileCooldownMap.Add(Utensil->GetProjectile(), 0.f);
	}
}

void ALetEmCookCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentlyHeldIngredient == nullptr)
	{
		if (!ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->IsVisible())
		{
			const float Seconds = UGameplayStatics::GetRealTimeSeconds(this);
			const float SecondsElapsed = Seconds - ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()];

			if (SecondsElapsed > UtensilProjectiles[CurrentProjectileIndex]->GetProjectileCooldown())
			{
				ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->SetVisibility(true);
			}
		}
	}
}

void ALetEmCookCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookCharacter, CurrentProjectileIndex);

	DOREPLIFETIME(ALetEmCookCharacter, CurrentlyOverlappedIngredient);
	DOREPLIFETIME(ALetEmCookCharacter, CurrentlyHeldIngredient);
}

//////////////////////////////////////////////////////////////////////////// Input

void ALetEmCookCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::Look);
	
		//Throwing
		EnhancedInputComponent->BindAction(AimAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::AimProjectile);
		EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::ThrowProjectile);

		//Changing selected utensil
		EnhancedInputComponent->BindAction(SelectPreviousAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::SetProjectileToPrevious);
		EnhancedInputComponent->BindAction(SelectNextAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::SetProjectileToNext);

		//Picking up ingredients
		EnhancedInputComponent->BindAction(PickupAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::PickupIngredient);
	}
}

//////////////////////////////////////////////////////////////////////////
// Locomotion

void ALetEmCookCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ALetEmCookCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

//////////////////////////////////////////////////////////////////////////
// Setup

AHeldProjectileMesh* ALetEmCookCharacter::InstantiateRepresentationMesh(TSubclassOf<AHeldProjectileMesh> HeldMesh)
{
	UWorld* const World = GetWorld();

	if (World == nullptr)
	{
		return nullptr;
	}

	//Set Spawn Collision Handling Override
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AHeldProjectileMesh* HeldMeshActor = World->SpawnActor<AHeldProjectileMesh>(HeldMesh, FVector::Zero(), FQuat::Identity.Rotator(), ActorSpawnParams);
	if (HeldMeshActor != nullptr)
	{
		HeldMeshActor->SetOwner(this);

		USceneComponent* HeldMeshRoot = HeldMeshActor->GetRootComponent();

		if (IsLocallyControlled())
		{
			HeldMeshRoot->AttachToComponent(Mesh1P, FAttachmentTransformRules::SnapToTargetNotIncludingScale, HandSocketName); // Attach to first person hand socket
			HeldMeshActor->GetProjectileMesh()->SetOnlyOwnerSee(true);
		}
		else
		{
			HeldMeshActor->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, HandSocketName); // Attach to third person hand socket
			HeldMeshActor->GetProjectileMesh()->SetOwnerNoSee(true);
		}

		HeldMeshActor->GetProjectileMesh()->SetVisibility(false);

		return HeldMeshActor;
	}

	return nullptr;
}

//////////////////////////////////////////////////////////////////////////
// Collision Handling

void ALetEmCookCharacter::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->Tags.Contains(FName("Interactable")))
	{
		const UDamageComponent* DamageComponent = OtherActor->FindComponentByClass<UDamageComponent>();
		if (DamageComponent != nullptr)
		{
			if (HasAuthority())
			{
				HealthComponent->ApplyDamage(DamageComponent->GetDamage());
			}
		}
		else
		{
			ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller);
			if (PlayerController != nullptr)
			{
				PlayerController->ShowPickupWidget();
			}

			SetOverlappingIngredient(OtherActor);
		}
	}
}

void ALetEmCookCharacter::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->Tags.Contains(FName("Interactable")))
	{
		ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller);
		if (PlayerController != nullptr)
		{
			PlayerController->HidePickupWidget();
		}

		SetOverlappingIngredient(nullptr);
	}
}

//////////////////////////////////////////////////////////////////////////
// Projectile Handling

void ALetEmCookCharacter::LaunchProjectile()
{
	if (HasAuthority())
	{
		// Try and fire a projectile
		if (CurrentlyHeldIngredient != nullptr)
		{
			const APlayerController* PlayerController = Cast<APlayerController>(GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			const FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(ThrowOffset);

			CurrentlyHeldIngredient->SetActorLocation(SpawnLocation, false, nullptr, ETeleportType::ResetPhysics);
			CurrentlyHeldIngredient->SetActorRotation(SpawnRotation, ETeleportType::ResetPhysics);
			CurrentlyHeldIngredient->SetProjectileEnabled(true);
			CurrentlyHeldIngredient->AddImpulseToProjectile(SpawnRotation.Vector());

			CurrentlyHeldIngredient = nullptr;
			OnPickedUpIngredient();
		}
		else if (UtensilProjectiles[CurrentProjectileIndex]->GetProjectile() != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				float RealtimeSeconds;
				if (CanThrowProjectile(&RealtimeSeconds))
				{
					//ALetEmCookGameMode* GameMode = Cast<ALetEmCookGameMode>(World->GetAuthGameMode());
					//if (GameMode != nullptr)
					//{
					//	ALetEmCookProjectile* Projectile = GameMode->GetProjectileFromPool(CurrentProjectileClass);
					//	UE_LOG(LogTemp, Warning, TEXT("Projectile: %s"), *CurrentProjectileClass->GetName());
					//	if (Projectile != nullptr)
					//	{
					//		ProjectileCooldownMap[CurrentProjectileClass] = RealtimeSeconds;

					//		// Find the camera rotation
					//		APlayerController* PlayerController = Cast<APlayerController>(GetController());
					//		const FRotator LaunchRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
					//		// ThrowOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
					//		const FVector LaunchLocation = GetActorLocation() + LaunchRotation.RotateVector(ThrowOffset);
					//		
					//		// Spawn the projectile at the muzzle
					//		Projectile->SetActorLocation(LaunchLocation, false, nullptr, ETeleportType::ResetPhysics);
					//		Projectile->SetActorRotation(LaunchRotation, ETeleportType::ResetPhysics);
					//		//Projectile->SetActorHiddenInGame(false);
					//		//Projectile->SetActorEnableCollision(true);
					//		//Projectile->GetCollisionComp()->SetSimulatePhysics(true);

					//		//// Set the projectile's initial velocity
					//		//Projectile->AddImpulseToProjectile(LaunchRotation.Vector());
					//	}
					//}

					const APlayerController* PlayerController = Cast<APlayerController>(GetController());
					const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
					// ThrowOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
					const FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(ThrowOffset);

					//Set Spawn Collision Handling Override
					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

					// Spawn the projectile at the muzzle
					const ALetEmCookProjectile* Projectile = World->SpawnActor<ALetEmCookProjectile>(UtensilProjectiles[CurrentProjectileIndex]->GetProjectile(), SpawnLocation, SpawnRotation, ActorSpawnParams);
					if (Projectile != nullptr)
					{
						Multicast_HandleProjectileThrown(RealtimeSeconds);

						Projectile->AddImpulseToProjectile(SpawnRotation.Vector());
					}
				}
			}
		}
	}
	else
	{
		Server_LaunchProjectile();
	}
}

float ALetEmCookCharacter::GetProjectileCooldownRatio(TSubclassOf<ALetEmCookProjectile> ProjectileClass) const
{
	if (ProjectileCooldownMap.Contains(ProjectileClass))
	{
		const float Seconds = UGameplayStatics::GetRealTimeSeconds(this);
		const float SecondsElapsed = Seconds - ProjectileCooldownMap[ProjectileClass];

		for (int i = 0; i < UtensilProjectiles.Num(); i++)
		{
			if (UtensilProjectiles[i]->GetProjectile() == ProjectileClass)
			{
				return FMath::Clamp(SecondsElapsed / UtensilProjectiles[i]->GetProjectileCooldown(), 0.f, 1.f);
			}
		}
	}

	return 0.f;
}

void ALetEmCookCharacter::AimProjectile()
{
	if (GetController() == nullptr)
	{
		return;
	}

	if (HasAuthority())
	{
		if (CanThrowProjectile())
		{
			Multicast_HandleProjectileAimed();
		}
	}
	else
	{
		Server_AimProjectile();
	}
}

void ALetEmCookCharacter::ThrowProjectile()
{
	if (GetController() == nullptr)
	{
		return;
	}

	if (HasAuthority())
	{
		if (CanThrowProjectile())
		{			
			Multicast_HandleProjectileThrowing();
		}
	}
	else
	{
		Server_ThrowProjectile();
	}
}

void ALetEmCookCharacter::Server_LaunchProjectile_Implementation()
{
	LaunchProjectile();
}

void ALetEmCookCharacter::Server_AimProjectile_Implementation()
{
	AimProjectile();
}

void ALetEmCookCharacter::Multicast_HandleProjectileAimed_Implementation()
{
	// Try and play a throwing animation if specified
	if (ThrowAnimation != nullptr)
	{
		UAnimInstance* AnimInstance;
		if (IsLocallyControlled())
		{
			AnimInstance = GetMesh1P()->GetAnimInstance();
		}
		else
		{
			AnimInstance = GetMesh()->GetAnimInstance();
		}

		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(ThrowAnimation, ThrowAnimationRate);
		}
	}
}

void ALetEmCookCharacter::Server_ThrowProjectile_Implementation()
{
	ThrowProjectile();
}

void ALetEmCookCharacter::Multicast_HandleProjectileThrowing_Implementation()
{
	// Try and play the sound if specified
	if (ThrowSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ThrowSound, GetActorLocation());
	}

	// Try and play a throwing animation if specified
	if (ThrowAnimation != nullptr)
	{
		UAnimInstance* AnimInstance;
		if (IsLocallyControlled())
		{
			AnimInstance = GetMesh1P()->GetAnimInstance();
		}
		else 
		{
			AnimInstance = GetMesh()->GetAnimInstance();
		}
		
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(ThrowAnimation, ThrowAnimationRate);
			AnimInstance->Montage_JumpToSection(ThrowSectionName, ThrowAnimation);
		}
	}
}

void ALetEmCookCharacter::SetProjectileToPrevious()
{
	if (CurrentlyHeldIngredient == nullptr)
	{
		if (HasAuthority())
		{
			int RangeSize = UtensilProjectiles.Num();
			int ClampedValue = (CurrentProjectileIndex - 1) % RangeSize;
			if (ClampedValue < 0)
			{
				ClampedValue += RangeSize;
			}

			CurrentProjectileIndex = ClampedValue;
			HandleHeldMeshVisibility();
		}
		else
		{
			Server_SetProjectileToPrevious();
		}
	}
}

void ALetEmCookCharacter::Server_SetProjectileToPrevious_Implementation()
{
	SetProjectileToPrevious();
}

void ALetEmCookCharacter::SetProjectileToNext()
{
	if (CurrentlyHeldIngredient == nullptr)
	{
		if (HasAuthority())
		{
			int RangeSize = UtensilProjectiles.Num();
			int ClampedValue = (CurrentProjectileIndex + 1) % RangeSize;
			if (ClampedValue < 0)
			{
				ClampedValue += RangeSize;
			}

			CurrentProjectileIndex = ClampedValue;
			HandleHeldMeshVisibility();
		}
		else
		{
			Server_SetProjectileToNext();
		}
	}
}

void ALetEmCookCharacter::Server_SetProjectileToNext_Implementation()
{
	SetProjectileToNext();
}

void ALetEmCookCharacter::OnCurrentProjectileIndexChanged()
{
	HandleHeldMeshVisibility();
}

void ALetEmCookCharacter::HandleHeldMeshVisibility(bool bHideAll)
{
	const int ProjectileClassesSize = UtensilProjectiles.Num();
	if (ProjectileClassesSize > 0)
	{
		for (int i = 0; i < ProjectileClassesSize; i++)
		{
			if (i == CurrentProjectileIndex)
			{
				UE_LOG(LogTemp, Warning, TEXT("CurrentProjectileIndex: %s"), bHideAll ? TEXT("True") : TEXT("False"));
				ProjectileRepresentationMeshes[i]->GetProjectileMesh()->SetVisibility(bHideAll ? false : CanThrowProjectile());
			}
			else
			{
				ProjectileRepresentationMeshes[i]->GetProjectileMesh()->SetVisibility(false);
			}
		}
	}
}

void ALetEmCookCharacter::Multicast_HandleProjectileThrown_Implementation(float Time)
{
	ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()] = Time;
	ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->SetVisibility(false);
}

bool ALetEmCookCharacter::CanThrowProjectile(float* out_RealtimeSeconds)
{
	if (UtensilProjectiles[CurrentProjectileIndex]->GetProjectile() != nullptr)
	{
		const float RealtimeSeconds = UGameplayStatics::GetRealTimeSeconds(this);
		const float SecondsElapsedSinceLastThrow = RealtimeSeconds - ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()];

		// Store the current real-time seconds in the out parameter if provided
		if (out_RealtimeSeconds) 
		{
			*out_RealtimeSeconds = RealtimeSeconds;
		}

		return SecondsElapsedSinceLastThrow > UtensilProjectiles[CurrentProjectileIndex]->GetProjectileCooldown()
			|| ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()] == 0.f;
	}

	return false;
}

//////////////////////////////////////////////////////////////////////////
// Pickup System

void ALetEmCookCharacter::PickupIngredient()
{
	if (HasAuthority())
	{
		if (CurrentlyOverlappedIngredient != nullptr)
		{
			CurrentlyHeldIngredient = CurrentlyOverlappedIngredient;
			CurrentlyOverlappedIngredient = nullptr;
			CurrentlyHeldIngredient->SetProjectileEnabled(false);

			OnPickedUpIngredient();
		}
	}
	else
	{
		Server_PickupIngredient();
	}
}

void ALetEmCookCharacter::SetOverlappingIngredient(AActor* Actor)
{
	if (HasAuthority())
	{
		if (Actor != nullptr)
		{
			CurrentlyOverlappedIngredient = Cast<ALetEmCookProjectile>(Actor);
		}
		else
		{
			CurrentlyOverlappedIngredient = nullptr;
		}
	}
	else
	{
		Server_SetOverlappingIngredient(Actor);
	}
}

void ALetEmCookCharacter::Server_PickupIngredient_Implementation()
{
	PickupIngredient();
}

void ALetEmCookCharacter::Server_SetOverlappingIngredient_Implementation(AActor* Actor)
{
	SetOverlappingIngredient(Actor);
}

void ALetEmCookCharacter::OnPickedUpIngredient()
{
	if (CurrentlyHeldIngredient != nullptr)
	{
		HandleHeldMeshVisibility(true);
	
		HeldIngredientRepresentationMesh = InstantiateRepresentationMesh(CurrentlyHeldIngredient->GetGameItem()->GetHeldMesh());
		HeldIngredientRepresentationMesh->GetProjectileMesh()->SetVisibility(true);
	}
	else if (HeldIngredientRepresentationMesh != nullptr)
	{
		HandleHeldMeshVisibility();
		HeldIngredientRepresentationMesh->Destroy();
	}
}

//////////////////////////////////////////////////////////////////////////
// Health System

void ALetEmCookCharacter::TakeDamage(float Damage)
{
	if (HasAuthority())
	{
		HealthComponent->ApplyDamage(Damage);
	}
	else
	{
		Server_TakeDamage(Damage);
	}
}

void ALetEmCookCharacter::Server_TakeDamage_Implementation(float Damage)
{
	TakeDamage(Damage);
}
