// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabMatchmakerModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerAuthUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerAuthUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest;
class UScriptStruct* FMatchmakerAuthUserRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerAuthUserRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerAuthUserRequest>()
{
	return FMatchmakerAuthUserRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorizationTicket_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthorizationTicket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This API allows the external match-making service to confirm that the user has a valid Session Ticket for the title, in\n * order to securely enable match-making. The client passes the user's Session Ticket to the external match-making service,\n * which then passes the Session Ticket in as the AuthorizationTicket in this call.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "This API allows the external match-making service to confirm that the user has a valid Session Ticket for the title, in\norder to securely enable match-making. The client passes the user's Session Ticket to the external match-making service,\nwhich then passes the Session Ticket in as the AuthorizationTicket in this call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerAuthUserRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Session Ticket provided by the client. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Session Ticket provided by the client." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket = { "AuthorizationTicket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerAuthUserRequest, AuthorizationTicket), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerAuthUserRequest",
		sizeof(FMatchmakerAuthUserRequest),
		alignof(FMatchmakerAuthUserRequest),
		Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerAuthUserResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerAuthUserResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse;
class UScriptStruct* FMatchmakerAuthUserResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerAuthUserResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerAuthUserResponse>()
{
	return FMatchmakerAuthUserResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerAuthUserResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Boolean indicating if the user has been authorized to use the external match-making service. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Boolean indicating if the user has been authorized to use the external match-making service." },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FMatchmakerAuthUserResponse*)Obj)->Authorized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchmakerAuthUserResponse), &Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the account that has been authorized. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the account that has been authorized." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerAuthUserResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerAuthUserResponse",
		sizeof(FMatchmakerAuthUserResponse),
		alignof(FMatchmakerAuthUserResponse),
		Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerPlayerJoinedRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerPlayerJoinedRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest;
class UScriptStruct* FMatchmakerPlayerJoinedRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerJoinedRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerJoinedRequest>()
{
	return FMatchmakerPlayerJoinedRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerJoinedRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the\n     * Matchmaker/StartGame API.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the\nMatchmaker/StartGame API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier for the player joining. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier for the player joining." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerPlayerJoinedRequest",
		sizeof(FMatchmakerPlayerJoinedRequest),
		alignof(FMatchmakerPlayerJoinedRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerPlayerJoinedResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerPlayerJoinedResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse;
class UScriptStruct* FMatchmakerPlayerJoinedResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerJoinedResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerJoinedResponse>()
{
	return FMatchmakerPlayerJoinedResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerJoinedResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerPlayerJoinedResponse",
		sizeof(FMatchmakerPlayerJoinedResponse),
		alignof(FMatchmakerPlayerJoinedResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerPlayerLeftRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerPlayerLeftRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest;
class UScriptStruct* FMatchmakerPlayerLeftRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerLeftRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerLeftRequest>()
{
	return FMatchmakerPlayerLeftRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerLeftRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the\n     * Matchmaker/StartGame API.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the\nMatchmaker/StartGame API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier for the player leaving. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier for the player leaving." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerPlayerLeftRequest",
		sizeof(FMatchmakerPlayerLeftRequest),
		alignof(FMatchmakerPlayerLeftRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerPlayerLeftResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerPlayerLeftResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse;
class UScriptStruct* FMatchmakerPlayerLeftResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerLeftResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerLeftResponse>()
{
	return FMatchmakerPlayerLeftResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerLeftResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerPlayerLeftResponse",
		sizeof(FMatchmakerPlayerLeftResponse),
		alignof(FMatchmakerPlayerLeftResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerUserInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerUserInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest;
class UScriptStruct* FMatchmakerUserInfoRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerUserInfoRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerUserInfoRequest>()
{
	return FMatchmakerUserInfoRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCatalogVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinCatalogVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerUserInfoRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a\n     * catalog version of this or higher).\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a\ncatalog version of this or higher)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion = { "MinCatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoRequest, MinCatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the user whose information is being requested. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the user whose information is being requested." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerUserInfoRequest",
		sizeof(FMatchmakerUserInfoRequest),
		alignof(FMatchmakerUserInfoRequest),
		Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMatchmakerUserInfoResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerUserInfoResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse;
class UScriptStruct* FMatchmakerUserInfoResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerUserInfoResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerUserInfoResponse>()
{
	return FMatchmakerUserInfoResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDeveloper_MetaData[];
#endif
		static void NewProp_IsDeveloper_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeveloper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitleDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencyRechargeTimes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencyRechargeTimes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerUserInfoResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of inventory items in the user's current inventory. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of inventory items in the user's current inventory." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Boolean indicating whether the user is a developer. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Boolean indicating whether the user is a developer." },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit(void* Obj)
	{
		((FMatchmakerUserInfoResponse*)Obj)->IsDeveloper = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper = { "IsDeveloper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchmakerUserInfoResponse), &Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the user whose information was requested. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the user whose information was requested." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Steam unique identifier, if the user has an associated Steam account. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Steam unique identifier, if the user has an associated Steam account." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, SteamId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Title specific display name, if set. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Title specific display name, if set." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName = { "TitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, TitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique user name. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique user name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of virtual currency balance(s) belonging to the user. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of virtual currency balance(s) belonging to the user." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrency), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of remaining times and timestamps for virtual currencies. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of remaining times and timestamps for virtual currencies." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes = { "VirtualCurrencyRechargeTimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrencyRechargeTimes), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerUserInfoResponse",
		sizeof(FMatchmakerUserInfoResponse),
		alignof(FMatchmakerUserInfoResponse),
		Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModels_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerAuthUserRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewStructOps, TEXT("MatchmakerAuthUserRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerAuthUserRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerAuthUserRequest), 536652757U) },
		{ FMatchmakerAuthUserResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewStructOps, TEXT("MatchmakerAuthUserResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerAuthUserResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerAuthUserResponse), 4152380234U) },
		{ FMatchmakerPlayerJoinedRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewStructOps, TEXT("MatchmakerPlayerJoinedRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayerJoinedRequest), 3700922742U) },
		{ FMatchmakerPlayerJoinedResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::NewStructOps, TEXT("MatchmakerPlayerJoinedResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayerJoinedResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayerJoinedResponse), 286416917U) },
		{ FMatchmakerPlayerLeftRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewStructOps, TEXT("MatchmakerPlayerLeftRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayerLeftRequest), 653058498U) },
		{ FMatchmakerPlayerLeftResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::NewStructOps, TEXT("MatchmakerPlayerLeftResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayerLeftResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayerLeftResponse), 3397007784U) },
		{ FMatchmakerUserInfoRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewStructOps, TEXT("MatchmakerUserInfoRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerUserInfoRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerUserInfoRequest), 468688398U) },
		{ FMatchmakerUserInfoResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewStructOps, TEXT("MatchmakerUserInfoResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerUserInfoResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerUserInfoResponse), 561383855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModels_h_4145138765(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
