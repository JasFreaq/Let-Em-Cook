// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookCharacter.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "LetEmCook/Actors/HeldProjectileMesh.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "LetEmCook/DataAssets/GameItemData.h"


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

	//OnActorBeginOverlap.AddDynamic(this, &ALetEmCookCharacter::OnActorBeginOverlap);

	int ProjectileClassesSize = UtensilProjectiles.Num();
	if (ProjectileClassesSize > 0)
	{
		for (int i = 0; i < ProjectileClassesSize; i++)
		{
			const UGameItemData* GameItem = UtensilProjectiles[i];
			UWorld* const World = GetWorld();

			if (World != nullptr)
			{
				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				AHeldProjectileMesh* HeldMeshActor = World->SpawnActor<AHeldProjectileMesh>(GameItem->GetHeldMesh(), FVector::Zero(), FQuat::Identity.Rotator(), ActorSpawnParams);
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

					ProjectileRepresentationMeshes.Add(HeldMeshActor);
				}
			}
		}

		CurrentProjectileClass = UtensilProjectiles[0]->GetProjectile();
		ProjectileRepresentationMeshes[0]->GetProjectileMesh()->SetVisibility(true);
	}

	for (const TObjectPtr<UGameItemData> Utensil : UtensilProjectiles)
	{
		ProjectileCooldownMap.Add(Utensil->GetProjectile(), 0.f);
	}
}

void ALetEmCookCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookCharacter, CurrentProjectileIndex);
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
// Projectile Handling

void ALetEmCookCharacter::LaunchProjectile()
{
	if (HasAuthority())
	{
		// Try and fire a projectile
		if (CurrentProjectileClass != nullptr)
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
					const ALetEmCookProjectile* Projectile = World->SpawnActor<ALetEmCookProjectile>(CurrentProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
					if (Projectile != nullptr)
					{
						ProjectileCooldownMap[CurrentProjectileClass] = RealtimeSeconds;
						Client_UpdateProjectileMap(CurrentProjectileClass);

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
		if(CanThrowProjectile())
		{
			Multicast_HandleProjectileAimedEffects();
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
			Multicast_HandleProjectileThrownEffects();
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

void ALetEmCookCharacter::Multicast_HandleProjectileAimedEffects_Implementation()
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

void ALetEmCookCharacter::Multicast_HandleProjectileThrownEffects_Implementation()
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
	if (HasAuthority())
	{
		int RangeSize = UtensilProjectiles.Num();
		int ClampedValue = (CurrentProjectileIndex - 1) % RangeSize;
		if (ClampedValue < 0)
		{
			ClampedValue += RangeSize;
		}

		CurrentProjectileIndex = ClampedValue;
		SetProjectile();
	}
	else
	{
		Server_SetProjectileToPrevious();
	}
}

void ALetEmCookCharacter::Server_SetProjectileToPrevious_Implementation()
{
	SetProjectileToPrevious();
}

void ALetEmCookCharacter::SetProjectileToNext()
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
		SetProjectile();
	}
	else
	{
		Server_SetProjectileToNext();
	}
}

void ALetEmCookCharacter::Server_SetProjectileToNext_Implementation()
{
	SetProjectileToNext();
}

void ALetEmCookCharacter::SetProjectile()
{
	CurrentProjectileClass = UtensilProjectiles[CurrentProjectileIndex]->GetProjectile();

	HandleHandleHeldMeshVisibility();
}

void ALetEmCookCharacter::OnCurrentProjectileIndexChanged()
{
	HandleHandleHeldMeshVisibility();
}

void ALetEmCookCharacter::HandleHandleHeldMeshVisibility()
{
	const int ProjectileClassesSize = UtensilProjectiles.Num();
	if (ProjectileClassesSize > 0)
	{
		for (int i = 0; i < ProjectileClassesSize; i++)
		{
			ProjectileRepresentationMeshes[i]->GetProjectileMesh()->SetVisibility(i == CurrentProjectileIndex);
		}
	}
}

void ALetEmCookCharacter::Client_UpdateProjectileMap_Implementation(TSubclassOf<ALetEmCookProjectile> ProjectileClass)
{
	ProjectileCooldownMap[ProjectileClass] = UGameplayStatics::GetRealTimeSeconds(this);
}


bool ALetEmCookCharacter::CanThrowProjectile(float* out_RealtimeSeconds)
{
	if (CurrentProjectileClass != nullptr)
	{
		const float RealtimeSeconds = UGameplayStatics::GetRealTimeSeconds(this);
		const float SecondsElapsedSinceLastThrow = RealtimeSeconds - ProjectileCooldownMap[CurrentProjectileClass];

		// Store the current real-time seconds in the out parameter if provided
		if (out_RealtimeSeconds) 
		{
			*out_RealtimeSeconds = RealtimeSeconds;
		}

		return SecondsElapsedSinceLastThrow > UtensilProjectiles[CurrentProjectileIndex]->GetProjectileCooldown()
			|| ProjectileCooldownMap[CurrentProjectileClass] == 0.f;
	}

	return false;
}
