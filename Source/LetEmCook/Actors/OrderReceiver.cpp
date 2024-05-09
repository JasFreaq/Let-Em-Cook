// Fill out your copyright notice in the Description page of Project Settings.


#include "OrderReceiver.h"

#include "LetEmCookProjectile.h"
#include "Components/BoxComponent.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"
#include "LetEmCook/GameModes/GameplayGameMode.h"

// Sets default values
AOrderReceiver::AOrderReceiver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(100.f, 100.f, 60.f));
	CollisionComp->BodyInstance.SetCollisionProfileName("BlockAll");
	CollisionComp->BodyInstance.SetInstanceNotifyRBCollision(true);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	ReceiverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReceiverMesh"));
	ReceiverMesh->SetupAttachment(CollisionComp);
	ReceiverMesh->SetRelativeRotation(FRotator(0.f, 0.f, 90.f));
	ReceiverMesh->SetRelativeLocation(FVector(0.f, 0.f, -60.f));
	ReceiverMesh->BodyInstance.SetCollisionProfileName("NoCollision");
	ReceiverMesh->CanCharacterStepUpOn = ECB_No;

	bReplicates = true;
}

void AOrderReceiver::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AOrderReceiver::OnHit);
}

void AOrderReceiver::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HasAuthority())
	{
		if (OtherActor->ActorHasTag("Projectile"))
		{
			if (ALetEmCookProjectile* Projectile = Cast<ALetEmCookProjectile>(OtherActor); Projectile != nullptr)
			{
				AGameplayGameMode* GameMode = GetWorld()->GetAuthGameMode<AGameplayGameMode>();
				GameMode->ReceiveOrders(Projectile);
			}
		}
	}
}
