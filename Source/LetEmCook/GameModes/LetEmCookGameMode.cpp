// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookGameMode.h"

#include "Engine/TargetPoint.h"
#include "GameFramework/GameStateBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "LetEmCook/Characters/LetEmCookCharacter.h"
#include "LetEmCook/GameInstances/LetEmCookGameInstance.h"

ALetEmCookGameMode::ALetEmCookGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/_Game/Blueprints/Characters/BP_CharacterBase"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PrimaryActorTick.bCanEverTick = true;

	bUseSeamlessTravel = true;
}

void ALetEmCookGameMode::PostSeamlessTravel()
{
	Super::PostSeamlessTravel();

	UE_LOG(LogTemp, Warning, TEXT("Post Seamless Travel"));
}

void ALetEmCookGameMode::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	UE_LOG(LogTemp, Warning, TEXT("Post Login"));
	
	ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance());
	if (GameInstance != nullptr)
	{
		TArray<AController*> Controllers = GameInstance->GetControllersCache();
		Controllers.Add(NewPlayer);
		GameInstance->SetControllersCache(Controllers);

		UE_LOG(LogTemp, Warning, TEXT("Logged Controllers: %d"), GameInstance->GetControllersCache().Num());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Game Instance found"));
	}
}

void ALetEmCookGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	UE_LOG(LogTemp, Warning, TEXT("Exiting"));

	ULetEmCookGameInstance* GameInstance = Cast<ULetEmCookGameInstance>(GetGameInstance());
	if (GameInstance != nullptr)
	{
		TArray<AController*> Controllers = GameInstance->GetControllersCache();
		Controllers.Remove(Exiting);
		GameInstance->SetControllersCache(Controllers);

		UE_LOG(LogTemp, Warning, TEXT("Logged Controllers: %d"), GameInstance->GetControllersCache().Num());

		if (GameInstance->GetControllersCache().Num() == 0)
		{
			GameInstance->InitiateServerShutdown();
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Game Instance found"));
	}
}

float ALetEmCookGameMode::GetGameModeTimeRemaining() const
{
	const float CurrentTime = GetWorld()->GetGameState()->GetServerWorldTimeSeconds();
	return FMath::Max(0.f, GameModeTime - CurrentTime + CurrentMapInitTime);
}