// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableItem.h"
#include "Components/BoxComponent.h"

// Sets default values
AInteractableItem::AInteractableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(14.0f, 6.0f, 60.0f));
	CollisionComp->BodyInstance.SetCollisionProfileName("InteractableItem");
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

	bReplicates = true;
	AActor::SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void AInteractableItem::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AInteractableItem::OnHit);
}

void AInteractableItem::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		//Destroy();
	}
}