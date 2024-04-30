// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabProfilesAPI.h"
#include "../Classes/PlayFabBaseModel.h"
#include "../Classes/PlayFabProfilesModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesAPI();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabProfilesRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayFabProfilesRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabProfilesRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabProfilesRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) }; // 1203376160
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms
		{
			FProfilesGetGlobalPolicyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms, result), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, METADATA_PARAMS(nullptr, 0) }; // 2781639064
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Account Management\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "/\n Account Management\n\n callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessGetGlobalPolicy__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessGetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGlobalPolicy, FProfilesGetGlobalPolicyResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms
	{
		FProfilesGetGlobalPolicyResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetGlobalPolicy.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms
		{
			FProfilesGetEntityProfileResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms, result), Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, METADATA_PARAMS(nullptr, 0) }; // 189980676
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessGetProfile__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessGetProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfile, FProfilesGetEntityProfileResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms
	{
		FProfilesGetEntityProfileResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetProfile.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms
		{
			FProfilesGetEntityProfilesResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms, result), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, METADATA_PARAMS(nullptr, 0) }; // 1957867284
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessGetProfiles__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessGetProfiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfiles, FProfilesGetEntityProfilesResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms
	{
		FProfilesGetEntityProfilesResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetProfiles.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms
		{
			FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms, result), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, METADATA_PARAMS(nullptr, 0) }; // 2446374524
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds, FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms
	{
		FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms
		{
			FProfilesGetTitlePlayersFromProviderIDsResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms, result), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse, METADATA_PARAMS(nullptr, 0) }; // 60662274
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs, FProfilesGetTitlePlayersFromProviderIDsResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms
	{
		FProfilesGetTitlePlayersFromProviderIDsResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms
		{
			FProfilesSetGlobalPolicyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms, result), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, METADATA_PARAMS(nullptr, 0) }; // 1216262072
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessSetGlobalPolicy__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessSetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGlobalPolicy, FProfilesSetGlobalPolicyResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms
	{
		FProfilesSetGlobalPolicyResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetGlobalPolicy.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms
		{
			FProfilesSetProfileLanguageResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms, result), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, METADATA_PARAMS(nullptr, 0) }; // 1392421154
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessSetProfileLanguage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessSetProfileLanguage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfileLanguage, FProfilesSetProfileLanguageResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms
	{
		FProfilesSetProfileLanguageResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetProfileLanguage.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics
	{
		struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms
		{
			FProfilesSetEntityProfilePolicyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms, result), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, METADATA_PARAMS(nullptr, 0) }; // 2927986483
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "DelegateOnSuccessSetProfilePolicy__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabProfilesAPI::FDelegateOnSuccessSetProfilePolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfilePolicy, FProfilesSetEntityProfilePolicyResponse result, UObject* customData)
{
	struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms
	{
		FProfilesSetEntityProfilePolicyResponse result;
		UObject* customData;
	};
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetProfilePolicy.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperSetProfilePolicy)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperSetProfilePolicy(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execSetProfilePolicy)
	{
		P_GET_STRUCT(FProfilesSetEntityProfilePolicyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::SetProfilePolicy(Z_Param_request,FDelegateOnSuccessSetProfilePolicy(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperSetProfileLanguage)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperSetProfileLanguage(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execSetProfileLanguage)
	{
		P_GET_STRUCT(FProfilesSetProfileLanguageRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::SetProfileLanguage(Z_Param_request,FDelegateOnSuccessSetProfileLanguage(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperSetGlobalPolicy)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperSetGlobalPolicy(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execSetGlobalPolicy)
	{
		P_GET_STRUCT(FProfilesSetGlobalPolicyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::SetGlobalPolicy(Z_Param_request,FDelegateOnSuccessSetGlobalPolicy(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperGetTitlePlayersFromXboxLiveIDs)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetTitlePlayersFromXboxLiveIDs(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execGetTitlePlayersFromXboxLiveIDs)
	{
		P_GET_STRUCT(FProfilesGetTitlePlayersFromXboxLiveIDsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::GetTitlePlayersFromXboxLiveIDs(Z_Param_request,FDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperGetTitlePlayersFromMasterPlayerAccountIds)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetTitlePlayersFromMasterPlayerAccountIds(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execGetTitlePlayersFromMasterPlayerAccountIds)
	{
		P_GET_STRUCT(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds(Z_Param_request,FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperGetProfiles)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetProfiles(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execGetProfiles)
	{
		P_GET_STRUCT(FProfilesGetEntityProfilesRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::GetProfiles(Z_Param_request,FDelegateOnSuccessGetProfiles(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperGetProfile)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetProfile(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execGetProfile)
	{
		P_GET_STRUCT(FProfilesGetEntityProfileRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::GetProfile(Z_Param_request,FDelegateOnSuccessGetProfile(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execHelperGetGlobalPolicy)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetGlobalPolicy(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabProfilesAPI::execGetGlobalPolicy)
	{
		P_GET_STRUCT(FProfilesGetGlobalPolicyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabProfilesAPI**)Z_Param__Result=UPlayFabProfilesAPI::GetGlobalPolicy(Z_Param_request,FDelegateOnSuccessGetGlobalPolicy(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabProfilesAPI::StaticRegisterNativesUPlayFabProfilesAPI()
	{
		UClass* Class = UPlayFabProfilesAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalPolicy", &UPlayFabProfilesAPI::execGetGlobalPolicy },
			{ "GetProfile", &UPlayFabProfilesAPI::execGetProfile },
			{ "GetProfiles", &UPlayFabProfilesAPI::execGetProfiles },
			{ "GetTitlePlayersFromMasterPlayerAccountIds", &UPlayFabProfilesAPI::execGetTitlePlayersFromMasterPlayerAccountIds },
			{ "GetTitlePlayersFromXboxLiveIDs", &UPlayFabProfilesAPI::execGetTitlePlayersFromXboxLiveIDs },
			{ "HelperGetGlobalPolicy", &UPlayFabProfilesAPI::execHelperGetGlobalPolicy },
			{ "HelperGetProfile", &UPlayFabProfilesAPI::execHelperGetProfile },
			{ "HelperGetProfiles", &UPlayFabProfilesAPI::execHelperGetProfiles },
			{ "HelperGetTitlePlayersFromMasterPlayerAccountIds", &UPlayFabProfilesAPI::execHelperGetTitlePlayersFromMasterPlayerAccountIds },
			{ "HelperGetTitlePlayersFromXboxLiveIDs", &UPlayFabProfilesAPI::execHelperGetTitlePlayersFromXboxLiveIDs },
			{ "HelperSetGlobalPolicy", &UPlayFabProfilesAPI::execHelperSetGlobalPolicy },
			{ "HelperSetProfileLanguage", &UPlayFabProfilesAPI::execHelperSetProfileLanguage },
			{ "HelperSetProfilePolicy", &UPlayFabProfilesAPI::execHelperSetProfilePolicy },
			{ "SetGlobalPolicy", &UPlayFabProfilesAPI::execSetGlobalPolicy },
			{ "SetProfileLanguage", &UPlayFabProfilesAPI::execSetProfileLanguage },
			{ "SetProfilePolicy", &UPlayFabProfilesAPI::execSetProfilePolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics
	{
		struct PlayFabProfilesAPI_eventGetGlobalPolicy_Parms
		{
			FProfilesGetGlobalPolicyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetGlobalPolicy_Parms, request), Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest, METADATA_PARAMS(nullptr, 0) }; // 759420975
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetGlobalPolicy_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4069762036
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetGlobalPolicy_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetGlobalPolicy_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Gets the global title access policy */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Gets the global title access policy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "GetGlobalPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::PlayFabProfilesAPI_eventGetGlobalPolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics
	{
		struct PlayFabProfilesAPI_eventGetProfile_Parms
		{
			FProfilesGetEntityProfileRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfile_Parms, request), Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest, METADATA_PARAMS(nullptr, 0) }; // 468062843
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfile_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2679177101
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfile_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfile_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfile_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Retrieves the entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Retrieves the entity's profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "GetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::PlayFabProfilesAPI_eventGetProfile_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics
	{
		struct PlayFabProfilesAPI_eventGetProfiles_Parms
		{
			FProfilesGetEntityProfilesRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfiles_Parms, request), Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest, METADATA_PARAMS(nullptr, 0) }; // 1890335171
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfiles_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3701847812
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfiles_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetProfiles_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Retrieves the entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Retrieves the entity's profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "GetProfiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::PlayFabProfilesAPI_eventGetProfiles_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics
	{
		struct PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms
		{
			FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms, request), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, METADATA_PARAMS(nullptr, 0) }; // 4021459377
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1834616768
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Retrieves the title player accounts associated with the given master player account. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Retrieves the title player accounts associated with the given master player account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "GetTitlePlayersFromMasterPlayerAccountIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::PlayFabProfilesAPI_eventGetTitlePlayersFromMasterPlayerAccountIds_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics
	{
		struct PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms
		{
			FProfilesGetTitlePlayersFromXboxLiveIDsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms, request), Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest, METADATA_PARAMS(nullptr, 0) }; // 1361035228
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3779238958
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Retrieves the title player accounts associated with the given XUIDs. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Retrieves the title player accounts associated with the given XUIDs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "GetTitlePlayersFromXboxLiveIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::PlayFabProfilesAPI_eventGetTitlePlayersFromXboxLiveIDs_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics
	{
		struct PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperGetGlobalPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::PlayFabProfilesAPI_eventHelperGetGlobalPolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics
	{
		struct PlayFabProfilesAPI_eventHelperGetProfile_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetProfile_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetProfile_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperGetProfile_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperGetProfile_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperGetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::PlayFabProfilesAPI_eventHelperGetProfile_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics
	{
		struct PlayFabProfilesAPI_eventHelperGetProfiles_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetProfiles_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetProfiles_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperGetProfiles_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperGetProfiles_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperGetProfiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::PlayFabProfilesAPI_eventHelperGetProfiles_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics
	{
		struct PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperGetTitlePlayersFromMasterPlayerAccountIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::PlayFabProfilesAPI_eventHelperGetTitlePlayersFromMasterPlayerAccountIds_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics
	{
		struct PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperGetTitlePlayersFromXboxLiveIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::PlayFabProfilesAPI_eventHelperGetTitlePlayersFromXboxLiveIDs_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics
	{
		struct PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperSetGlobalPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::PlayFabProfilesAPI_eventHelperSetGlobalPolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics
	{
		struct PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperSetProfileLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::PlayFabProfilesAPI_eventHelperSetProfileLanguage_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics
	{
		struct PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms), &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "// Implements FOnPlayFabProfilesRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabProfilesRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "HelperSetProfilePolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::PlayFabProfilesAPI_eventHelperSetProfilePolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics
	{
		struct PlayFabProfilesAPI_eventSetGlobalPolicy_Parms
		{
			FProfilesSetGlobalPolicyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetGlobalPolicy_Parms, request), Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest, METADATA_PARAMS(nullptr, 0) }; // 4131664584
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetGlobalPolicy_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2946118919
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetGlobalPolicy_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetGlobalPolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetGlobalPolicy_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Sets the global title access policy */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Sets the global title access policy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "SetGlobalPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::PlayFabProfilesAPI_eventSetGlobalPolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics
	{
		struct PlayFabProfilesAPI_eventSetProfileLanguage_Parms
		{
			FProfilesSetProfileLanguageRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfileLanguage_Parms, request), Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest, METADATA_PARAMS(nullptr, 0) }; // 189263084
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfileLanguage_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1895203393
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfileLanguage_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfileLanguage_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfileLanguage_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/**\n     * Updates the entity's language. The precedence hierarchy for communication to the player is Title Player Account\n     * language, Master Player Account language, and then title default language if the first two aren't set or supported.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Updates the entity's language. The precedence hierarchy for communication to the player is Title Player Account\nlanguage, Master Player Account language, and then title default language if the first two aren't set or supported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "SetProfileLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::PlayFabProfilesAPI_eventSetProfileLanguage_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics
	{
		struct PlayFabProfilesAPI_eventSetProfilePolicy_Parms
		{
			FProfilesSetEntityProfilePolicyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabProfilesAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfilePolicy_Parms, request), Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest, METADATA_PARAMS(nullptr, 0) }; // 2275257508
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfilePolicy_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2581872921
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfilePolicy_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3199879575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfilePolicy_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabProfilesAPI_eventSetProfilePolicy_Parms, ReturnValue), Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Profiles | Account Management" },
		{ "Comment", "/** Sets the profiles access policy */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Sets the profiles access policy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabProfilesAPI, nullptr, "SetProfilePolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::PlayFabProfilesAPI_eventSetProfilePolicy_Parms), Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabProfilesAPI);
	UClass* Z_Construct_UClass_UPlayFabProfilesAPI_NoRegister()
	{
		return UPlayFabProfilesAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayFabProfilesAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabProfilesAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 3199879575
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetGlobalPolicy__DelegateSignature, "DelegateOnSuccessGetGlobalPolicy__DelegateSignature" }, // 4069762036
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfile__DelegateSignature, "DelegateOnSuccessGetProfile__DelegateSignature" }, // 2679177101
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetProfiles__DelegateSignature, "DelegateOnSuccessGetProfiles__DelegateSignature" }, // 3701847812
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature, "DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature" }, // 1834616768
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature, "DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs__DelegateSignature" }, // 3779238958
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetGlobalPolicy__DelegateSignature, "DelegateOnSuccessSetGlobalPolicy__DelegateSignature" }, // 2946118919
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfileLanguage__DelegateSignature, "DelegateOnSuccessSetProfileLanguage__DelegateSignature" }, // 1895203393
		{ &Z_Construct_UDelegateFunction_UPlayFabProfilesAPI_DelegateOnSuccessSetProfilePolicy__DelegateSignature, "DelegateOnSuccessSetProfilePolicy__DelegateSignature" }, // 2581872921
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_GetGlobalPolicy, "GetGlobalPolicy" }, // 136920579
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfile, "GetProfile" }, // 517130581
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_GetProfiles, "GetProfiles" }, // 3945885930
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromMasterPlayerAccountIds, "GetTitlePlayersFromMasterPlayerAccountIds" }, // 3147621904
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_GetTitlePlayersFromXboxLiveIDs, "GetTitlePlayersFromXboxLiveIDs" }, // 4194626051
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetGlobalPolicy, "HelperGetGlobalPolicy" }, // 1134068504
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfile, "HelperGetProfile" }, // 2876053991
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetProfiles, "HelperGetProfiles" }, // 4031226551
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromMasterPlayerAccountIds, "HelperGetTitlePlayersFromMasterPlayerAccountIds" }, // 43844976
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperGetTitlePlayersFromXboxLiveIDs, "HelperGetTitlePlayersFromXboxLiveIDs" }, // 1341551179
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetGlobalPolicy, "HelperSetGlobalPolicy" }, // 1452085004
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfileLanguage, "HelperSetProfileLanguage" }, // 2105857825
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_HelperSetProfilePolicy, "HelperSetProfilePolicy" }, // 2082409060
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_SetGlobalPolicy, "SetGlobalPolicy" }, // 2417241062
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfileLanguage, "SetProfileLanguage" }, // 2734144269
		{ &Z_Construct_UFunction_UPlayFabProfilesAPI_SetProfilePolicy, "SetProfilePolicy" }, // 1951722676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabProfilesAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabProfilesAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabProfilesRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) }; // 1291186734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabProfilesAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabProfilesAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabProfilesAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabProfilesAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_OnPlayFabResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_CallAuthenticationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabProfilesAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabProfilesAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabProfilesAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabProfilesAPI_Statics::ClassParams = {
		&UPlayFabProfilesAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabProfilesAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabProfilesAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabProfilesAPI()
	{
		if (!Z_Registration_Info_UClass_UPlayFabProfilesAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabProfilesAPI.OuterSingleton, Z_Construct_UClass_UPlayFabProfilesAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabProfilesAPI.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabProfilesAPI>()
	{
		return UPlayFabProfilesAPI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabProfilesAPI);
	UPlayFabProfilesAPI::~UPlayFabProfilesAPI() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabProfilesAPI, UPlayFabProfilesAPI::StaticClass, TEXT("UPlayFabProfilesAPI"), &Z_Registration_Info_UClass_UPlayFabProfilesAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabProfilesAPI), 1857787309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_3668647687(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
