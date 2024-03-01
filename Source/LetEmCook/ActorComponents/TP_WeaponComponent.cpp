// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);

	CurrentProjectileIndex = 0;
}

void UTP_WeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	if (ProjectileClasses.Num() > 0)
	{
		CurrentProjectileClass = ProjectileClasses[0];
	}
}

void UTP_WeaponComponent::Fire()
{
	if (Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	SpawnProjectile();
}

void UTP_WeaponComponent::AttachWeapon(ALetEmCookCharacter* TargetCharacter)
{
	Character = TargetCharacter;
	if (Character == nullptr)
	{
		return;
	}

	// Attach the weapon to the First Person Character
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
	// switch bHasRifle so the animation blueprint can switch to another animation set
}

void UTP_WeaponComponent::AssignActionBindings()
{
	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::Fire);

			EnhancedInputComponent->BindAction(SelectPreviousAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::SetProjectileToPrevious);
			EnhancedInputComponent->BindAction(SelectNextAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::SetProjectileToNext);
		}
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (Character == nullptr)
	{
		return;
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->RemoveMappingContext(FireMappingContext);
		}
	}
}

void UTP_WeaponComponent::SpawnProjectile()
{
	if (Character->HasAuthority())
	{
		// Try and fire a projectile
		if (CurrentProjectileClass != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
				const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);

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

void UTP_WeaponComponent::SetProjectileToPrevious()
{
	if (Character->HasAuthority())
	{
		int rangeSize = ProjectileClasses.Num();
		int clampedValue = (CurrentProjectileIndex - 1) % rangeSize;
		if (clampedValue < 0)
		{
			clampedValue += rangeSize;
		}
		UE_LOG(LogTemp, Warning, TEXT("%i"), CurrentProjectileIndex);
		CurrentProjectileIndex = clampedValue;
		SetProjectile();
	}
	else
	{
		Server_SetProjectileToPrevious();
	}
}

void UTP_WeaponComponent::Server_SetProjectileToPrevious_Implementation()
{
	SetProjectileToPrevious();
}

void UTP_WeaponComponent::SetProjectileToNext()
{
	if (Character->HasAuthority())
	{
		int rangeSize = ProjectileClasses.Num();
		int clampedValue = (CurrentProjectileIndex + 1) % rangeSize;
		if (clampedValue < 0) 
		{
			clampedValue += rangeSize;
		}
		UE_LOG(LogTemp, Warning, TEXT("%i"), CurrentProjectileIndex);
		CurrentProjectileIndex = clampedValue;
		SetProjectile();
	}
	else
	{
		Server_SetProjectileToNext();
	}
}

void UTP_WeaponComponent::Server_SetProjectileToNext_Implementation()
{
	SetProjectileToNext();
}

void UTP_WeaponComponent::SetProjectile()
{
	CurrentProjectileClass = ProjectileClasses[CurrentProjectileIndex];
}

void UTP_WeaponComponent::Server_SpawnProjectile_Implementation()
{
	SpawnProjectile();
}

void UTP_WeaponComponent::Multicast_HandleProjectileSpawnEffects_Implementation()
{
	// Try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
	}

	// Try and play a firing animation if specified
	//if (FireAnimation != nullptr)
	//{
	//	// Get the animation object for the arms mesh
	//	UAnimInstance* AnimInstance = Character->GetMesh1P()->GetAnimInstance();
	//	if (AnimInstance != nullptr)
	//	{
	//		AnimInstance->Montage_Play(FireAnimation, 1.f);
	//	}
	//}
}

//virtual void UTP_WeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
//{
//	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//	
//	DOREPLIFETIME(UTP_WeaponComponent, CurrentProjectileIndex);
//	DOREPLIFETIME(UTP_WeaponComponent, CurrentProjectileClass);
//}
