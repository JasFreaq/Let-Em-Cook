// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile.h"
#include "Algo/Reverse.h"

void AModularProjectile::BeginPlay()
{
	Super::BeginPlay();

	//TArray<USceneComponent*> MeshChildren;
	//GetMesh()->GetChildrenComponents(true, MeshChildren);

	//Algo::Reverse(MeshChildren);

	//for (int i = 0; i < MeshChildren.Num(); i++)
	//{
	//	float ItemDistance = 0.0f;

	//	if (i > 0)
	//	{
	//		ItemDistance = MeshChildren[i]->GetRelativeLocation().Y - MeshChildren[i - 1]->GetRelativeLocation().Y;
	//	}
	//	else
	//	{
	//		ItemDistance = MeshChildren[i]->GetRelativeLocation().Y;
	//	}

	//	ItemDistances.Add(ItemDistance);
	//}

	//// Setup
	//int ItemCounter = 0;
	//for (int i = 0; i < MeshChildren.Num(); i++)
	//{
	//	USceneComponent* Child = MeshChildren[i];

	//	if (i > 0)
	//	{
	//		if (Child->IsVisible())
	//		{
	//			FVector ChildRelativeLocation = Child->GetRelativeLocation();
	//			FVector PrevChildLocation = MeshChildren[ItemCounter]->GetRelativeLocation();
	//			float NewYLocation = PrevChildLocation.Y + ItemDistances[ItemCounter];

	//			ChildRelativeLocation.Y = NewYLocation;

	//			Child->SetRelativeLocation(ChildRelativeLocation);
	//			ItemCounter++;
	//		}
	//	}
	//	else
	//	{
	//		if (Child->IsVisible())
	//		{
	//			ItemCounter++;
	//		}
	//	}
	//}
}
