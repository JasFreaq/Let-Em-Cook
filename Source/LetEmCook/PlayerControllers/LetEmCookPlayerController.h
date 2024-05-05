// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LetEmCookPlayerController.generated.h"

class UPickupNotifyWidget;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ALetEmCookPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUserWidget> HUDWidget;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UPickupNotifyWidget> PickupWidget;

	UPROPERTY(Replicated)
	TObjectPtr<UUserWidget> HUDWidgetInstance;

	UPROPERTY(Replicated)
	TObjectPtr<UPickupNotifyWidget> PickupWidgetInstance;
	
	bool bIsPickupWidgetVisible = false;

	TSubclassOf<ALetEmCookCharacter> CharacterClass;
	
public:

	void ShowPickupWidget(FString ItemName);

	void HidePickupWidget();

	UFUNCTION(BlueprintCallable)
	void SetCharacterClass(TSubclassOf<ALetEmCookCharacter> ChosenCharacterClass);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:

	UFUNCTION(Server, Reliable)
	void Server_SetSessionIdOnGameInstance(const FString& Session);

	UFUNCTION(Client, Reliable)
	void Client_ShowPickupWidget(const FString& ItemName);

	UFUNCTION(Client, Reliable)
	void Client_HidePickupWidget();
};
