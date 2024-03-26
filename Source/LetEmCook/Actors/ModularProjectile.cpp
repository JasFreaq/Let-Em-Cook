// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile.h"
#include "Algo/Reverse.h"

void AModularProjectile::BeginPlay()
{
	Super::BeginPlay();

	TArray<USceneComponent*> MeshChildren;
	GetMesh()->GetChildrenComponents(true, MeshChildren);

	Algo::Reverse(MeshChildren);

	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		float ItemDistance = 0.0f;
		
		if (i > 0)
		{
			ItemDistance = MeshChildren[i]->GetRelativeLocation().Y - MeshChildren[i - 1]->GetRelativeLocation().Y;
		}
		else
		{
			ItemDistance = MeshChildren[i]->GetRelativeLocation().Y;
		}

		ItemDistances.Add(ItemDistance);
	}

	// Setup
	int ItemCounter = 0;
	TArray<USceneComponent*> ChildrenStacked;
	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		USceneComponent* Child = MeshChildren[i];

		if (i > 0)
		{
			if (Child->IsVisible())
			{
				FVector ChildRelativeLocation = Child->GetRelativeLocation();
				FVector PrevChildLocation = ChildrenStacked.Num() > 0 ? ChildrenStacked[ItemCounter - 1]->GetRelativeLocation() : FVector::ZeroVector;
				float NewYLocation = PrevChildLocation.Y + ItemDistances[i];

				FVector PrevChildBounds = MeshChildren[i - 1]->Bounds.BoxExtent;
				FVector ChildBounds = ChildrenStacked.Num() > 0 ? ChildrenStacked[ItemCounter - 1]->Bounds.BoxExtent : FVector::ZeroVector;

				NewYLocation += PrevChildBounds.Y - ChildBounds.Y;

				UE_LOG(LogTemp, Warning, TEXT("Name: %s, Old: %f, New; %f, Dist: %f, Counter: %d"), *Child->GetName(), ChildRelativeLocation.Y, NewYLocation, ItemDistances[ItemCounter], ItemCounter);
				ChildRelativeLocation.Y = NewYLocation;

				Child->SetRelativeLocation(ChildRelativeLocation);

				ChildrenStacked.Add(Child);
				ItemCounter++;
			}
		}
		else
		{
			if (Child->IsVisible())
			{
				ChildrenStacked.Add(Child);
				ItemCounter++;
			}
		}
	}
}
