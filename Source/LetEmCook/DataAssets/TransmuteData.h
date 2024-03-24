// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TransmuteData.generated.h"

class UGameItemData;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API UTransmuteData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> SourceItem;

	UPROPERTY(EditDefaultsOnly)
	float TransmuteTime = 20.f;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> ResultItem;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UGameItemData> TrashItem;

public:

	TObjectPtr<UGameItemData> GetSourceItem() const { return SourceItem; }

	float GetTransmuteTime() const { return TransmuteTime; }

	TObjectPtr<UGameItemData> GetResultItem() const { return ResultItem; }

	TObjectPtr<UGameItemData> GetTrashItem() const { return TrashItem; }
};
