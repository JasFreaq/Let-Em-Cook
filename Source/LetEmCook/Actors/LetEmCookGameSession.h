// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "LetEmCookGameSession.generated.h"

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ALetEmCookGameSession : public AGameSession
{
	GENERATED_BODY()

protected:
	FDelegateHandle CreateSessionDelegateHandle;

	FDelegateHandle StartSessionDelegateHandle;

	FDelegateHandle RegisterPlayerDelegateHandle;

	FDelegateHandle UnregisterPlayerDelegateHandle;

	FDelegateHandle EndSessionDelegateHandle;

	FDelegateHandle DestroySessionDelegateHandle;

private:

	UPROPERTY(EditDefaultsOnly, Category = Session)
	int MaxNumberOfPlayersInSession = 2;

	// Variable to keep track of the number of players in a session  
	int NumberOfPlayersInSession = 0;

	bool bSessionExists;	

protected:
	virtual void BeginPlay() override;

private:
	// Function to create an EOS session. 
	void CreateSession(FName KeyName, FString KeyValue);

	void StartSession();

	void EndSession();

	void DestroySession();

	virtual bool ProcessAutoLogin() override;

	virtual void NotifyLogout(const APlayerController* PC) override;

	virtual void RegisterPlayer(APlayerController* NewPlayer, const FUniqueNetIdPtr& UniqueId, bool bWasFromInvite) override;

	virtual void UnregisterPlayer(const APlayerController* ExitingPlayer) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void HandleCreateSessionCompleted(FName EOSSessionName, bool bWasSuccessful);

	void HandleStartSessionCompleted(FName EOSSessionName, bool bWasSuccessful);

	void HandleRegisterPlayerCompleted(FName EOSSessionName, const TArray<FUniqueNetIdRef>& PlayerIds, bool bWasSuccesful);

	void HandleUnregisterPlayerCompleted(FName EOSSessionName, const TArray<FUniqueNetIdRef>& PlayerIds, bool bWasSuccesful);

	void HandleEndSessionCompleted(FName EOSSessionName, bool bWasSuccessful);

	void HandleDestroySessionCompleted(FName EOSSessionName, bool bWasSuccesful);
};
