// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCookPlayerController.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/GameStateBase.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"
#include "Net/UnrealNetwork.h"

#include "LetEmCook/GameInstances/LetEmCookGameInstance.h"
#include "LetEmCook/GameModes/GameplayGameMode.h"
#include "LetEmCook/GameModes/LetEmCookGameMode.h"
#include "LetEmCook/UserWidgets/PickupNotifyWidget.h"

void ALetEmCookPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("LetEmCook Player Controller Begin Play"));

	if (IsLocalPlayerController())
	{
		if (ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance()))
		{
			Server_SetSessionIdOnGameInstance(GameInstance->GetSessionId());

			const FString TeamId = GameInstance->GetTeam();
			if (TeamId.Compare(TEXT("blue"), ESearchCase::IgnoreCase) == 0)
			{
				Server_SetPlayerTeam(ETeam::Blue);
			}
			else if (TeamId.Compare(TEXT("red"), ESearchCase::IgnoreCase) == 0)
			{
				Server_SetPlayerTeam(ETeam::Red);
			}

			UE_LOG(LogTemp, Warning, TEXT("Setting Team: %s"), *TeamId);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Game Instance is not of type ULetEmCookGameInstance"));
		}		

		if (HUDWidget != nullptr)
		{
			HUDWidgetInstance = CreateWidget(this, HUDWidget);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("HUDWidget is null"));
		}
		
		if (PickupWidget != nullptr)
		{
			PickupWidgetInstance = CreateWidget<UPickupNotifyWidget>(this, PickupWidget);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("PickupWidget is null"));
		}
	}
}

void ALetEmCookPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (HasAuthority())
	{
		ALetEmCookGameMode* GameMode = GetWorld()->GetAuthGameMode<ALetEmCookGameMode>();
		if (GameMode != nullptr)
		{
			CurrentGameModeTime = GameMode->GetGameModeTimeRemaining();
		}

		AGameplayGameMode* GameplayGameMode = Cast<AGameplayGameMode>(GameMode);
		if (GameplayGameMode != nullptr)
		{
			GameplayGameMode->GetTeamScores(BlueTeamScore, RedTeamScore);
		}
	}
}

void ALetEmCookPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALetEmCookPlayerController, HUDWidgetInstance);
	DOREPLIFETIME(ALetEmCookPlayerController, PickupWidgetInstance);

	DOREPLIFETIME(ALetEmCookPlayerController, Team);

	DOREPLIFETIME(ALetEmCookPlayerController, CurrentGameModeTime);
	DOREPLIFETIME(ALetEmCookPlayerController, BlueTeamScore);
	DOREPLIFETIME(ALetEmCookPlayerController, RedTeamScore);
}

void ALetEmCookPlayerController::SetPlayerTeam(ETeam AllottedTeam)
{
	if (HasAuthority())
	{
		Team = AllottedTeam;
	}
	else
	{
		Server_SetPlayerTeam(AllottedTeam);
	}
}

void ALetEmCookPlayerController::SetCharacterClass(TSubclassOf<ALetEmCookCharacter> ChosenCharacterClass)
{
	if (HasAuthority())
	{
		CharacterClass = ChosenCharacterClass;
	}
	else
	{
		Server_SetCharacterClass(ChosenCharacterClass);
	}

	UE_LOG(LogTemp, Warning, TEXT("Setting Character Class: %s"), *ChosenCharacterClass.Get()->GetDefaultObjectName().ToString());
}

void ALetEmCookPlayerController::InitializeControllerForGame()
{
	if (IsLocalPlayerController())
	{
		if (CharacterClass == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Character Class is null"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Character Class: %s"), *CharacterClass.Get()->GetDefaultObjectName().ToString());
		}

		Server_InitializeControllerForGame();

		SetInputMode(FInputModeGameOnly());
		bShowMouseCursor = false;
	}
}

