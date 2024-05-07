// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PlayFabAuthenticationDataModels.h"
#include "PlayFabClientDataModels.h"
#include "PlayFabMultiplayerDataModels.h"
#include "PlayFabError.h"
#include "LetEmCookGameInstance.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogPlayFabGSDKGameInstance, Log, All);

/**
 * 
 */
UCLASS()
class LETEMCOOK_API ULetEmCookGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:

	UPROPERTY(EditDefaultsOnly, Category = "Play Fab Custom | Authentication", meta = (AllowPrivateAccess = true))
	FName MainMenuMap = "MainMenu_Level";

	UPROPERTY(EditDefaultsOnly, Category = "Play Fab Custom | Matchmaking", meta = (AllowPrivateAccess = true))
	int TicketRequestGiveUpAfterSeconds = 90;

	UPROPERTY(EditDefaultsOnly, Category = "Play Fab Custom | Matchmaking", meta = (AllowPrivateAccess = true))
	FString QueueName = "TestQueue1";
	
	UPROPERTY(EditDefaultsOnly, Category = "Play Fab Custom | Matchmaking", meta = (AllowPrivateAccess = true))
	float FindMatchTime = 12.f;

	TSharedPtr<PlayFab::ClientModels::FEntityTokenResponse> EntityToken;

	FString PlayFabId;

	UPROPERTY(BlueprintReadOnly, Category = "Play Fab Custom | Matchmaking", meta = (AllowPrivateAccess = true))
	FString PlayFabUsername;

	FString MatchmakingTicketId;

	FString MatchId;

	FString SessionId;

	UPROPERTY(BlueprintReadOnly, Category = "Play Fab Custom | Matchmaking", meta = (AllowPrivateAccess = true))
	FString MatchmakingStatus;

	FString TeamAssignment;

	FTimerHandle FindMatchTimerHandle;

	UPROPERTY()
	TArray<AController*> LoggedControllersCache;

public:

	virtual void Init() override;

	virtual void OnStart() override;

	UFUNCTION(BlueprintCallable, Category = "Play Fab Custom | Authentication")
	void Login(FString Username, FString Password);

	UFUNCTION(BlueprintCallable, Category = "Play Fab Custom | Authentication")
	void RegisterAccount(FString Username, FString Email, FString Password);

	UFUNCTION(BlueprintCallable, Category = "Play Fab Custom | Matchmaking")
	void StartMatchmaking();

	UFUNCTION(BlueprintCallable, Category = "Play Fab Custom | Matchmaking")
	void CancelMatchmaking();

	UFUNCTION(BlueprintCallable, Category = "Play Fab Custom | Shutdown")
	void InitiateServerShutdown();

	const FString& GetSessionId() const { return MatchId; }

	void SetSessionId(const FString& Session);

	TArray<AController*> GetControllersCache() { return LoggedControllersCache; }

	void SetControllersCache(TArray<AController*> Controllers) { LoggedControllersCache = Controllers; }
	
	const FString& GetTeam() const { return TeamAssignment; }

protected:

	// PlayFab Server GSDK Callbacks

	UFUNCTION()
	void OnGSDKShutdown();

	UFUNCTION()
	bool OnGSDKHealthCheck();

	UFUNCTION()
	void OnGSDKServerActive();

	UFUNCTION()
	void OnGSDKReadyForPlayers();

private:

	// PlayFab Callbacks

	void OnLoginSuccess(const PlayFab::ClientModels::FLoginResult& Result);

	void OnRegisterSuccess(const PlayFab::ClientModels::FRegisterPlayFabUserResult& Result);

	void OnGetAccountInfoSuccess(const PlayFab::ClientModels::FGetAccountInfoResult& Result);

	void OnMatchmakingTicketCreationSuccess(const PlayFab::MultiplayerModels::FCreateMatchmakingTicketResult& Result);

	void OnGetMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FGetMatchmakingTicketResult& Result);

	void OnGetMatchSuccess(const PlayFab::MultiplayerModels::FGetMatchResult& Result);

	void OnCancelMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FCancelMatchmakingTicketResult& Result);

	void OnShutdownMultiplayerSeverSuccess(const PlayFab::MultiplayerModels::FEmptyResponse& Response);

	void OnGetEntityTokenSuccess(const PlayFab::AuthenticationModels::FGetEntityTokenResponse& Response);

	void OnPlayFabError(const PlayFab::FPlayFabCppError& Error);

	// Internals

	void OnAuthentication(TSharedPtr<PlayFab::ClientModels::FEntityTokenResponse> Token, FString Id);

	void GetAccountInfo();

	void GetMatchmakingTicket();

	void GetEntityToken();

	void ShutdownServer(FString EntitySessionToken);
};
