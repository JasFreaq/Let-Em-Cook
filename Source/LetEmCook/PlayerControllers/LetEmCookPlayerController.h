// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LetEmCookPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ALetEmCookPlayerController : public APlayerController
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUserWidget> PickupWidget;

	UPROPERTY(Replicated)
	TObjectPtr<UUserWidget> PickupWidgetInstance;

public:
	void ShowPickupWidget();

	void HidePickupWidget();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UFUNCTION(Client, Reliable)
	void Client_ShowPickupWidget();

	UFUNCTION(Client, Reliable)
	void Client_HidePickupWidget();
};
