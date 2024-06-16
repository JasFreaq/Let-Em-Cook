// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemContainer.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "LetEmCook/ActorComponents/ItemOutlinerComponent.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"

// Sets default values
AItemContainer::AItemContainer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a box as a simple collision representation
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(100.f, 100.f, 40.f));
	CollisionComp->BodyInstance.SetCollisionProfileName("OverlapOnlyPawn");

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	ContainerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ContainerMesh"));
	ContainerMesh->SetupAttachment(CollisionComp);
	ContainerMesh->SetRelativeRotation(FRotator(0.f, 0.f, 90.f));
	ContainerMesh->SetRelativeLocation(FVector(0.f, 0.f, -40.f));
	ContainerMesh->BodyInstance.SetCollisionProfileName("BlockAll");
	ContainerMesh->CanCharacterStepUpOn = ECB_No;

	OutlinerComp = CreateDefaultSubobject<UItemOutlinerComponent>(TEXT("OutlinerComp"));
	OutlinerComp->SetupAttachment(CollisionComp);
	OutlinerComp->SetOutlineRoot(ContainerMesh);
	OutlinerComp->SetSphereRadius(450.f);
	OutlinerComp->BodyInstance.SetCollisionProfileName("OverlapOnlyPawnIgnoreVisibility");
	OutlinerComp->CanCharacterStepUpOn = ECB_No;

	Tags.Add("Interactable");

	bReplicates = true;
}

void AItemContainer::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentContainerAmount = ItemMeshes.Num();
}

// Called every frame
void AItemContainer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!CooldownTimestamps.IsEmpty())
	{
		const float ServerTimeSeconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
		const float SecondsElapsedSince = ServerTimeSeconds - *CooldownTimestamps.Peek();

		if (SecondsElapsedSince > ItemCooldown)
		{
			CurrentContainerAmount++;
			ItemMeshes[CurrentContainerAmount - 1]->SetVisibility(true);

			float _;
			CooldownTimestamps.Dequeue(_);
		}
	}
}

ALetEmCookProjectile* AItemContainer::GetProjectile()
{
	if (CurrentContainerAmount > 0)
	{
		if (UWorld* const World = GetWorld(); World != nullptr)
		{
			const float RealtimeSeconds = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
			CooldownTimestamps.Enqueue(RealtimeSeconds);

			ItemMeshes[CurrentContainerAmount - 1]->SetVisibility(false);
			CurrentContainerAmount--;

			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			ALetEmCookProjectile* Projectile = World->SpawnActor<ALetEmCookProjectile>(GameItemData->GetProjectile(), FVector::ZeroVector, FRotator::ZeroRotator, ActorSpawnParams);
			return Projectile;
		}

		UE_LOG(LogTemp, Error, TEXT("World is null"));
	}

	return nullptr;
}
