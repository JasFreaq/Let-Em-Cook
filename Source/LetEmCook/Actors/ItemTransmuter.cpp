// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemTransmuter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameStateBase.h"
#include "LetEmCook/Actors/LetEmCookProjectile.h"
#include "LetEmCook/DataAssets/GameItemData.h"
#include "LetEmCook/DataAssets/TransmuteData.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AItemTransmuter::AItemTransmuter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(100.f, 100.f, 60.f));
	CollisionComp->BodyInstance.SetCollisionProfileName("BlockAll");
	CollisionComp->BodyInstance.SetInstanceNotifyRBCollision(true);

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	TransmuterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TransmuterMesh"));
	TransmuterMesh->SetupAttachment(CollisionComp);
	TransmuterMesh->SetRelativeRotation(FRotator(0.f, 0.f, 90.f));
	TransmuterMesh->SetRelativeLocation(FVector(0.f, 0.f, -60.f));
	TransmuterMesh->BodyInstance.SetCollisionProfileName("NoCollision");
	TransmuterMesh->CanCharacterStepUpOn = ECB_No;

	Tags.Add(FName("Interactable"));

	bReplicates = true;
}

// Called when the game starts or when spawned
void AItemTransmuter::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AItemTransmuter::OnHit);
}

// Called every frame
void AItemTransmuter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority())
	{
		if (CurrentlyProcessingItem != nullptr)
		{
			const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

			if (CurrentTime - CurrentProcessStartTime >= CurrentTransmutation->GetTransmuteTime())
			{
				ALetEmCookProjectile* ProcessedItem = nullptr;
				if (CurrentlyProcessingItem->GetGameItem() == CurrentTransmutation->GetSourceItem())
				{
					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
					
					ProcessedItem = GetWorld()->SpawnActor<ALetEmCookProjectile>(CurrentTransmutation->GetResultItem()->GetProjectile(), FVector::ZeroVector, FRotator::ZeroRotator, ActorSpawnParams);
				}
				else if (CurrentlyProcessingItem->GetGameItem() == CurrentTransmutation->GetResultItem())
				{
					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

					ProcessedItem = GetWorld()->SpawnActor<ALetEmCookProjectile>(CurrentTransmutation->GetTrashItem()->GetProjectile(), FVector::ZeroVector, FRotator::ZeroRotator, ActorSpawnParams);
				}

				if (ProcessedItem != nullptr)
				{
					ProcessedItem->SetProjectileEnabled(false);
					Multicast_UpdateProjectileMeshRepresentation(ProcessedItem);

					CurrentlyProcessingItem->Destroy();
					CurrentlyProcessingItem = ProcessedItem;

					CurrentProcessStartTime = CurrentTime;
				}
			}
		}
	}
}

void AItemTransmuter::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (HasAuthority())
	{
		if (OtherActor->ActorHasTag("Interactable"))
		{
			if (ALetEmCookProjectile* Projectile = Cast<ALetEmCookProjectile>(OtherActor); Projectile != nullptr)
			{
				for (TObjectPtr<UTransmuteData> Transmutation : Transmutations)
				{
					if (Projectile->GetGameItem() == Transmutation->GetSourceItem())
					{
						Projectile->SetProjectileEnabled(false);
						Multicast_InstantiateProjectileMeshRepresentation(Projectile);

						CurrentlyProcessingItem = Projectile;
						CurrentTransmutation = Transmutation;
						
						CurrentProcessStartTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

						break;
					}
				}
			}
		}
	}
}

TObjectPtr<UGameItemData> AItemTransmuter::GetGameItem() const
{
	if (CurrentlyProcessingItem != nullptr)
	{
		return CurrentlyProcessingItem->GetGameItem();
	}

	return nullptr;
}

