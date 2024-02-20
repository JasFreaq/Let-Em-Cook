// Copyright Epic Games, Inc. All Rights Reserved.

#include "LetEmCookGameMode.h"
#include "LetEmCookCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALetEmCookGameMode::ALetEmCookGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
