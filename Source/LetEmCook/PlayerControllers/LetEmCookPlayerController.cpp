// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCookPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"
#include "LetEmCook/UserWidgets/PickupNotifyWidget.h"

void ALetEmCookPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalPlayerController())
	{
		HUDWidgetInstance = CreateWidget(this, HUDWidget);
		HUDWidgetInstance->AddToViewport();

		PickupWidgetInstance = Cast<UPickupNotifyWidget>(CreateWidget(this, PickupWidget));
	}
}

void ALetEmCookPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookPlayerController, HUDWidgetInstance);
	DOREPLIFETIME(ALetEmCookPlayerController, PickupWidgetInstance);
}

void ALetEmCookPlayerController::ShowPickupWidget(FString ItemName)
{
	if (IsLocalPlayerController())
	{
		if (PickupWidgetInstance)
		{
			PickupWidgetInstance->SetPickupItemName(ItemName);
			PickupWidgetInstance->AddToViewport();
		}
	}
	else
	{
		Client_ShowPickupWidget(ItemName);
	}
}

void ALetEmCookPlayerController::HidePickupWidget() 
{
	if (IsLocalPlayerController())
	{
		if (PickupWidgetInstance)
		{
			PickupWidgetInstance->RemoveFromParent();
		}
	}
	else
	{
		Client_HidePickupWidget();
	}
}

void ALetEmCookPlayerController::Client_ShowPickupWidget_Implementation(const FString& ItemName)
{
	ShowPickupWidget(ItemName);
}

void ALetEmCookPlayerController::Client_HidePickupWidget_Implementation() 
{
	HidePickupWidget();
}