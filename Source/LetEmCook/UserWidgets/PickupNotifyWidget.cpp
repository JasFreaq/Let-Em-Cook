// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupNotifyWidget.h"

void UPickupNotifyWidget::SetPickupItemName(const FString ItemName)
{
	PickupItemName = FText::FromString(ItemName);
}