void ALetEmCookPlayerController::RequestCharacter()
{
	if (LastPawn != nullptr)
	{
		LastPawn->Destroy();
		LastPawn = nullptr;
	}

	AGameplayGameMode* GameMode = GetWorld()->GetAuthGameMode<AGameplayGameMode>();
	GameMode->SpawnPlayerCharacter(this, CharacterClass, Team);

	UE_LOG(LogTemp, Warning, TEXT("Requesting Character: %s"), *CharacterClass.Get()->GetDefaultObjectName().ToString());

	ShowHUD();
}

void ALetEmCookPlayerController::HandlePlayerDeath()
{
	Multicast_HandlePlayerDeath();
}

void ALetEmCookPlayerController::MakeNewCharacterRequest()
{
	Server_RequestCharacter();
}

void ALetEmCookPlayerController::ProcessGameOver()
{
	Client_ProcessGameOver();
}

void ALetEmCookPlayerController::Server_InitializeControllerForGame_Implementation()
{
	AGameplayGameMode* GameMode = GetWorld()->GetAuthGameMode<AGameplayGameMode>();
	GameMode->OnGameOver()->AddDynamic(this, &ALetEmCookPlayerController::ProcessGameOver);

	RequestCharacter();
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

void ALetEmCookPlayerController::Server_SetPlayerTeam_Implementation(ETeam AllottedTeam)
{
	SetPlayerTeam(AllottedTeam);
}

void ALetEmCookPlayerController::Server_SetCharacterClass_Implementation(TSubclassOf<ALetEmCookCharacter> ChosenCharacterClass)
{
	SetCharacterClass(ChosenCharacterClass);
}

void ALetEmCookPlayerController::Multicast_HandlePlayerDeath_Implementation()
{
	if (IsLocalPlayerController())
	{
		HideHUD();
		HidePickupWidget();
	}

	if (HasAuthority())
	{
		Server_RequestSpectator();
	}
}

void ALetEmCookPlayerController::Server_RequestCharacter_Implementation()
{
	RequestCharacter();
}

void ALetEmCookPlayerController::Server_RequestSpectator_Implementation()
{
	LastPawn = GetPawn();
	UnPossess();

	AGameplayGameMode* GameMode = GetWorld()->GetAuthGameMode<AGameplayGameMode>();

	GameMode->SpawnSpectator(this, LastPawn->GetActorTransform());
}

void ALetEmCookPlayerController::Client_ProcessGameOver_Implementation()
{
	if (IsLocalPlayerController())
	{
		if (GameOverWidget != nullptr)
		{
			GameOverWidgetInstance = CreateWidget(this, GameOverWidget);
			GameOverWidgetInstance->AddToViewport();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("GameOverWidget is null"));
		}

		SetInputMode(FInputModeUIOnly());
		bShowMouseCursor = true;
	}
}

//////////////////////////////////////////////////////////////////////////
// Widget Handling

void ALetEmCookPlayerController::ShowHUD()
{
	if (IsLocalPlayerController())
	{
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();
			UE_LOG(LogTemp, Warning, TEXT("Showing HUD"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("HUDWidgetInstance is null"));
		}
	}
	else
	{
		Client_ShowHUD();
	}
}

void ALetEmCookPlayerController::HideHUD()
{
	if (IsLocalPlayerController())
	{
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->RemoveFromParent();
		}
	}
	else
	{
		Client_HideHUD();
	}
}

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

void ALetEmCookPlayerController::Client_ShowHUD_Implementation()
{
	ShowHUD();
}

void ALetEmCookPlayerController::Client_HideHUD_Implementation()
{
	HideHUD();
}

void ALetEmCookPlayerController::Client_ShowPickupWidget_Implementation(const FString& ItemName)
{
	ShowPickupWidget(ItemName);
}

void ALetEmCookPlayerController::Client_HidePickupWidget_Implementation() 
{
	HidePickupWidget();
}