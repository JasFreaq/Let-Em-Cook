// Fill out your copyright notice in the Description page of Project Settings.


#include "LetEmCookGameInstance.h"

#include "Kismet/GameplayStatics.h"

#include "PlayFabGSDK.h"
#include "GSDKUtils.h"
#include "PlayFab.h"

#include "PlayFabClientAPI.h"
#include "PlayFabMultiplayerAPI.h"
#include "PlayFabAuthenticationAPI.h"
#include "PlayFabJsonObject.h"
#include "PlayFabJsonValue.h"
#include "PlayFabAuthenticationContext.h"

using namespace PlayFab;
using namespace ClientModels;
using namespace MultiplayerModels;
using namespace AuthenticationModels;

DEFINE_LOG_CATEGORY(LogPlayFabGSDKGameInstance);

//////////////////////////////////////////////////////////////////////////
// Lifecycle Functions

void ULetEmCookGameInstance::Init()
{
	Super::Init();

	if (IsDedicatedServerInstance())
	{
		FOnGSDKShutdown_Dyn OnGsdkShutdown;
		OnGsdkShutdown.BindDynamic(this, &ULetEmCookGameInstance::OnGSDKShutdown);
		UGSDKUtils::RegisterGSDKShutdownDelegate(OnGsdkShutdown);

		FOnGSDKHealthCheck_Dyn OnGsdkHealthCheck;
		OnGsdkHealthCheck.BindDynamic(this, &ULetEmCookGameInstance::OnGSDKHealthCheck);
		UGSDKUtils::RegisterGSDKHealthCheckDelegate(OnGsdkHealthCheck);

		FOnGSDKServerActive_Dyn OnGSDKServerActive;
		OnGSDKServerActive.BindDynamic(this, &ULetEmCookGameInstance::OnGSDKServerActive);
		UGSDKUtils::RegisterGSDKServerActiveDelegate(OnGSDKServerActive);

		FOnGSDKReadyForPlayers_Dyn OnGSDKReadyForPlayers;
		OnGSDKReadyForPlayers.BindDynamic(this, &ULetEmCookGameInstance::OnGSDKReadyForPlayers);
		UGSDKUtils::RegisterGSDKReadyForPlayers(OnGSDKReadyForPlayers);
	}

#if UE_SERVER
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Reached Init!"));
	UGSDKUtils::SetDefaultServerHostPort();
#endif
}

void ULetEmCookGameInstance::OnStart()
{
	Super::OnStart();

	if (IsDedicatedServerInstance())
	{
		UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Reached onStart!"));
		UGSDKUtils::ReadyForPlayers();

		FString ServerLogDirectory = UGSDKUtils::GetLogsDirectory();
		FString ServerLogPath = FPaths::Combine(ServerLogDirectory, TEXT("MyServerLog.log"));
		FOutputDeviceRedirector::Get()->AddOutputDevice(new FOutputDeviceFile(*ServerLogPath));
	}
}

//////////////////////////////////////////////////////////////////////////
// PlayFab Server GSDK Callbacks

void ULetEmCookGameInstance::OnGSDKShutdown()
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Shutdown!"));
	FPlatformMisc::RequestExit(false);
}

bool ULetEmCookGameInstance::OnGSDKHealthCheck()
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Healthy!"));
	return true;
}

void ULetEmCookGameInstance::OnGSDKServerActive()
{
	/**
	* Server is transitioning to an active state.
	* Optional: Add in the implementation any code that is needed for the game server when
	* this transition occurs.
	*/
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Active!"));
}

void ULetEmCookGameInstance::OnGSDKReadyForPlayers()
{
	/**
	 * Server is transitioning to a StandBy state. Game initialization is complete and the game is ready
	 * to accept players.
	 * Optional: Add in the implementation any code that is needed for the game server before
	 * initialization completes.
	 */
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Finished Initialization - Moving to StandBy!"));
}

//////////////////////////////////////////////////////////////////////////
// Blueprint Callable Functions

