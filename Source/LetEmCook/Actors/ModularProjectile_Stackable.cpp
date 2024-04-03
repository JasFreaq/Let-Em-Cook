// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile_Stackable.h"
#include "Algo/Reverse.h"

void AModularProjectile_Stackable::BeginPlay()
{
	GetMesh()->GetChildrenComponents(true, MeshChildren);
	MeshChildren.Add(GetMesh());
	Algo::Reverse(MeshChildren);

	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		ItemRelativeLocations.Add(MeshChildren[i]->GetRelativeLocation());
	}

	Super::BeginPlay();
}

void AModularProjectile_Stackable::AdjustMeshView()
{
	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		MeshChildren[i]->SetRelativeLocation(ItemRelativeLocations[i]);
	}

	TArray<USceneComponent*> ChildrenStacked;
	ChildrenStacked.Add(GetMesh());
	FVector	TransposeVector = FVector::Zero();

	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		if (i > 0 && MeshChildren[i]->IsVisible())
		{
			FVector ChildLocation = MeshChildren[i]->GetComponentLocation();

			if (MeshChildren[i - 1] == ChildrenStacked[ChildrenStacked.Num() - 1])
			{
				ChildLocation += TransposeVector;
				MeshChildren[i]->SetWorldLocation(ChildLocation);

				ChildrenStacked.Add(MeshChildren[i]);

				continue;
			}

			FCollisionQueryParams CollisionParams;
			CollisionParams.AddIgnoredActor(this);

			UPrimitiveComponent* PrevChild = Cast<UPrimitiveComponent>(MeshChildren[i - 1]);
			FVector PrevChildLocation = PrevChild->GetComponentLocation();

			FVector	PrevImpact;
			FHitResult PrevHitResult;

			if (PrevChild->LineTraceComponent(PrevHitResult, ChildLocation, PrevChildLocation, CollisionParams))
			{
				PrevImpact = PrevHitResult.ImpactPoint;
			}

			UPrimitiveComponent* PrevVisibleChild = Cast<UPrimitiveComponent>(ChildrenStacked[ChildrenStacked.Num() - 1]);
			FVector PrevVisibleChildLocation = PrevVisibleChild->GetComponentLocation();

			FHitResult PrevVisibleHitResult;

			if (PrevVisibleChild->LineTraceComponent(PrevVisibleHitResult, ChildLocation, PrevVisibleChildLocation, CollisionParams))
			{
				FVector	VisibleImpact = PrevVisibleHitResult.ImpactPoint;
				TransposeVector = VisibleImpact - PrevImpact;

				ChildLocation += TransposeVector;
				MeshChildren[i]->SetWorldLocation(ChildLocation);

				ChildrenStacked.Add(MeshChildren[i]);
			}
		}
	}
}
