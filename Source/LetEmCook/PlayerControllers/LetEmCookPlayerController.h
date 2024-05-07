// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LetEmCook/Enums/ETeam.h"
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

	UPROPERTY()
	ETeam Team;

	UPROPERTY()
	TSubclassOf<ALetEmCookCharacter> CharacterClass;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Character Selection", meta = (AllowPrivateAccess = true))
	int CharacterSelectionScreenTimer = 0;

public:

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void InitiateControllerForGame();

	void SetPlayerTeam(ETeam AllottedTeam);

	UFUNCTION(BlueprintCallable)
	void SetCharacterClass(TSubclassOf<ALetEmCookCharacter> ChosenCharacterClass);

	void ShowHUD();

	void HideHUD();

	void ShowPickupWidget(FString ItemName);

	void HidePickupWidget();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:

	UFUNCTION(Server, Reliable)
	void Server_SetSessionIdOnGameInstance(const FString& Session);

	UFUNCTION(Server, Reliable)
	void Server_SetPlayerTeam(ETeam AllottedTeam);

	UFUNCTION(Server, Reliable)
	void Server_SetCharacterClass(TSubclassOf<ALetEmCookCharacter> ChosenCharacterClass);

	UFUNCTION(Server, Reliable)
	void Server_RequestCharacter();

	UFUNCTION(Client, Reliable)
	void Client_ShowHUD();

	UFUNCTION(Client, Reliable)
	void Client_HideHUD();

	UFUNCTION(Client, Reliable)
	void Client_ShowPickupWidget(const FString& ItemName);

	UFUNCTION(Client, Reliable)
	void Client_HidePickupWidget();
};