void ULetEmCookGameInstance::Login(FString Username, FString Password)
{
	FLoginWithPlayFabRequest LoginWithPlayFabRequest;
	LoginWithPlayFabRequest.Username = Username;
	LoginWithPlayFabRequest.Password = Password;

	UPlayFabClientAPI::FLoginWithPlayFabDelegate LoginWithPlayFabDelegate;
	LoginWithPlayFabDelegate.BindUObject(this, &ULetEmCookGameInstance::OnLoginSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabClientAPI ClientAPI;
	if (!ClientAPI.LoginWithPlayFab(LoginWithPlayFabRequest, LoginWithPlayFabDelegate, ErrorDelegate))
	{
		FLoginWithEmailAddressRequest LoginWithEmailRequest;
		LoginWithEmailRequest.Email = Username;
		LoginWithEmailRequest.Password = Password;

		ClientAPI.LoginWithEmailAddress(LoginWithEmailRequest, LoginWithPlayFabDelegate, ErrorDelegate);
	}

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Logging In!"));
}

void ULetEmCookGameInstance::RegisterAccount(FString Username, FString Email, FString Password)
{
	FRegisterPlayFabUserRequest RegisterPlayFabUserRequest;
	RegisterPlayFabUserRequest.Username = Username;
	RegisterPlayFabUserRequest.Email = Email;
	RegisterPlayFabUserRequest.Password = Password;

	UPlayFabClientAPI::FRegisterPlayFabUserDelegate RegisterPlayFabUserDelegate;
	RegisterPlayFabUserDelegate.BindUObject(this, &ULetEmCookGameInstance::OnRegisterSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabClientAPI ClientAPI;
	ClientAPI.RegisterPlayFabUser(RegisterPlayFabUserRequest, RegisterPlayFabUserDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Registering Account!"));
}

void ULetEmCookGameInstance::StartMatchmaking()
{
	TSharedPtr<FJsonObject> LatencyItemJson = MakeShared<FJsonObject>();
	LatencyItemJson->SetStringField(TEXT("region"), TEXT("EastUs"));
	LatencyItemJson->SetStringField(TEXT("latency"), TEXT("150"));

	TSharedPtr<FJsonObject> LatencyItemJsonValue = MakeShared<FJsonObject>();
	LatencyItemJsonValue->SetObjectField(TEXT("Latency"), LatencyItemJson);

	TArray<TSharedPtr<FJsonValue>> LatenciesArray;
	LatenciesArray.Add(LatencyItemJsonValue->Values[TEXT("Latency")]);

	TSharedPtr<FJsonObject> LatenciesJson = MakeShared<FJsonObject>();
	LatenciesJson->SetArrayField(TEXT("Latencies"), LatenciesArray);

	TSharedPtr<FJsonObject> AttributesJson = MakeShared<FJsonObject>();
	AttributesJson->SetObjectField(TEXT("DataObject"), LatenciesJson);

	TSharedPtr<FJsonObject> EntityJson = MakeShared<FJsonObject>();
	EntityJson->SetStringField(TEXT("Id"), *EntityToken.Get()->Entity->Id);
	EntityJson->SetStringField(TEXT("Type"), *EntityToken.Get()->Entity->Type);

	TSharedPtr<FJsonObject> CreatorSettingsJson = MakeShared<FJsonObject>();
	CreatorSettingsJson->SetObjectField(TEXT("Attributes"), AttributesJson);
	CreatorSettingsJson->SetObjectField(TEXT("Entity"), EntityJson);

	FMatchmakingPlayer Creator(CreatorSettingsJson);

	FCreateMatchmakingTicketRequest CreateMatchmakingTicketRequest;
	CreateMatchmakingTicketRequest.Creator = CreatorSettingsJson;
	CreateMatchmakingTicketRequest.GiveUpAfterSeconds = TicketRequestGiveUpAfterSeconds;
	CreateMatchmakingTicketRequest.QueueName = QueueName;

	UPlayFabMultiplayerAPI::FCreateMatchmakingTicketDelegate CreateMatchmakingTicketDelegate;
	CreateMatchmakingTicketDelegate.BindUObject(this, &ULetEmCookGameInstance::OnMatchmakingTicketCreationSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabMultiplayerAPI MultiplayerAPI;
	MultiplayerAPI.CreateMatchmakingTicket(CreateMatchmakingTicketRequest, CreateMatchmakingTicketDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Ticket Requested!"));
}

void ULetEmCookGameInstance::CancelMatchmaking()
{
	FCancelMatchmakingTicketRequest CancelMatchmakingTicketRequest;
	CancelMatchmakingTicketRequest.QueueName = QueueName;
	CancelMatchmakingTicketRequest.TicketId = MatchmakingTicketId;

	UPlayFabMultiplayerAPI::FCancelMatchmakingTicketDelegate CancelMatchmakingTicketDelegate;
	CancelMatchmakingTicketDelegate.BindUObject(this, &ULetEmCookGameInstance::OnCancelMatchmakingTicketSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabMultiplayerAPI MultiplayerAPI;
	MultiplayerAPI.CancelMatchmakingTicket(CancelMatchmakingTicketRequest, CancelMatchmakingTicketDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Ticket Canceled!"));
}

void ULetEmCookGameInstance::InitiateServerShutdown()
{
	GetEntityToken();
}

//////////////////////////////////////////////////////////////////////////
// PlayFab Callbacks

void ULetEmCookGameInstance::OnLoginSuccess(const FLoginResult& Result)
{
	OnAuthentication(Result.EntityToken, Result.PlayFabId);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("PlayFab Login Success!"));
}

void ULetEmCookGameInstance::OnRegisterSuccess(const FRegisterPlayFabUserResult& Result)
{
	OnAuthentication(Result.EntityToken, Result.PlayFabId);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("PlayFab Register Success!"));
}

void ULetEmCookGameInstance::OnGetAccountInfoSuccess(const FGetAccountInfoResult& Result)
{
	PlayFabUsername = Result.AccountInfo->Username;

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Account Info Success!"));
}

void ULetEmCookGameInstance::OnMatchmakingTicketCreationSuccess(const FCreateMatchmakingTicketResult& Result)
{
	MatchmakingTicketId = Result.TicketId;

	GetWorld()->GetTimerManager().SetTimer(FindMatchTimerHandle, this, &ULetEmCookGameInstance::GetMatchmakingTicket, FindMatchTime, true, 0.f);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Ticket Created!"));
}

void ULetEmCookGameInstance::OnGetMatchmakingTicketSuccess(const FGetMatchmakingTicketResult& Result)
{
	MatchId = Result.MatchId;
	MatchmakingStatus = Result.Status;

	if (MatchmakingStatus.Compare(TEXT("Matched"), ESearchCase::IgnoreCase) == 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(FindMatchTimerHandle);

		FGetMatchRequest GetMatchRequest;
		GetMatchRequest.MatchId = MatchId;
		GetMatchRequest.QueueName = QueueName;

		UPlayFabMultiplayerAPI::FGetMatchDelegate GetMatchDelegate;
		GetMatchDelegate.BindUObject(this, &ULetEmCookGameInstance::OnGetMatchSuccess);

		FPlayFabErrorDelegate ErrorDelegate;
		ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

		UPlayFabMultiplayerAPI MultiplayerAPI;
		MultiplayerAPI.GetMatch(GetMatchRequest, GetMatchDelegate, ErrorDelegate);

		UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Got Matchmaking Ticket!"));
	}
	else if (MatchmakingStatus.Compare(TEXT("Canceled"), ESearchCase::IgnoreCase) == 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(FindMatchTimerHandle);

		MatchmakingStatus.Empty();

		UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Canceled!"));
	}
}

void ULetEmCookGameInstance::OnGetMatchSuccess(const FGetMatchResult& Result)
{
	MatchId = Result.MatchId;

	TSharedPtr<FServerDetails> ServerDetails = Result.pfServerDetails;

	FString IPv4Address = ServerDetails->IPV4Address;
	int Port = ServerDetails->Ports[0].Num;

	FString ServerAddress = IPv4Address + ":" + FString::FromInt(Port);
	GetFirstLocalPlayerController()->ClientTravel(ServerAddress, TRAVEL_Absolute);

	for (FMatchmakingPlayerWithTeamAssignment Member : Result.Members)
	{
		if (EntityToken->Entity->Id.Compare(Member.Entity.Id, ESearchCase::IgnoreCase) == 0)
		{
			TeamAssignment = Member.TeamId;

			UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Player: %s, Team: %s"), *Member.Entity.Id, *Member.TeamId);
		}
	}

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Got Match!"));
}

void ULetEmCookGameInstance::OnCancelMatchmakingTicketSuccess(const FCancelMatchmakingTicketResult& Result)
{
	GetWorld()->GetTimerManager().ClearTimer(FindMatchTimerHandle);

	MatchmakingStatus.Empty();

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Matchmaking Ticket Canceled!"));
}

void ULetEmCookGameInstance::OnShutdownMultiplayerSeverSuccess(const MultiplayerModels::FEmptyResponse& Response)
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Server Shutdown Success!"));
}

void ULetEmCookGameInstance::OnGetEntityTokenSuccess(const FGetEntityTokenResponse& Response)
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Entity Token Success!"));

	ShutdownServer(Response.EntityToken);
}


void ULetEmCookGameInstance::OnPlayFabError(const FPlayFabCppError& PlayFabCppError)
{
	UE_LOG(LogPlayFabGSDKGameInstance, Error, TEXT("PlayFab Error Report:\n%s"), *PlayFabCppError.GenerateErrorReport());
}

//////////////////////////////////////////////////////////////////////////
// Internals

void ULetEmCookGameInstance::OnAuthentication(TSharedPtr<ClientModels::FEntityTokenResponse> Token, FString Id)
{
	EntityToken = Token;
	PlayFabId = Id;

	UGameplayStatics::OpenLevel(GetWorld(), MainMenuMap, true);

	GetAccountInfo();

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Authentication Success!"));
}

void ULetEmCookGameInstance::GetAccountInfo()
{
	FGetAccountInfoRequest GetAccountInfoRequest;
	GetAccountInfoRequest.PlayFabId = PlayFabId;

	UPlayFabClientAPI::FGetAccountInfoDelegate GetAccountInfoDelegate;
	GetAccountInfoDelegate.BindUObject(this, &ULetEmCookGameInstance::OnGetAccountInfoSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabClientAPI ClientAPI;
	ClientAPI.GetAccountInfo(GetAccountInfoRequest, GetAccountInfoDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Getting Account Info!"));
}

void ULetEmCookGameInstance::GetMatchmakingTicket()
{
	FGetMatchmakingTicketRequest GetMatchmakingTicketRequest;
	GetMatchmakingTicketRequest.QueueName = QueueName;
	GetMatchmakingTicketRequest.TicketId = MatchmakingTicketId;

	UPlayFabMultiplayerAPI::FGetMatchmakingTicketDelegate GetMatchmakingTicketDelegate;
	GetMatchmakingTicketDelegate.BindUObject(this, &ULetEmCookGameInstance::OnGetMatchmakingTicketSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabMultiplayerAPI MultiplayerAPI;
	MultiplayerAPI.GetMatchmakingTicket(GetMatchmakingTicketRequest, GetMatchmakingTicketDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Getting Matchmaking Ticket!"));
}

void ULetEmCookGameInstance::GetEntityToken()
{
	FGetEntityTokenRequest GetEntityTokenRequest;

	UPlayFabAuthenticationAPI::FGetEntityTokenDelegate GetEntityTokenDelegate;
	GetEntityTokenDelegate.BindUObject(this, &ULetEmCookGameInstance::OnGetEntityTokenSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabAuthenticationAPI AuthenticationAPI;
	AuthenticationAPI.GetEntityToken(GetEntityTokenRequest, GetEntityTokenDelegate, ErrorDelegate);
}

void ULetEmCookGameInstance::ShutdownServer(FString EntitySessionToken)
{
	TSharedPtr<UPlayFabAuthenticationContext> AuthContext = MakeSharedUObject<UPlayFabAuthenticationContext>();
	AuthContext->SetEntityToken(EntitySessionToken);

	FShutdownMultiplayerServerRequest ShutdownMultiplayerServerRequest;
	ShutdownMultiplayerServerRequest.SessionId = SessionId;
	ShutdownMultiplayerServerRequest.AuthenticationContext = AuthContext;

	UPlayFabMultiplayerAPI::FShutdownMultiplayerServerDelegate ShutdownMultiplayerServerDelegate;
	ShutdownMultiplayerServerDelegate.BindUObject(this, &ULetEmCookGameInstance::OnShutdownMultiplayerSeverSuccess);

	FPlayFabErrorDelegate ErrorDelegate;
	ErrorDelegate.BindUObject(this, &ULetEmCookGameInstance::OnPlayFabError);

	UPlayFabMultiplayerAPI MultiplayerAPI;
	MultiplayerAPI.ShutdownMultiplayerServer(ShutdownMultiplayerServerRequest, ShutdownMultiplayerServerDelegate, ErrorDelegate);

	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Server Shutdown requested."));
}

void ULetEmCookGameInstance::SetSessionId(const FString& Session)
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Setting Session ID on Server: %s"), *Session);

	if (SessionId.IsEmpty())
	{
		SessionId = Session;
	}
}
