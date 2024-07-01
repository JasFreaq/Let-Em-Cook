// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

class UTextBlock;
class UProgressBar;

UCLASS()
class LETEMCOOK_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Name;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthBar;

	void SetCharacterName(FString CharacterName);

	void SetHealthPercent(float Percent);

	UFUNCTION(BlueprintCallable)
	void ShowName(APawn* InPawn);

	UFUNCTION(BlueprintCallable)
	void UpdateHealth(APawn* InPawn);

protected:

	virtual void NativeDestruct() override;

private:

	UPROPERTY(EditAnywhere, Category = "Overhead Widget Properties", meta = (AllowPrivateAccess = true, Units = "Seconds"))
	float GetPlayerNameTimeout = 30.f;

	UPROPERTY(EditAnywhere, Category = "Overhead Widget Properties", meta = (AllowPrivateAccess = true, Units = "Seconds"))
	float GetPlayerNameInterval = 0.1f;

	float TotalPlayerNameTime = -0.1f;

	UPROPERTY(EditAnywhere, Category = "Overhead Widget Properties", meta = (AllowPrivateAccess = true, Units = "Seconds"))
	float GetHealthRatioTimeout = 30.f;

	UPROPERTY(EditAnywhere, Category = "Overhead Widget Properties", meta = (AllowPrivateAccess = true, Units = "Seconds"))
	float GetHealthRatioInterval = 0.1f;

	float TotalHealthRatioTime = -0.1f;

	float LastHealthRatio = 1.f;
};
