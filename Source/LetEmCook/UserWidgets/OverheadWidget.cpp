// Fill out your copyright notice in the Description page of Project Settings.


#include "OverheadWidget.h"

#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "GameFramework/PlayerState.h"

void UOverheadWidget::SetCharacterName(FString CharacterName)
{
	if (Name)
	{
		Name->SetText(FText::FromString(CharacterName));
	}
}

void UOverheadWidget::SetHealthPercent(float Percent)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(Percent);
	}
}

void UOverheadWidget::ShowName(APawn* InPawn)
{
	const APlayerState* PlayerState = InPawn->GetPlayerState();
	if (!PlayerState || !*PlayerState->GetPlayerName() && TotalTime < GetPlayerNameTimeout)
	{
		FTimerHandle GetPlayerStateTimer;
		FTimerDelegate TryAgainDelegate;
		TryAgainDelegate.BindUFunction(this, FName("ShowName"), InPawn);
		GetWorld()->GetTimerManager().SetTimer(GetPlayerStateTimer, TryAgainDelegate, GetPlayerNameInterval, false, 0.1f);
		TotalTime += GetPlayerNameInterval;
		return;
	}
	FString PlayerName = InPawn->GetPlayerState()->GetPlayerName();
	SetCharacterName(PlayerName);
}

void UOverheadWidget::NativeDestruct()
{
	RemoveFromParent();
	Super::NativeDestruct();
}
