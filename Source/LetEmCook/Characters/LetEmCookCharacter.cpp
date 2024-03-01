// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookCharacter.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"


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

	if (ProjectileClasses.Num() > 0)
	{
		CurrentProjectileClass = ProjectileClasses[0];
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void ALetEmCookCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
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
		EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::Throw);

		//Changing selected utensil
		EnhancedInputComponent->BindAction(SelectPreviousAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::SetProjectileToPrevious);
		EnhancedInputComponent->BindAction(SelectNextAction, ETriggerEvent::Triggered, this, &ALetEmCookCharacter::SetProjectileToNext);
	}
}

void ALetEmCookCharacter::Throw()
{
	if (GetController() == nullptr)
	{
		return;
	}

	SpawnProjectile();
}

void ALetEmCookCharacter::SpawnProjectile()
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

					Multicast_HandleProjectileSpawnEffects();
				}
			}
		}
	}
	else
	{
		Server_SpawnProjectile();
	}
}

void ALetEmCookCharacter::SetProjectileToPrevious()
{
	if (HasAuthority())
	{
		int rangeSize = ProjectileClasses.Num();
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
		int rangeSize = ProjectileClasses.Num();
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
	CurrentProjectileClass = ProjectileClasses[CurrentProjectileIndex];
}

void ALetEmCookCharacter::Server_SpawnProjectile_Implementation()
{
	SpawnProjectile();
}

void ALetEmCookCharacter::Multicast_HandleProjectileSpawnEffects_Implementation()
{
	// Try and play the sound if specified
	if (ThrowSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ThrowSound, GetActorLocation());
	}

	// Try and play a throwing animation if specified
	if (ThrowAnimation != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Authority: %s"), HasAuthority() ? TEXT("Yes") : TEXT("No"));
		UAnimInstance* AnimInstance;
		if (HasAuthority())
		{
			AnimInstance = GetMesh1P()->GetAnimInstance();
		}
		else 
		{
			AnimInstance = GetMesh()->GetAnimInstance();
		}

		UE_LOG(LogTemp, Warning, TEXT("%s"), AnimInstance != nullptr ? TEXT("Not Null") : TEXT("Null"));
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(ThrowAnimation, 1.f);
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
