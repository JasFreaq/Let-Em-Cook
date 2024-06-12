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
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/PlayerControllers/LetEmCookPlayerController.h"
#include "LetEmCook/Interfaces/Interactable.h"
#include "LetEmCook/ActorComponents/DamageComponent.h"
#include "LetEmCook/ActorComponents/HealthComponent.h"
#include "LetEmCook/Actors/ModularProjectile.h"


//////////////////////////////////////////////////////////////////////////
// ALetEmCookCharacter

ALetEmCookCharacter::ALetEmCookCharacter()
{	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(45.f, 96.0f);

	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, -0.f));
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -96.f));
	GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
	GetMesh()->CanCharacterStepUpOn = ECB_No;

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
	Mesh1P->SetRelativeRotation(FRotator(-9.562271f, -100.698138f, -39.471045f));
	Mesh1P->SetRelativeLocation(FVector(0.f, 0.f, -120.f));
	Mesh1P->CanCharacterStepUpOn = ECB_No;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	if (HealthComponent != nullptr && GetWorld() != nullptr)
	{
		HealthComponent->RegisterComponent();
	}

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

		if (IsLocallyControlled())
		{
			PlayerController->bShowMouseCursor = false;
		}
	}

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ALetEmCookCharacter::OnBeginOverlap);

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

	if (Controller != nullptr)
	{
		// Get the player's viewpoint
		FVector PlayerLocation;
		FRotator PlayerRotation;
		Controller->GetPlayerViewPoint(PlayerLocation, PlayerRotation);

		// Calculate the end point of the raycast
		FVector EndLocation = PlayerLocation + PlayerRotation.Vector() * RaycastDistance;
		
		// Perform the raycast
		FHitResult HitResult;
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(this); // Ignore the actor performing the raycast
		
		AActor* HitActor = nullptr;
		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, PlayerLocation, EndLocation, ECC_Visibility, CollisionParams);

		if (bHit)
		{
			// Handle hit
			HitActor = HitResult.GetActor();
			if (HitActor != nullptr)
			{
				if (HitActor->Tags.Contains(FName("Interactable")))
				{
					if (const IInteractable* OverlappingInteractable = Cast<IInteractable>(HitActor); OverlappingInteractable != nullptr)
					{
						if (OverlappingInteractable->GetGameItem() != nullptr)
						{
							if (ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller); PlayerController != nullptr)
							{
								PlayerController->ShowPickupWidget(OverlappingInteractable->GetGameItem()->GetAssetName());
							}
						}
						else
						{
							UE_LOG(LogTemp, Warning, TEXT("Overlapping %s does not have a GameItemData asset assigned."), *HitActor->GetName());
						}

						SetOverlappingInteractable(HitActor);
					}
				}
			}
		}
		
		if (HitActor == nullptr)
		{
			if (CurrentlyOverlappedIngredient != nullptr)
			{
				if (ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller); PlayerController != nullptr)
				{
					PlayerController->HidePickupWidget();
				}

				SetOverlappingInteractable(nullptr);
			}
		}
	}

	if (CurrentlyHeldIngredient == nullptr)
	{
		if (!ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->IsVisible())
		{
			const float Seconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
			const float SecondsElapsed = Seconds - ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()];

			if (SecondsElapsed > UtensilProjectiles[CurrentProjectileIndex]->GetProjectileCooldown())
			{
				ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->SetVisibility(true);
			}
		}
	}
	else
	{
		FRotator SpawnRotation;
		FVector SpawnLocation;
		GetProjectileSpawnLocationAndRotation(false, SpawnLocation, SpawnRotation);

		CurrentlyHeldIngredient->SetActorLocation(SpawnLocation, false, nullptr, ETeleportType::ResetPhysics);
		CurrentlyHeldIngredient->SetActorRotation(SpawnRotation, ETeleportType::ResetPhysics);
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
	if (HasAuthority())
	{
		if (OtherActor->Tags.Contains(FName("Projectile")))
		{
			const UDamageComponent* DamageComponent = OtherActor->FindComponentByClass<UDamageComponent>();
			if (DamageComponent != nullptr)
			{
				ALetEmCookProjectile* Projectile = Cast<ALetEmCookProjectile>(OtherActor);
				if (Projectile != nullptr && Projectile->CanDamage())
				{
					ALetEmCookCharacter* OwnerCharacter = Projectile->GetOwnerCharacter();
					if (OwnerCharacter != nullptr)
					{
						ALetEmCookPlayerController* OtherController = Cast<ALetEmCookPlayerController>(OwnerCharacter->GetController());
						ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller);
						
						if (OtherController != nullptr && PlayerController != nullptr)
						{
							if (OtherController->GetPlayerTeam() != PlayerController->GetPlayerTeam())
							{
								FDamageEvent DamageEvent;
								TakeDamage(DamageComponent->GetDamage(), DamageEvent, nullptr, OtherActor);
							}
						}
					}
				}
			}
		}
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
			DropHeldIngredient(true, true);	
		}
		else if (UtensilProjectiles[CurrentProjectileIndex]->GetProjectile() != nullptr)
		{
			if (UWorld* const World = GetWorld(); World != nullptr)
			{
				if (CanThrowProjectile())
				{
					FRotator SpawnRotation;
					FVector SpawnLocation;
					GetProjectileSpawnLocationAndRotation(true, SpawnLocation, SpawnRotation);

					//Set Spawn Collision Handling Override
					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

					// Spawn the projectile at the muzzle
					ALetEmCookProjectile* Projectile = World->SpawnActor<ALetEmCookProjectile>(UtensilProjectiles[CurrentProjectileIndex]->GetProjectile(), SpawnLocation, SpawnRotation, ActorSpawnParams);
					if (Projectile != nullptr)
					{
						Multicast_HandleProjectileThrown();

						Projectile->AddImpulseToProjectile(SpawnRotation.Vector());
						Projectile->StartProjectileTimers();
						Projectile->SetOwnerCharacter(this);
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
		const float Seconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
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

void ALetEmCookCharacter::Multicast_HandleGetHitEffects_Implementation()
{
	// Try and play the sound if specified
	if (GetHitSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, GetHitSound, GetActorLocation());
	}

	// Try and play a getting hit animation if specified
	if (GetHitAnimation != nullptr)
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
			AnimInstance->Montage_Play(GetHitAnimation, GetHitAnimationRate);
		}
	}
}

void ALetEmCookCharacter::Multicast_HandleDeathEffects_Implementation()
{
	// Try and play the sound if specified
	if (DeathSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, DeathSound, GetActorLocation());
	}

	// Try and play a death animation if specified
	if (DeathAnimation != nullptr)
	{
		if (IsLocallyControlled())
		{
			GetMesh1P()->SetVisibility(false);
		}

		GetMesh()->GetAnimInstance()->Montage_Play(DeathAnimation, DeathAnimationRate);		
	}

	SetActorEnableCollision(false);

	for (AHeldProjectileMesh* ProjectileMesh : ProjectileRepresentationMeshes)
	{
		ProjectileMesh->Destroy();
	}
}

