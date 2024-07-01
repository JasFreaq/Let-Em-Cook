// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayPlayerState.h"

#include "Net/UnrealNetwork.h"

void AGameplayPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGameplayPlayerState, HealthRatio);
}
