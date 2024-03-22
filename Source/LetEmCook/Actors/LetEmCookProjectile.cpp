// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookProjectile.h"
#include "Components/BoxComponent.h"
#include "LetEmCook/GameModes/LetEmCookGameMode.h"
#include "GameplayTags/Classes/GameplayTagsManager.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"

ALetEmCookProjectile::ALetEmCookProjectile() 
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

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

	Tags.Add(FName("Interactable"));

	bReplicates = true;
	AActor::SetReplicateMovement(true);
}

void ALetEmCookProjectile::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &ALetEmCookProjectile::OnHit);
}

void ALetEmCookProjectile::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->Tags.Contains(FName("Interactable")))
	{
		SendCollisionEventToGameMode(SelfActor, OtherActor);
	}
	else
	{
		CollisionComp->ClearMoveIgnoreActors();
	}
}

void ALetEmCookProjectile::AddImpulseToProjectile(FVector ImpulseDirection) const
{
	CollisionComp->AddImpulse(ImpulseDirection * ProjectileInitialVelocity, NAME_None, true);
}

void ALetEmCookProjectile::SetProjectileEnabled(bool bIsEnabled)
{
	Multicast_SetProjectileEnabled(bIsEnabled);
}

void ALetEmCookProjectile::SendCollisionEventToGameMode(AActor* SelfActor, AActor* OtherActor)
{
	if (HasAuthority())
	{
		ALetEmCookGameMode* GameMode = GetWorld()->GetAuthGameMode<ALetEmCookGameMode>();
		if (GameMode != nullptr)
		{
			GameMode->RaiseCollisionEvent(SelfActor, OtherActor);
		}
	}
	else
	{
		Server_SendCollisionEventToGameMode(SelfActor, OtherActor);
	}
}

void ALetEmCookProjectile::Server_SendCollisionEventToGameMode_Implementation(AActor* SelfActor, AActor* OtherActor)
{
	SendCollisionEventToGameMode(SelfActor, OtherActor);
}

void ALetEmCookProjectile::Multicast_SetProjectileEnabled_Implementation(bool bIsEnabled)
{
	Mesh->SetVisibility(bIsEnabled);

	CollisionComp->SetSimulatePhysics(bIsEnabled);	
	SetActorEnableCollision(bIsEnabled);
}