// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCookPlayerController.h"

#include "Blueprint/UserWidget.h"
#include "LetEmCook/GameInstances/LetEmCookGameInstance.h"
#include "Net/UnrealNetwork.h"
#include "LetEmCook/UserWidgets/PickupNotifyWidget.h"

void ALetEmCookPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalPlayerController())
	{
		if (ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance()))
		{
			Server_SetSessionIdOnGameInstance(GameInstance->GetSessionId());
		}

		HUDWidgetInstance = CreateWidget(this, HUDWidget);
		HUDWidgetInstance->AddToViewport();

		PickupWidgetInstance = Cast<UPickupNotifyWidget>(CreateWidget(this, PickupWidget));
	}
}

void ALetEmCookPlayerController::Server_SetSessionIdOnGameInstance_Implementation(const FString& Session)
{
	if (ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance()))
	{
		GameInstance->SetSessionId(Session);

		UE_LOG(LogTemp, Warning, TEXT("Sending Session ID to Server: %s"), *Session);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Game Instance is not of type ULetEmCookGameInstance"));
	}
}

void ALetEmCookPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookPlayerController, HUDWidgetInstance);
	DOREPLIFETIME(ALetEmCookPlayerController, PickupWidgetInstance);
}

//////////////////////////////////////////////////////////////////////////
// Widget Handling

void ALetEmCookPlayerController::ShowPickupWidget(FString ItemName)
{
	if (IsLocalPlayerController())
	{
		if (PickupWidgetInstance)
		{
			PickupWidgetInstance->SetPickupItemName(ItemName);

			if (!bIsPickupWidgetVisible)
			{
				PickupWidgetInstance->AddToViewport();
				bIsPickupWidgetVisible = true;
			}
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
		if (PickupWidgetInstance && bIsPickupWidgetVisible)
		{
			PickupWidgetInstance->RemoveFromParent();
			bIsPickupWidgetVisible = false;
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