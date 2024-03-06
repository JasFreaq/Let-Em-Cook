// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"
#include "LetEmCook/DataAssets/GameItemData.h"

ALetEmCookProjectile::ALetEmCookProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(14.0f, 6.0f, 60.0f));
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->SetSimulatePhysics(true);
	CollisionComp->OnComponentHit.AddDynamic(this, &ALetEmCookProjectile::OnHit);		// set up a notification for when this component hits something blocking
	
	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;
	
	// Set as root component
	RootComponent = CollisionComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionComp);
	Mesh->BodyInstance.SetCollisionProfileName("NoCollision");
	
	bReplicates = true;
	AActor::SetReplicateMovement(true);
}

void ALetEmCookProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		Destroy();
	}
}

void ALetEmCookProjectile::AddImpulseToProjectile(FVector ImpulseDirection)
{
	CollisionComp->AddImpulse(ImpulseDirection * ProjectileInitialVelocity);
}
