// Fill out your copyright notice in the Description page of Project Settings.


#include "OrderScreen.h"

#include "Components/WidgetComponent.h"
#include "LetEmCook/GameModes/GameplayGameMode.h"

// Sets default values
AOrderScreen::AOrderScreen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	OrderWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OrderWidget"));
	OrderWidget->SetWidgetSpace(EWidgetSpace::World);
	OrderWidget->SetDrawSize(FVector2D(1920.0f, 1080.0f));
	OrderWidget->SetRelativeLocation(FVector(-0.000004f, 4.613870f, 168.499066f));
	OrderWidget->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	OrderWidget->SetRelativeScale3D(FVector(1.f, 0.27f, 0.3f));
	OrderWidget->SetupAttachment(SceneRoot);

	ScreenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMesh"));
	ScreenMesh->SetupAttachment(SceneRoot);
	ScreenMesh->BodyInstance.SetCollisionProfileName("NoCollision");
	ScreenMesh->SetRelativeLocation(FVector(0.f, 0.f, 474.887828f));
	ScreenMesh->SetRelativeRotation(FRotator(0.f, 0.f, -90.f));
	ScreenMesh->SetRelativeScale3D(FVector(14.f, 6.5f, 1.2f));
	ScreenMesh->CastShadow = false;
}

void AOrderScreen::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		AGameplayGameMode* GameMode = Cast<AGameplayGameMode>(GetWorld()->GetAuthGameMode());
		if (GameMode != nullptr)
		{
			GameMode->GetOrderAddedDelegate().AddDynamic(this, &AOrderScreen::OnOrderAdded);
			GameMode->GetOrderRemovedDelegate().AddDynamic(this, &AOrderScreen::OnOrderRemoved);
		}
	}
}

void AOrderScreen::OnOrderAdded(UOrderInfoData* Order)
{
	Client_OrderAdded(Order);
}

void AOrderScreen::OnOrderRemoved(UOrderInfoData* Order)
{
	Client_OrderRemoved(Order);
}

void AOrderScreen::Client_OrderAdded_Implementation(UOrderInfoData* Order)
{
	OrderAdded(Order);
}

void AOrderScreen::Client_OrderRemoved_Implementation(UOrderInfoData* Order)
{
	OrderRemoved(Order);
}