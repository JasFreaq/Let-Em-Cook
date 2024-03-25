// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InteractionData.generated.h"

class UGameItemData;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UInteractionData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> ItemA;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> ItemB;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> ResultItem;

public:
	const TObjectPtr<UGameItemData> GetItemA() const { return ItemA; }

	const TObjectPtr<UGameItemData> GetItemB() const { return ItemB; }

	const UGameItemData* GetResultItem() const { return ResultItem; }
};
