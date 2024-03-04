// Fill out your copyright notice in the Description page of Project Settings.


#include "HeldProjectileMesh.h"
#include "Components/ArrowComponent.h"

// Sets default values
AHeldProjectileMesh::AHeldProjectileMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;
	
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(SceneRoot);

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(SceneRoot);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("NoCollision");
}
