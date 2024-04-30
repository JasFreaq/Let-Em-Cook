// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabEventsAPI.h"
#include "../Classes/PlayFabBaseModel.h"
#include "../Classes/PlayFabEventsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsAPI();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsAPI_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabEventsRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayFabEventsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEventsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabEventsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) }; // 1203376160
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms
		{
			FEventsCreateTelemetryKeyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) }; // 3629178358
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// PlayStream Events\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "/\n PlayStream Events\n\n callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessCreateTelemetryKey__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessCreateTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTelemetryKey, FEventsCreateTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms
	{
		FEventsCreateTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessCreateTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms
		{
			FEventsDeleteTelemetryKeyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) }; // 3200916101
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessDeleteTelemetryKey__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessDeleteTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTelemetryKey, FEventsDeleteTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms
	{
		FEventsDeleteTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessDeleteTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms
		{
			FEventsGetTelemetryKeyResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms, result), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) }; // 1845952931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessGetTelemetryKey__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessGetTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTelemetryKey, FEventsGetTelemetryKeyResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms
	{
		FEventsGetTelemetryKeyResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetTelemetryKey.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms
		{
			FEventsListTelemetryKeysResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms, result), Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, METADATA_PARAMS(nullptr, 0) }; // 483537787
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessListTelemetryKeys__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessListTelemetryKeys_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTelemetryKeys, FEventsListTelemetryKeysResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms
	{
		FEventsListTelemetryKeysResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListTelemetryKeys.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms
		{
			FEventsSetTelemetryKeyActiveResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms, result), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, METADATA_PARAMS(nullptr, 0) }; // 1842938461
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessSetTelemetryKeyActive_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTelemetryKeyActive, FEventsSetTelemetryKeyActiveResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms
	{
		FEventsSetTelemetryKeyActiveResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessSetTelemetryKeyActive.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms
		{
			FEventsWriteEventsResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms, result), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(nullptr, 0) }; // 2690361904
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessWriteEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessWriteEvents.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics
	{
		struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms
		{
			FEventsWriteEventsResponse result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms, result), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(nullptr, 0) }; // 2690361904
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DelegateOnSuccessWriteTelemetryEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabEventsAPI::FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse result, UObject* customData)
{
	struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms
	{
		FEventsWriteEventsResponse result;
		UObject* customData;
	};
	PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessWriteTelemetryEvents.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperWriteTelemetryEvents)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperWriteTelemetryEvents(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteTelemetryEventsWithTelemetryKey)
	{
		P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
		P_GET_PROPERTY(FStrProperty,Z_Param_telemetryKey);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteTelemetryEventsWithTelemetryKey(Z_Param_request,Z_Param_telemetryKey,FDelegateOnSuccessWriteTelemetryEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteTelemetryEvents)
	{
		P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteTelemetryEvents(Z_Param_request,FDelegateOnSuccessWriteTelemetryEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperWriteEvents)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperWriteEvents(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execWriteEvents)
	{
		P_GET_STRUCT(FEventsWriteEventsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::WriteEvents(Z_Param_request,FDelegateOnSuccessWriteEvents(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperSetTelemetryKeyActive)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperSetTelemetryKeyActive(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execSetTelemetryKeyActive)
	{
		P_GET_STRUCT(FEventsSetTelemetryKeyActiveRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::SetTelemetryKeyActive(Z_Param_request,FDelegateOnSuccessSetTelemetryKeyActive(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperListTelemetryKeys)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperListTelemetryKeys(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execListTelemetryKeys)
	{
		P_GET_STRUCT(FEventsListTelemetryKeysRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::ListTelemetryKeys(Z_Param_request,FDelegateOnSuccessListTelemetryKeys(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperGetTelemetryKey)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execGetTelemetryKey)
	{
		P_GET_STRUCT(FEventsGetTelemetryKeyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::GetTelemetryKey(Z_Param_request,FDelegateOnSuccessGetTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperDeleteTelemetryKey)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperDeleteTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execDeleteTelemetryKey)
	{
		P_GET_STRUCT(FEventsDeleteTelemetryKeyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::DeleteTelemetryKey(Z_Param_request,FDelegateOnSuccessDeleteTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execHelperCreateTelemetryKey)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperCreateTelemetryKey(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsAPI::execCreateTelemetryKey)
	{
		P_GET_STRUCT(FEventsCreateTelemetryKeyRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabEventsAPI**)Z_Param__Result=UPlayFabEventsAPI::CreateTelemetryKey(Z_Param_request,FDelegateOnSuccessCreateTelemetryKey(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabEventsAPI::StaticRegisterNativesUPlayFabEventsAPI()
	{
		UClass* Class = UPlayFabEventsAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTelemetryKey", &UPlayFabEventsAPI::execCreateTelemetryKey },
			{ "DeleteTelemetryKey", &UPlayFabEventsAPI::execDeleteTelemetryKey },
			{ "GetTelemetryKey", &UPlayFabEventsAPI::execGetTelemetryKey },
			{ "HelperCreateTelemetryKey", &UPlayFabEventsAPI::execHelperCreateTelemetryKey },
			{ "HelperDeleteTelemetryKey", &UPlayFabEventsAPI::execHelperDeleteTelemetryKey },
			{ "HelperGetTelemetryKey", &UPlayFabEventsAPI::execHelperGetTelemetryKey },
			{ "HelperListTelemetryKeys", &UPlayFabEventsAPI::execHelperListTelemetryKeys },
			{ "HelperSetTelemetryKeyActive", &UPlayFabEventsAPI::execHelperSetTelemetryKeyActive },
			{ "HelperWriteEvents", &UPlayFabEventsAPI::execHelperWriteEvents },
			{ "HelperWriteTelemetryEvents", &UPlayFabEventsAPI::execHelperWriteTelemetryEvents },
			{ "ListTelemetryKeys", &UPlayFabEventsAPI::execListTelemetryKeys },
			{ "SetTelemetryKeyActive", &UPlayFabEventsAPI::execSetTelemetryKeyActive },
			{ "WriteEvents", &UPlayFabEventsAPI::execWriteEvents },
			{ "WriteTelemetryEvents", &UPlayFabEventsAPI::execWriteTelemetryEvents },
			{ "WriteTelemetryEventsWithTelemetryKey", &UPlayFabEventsAPI::execWriteTelemetryEventsWithTelemetryKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventCreateTelemetryKey_Parms
		{
			FEventsCreateTelemetryKeyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest, METADATA_PARAMS(nullptr, 0) }; // 658858662
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 34794503
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventCreateTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Creates a new telemetry key for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Creates a new telemetry key for the title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "CreateTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PlayFabEventsAPI_eventCreateTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventDeleteTelemetryKey_Parms
		{
			FEventsDeleteTelemetryKeyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest, METADATA_PARAMS(nullptr, 0) }; // 638034048
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1834257922
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventDeleteTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Deletes a telemetry key configured for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Deletes a telemetry key configured for the title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "DeleteTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PlayFabEventsAPI_eventDeleteTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventGetTelemetryKey_Parms
		{
			FEventsGetTelemetryKeyRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest, METADATA_PARAMS(nullptr, 0) }; // 1961851806
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2794379531
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventGetTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Gets information about a telemetry key configured for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Gets information about a telemetry key configured for the title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "GetTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PlayFabEventsAPI_eventGetTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperCreateTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PlayFabEventsAPI_eventHelperCreateTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperDeleteTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PlayFabEventsAPI_eventHelperDeleteTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperGetTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PlayFabEventsAPI_eventHelperGetTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics
	{
		struct PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperListTelemetryKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PlayFabEventsAPI_eventHelperListTelemetryKeys_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics
	{
		struct PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperSetTelemetryKeyActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventHelperSetTelemetryKeyActive_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics
	{
		struct PlayFabEventsAPI_eventHelperWriteEvents_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteEvents_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperWriteEvents_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperWriteEvents_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperWriteEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PlayFabEventsAPI_eventHelperWriteEvents_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics
	{
		struct PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms), &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "// Implements FOnPlayFabEventsRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabEventsRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "HelperWriteTelemetryEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PlayFabEventsAPI_eventHelperWriteTelemetryEvents_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics
	{
		struct PlayFabEventsAPI_eventListTelemetryKeys_Parms
		{
			FEventsListTelemetryKeysRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, request), Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest, METADATA_PARAMS(nullptr, 0) }; // 4207896548
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2854648430
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventListTelemetryKeys_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Lists all telemetry keys configured for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Lists all telemetry keys configured for the title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "ListTelemetryKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PlayFabEventsAPI_eventListTelemetryKeys_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics
	{
		struct PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms
		{
			FEventsSetTelemetryKeyActiveRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, request), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest, METADATA_PARAMS(nullptr, 0) }; // 4087037754
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4258552542
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Sets a telemetry key to the active or deactivated state. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Sets a telemetry key to the active or deactivated state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "SetTelemetryKeyActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PlayFabEventsAPI_eventSetTelemetryKeyActive_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics
	{
		struct PlayFabEventsAPI_eventWriteEvents_Parms
		{
			FEventsWriteEventsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(nullptr, 0) }; // 1713629731
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 766390149
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteEvents_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/** Write batches of entity based events to PlayStream. The namespace of the Event must be 'custom' or start with 'custom.'. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Write batches of entity based events to PlayStream. The namespace of the Event must be 'custom' or start with 'custom.'." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PlayFabEventsAPI_eventWriteEvents_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics
	{
		struct PlayFabEventsAPI_eventWriteTelemetryEvents_Parms
		{
			FEventsWriteEventsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(nullptr, 0) }; // 1713629731
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2589623543
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEvents_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/**\n     * Write batches of entity based events to as Telemetry events (bypass PlayStream). The namespace must be 'custom' or start\n     * with 'custom.'\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Write batches of entity based events to as Telemetry events (bypass PlayStream). The namespace must be 'custom' or start\nwith 'custom.'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteTelemetryEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PlayFabEventsAPI_eventWriteTelemetryEvents_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics
	{
		struct PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms
		{
			FEventsWriteEventsRequest request;
			FString telemetryKey;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabEventsAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_request;
		static const UECodeGen_Private::FStrPropertyParams NewProp_telemetryKey;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, request), Z_Construct_UScriptStruct_FEventsWriteEventsRequest, METADATA_PARAMS(nullptr, 0) }; // 1713629731
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_telemetryKey = { "telemetryKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, telemetryKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2589623543
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4081219919
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms, ReturnValue), Z_Construct_UClass_UPlayFabEventsAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_telemetryKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Events | PlayStream Events" },
		{ "Comment", "/**\n     * Write batches of entity based events to as Telemetry events (bypass PlayStream) using a Telemetry Key. The namespace must be 'custom' or start\n     * with 'custom.'\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Write batches of entity based events to as Telemetry events (bypass PlayStream) using a Telemetry Key. The namespace must be 'custom' or start\nwith 'custom.'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsAPI, nullptr, "WriteTelemetryEventsWithTelemetryKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PlayFabEventsAPI_eventWriteTelemetryEventsWithTelemetryKey_Parms), Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabEventsAPI);
	UClass* Z_Construct_UClass_UPlayFabEventsAPI_NoRegister()
	{
		return UPlayFabEventsAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabEventsAPI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayFabEventsAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabEventsAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_CreateTelemetryKey, "CreateTelemetryKey" }, // 4000975301
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 4081219919
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessCreateTelemetryKey__DelegateSignature, "DelegateOnSuccessCreateTelemetryKey__DelegateSignature" }, // 34794503
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessDeleteTelemetryKey__DelegateSignature, "DelegateOnSuccessDeleteTelemetryKey__DelegateSignature" }, // 1834257922
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessGetTelemetryKey__DelegateSignature, "DelegateOnSuccessGetTelemetryKey__DelegateSignature" }, // 2794379531
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessListTelemetryKeys__DelegateSignature, "DelegateOnSuccessListTelemetryKeys__DelegateSignature" }, // 2854648430
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature, "DelegateOnSuccessSetTelemetryKeyActive__DelegateSignature" }, // 4258552542
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteEvents__DelegateSignature, "DelegateOnSuccessWriteEvents__DelegateSignature" }, // 766390149
		{ &Z_Construct_UDelegateFunction_UPlayFabEventsAPI_DelegateOnSuccessWriteTelemetryEvents__DelegateSignature, "DelegateOnSuccessWriteTelemetryEvents__DelegateSignature" }, // 2589623543
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_DeleteTelemetryKey, "DeleteTelemetryKey" }, // 3334502711
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_GetTelemetryKey, "GetTelemetryKey" }, // 4009338934
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperCreateTelemetryKey, "HelperCreateTelemetryKey" }, // 3448012548
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperDeleteTelemetryKey, "HelperDeleteTelemetryKey" }, // 931858475
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperGetTelemetryKey, "HelperGetTelemetryKey" }, // 2537937052
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperListTelemetryKeys, "HelperListTelemetryKeys" }, // 2294272126
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperSetTelemetryKeyActive, "HelperSetTelemetryKeyActive" }, // 2052639413
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteEvents, "HelperWriteEvents" }, // 2743820639
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_HelperWriteTelemetryEvents, "HelperWriteTelemetryEvents" }, // 2701959651
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_ListTelemetryKeys, "ListTelemetryKeys" }, // 7879338
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_SetTelemetryKeyActive, "SetTelemetryKeyActive" }, // 4098390355
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteEvents, "WriteEvents" }, // 3875423454
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEvents, "WriteTelemetryEvents" }, // 1013397079
		{ &Z_Construct_UFunction_UPlayFabEventsAPI_WriteTelemetryEventsWithTelemetryKey, "WriteTelemetryEventsWithTelemetryKey" }, // 1482249762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabEventsAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabEventsAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabEventsRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) }; // 1760559522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabEventsAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabEventsAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabEventsAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_OnPlayFabResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_CallAuthenticationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabEventsAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabEventsAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabEventsAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabEventsAPI_Statics::ClassParams = {
		&UPlayFabEventsAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabEventsAPI()
	{
		if (!Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton, Z_Construct_UClass_UPlayFabEventsAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabEventsAPI.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabEventsAPI>()
	{
		return UPlayFabEventsAPI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabEventsAPI);
	UPlayFabEventsAPI::~UPlayFabEventsAPI() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabEventsAPI, UPlayFabEventsAPI::StaticClass, TEXT("UPlayFabEventsAPI"), &Z_Registration_Info_UClass_UPlayFabEventsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabEventsAPI), 2487849713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_490046886(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
