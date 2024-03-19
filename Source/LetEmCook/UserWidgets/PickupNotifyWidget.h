// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PickupNotifyWidget.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UPickupNotifyWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FText PickupItemName;

public:
	void SetPickupItemName(const FString ItemName);
};
