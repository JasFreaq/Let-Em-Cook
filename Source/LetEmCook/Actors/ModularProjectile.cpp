// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularProjectile.h"

void AModularProjectile::BeginPlay()
{
	Super::BeginPlay();

	AdjustMeshView();
}
