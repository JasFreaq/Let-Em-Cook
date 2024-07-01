// Fill out your copyright notice in the Description page of Project Settings.


#include "OverheadWidget.h"

#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "GameFramework/PlayerState.h"
#include "LetEmCook/PlayerStates/GameplayPlayerState.h"

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
	if (!PlayerState || !*PlayerState->GetPlayerName() && TotalPlayerNameTime < GetPlayerNameTimeout)
	{
		FTimerHandle GetPlayerStateTimer;
		FTimerDelegate TryAgainDelegate;
		TryAgainDelegate.BindUFunction(this, FName("ShowName"), InPawn);
		GetWorld()->GetTimerManager().SetTimer(GetPlayerStateTimer, TryAgainDelegate, GetPlayerNameInterval, false, 0.1f);
		TotalPlayerNameTime += GetPlayerNameInterval;
		return;
	}

	FString PlayerName = InPawn->GetPlayerState()->GetPlayerName();
	SetCharacterName(PlayerName);
}

void UOverheadWidget::UpdateHealth(APawn* InPawn)
{
	APlayerState* PlayerState = InPawn->GetPlayerState();
	AGameplayPlayerState* GameplayPlayerState = Cast<AGameplayPlayerState>(PlayerState);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("PlayerState: %s"), *PlayerState->GetPlayerName()));

	if (!GameplayPlayerState || GameplayPlayerState->GetHealthRatio() == LastHealthRatio && TotalHealthRatioTime < GetHealthRatioTimeout)
	{
		FTimerHandle GetPlayerStateTimer;
		FTimerDelegate TryAgainDelegate;
		TryAgainDelegate.BindUFunction(this, FName("UpdateHealth"), InPawn);
		GetWorld()->GetTimerManager().SetTimer(GetPlayerStateTimer, TryAgainDelegate, GetHealthRatioInterval, false, 0.1f);
		TotalHealthRatioTime += GetHealthRatioInterval;
		return;
	}

	float HealthRatio = GameplayPlayerState->GetHealthRatio();
	SetHealthPercent(HealthRatio);
	LastHealthRatio = HealthRatio;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Health: %f"), HealthRatio));
}

void UOverheadWidget::NativeDestruct()
{
	RemoveFromParent();
	Super::NativeDestruct();
}
