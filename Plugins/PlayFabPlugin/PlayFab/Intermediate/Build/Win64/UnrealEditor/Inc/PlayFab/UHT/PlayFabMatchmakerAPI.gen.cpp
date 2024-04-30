// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabMatchmakerAPI.h"
#include "../Classes/PlayFabBaseModel.h"
#include "../Classes/PlayFabMatchmakerModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabMatchmakerRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayFabMatchmakerRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabMatchmakerRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabMatchmakerRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms
		{
			FPlayFabError error;
			UObject* customData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_error;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) }; // 1203376160
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabMatchmakerAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms
		{
			FMatchmakerAuthUserResponse result;
			UObject* customData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms, result), Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, METADATA_PARAMS(nullptr, 0) }; // 4152380234
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Matchmaking\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "/\n Matchmaking\n\n callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessAuthUser__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabMatchmakerAPI::FDelegateOnSuccessAuthUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthUser, FMatchmakerAuthUserResponse result, UObject* customData)
{
	struct PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms
	{
		FMatchmakerAuthUserResponse result;
		UObject* customData;
	};
	PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessAuthUser.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms
		{
			FMatchmakerPlayerJoinedResponse result;
			UObject* customData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms, result), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, METADATA_PARAMS(nullptr, 0) }; // 286416917
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessPlayerJoined__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerJoined_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerJoined, FMatchmakerPlayerJoinedResponse result, UObject* customData)
{
	struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms
	{
		FMatchmakerPlayerJoinedResponse result;
		UObject* customData;
	};
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPlayerJoined.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms
		{
			FMatchmakerPlayerLeftResponse result;
			UObject* customData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms, result), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, METADATA_PARAMS(nullptr, 0) }; // 3397007784
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessPlayerLeft__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabMatchmakerAPI::FDelegateOnSuccessPlayerLeft_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerLeft, FMatchmakerPlayerLeftResponse result, UObject* customData)
{
	struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms
	{
		FMatchmakerPlayerLeftResponse result;
		UObject* customData;
	};
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPlayerLeft.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics
	{
		struct PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms
		{
			FMatchmakerUserInfoResponse result;
			UObject* customData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms, result), Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, METADATA_PARAMS(nullptr, 0) }; // 561383855
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "DelegateOnSuccessUserInfo__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabMatchmakerAPI::FDelegateOnSuccessUserInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUserInfo, FMatchmakerUserInfoResponse result, UObject* customData)
{
	struct PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms
	{
		FMatchmakerUserInfoResponse result;
		UObject* customData;
	};
	PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUserInfo.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperUserInfo)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperUserInfo(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execUserInfo)
	{
		P_GET_STRUCT(FMatchmakerUserInfoRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::UserInfo(Z_Param_request,FDelegateOnSuccessUserInfo(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperPlayerLeft)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPlayerLeft(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execPlayerLeft)
	{
		P_GET_STRUCT(FMatchmakerPlayerLeftRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::PlayerLeft(Z_Param_request,FDelegateOnSuccessPlayerLeft(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperPlayerJoined)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPlayerJoined(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execPlayerJoined)
	{
		P_GET_STRUCT(FMatchmakerPlayerJoinedRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::PlayerJoined(Z_Param_request,FDelegateOnSuccessPlayerJoined(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execHelperAuthUser)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperAuthUser(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerAPI::execAuthUser)
	{
		P_GET_STRUCT(FMatchmakerAuthUserRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabMatchmakerAPI**)Z_Param__Result=UPlayFabMatchmakerAPI::AuthUser(Z_Param_request,FDelegateOnSuccessAuthUser(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabMatchmakerAPI::StaticRegisterNativesUPlayFabMatchmakerAPI()
	{
		UClass* Class = UPlayFabMatchmakerAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthUser", &UPlayFabMatchmakerAPI::execAuthUser },
			{ "HelperAuthUser", &UPlayFabMatchmakerAPI::execHelperAuthUser },
			{ "HelperPlayerJoined", &UPlayFabMatchmakerAPI::execHelperPlayerJoined },
			{ "HelperPlayerLeft", &UPlayFabMatchmakerAPI::execHelperPlayerLeft },
			{ "HelperUserInfo", &UPlayFabMatchmakerAPI::execHelperUserInfo },
			{ "PlayerJoined", &UPlayFabMatchmakerAPI::execPlayerJoined },
			{ "PlayerLeft", &UPlayFabMatchmakerAPI::execPlayerLeft },
			{ "UserInfo", &UPlayFabMatchmakerAPI::execUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics
	{
		struct PlayFabMatchmakerAPI_eventAuthUser_Parms
		{
			FMatchmakerAuthUserRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, request), Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest, METADATA_PARAMS(nullptr, 0) }; // 536652757
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2392531192
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4125754449
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventAuthUser_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Validates a user with the PlayFab service */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Validates a user with the PlayFab service" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "AuthUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PlayFabMatchmakerAPI_eventAuthUser_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperAuthUser_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperAuthUser_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperAuthUser_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperAuthUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PlayFabMatchmakerAPI_eventHelperAuthUser_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperPlayerJoined", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PlayFabMatchmakerAPI_eventHelperPlayerJoined_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperPlayerLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PlayFabMatchmakerAPI_eventHelperPlayerLeft_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics
	{
		struct PlayFabMatchmakerAPI_eventHelperUserInfo_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_response;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabMatchmakerAPI_eventHelperUserInfo_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabMatchmakerAPI_eventHelperUserInfo_Parms), &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "// Implements FOnPlayFabMatchmakerRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabMatchmakerRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "HelperUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PlayFabMatchmakerAPI_eventHelperUserInfo_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics
	{
		struct PlayFabMatchmakerAPI_eventPlayerJoined_Parms
		{
			FMatchmakerPlayerJoinedRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, request), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest, METADATA_PARAMS(nullptr, 0) }; // 3700922742
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1929424520
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4125754449
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerJoined_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Informs the PlayFab game server hosting service that the indicated user has joined the Game Server Instance specified */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Informs the PlayFab game server hosting service that the indicated user has joined the Game Server Instance specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "PlayerJoined", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PlayFabMatchmakerAPI_eventPlayerJoined_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics
	{
		struct PlayFabMatchmakerAPI_eventPlayerLeft_Parms
		{
			FMatchmakerPlayerLeftRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, request), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest, METADATA_PARAMS(nullptr, 0) }; // 653058498
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4066596343
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4125754449
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventPlayerLeft_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/** Informs the PlayFab game server hosting service that the indicated user has left the Game Server Instance specified */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Informs the PlayFab game server hosting service that the indicated user has left the Game Server Instance specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "PlayerLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PlayFabMatchmakerAPI_eventPlayerLeft_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics
	{
		struct PlayFabMatchmakerAPI_eventUserInfo_Parms
		{
			FMatchmakerUserInfoRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabMatchmakerAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, request), Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest, METADATA_PARAMS(nullptr, 0) }; // 468688398
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3485541767
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4125754449
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerAPI_eventUserInfo_Parms, ReturnValue), Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Matchmaker | Matchmaking" },
		{ "Comment", "/**\n     * Retrieves the relevant details for a specified user, which the external match-making service can then use to compute\n     * effective matches\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Retrieves the relevant details for a specified user, which the external match-making service can then use to compute\neffective matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerAPI, nullptr, "UserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PlayFabMatchmakerAPI_eventUserInfo_Parms), Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabMatchmakerAPI);
	UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI_NoRegister()
	{
		return UPlayFabMatchmakerAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayFabResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CallAuthenticationContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_AuthUser, "AuthUser" }, // 3077102663
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 4125754449
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessAuthUser__DelegateSignature, "DelegateOnSuccessAuthUser__DelegateSignature" }, // 2392531192
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerJoined__DelegateSignature, "DelegateOnSuccessPlayerJoined__DelegateSignature" }, // 1929424520
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessPlayerLeft__DelegateSignature, "DelegateOnSuccessPlayerLeft__DelegateSignature" }, // 4066596343
		{ &Z_Construct_UDelegateFunction_UPlayFabMatchmakerAPI_DelegateOnSuccessUserInfo__DelegateSignature, "DelegateOnSuccessUserInfo__DelegateSignature" }, // 3485541767
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperAuthUser, "HelperAuthUser" }, // 2706575613
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerJoined, "HelperPlayerJoined" }, // 2561189215
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperPlayerLeft, "HelperPlayerLeft" }, // 226267921
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_HelperUserInfo, "HelperUserInfo" }, // 1475156942
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerJoined, "PlayerJoined" }, // 3859288901
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_PlayerLeft, "PlayerLeft" }, // 158442208
		{ &Z_Construct_UFunction_UPlayFabMatchmakerAPI_UserInfo, "UserInfo" }, // 1463426327
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabMatchmakerAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabMatchmakerAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabMatchmakerRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) }; // 1875571715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabMatchmakerAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabMatchmakerAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabMatchmakerAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_OnPlayFabResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_CallAuthenticationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabMatchmakerAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::ClassParams = {
		&UPlayFabMatchmakerAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabMatchmakerAPI()
	{
		if (!Z_Registration_Info_UClass_UPlayFabMatchmakerAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabMatchmakerAPI.OuterSingleton, Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabMatchmakerAPI.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabMatchmakerAPI>()
	{
		return UPlayFabMatchmakerAPI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabMatchmakerAPI);
	UPlayFabMatchmakerAPI::~UPlayFabMatchmakerAPI() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabMatchmakerAPI, UPlayFabMatchmakerAPI::StaticClass, TEXT("UPlayFabMatchmakerAPI"), &Z_Registration_Info_UClass_UPlayFabMatchmakerAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabMatchmakerAPI), 2420827956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_2315574391(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