ALetEmCookProjectile* AItemTransmuter::GetProjectile()
{
	if (CurrentlyProcessingItem != nullptr)
	{
		ALetEmCookProjectile* CurrentProjectile = CurrentlyProcessingItem;
		CurrentlyProcessingItem = nullptr;
		CurrentTransmutation = nullptr;

		Multicast_DestroyProjectileMeshRepresentation();

		return CurrentProjectile;
	}

	return nullptr;
}

bool AItemTransmuter::IsCurrentlyTransmuting() const
{
	return CurrentlyProcessingItem != nullptr;
}

float AItemTransmuter::GetProcessTimeRemainingRatio() const
{
	if (CurrentlyProcessingItem != nullptr)
	{
		const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();

		const float TimeRemainingRatio = (CurrentTime - CurrentProcessStartTime) / CurrentTransmutation->GetTransmuteTime();

		//UE_LOG(LogTemp, Warning, TEXT("Current Time: %f, Current Process Start Time: %f, Time Remaining Ratio: %f"), CurrentTime, CurrentProcessStartTime, TimeRemainingRatio);

		return TimeRemainingRatio;
	}

	//UE_LOG(LogTemp, Warning, TEXT("No item is currently being processed!"));

	return 0.f;
}

void AItemTransmuter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AItemTransmuter, CurrentlyProcessingItem);
	DOREPLIFETIME(AItemTransmuter, CurrentTransmutation);
	DOREPLIFETIME(AItemTransmuter, CurrentProcessStartTime);
}

void AItemTransmuter::Multicast_InstantiateProjectileMeshRepresentation_Implementation(ALetEmCookProjectile* Projectile)
{
	ItemMesh = NewObject<UStaticMeshComponent>(this);
	if (ItemMesh != nullptr)
	{
		TArray<USceneComponent*> ProjectileChildren;
		Projectile->GetMesh()->GetChildrenComponents(true, ProjectileChildren);

		ItemMesh->RegisterComponent();

		ItemMesh->SetStaticMesh(Projectile->GetMesh()->GetStaticMesh());
		ItemMesh->AttachToComponent(TransmuterMesh, FAttachmentTransformRules::KeepRelativeTransform, MeshSocketToAttach);

		for (USceneComponent* Child : ProjectileChildren)
		{
			UStaticMeshComponent* NewChild = NewObject<UStaticMeshComponent>(this);

			NewChild->RegisterComponent();

			NewChild->SetStaticMesh(Cast<UStaticMeshComponent>(Child)->GetStaticMesh());
			NewChild->SetRelativeRotation(Child->GetRelativeRotation());
			NewChild->SetRelativeLocation(Child->GetRelativeLocation());
			NewChild->AttachToComponent(ItemMesh, FAttachmentTransformRules::KeepRelativeTransform);
		}
	}
}

void AItemTransmuter::Multicast_UpdateProjectileMeshRepresentation_Implementation(ALetEmCookProjectile* Projectile)
{
	if (ItemMesh != nullptr)
	{
		TArray<USceneComponent*> MeshChildren;
		ItemMesh->GetChildrenComponents(true, MeshChildren);

		TArray<USceneComponent*> ProjectileChildren;
		Projectile->GetMesh()->GetChildrenComponents(true, ProjectileChildren);
		
		for	(int i = 0; i < ProjectileChildren.Num(); i++)
		{
			UStaticMeshComponent* Child = Cast<UStaticMeshComponent>(MeshChildren[i]);
			Child->SetStaticMesh(Cast<UStaticMeshComponent>(ProjectileChildren[i])->GetStaticMesh());
		}
	}
}

void AItemTransmuter::Multicast_DestroyProjectileMeshRepresentation_Implementation()
{
	if (ItemMesh != nullptr)
	{
		TArray<USceneComponent*> MeshChildren;
		ItemMesh->GetChildrenComponents(true, MeshChildren);

		for (USceneComponent* Child : MeshChildren)
		{
			Child->DestroyComponent();
		}

		ItemMesh->DestroyComponent();
		ItemMesh = nullptr;
	}
}