void ALetEmCookCharacter::GetProjectileSpawnLocationAndRotation(bool bUseCameraRotation, FVector& SpawnLocation, FRotator& SpawnRotation) const
{
	const APlayerController* PlayerController = Cast<APlayerController>(GetController());

	FVector SpawnLocationBase;

	if (PlayerController != nullptr)
	{
		FVector ViewPointLocation;
		FRotator _;
		PlayerController->GetPlayerViewPoint(ViewPointLocation, _);
		SpawnLocationBase = ViewPointLocation;		

		SpawnRotation = bUseCameraRotation ?
			PlayerController->PlayerCameraManager->GetCameraRotation() : GetActorRotation();
	}
	else
	{
		SpawnLocationBase = GetActorLocation();
		SpawnRotation = GetActorRotation();
	}	

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnLocationBase: %s"), *SpawnLocationBase.ToString()));

	// ThrowOffset is in camera space, so transform it to world space before offsetting from the character location to find the final spawn position
	SpawnLocation = SpawnLocationBase + SpawnRotation.RotateVector(ThrowOffset);
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
				ProjectileRepresentationMeshes[i]->GetProjectileMesh()->SetVisibility(bHideAll ? false : CanThrowProjectile());
			}
			else
			{
				ProjectileRepresentationMeshes[i]->GetProjectileMesh()->SetVisibility(false);
			}
		}
	}
}

void ALetEmCookCharacter::Multicast_DestroyHeldMesh_Implementation()
{
	if (HeldIngredientRepresentationMesh != nullptr)
	{
		HandleHeldMeshVisibility();
		HeldIngredientRepresentationMesh->Destroy();
	}
}

void ALetEmCookCharacter::Multicast_HandleProjectileThrown_Implementation()
{
	const float RealtimeSeconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
	ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()] = RealtimeSeconds;

	ProjectileRepresentationMeshes[CurrentProjectileIndex]->GetProjectileMesh()->SetVisibility(false);
}

