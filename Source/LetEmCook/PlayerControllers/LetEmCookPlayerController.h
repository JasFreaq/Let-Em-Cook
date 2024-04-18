// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "LetEmCookPlayerController.generated.h"

class UPickupNotifyWidget;
class FOnlineSessionSearch;
class FOnlineSessionSearchResult;

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ALetEmCookPlayerController : public APlayerController
{
	GENERATED_BODY()

	// This is the connection string for the client to connect to the dedicated server.
	FString ConnectString;

	// This is used to store the session to join information from the search. You could pass it as a parameter to JoinSession() instead. 
	FOnlineSessionSearchResult* SessionToJoin;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUserWidget> HUDWidget;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UPickupNotifyWidget> PickupWidget;

	UPROPERTY(Replicated)
	TObjectPtr<UUserWidget> HUDWidgetInstance;

	UPROPERTY(Replicated)
	TObjectPtr<UPickupNotifyWidget> PickupWidgetInstance;

protected:
	//Delegate to bind callback event for login. 
	FDelegateHandle LoginDelegateHandle;

	//Delegate to bind callback event for when sessions are found.
	FDelegateHandle FindSessionsDelegateHandle;

	// Delegate to bind callback event for join session.
	FDelegateHandle JoinSessionDelegateHandle;

public:
	
	void ShowPickupWidget(FString ItemName);

	void HidePickupWidget();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Function to sign into EOS Game Services
	void Login();

	//Callback function. This function is ran when signing into EOS Game Services completes. 
	void HandleLoginCompleted(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);

private:
	// Function to find EOS sessions. Hardcoded attribute key/value pair to keep things simple
	void FindSessions(FName SearchKey = "KeyName", FString SearchValue = "KeyValue");

	// Function to join the EOS session. 
	void JoinSession();

	// Callback function. This function will run when the session is found.
	void HandleFindSessionsCompleted(bool bWasSuccessful, TSharedRef<FOnlineSessionSearch> Search);

	// Callback function. This function will run when the session is joined. 
	void HandleJoinSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION(Client, Reliable)
	void Client_ShowPickupWidget(const FString& ItemName);

	UFUNCTION(Client, Reliable)
	void Client_HidePickupWidget();
};
