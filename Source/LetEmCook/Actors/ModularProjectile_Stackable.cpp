// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile_Stackable.h"
#include "Algo/Reverse.h"
#include "Components/BoxComponent.h"

void AModularProjectile_Stackable::BeginPlay()
{
	Super::BeginPlay();
	
	Algo::Reverse(MeshChildren);

	for (int i = 0; i < MeshChildren.Num(); i++)
	{
		ItemRelativeLocations.Add(MeshChildren[i]->GetRelativeLocation());
	}

	AdjustProjectileState();
}

void AModularProjectile_Stackable::AdjustProjectileState()
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

	/// Collider Adjustments
	
	FVector TopLocation = MeshChildren[MeshChildren.Num() - 1]->GetComponentLocation();
	FVector BaseLocation = GetMesh()->GetComponentLocation();

	FVector OrientationVector = BaseLocation - TopLocation;
	OrientationVector.Normalize();

	FVector BaseCastLocation = BaseLocation + OrientationVector * 100.0f;
	FVector TopCastLocation = TopLocation - OrientationVector * 100.0f;

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	FHitResult BaseHitResult;
	FVector BaseImpact;
	if (GetMesh()->LineTraceComponent(BaseHitResult, BaseLocation, BaseCastLocation, CollisionParams))
	{
		BaseImpact = BaseHitResult.ImpactPoint;
	}

	UPrimitiveComponent* TopComponent = Cast<UPrimitiveComponent>(MeshChildren[MeshChildren.Num() - 1]);
	FHitResult TopHitResult;
	FVector TopImpact;
	if (TopComponent->LineTraceComponent(TopHitResult, TopCastLocation, TopLocation, CollisionParams))
	{
		TopImpact = TopHitResult.ImpactPoint;
	}

	UE::Math::TVector<double> ColliderExtent = GetCollisionComp()->Bounds.BoxExtent;
	FVector ProjectedExtent = ColliderExtent.ProjectOnToNormal(OrientationVector);
	ProjectedExtent.Normalize();

	FVector CoreColliderExtents = FVector::OneVector - ProjectedExtent.GetAbs();
	CoreColliderExtents.Normalize();

	ProjectedExtent *= FVector::Distance(BaseImpact, TopImpact) / 2;
	FVector NewExtent = ColliderExtent.ProjectOnToNormal(CoreColliderExtents) + ProjectedExtent;

	GetCollisionComp()->SetBoxExtent(NewExtent, true);

	FVector MeshLocation = GetMesh()->GetRelativeLocation();
	MeshLocation.Normalize();
	MeshLocation *= ProjectedExtent;
	GetMesh()->SetRelativeLocation(MeshLocation);
}
