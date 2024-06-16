// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookProjectile.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTags/Classes/GameplayTagsManager.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "LetEmCook/ActorComponents/ItemOutlinerComponent.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/DataAssets/ProjectileWeightData.h"
#include "LetEmCook/GameModes/GameplayGameMode.h"

ALetEmCookProjectile::ALetEmCookProjectile() 
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a box as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(14.0f, 6.0f, 60.0f));
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->SetSimulatePhysics(true);
	CollisionComp->BodyInstance.SetInstanceNotifyRBCollision(true);
	
	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;
	
	// Set as root component
	RootComponent = CollisionComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionComp);
	Mesh->BodyInstance.SetCollisionProfileName("NoCollision");
	Mesh->CanCharacterStepUpOn = ECB_No;

	OutlinerComp = CreateDefaultSubobject<UItemOutlinerComponent>(TEXT("OutlinerComp"));
	OutlinerComp->SetupAttachment(CollisionComp);
	OutlinerComp->SetOutlineRoot(Mesh);
	OutlinerComp->SetSphereRadius(300.f);
	OutlinerComp->BodyInstance.SetCollisionProfileName("OverlapOnlyPawnIgnoreVisibility");
	OutlinerComp->CanCharacterStepUpOn = ECB_No;

	static ConstructorHelpers::FObjectFinder<UProjectileWeightData> WeightDataFinder(TEXT("/Game/_Game/DataAssets/ProjectileWeightData"));
	if (WeightDataFinder.Succeeded())
	{
		WeightData = WeightDataFinder.Object;
	}

	Tags.Add(FName("Interactable"));
	Tags.Add(FName("Projectile"));

	bReplicates = true;
	AActor::SetReplicateMovement(true);
}

void ALetEmCookProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorHit.AddDynamic(this, &ALetEmCookProjectile::OnHit);
}

void ALetEmCookProjectile::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (HasAuthority())
	{
		const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
		if (CurrentTime - LastMovementCheckTime > NoDamageBufferTime && bCanDamage)
		{
			FVector CurrentLocation = GetActorLocation();

			if (CurrentLocation.Equals(LastMovementCheckLocation, 1.0f))
			{
				bCanDamage = false;
			}

			LastMovementCheckLocation = CurrentLocation;
			LastMovementCheckTime = CurrentTime;		
		}
	}
}

void ALetEmCookProjectile::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HasAuthority())
	{
		if (OtherActor->Tags.Contains(FName("Projectile")))
		{
			SendCollisionEventToGameMode(SelfActor, OtherActor);
		}
		else
		{
			if (!CollisionComp->IsGravityEnabled())
			{
				CollisionComp->SetEnableGravity(true);
			}

			CollisionComp->ClearMoveIgnoreActors();
		}
	}
}

bool ALetEmCookProjectile::GetLaunchImpulseData(float& Impulse, bool& bLaunchStraight) const
{
	float _;
	return GetLaunchImpulseData(Impulse, _, bLaunchStraight);
}

bool ALetEmCookProjectile::GetLaunchImpulseData(float& Impulse, float& AngularImpulse, bool& bLaunchStraight) const
{
	if (WeightData != nullptr)
	{
		EProjectileWeightClass WeightClass = GameItemData->GetWeightClass();
		FProjectileImpulse ImpulseData = WeightData->GetProjectileImpulse(WeightClass);

		Impulse =  ImpulseData.Impulse;
		AngularImpulse = ImpulseData.AngularImpulse;
		bLaunchStraight = WeightClass == EProjectileWeightClass::Bullet;

		return true;
	}

	UE_LOG(LogTemp, Error, TEXT("Missing ProjectileWeightData in %s"), *GetName());
	return false;
}

void ALetEmCookProjectile::AddImpulseToProjectile(FVector ImpulseDirection)
{
	if (HasAuthority())
	{
		float Impulse; 
		float AngularImpulse;
		bool bLaunchStraight;
		GetLaunchImpulseData(Impulse, AngularImpulse, bLaunchStraight);

		if (bLaunchStraight)
		{
			CollisionComp->SetEnableGravity(false);
		}

		CollisionComp->AddImpulse(ImpulseDirection * Impulse, NAME_None, true);

		FVector LocalXAxis = GetTransform().GetRotation().GetRightVector();
		CollisionComp->AddAngularImpulseInDegrees(LocalXAxis * AngularImpulse, NAME_None, true);
	}
}

void ALetEmCookProjectile::StartProjectileTimers()
{
	if (HasAuthority())
	{
		bCanDamage = true;
		LastMovementCheckLocation = GetActorLocation();
		LastMovementCheckTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

		if (GameItemData != nullptr)
		{
			if (GameItemData->GetProjectileType() == EProjectileType::Utensil)
			{
				GetWorld()->GetTimerManager().SetTimer(LifeTimeTimerHandle, this, &ALetEmCookProjectile::OnLifeTimeExpired, LifeTime);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Missing GameItemData in %s"), *GetName());
		}
	}
}

void ALetEmCookProjectile::StopProjectileTimers()
{
	if (HasAuthority())
	{
		if (GameItemData != nullptr)
		{
			if (GetWorld()->GetTimerManager().IsTimerActive(LifeTimeTimerHandle))
			{
				GetWorld()->GetTimerManager().ClearTimer(LifeTimeTimerHandle);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Missing GameItemData in %s"), *GetName());
		}
	}
}

void ALetEmCookProjectile::SetProjectileEnabled(bool bIsEnabled)
{
	Multicast_SetProjectileEnabled(bIsEnabled);
}

void ALetEmCookProjectile::SendCollisionEventToGameMode(AActor* SelfActor, AActor* OtherActor)
{
	ALetEmCookProjectile* OtherProjectile = Cast<ALetEmCookProjectile>(OtherActor);
	if (OtherProjectile != nullptr)
	{
		AGameplayGameMode* GameMode = GetWorld()->GetAuthGameMode<AGameplayGameMode>();
		if (GameMode != nullptr)
		{
			GameMode->RaiseCollisionEvent(this, OtherProjectile);
		}
	}
}

void ALetEmCookProjectile::Multicast_SetProjectileEnabled_Implementation(bool bIsEnabled)
{
	RootComponent->SetVisibility(bIsEnabled, true);

	CollisionComp->SetSimulatePhysics(bIsEnabled);	
	SetActorEnableCollision(bIsEnabled);
}

void ALetEmCookProjectile::OnLifeTimeExpired()
{
	Destroy();
}