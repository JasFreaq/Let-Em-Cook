// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OrderInfoData.generated.h"

class UGameItemData;

/**
 * 
 */
UCLASS(BlueprintType)
class LETEMCOOK_API UOrderInfoData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> OrderItem;

	UPROPERTY(EditDefaultsOnly)
	int Points = 100;

public:

	TObjectPtr<UGameItemData> GetOrderItem() const { return OrderItem; }

	int GetPoints() const { return Points; }
};
