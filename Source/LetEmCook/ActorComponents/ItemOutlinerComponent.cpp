// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemOutlinerComponent.h"

void UItemOutlinerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<TObjectPtr<USceneComponent>> RootChildren;

	OutlineRoot->GetChildrenComponents(true, RootChildren);
	for (USceneComponent* Child : RootChildren)
	{
		OutlineChildren.Add(Cast<UStaticMeshComponent>(Child));
	}
	
	OnComponentBeginOverlap.AddDynamic(this, &UItemOutlinerComponent::OnBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UItemOutlinerComponent::OnEndOverlap);
}

void UItemOutlinerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		OutlineRoot->SetRenderCustomDepth(true);
		OutlineRoot->SetCustomDepthStencilValue(StencilValue);
		OutlineRoot->MarkRenderStateDirty();

		for (UStaticMeshComponent* Child : OutlineChildren)
		{
			Child->SetRenderCustomDepth(true);
			Child->SetCustomDepthStencilValue(StencilValue);
			Child->MarkRenderStateDirty();
		}
	}
}

void UItemOutlinerComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("Player"))
	{
		OutlineRoot->SetRenderCustomDepth(false);

		for (UStaticMeshComponent* Child : OutlineChildren)
		{
			Child->SetRenderCustomDepth(false);
		}
	}
}