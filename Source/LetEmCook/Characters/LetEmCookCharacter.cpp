// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookCharacter.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "LetEmCook/Actors/HeldProjectileMesh.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
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
				APlayerController* PlayerController = Cast<APlayerController>(GetController());
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
					Projectile->GetProjectileMovement()->Activate();
				}
			}
		}
	}
	else
	{
		Server_LaunchProjectile();
	}
}

void ALetEmCookCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookCharacter, CurrentProjectileIndex);
}

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

void ALetEmCookCharacter::AimProjectile()
{
	if (GetController() == nullptr)
	{
		return;
	}

	if (HasAuthority())
	{
		Multicast_HandleProjectileAimedEffects();
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
		Multicast_HandleProjectileThrownEffects();
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

void ALetEmCookCharacter::SetProjectileToPrevious()
{
	if (HasAuthority())
	{
		int rangeSize = UtensilProjectiles.Num();
		int clampedValue = (CurrentProjectileIndex - 1) % rangeSize;
		if (clampedValue < 0)
		{
			clampedValue += rangeSize;
		}

		CurrentProjectileIndex = clampedValue;
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
		int rangeSize = UtensilProjectiles.Num();
		int clampedValue = (CurrentProjectileIndex + 1) % rangeSize;
		if (clampedValue < 0)
		{
			clampedValue += rangeSize;
		}

		CurrentProjectileIndex = clampedValue;
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
