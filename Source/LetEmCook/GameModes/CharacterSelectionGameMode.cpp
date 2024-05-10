// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterSelectionGameMode.h"

#include "GameFramework/GameStateBase.h"
#include "LetEmCook/GameInstances/LetEmCookGameInstance.h"

void ACharacterSelectionGameMode::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance());
	if (GameInstance != nullptr)
	{
		if (GameInstance->GetControllersCache().Num() == QueueSize)
		{
			BeginCharacterSelection();
			UE_LOG(LogTemp, Warning, TEXT("Character Selection Started"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Game Instance found"));
	}
}

void ACharacterSelectionGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bInCharacterSelection)
	{
		const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
		if (CurrentTime - CurrentMapInitTime >= GameModeTime)
		{
			bInCharacterSelection = false;

			UE_LOG(LogTemp, Warning, TEXT("Travelling to Game Map"));

			const FString URL = FString::Printf(TEXT("/Game/_Game/%s?listen"), *GameMap);
			GetWorld()->ServerTravel(URL);
		}
	}
}

void ACharacterSelectionGameMode::BeginCharacterSelection()
{
	bInCharacterSelection = true;

	CurrentMapInitTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
}