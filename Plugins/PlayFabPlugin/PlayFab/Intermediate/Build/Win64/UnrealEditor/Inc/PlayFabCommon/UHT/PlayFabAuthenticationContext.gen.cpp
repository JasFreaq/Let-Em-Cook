// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabAuthenticationContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execClientAdminSecurityCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdminSecurityCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execForgetAllCredentials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAllCredentials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetPlayFabId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayFabId(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetPlayFabId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayFabId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetDeveloperSecretKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeveloperSecretKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetDeveloperSecretKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeveloperSecretKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetEntityToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntityToken(Z_Param_InToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetEntityToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEntityToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execSetClientSessionTicket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTicket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClientSessionTicket(Z_Param_InTicket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationContext::execGetClientSessionTicket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClientSessionTicket();
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationContext::StaticRegisterNativesUPlayFabAuthenticationContext()
	{
		UClass* Class = UPlayFabAuthenticationContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAdminSecurityCheck", &UPlayFabAuthenticationContext::execClientAdminSecurityCheck },
			{ "ForgetAllCredentials", &UPlayFabAuthenticationContext::execForgetAllCredentials },
			{ "GetClientSessionTicket", &UPlayFabAuthenticationContext::execGetClientSessionTicket },
			{ "GetDeveloperSecretKey", &UPlayFabAuthenticationContext::execGetDeveloperSecretKey },
			{ "GetEntityToken", &UPlayFabAuthenticationContext::execGetEntityToken },
			{ "GetPlayFabId", &UPlayFabAuthenticationContext::execGetPlayFabId },
			{ "SetClientSessionTicket", &UPlayFabAuthenticationContext::execSetClientSessionTicket },
			{ "SetDeveloperSecretKey", &UPlayFabAuthenticationContext::execSetDeveloperSecretKey },
			{ "SetEntityToken", &UPlayFabAuthenticationContext::execSetEntityToken },
			{ "SetPlayFabId", &UPlayFabAuthenticationContext::execSetPlayFabId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ClientAdminSecurityCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Reset all fields\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Reset all fields" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "ForgetAllCredentials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics
	{
		struct PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Get the client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Get the client session ticket that is used as an authentication token in many PlayFab API methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetClientSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventGetClientSessionTicket_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics
	{
		struct PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Get the developer secret key. These keys can be used in server environments.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Get the developer secret key. These keys can be used in server environments." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetDeveloperSecretKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventGetDeveloperSecretKey_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics
	{
		struct PlayFabAuthenticationContext_eventGetEntityToken_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetEntityToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Get the user's entity token. Entity tokens are required by all Entity API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Get the user's entity token. Entity tokens are required by all Entity API methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetEntityToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PlayFabAuthenticationContext_eventGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics
	{
		struct PlayFabAuthenticationContext_eventGetPlayFabId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventGetPlayFabId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Get the player's unique PlayFabId.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Get the player's unique PlayFabId." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "GetPlayFabId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PlayFabAuthenticationContext_eventGetPlayFabId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics
	{
		struct PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms
		{
			FString InTicket;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTicket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket = { "InTicket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms, InTicket), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::NewProp_InTicket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Set the client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Set the client session ticket that is used as an authentication token in many PlayFab API methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetClientSessionTicket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PlayFabAuthenticationContext_eventSetClientSessionTicket_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics
	{
		struct PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms
		{
			FString InKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Set the developer secret key. These keys can be used in server environments.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Set the developer secret key. These keys can be used in server environments." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetDeveloperSecretKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PlayFabAuthenticationContext_eventSetDeveloperSecretKey_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics
	{
		struct PlayFabAuthenticationContext_eventSetEntityToken_Parms
		{
			FString InToken;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken = { "InToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetEntityToken_Parms, InToken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::NewProp_InToken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Set the user's entity token. Entity tokens are required by all Entity API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Set the user's entity token. Entity tokens are required by all Entity API methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetEntityToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PlayFabAuthenticationContext_eventSetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics
	{
		struct PlayFabAuthenticationContext_eventSetPlayFabId_Parms
		{
			FString InKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationContext_eventSetPlayFabId_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// Set the player's unique PlayFabId.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Set the player's unique PlayFabId." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationContext, nullptr, "SetPlayFabId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PlayFabAuthenticationContext_eventSetPlayFabId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabAuthenticationContext);
	UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister()
	{
		return UPlayFabAuthenticationContext::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSessionTicket_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSessionTicket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ClientAdminSecurityCheck, "ClientAdminSecurityCheck" }, // 2710269381
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_ForgetAllCredentials, "ForgetAllCredentials" }, // 2281424838
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetClientSessionTicket, "GetClientSessionTicket" }, // 1120511471
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetDeveloperSecretKey, "GetDeveloperSecretKey" }, // 1685376629
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetEntityToken, "GetEntityToken" }, // 1286815092
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_GetPlayFabId, "GetPlayFabId" }, // 1123746939
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetClientSessionTicket, "SetClientSessionTicket" }, // 1028047758
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetDeveloperSecretKey, "SetDeveloperSecretKey" }, // 2543263276
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetEntityToken, "SetEntityToken" }, // 405481359
		{ &Z_Construct_UFunction_UPlayFabAuthenticationContext_SetPlayFabId, "SetPlayFabId" }, // 1237241746
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Container for PlayFab authentication credentials data.\n*/" },
		{ "IncludePath", "PlayFabAuthenticationContext.h" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Container for PlayFab authentication credentials data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData[] = {
		{ "Comment", "// Client session ticket that is used as an authentication token in many PlayFab API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Client session ticket that is used as an authentication token in many PlayFab API methods." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket = { "ClientSessionTicket", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabAuthenticationContext, ClientSessionTicket), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData[] = {
		{ "Comment", "// User's entity token. Entity tokens are required by all Entity API methods.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "User's entity token. Entity tokens are required by all Entity API methods." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabAuthenticationContext, EntityToken), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData[] = {
		{ "Comment", "// Developer secret key. These keys can be used in server environments.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "Developer secret key. These keys can be used in server environments." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabAuthenticationContext, DeveloperSecretKey), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Comment", "// The player's unique PlayFabId.\n" },
		{ "ModuleRelativePath", "Public/PlayFabAuthenticationContext.h" },
		{ "ToolTip", "The player's unique PlayFabId." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabAuthenticationContext, PlayFabId), METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_ClientSessionTicket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_EntityToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_DeveloperSecretKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::NewProp_PlayFabId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams = {
		&UPlayFabAuthenticationContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationContext()
	{
		if (!Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton, Z_Construct_UClass_UPlayFabAuthenticationContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabAuthenticationContext.OuterSingleton;
	}
	template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabAuthenticationContext>()
	{
		return UPlayFabAuthenticationContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationContext);
	UPlayFabAuthenticationContext::~UPlayFabAuthenticationContext() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabAuthenticationContext, UPlayFabAuthenticationContext::StaticClass, TEXT("UPlayFabAuthenticationContext"), &Z_Registration_Info_UClass_UPlayFabAuthenticationContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabAuthenticationContext), 1859445198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_2205808691(TEXT("/Script/PlayFabCommon"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabAuthenticationContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