bool ALetEmCookCharacter::CanThrowProjectile()
{
	if (UtensilProjectiles[CurrentProjectileIndex]->GetProjectile() != nullptr)
	{
		const float RealtimeSeconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
		const float SecondsElapsedSinceLastThrow = RealtimeSeconds - ProjectileCooldownMap[UtensilProjectiles[CurrentProjectileIndex]->GetProjectile()];
		
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
			if (IInteractable* Interactable = Cast<IInteractable>(CurrentlyOverlappedIngredient); Interactable != nullptr)
			{
				if (ALetEmCookProjectile* ProjectileToHold = Interactable->GetProjectile(); ProjectileToHold != nullptr)
				{
					DropHeldIngredient(false, false);

					CurrentlyHeldIngredient = ProjectileToHold;
					CurrentlyOverlappedIngredient = nullptr;
					CurrentlyHeldIngredient->StopProjectileTimers();
					CurrentlyHeldIngredient->SetProjectileEnabled(false);
					CurrentlyHeldIngredient->SetOwnerCharacter(this);

					OnPickedUpIngredient();
				}
			}
		}
	}
	else
	{
		Server_PickupIngredient();
	}
}

void ALetEmCookCharacter::SetOverlappingInteractable(AActor* Actor)
{
	if (HasAuthority())
	{
		if (Actor != nullptr)
		{
			if (UKismetSystemLibrary::DoesImplementInterface(Actor, UInteractable::StaticClass()))
			{
				CurrentlyOverlappedIngredient = Actor;
			}
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
	SetOverlappingInteractable(Actor);
}

void ALetEmCookCharacter::OnPickedUpIngredient()
{
	if (CurrentlyHeldIngredient != nullptr)
	{
		HandleHeldMeshVisibility(true);

		HeldIngredientRepresentationMesh = InstantiateRepresentationMesh(CurrentlyHeldIngredient->GetGameItem()->GetHeldMesh());

		if (const AModularProjectile* ModularProjectile = Cast<AModularProjectile>(CurrentlyHeldIngredient); ModularProjectile != nullptr)
		{
			TArray<TObjectPtr<USceneComponent>> MeshChildren = ModularProjectile->GetActiveChildren();
			
			for (USceneComponent* MeshChild : MeshChildren)
			{
				const UStaticMeshComponent* ChildStaticMesh = Cast<UStaticMeshComponent>(MeshChild);

				UStaticMeshComponent* HeldChildStaticMesh = Cast<UStaticMeshComponent>(HeldIngredientRepresentationMesh->AddComponentByClass(
					UStaticMeshComponent::StaticClass(), true, FTransform(), true));

				HeldChildStaticMesh->AttachToComponent(HeldIngredientRepresentationMesh->GetProjectileMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale);
				HeldChildStaticMesh->SetRelativeLocation(MeshChild->GetRelativeLocation());
				HeldChildStaticMesh->SetRelativeRotation(MeshChild->GetRelativeRotation());
				HeldChildStaticMesh->SetRelativeScale3D(MeshChild->GetRelativeScale3D());

				HeldChildStaticMesh->SetStaticMesh(ChildStaticMesh->GetStaticMesh());

				HeldChildStaticMesh->RegisterComponent();
			}
		}

		HeldIngredientRepresentationMesh->GetProjectileMesh()->SetVisibility(true, true);
	}
}

void ALetEmCookCharacter::DropHeldIngredient(bool bUseCameraRotation, bool bLaunch)
{
	Multicast_DestroyHeldMesh();

	if (CurrentlyHeldIngredient != nullptr)
	{
		FRotator SpawnRotation;
		FVector SpawnLocation;
		GetProjectileSpawnLocationAndRotation(bUseCameraRotation, SpawnLocation, SpawnRotation);

		CurrentlyHeldIngredient->SetActorLocation(SpawnLocation, false, nullptr, ETeleportType::ResetPhysics);
		CurrentlyHeldIngredient->SetActorRotation(SpawnRotation, ETeleportType::ResetPhysics);
		CurrentlyHeldIngredient->SetProjectileEnabled(true);

		if (bLaunch)
		{
			CurrentlyHeldIngredient->AddImpulseToProjectile(SpawnRotation.Vector());
		}

		CurrentlyHeldIngredient = nullptr;
	}
}

//////////////////////////////////////////////////////////////////////////
// Health System

float ALetEmCookCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	HealthComponent->ApplyDamage(DamageAmount);

	if (HealthComponent->GetCurrentHealth() > 0.f)
	{
		Multicast_HandleGetHitEffects();
	}
	else
	{
		DropHeldIngredient(false, false);
		GetCharacterMovement()->DisableMovement();

		Multicast_HandleDeathEffects();

		ALetEmCookPlayerController* PlayerController = Cast<ALetEmCookPlayerController>(Controller);
		PlayerController->HandlePlayerDeath();
	}

	if (DamageCauser != nullptr)
	{
		DamageCauser->Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Damage Causer is null."));
	}

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}
