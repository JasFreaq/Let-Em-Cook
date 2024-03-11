// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InteractionData.generated.h"

class UGameItemData;

UENUM(BlueprintType)
enum class EInteractionType : uint8
{
	DestroyItem UMETA(DisplayName = "Destroy Item"),
	ReplaceItem UMETA(DisplayName = "Replace Item")
};

USTRUCT()
struct FInteractionDataItem
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> GameItem;

	UPROPERTY(EditDefaultsOnly)
	EInteractionType InteractionType = EInteractionType::DestroyItem;
};


/**
 * 
 */
UCLASS()
class LETEMCOOK_API UInteractionData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FInteractionDataItem ItemA;

	UPROPERTY(EditDefaultsOnly)
	FInteractionDataItem ItemB;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> ResultItem;

public:
	const FInteractionDataItem& GetItemA() const { return ItemA; }

	const FInteractionDataItem& GetItemB() const { return ItemB; }

	const UGameItemData* GetResultItem() const { return ResultItem; }
};
