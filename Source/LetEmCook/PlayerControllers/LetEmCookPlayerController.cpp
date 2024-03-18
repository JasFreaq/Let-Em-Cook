// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCookPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"

void ALetEmCookPlayerController::ShowPickupWidget()
{
	if (IsLocalPlayerController())
	{
		if (PickupWidgetInstance)
		{
			PickupWidgetInstance->AddToViewport();
		}
	}
	else
	{
		Client_ShowPickupWidget();
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

void ALetEmCookPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookPlayerController, PickupWidgetInstance);
}

void ALetEmCookPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalPlayerController()) 
	{
		PickupWidgetInstance = CreateWidget(this, PickupWidget);
	}
}

void ALetEmCookPlayerController::Client_ShowPickupWidget_Implementation() 
{
	ShowPickupWidget();
}

void ALetEmCookPlayerController::Client_HidePickupWidget_Implementation() 
{
	HidePickupWidget();
}