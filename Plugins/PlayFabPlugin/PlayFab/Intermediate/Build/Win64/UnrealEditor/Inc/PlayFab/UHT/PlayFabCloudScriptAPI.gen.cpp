// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabCloudScriptAPI.h"
#include "../Classes/PlayFabBaseModel.h"
#include "../Classes/PlayFabCloudScriptModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabCloudScriptAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabCloudScriptAPI();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptEmptyResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabCloudScriptRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayFabCloudScriptRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabCloudScriptRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful)
{
	struct _Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms
	{
		FPlayFabBaseModel response;
		UObject* customData;
		bool successful;
	};
	_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms Parms;
	Parms.response=response;
	Parms.customData=customData;
	Parms.successful=successful ? true : false;
	OnPlayFabCloudScriptRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) }; // 1203376160
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms
	{
		FPlayFabError error;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms Parms;
	Parms.error=error;
	Parms.customData=customData;
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms
		{
			FCloudScriptExecuteCloudScriptResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms, result), Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult, METADATA_PARAMS(nullptr, 0) }; // 2582794513
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Server-Side Cloud Script\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "/\n Server-Side Cloud Script\n\n callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteEntityCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteEntityCloudScript, FCloudScriptExecuteCloudScriptResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms
	{
		FCloudScriptExecuteCloudScriptResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessExecuteEntityCloudScript.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms
		{
			FCloudScriptExecuteFunctionResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 2684017312
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessExecuteFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessExecuteFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteFunction, FCloudScriptExecuteFunctionResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms
	{
		FCloudScriptExecuteFunctionResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessExecuteFunction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms
		{
			FCloudScriptGetFunctionResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 3491774173
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessGetFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessGetFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFunction, FCloudScriptGetFunctionResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms
	{
		FCloudScriptGetFunctionResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessGetFunction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms
		{
			FCloudScriptListFunctionsResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms, result), Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult, METADATA_PARAMS(nullptr, 0) }; // 2111465558
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessListFunctions__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessListFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListFunctions, FCloudScriptListFunctionsResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms
	{
		FCloudScriptListFunctionsResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListFunctions.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms
		{
			FCloudScriptListHttpFunctionsResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms, result), Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult, METADATA_PARAMS(nullptr, 0) }; // 957064365
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessListHttpFunctions__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessListHttpFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListHttpFunctions, FCloudScriptListHttpFunctionsResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms
	{
		FCloudScriptListHttpFunctionsResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListHttpFunctions.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms
		{
			FCloudScriptListQueuedFunctionsResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms, result), Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult, METADATA_PARAMS(nullptr, 0) }; // 3079332571
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessListQueuedFunctions__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessListQueuedFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQueuedFunctions, FCloudScriptListQueuedFunctionsResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms
	{
		FCloudScriptListQueuedFunctionsResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessListQueuedFunctions.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForEntityTriggeredAction, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPostFunctionResultForEntityTriggeredAction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForFunctionExecution_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForFunctionExecution, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPostFunctionResultForFunctionExecution.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessPostFunctionResultForScheduledTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForScheduledTask, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessPostFunctionResultForScheduledTask.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessRegisterHttpFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterHttpFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterHttpFunction, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessRegisterHttpFunction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessRegisterQueuedFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessRegisterQueuedFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterQueuedFunction, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessRegisterQueuedFunction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics
	{
		struct PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms
		{
			FCloudScriptEmptyResult result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms, result), Z_Construct_UScriptStruct_FCloudScriptEmptyResult, METADATA_PARAMS(nullptr, 0) }; // 2200001990
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "DelegateOnSuccessUnregisterFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPlayFabCloudScriptAPI::FDelegateOnSuccessUnregisterFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnregisterFunction, FCloudScriptEmptyResult result, UObject* customData)
{
	struct PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms
	{
		FCloudScriptEmptyResult result;
		UObject* customData;
	};
	PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms Parms;
	Parms.result=result;
	Parms.customData=customData;
	DelegateOnSuccessUnregisterFunction.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperUnregisterFunction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperUnregisterFunction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execUnregisterFunction)
	{
		P_GET_STRUCT(FCloudScriptUnregisterFunctionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::UnregisterFunction(Z_Param_request,FDelegateOnSuccessUnregisterFunction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperRegisterQueuedFunction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperRegisterQueuedFunction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execRegisterQueuedFunction)
	{
		P_GET_STRUCT(FCloudScriptRegisterQueuedFunctionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::RegisterQueuedFunction(Z_Param_request,FDelegateOnSuccessRegisterQueuedFunction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperRegisterHttpFunction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperRegisterHttpFunction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execRegisterHttpFunction)
	{
		P_GET_STRUCT(FCloudScriptRegisterHttpFunctionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::RegisterHttpFunction(Z_Param_request,FDelegateOnSuccessRegisterHttpFunction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperPostFunctionResultForScheduledTask)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPostFunctionResultForScheduledTask(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execPostFunctionResultForScheduledTask)
	{
		P_GET_STRUCT(FCloudScriptPostFunctionResultForScheduledTaskRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::PostFunctionResultForScheduledTask(Z_Param_request,FDelegateOnSuccessPostFunctionResultForScheduledTask(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperPostFunctionResultForPlayerTriggeredAction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPostFunctionResultForPlayerTriggeredAction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execPostFunctionResultForPlayerTriggeredAction)
	{
		P_GET_STRUCT(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::PostFunctionResultForPlayerTriggeredAction(Z_Param_request,FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperPostFunctionResultForFunctionExecution)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPostFunctionResultForFunctionExecution(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execPostFunctionResultForFunctionExecution)
	{
		P_GET_STRUCT(FCloudScriptPostFunctionResultForFunctionExecutionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::PostFunctionResultForFunctionExecution(Z_Param_request,FDelegateOnSuccessPostFunctionResultForFunctionExecution(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperPostFunctionResultForEntityTriggeredAction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperPostFunctionResultForEntityTriggeredAction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execPostFunctionResultForEntityTriggeredAction)
	{
		P_GET_STRUCT(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::PostFunctionResultForEntityTriggeredAction(Z_Param_request,FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperListQueuedFunctions)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperListQueuedFunctions(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execListQueuedFunctions)
	{
		P_GET_STRUCT(FCloudScriptListFunctionsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::ListQueuedFunctions(Z_Param_request,FDelegateOnSuccessListQueuedFunctions(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperListHttpFunctions)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperListHttpFunctions(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execListHttpFunctions)
	{
		P_GET_STRUCT(FCloudScriptListFunctionsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::ListHttpFunctions(Z_Param_request,FDelegateOnSuccessListHttpFunctions(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperListFunctions)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperListFunctions(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execListFunctions)
	{
		P_GET_STRUCT(FCloudScriptListFunctionsRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::ListFunctions(Z_Param_request,FDelegateOnSuccessListFunctions(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperGetFunction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetFunction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execGetFunction)
	{
		P_GET_STRUCT(FCloudScriptGetFunctionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::GetFunction(Z_Param_request,FDelegateOnSuccessGetFunction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperExecuteFunction)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperExecuteFunction(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execExecuteFunction)
	{
		P_GET_STRUCT(FCloudScriptExecuteFunctionRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::ExecuteFunction(Z_Param_request,FDelegateOnSuccessExecuteFunction(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execHelperExecuteEntityCloudScript)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperExecuteEntityCloudScript(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabCloudScriptAPI::execExecuteEntityCloudScript)
	{
		P_GET_STRUCT(FCloudScriptExecuteEntityCloudScriptRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabCloudScriptAPI**)Z_Param__Result=UPlayFabCloudScriptAPI::ExecuteEntityCloudScript(Z_Param_request,FDelegateOnSuccessExecuteEntityCloudScript(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabCloudScriptAPI::StaticRegisterNativesUPlayFabCloudScriptAPI()
	{
		UClass* Class = UPlayFabCloudScriptAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteEntityCloudScript", &UPlayFabCloudScriptAPI::execExecuteEntityCloudScript },
			{ "ExecuteFunction", &UPlayFabCloudScriptAPI::execExecuteFunction },
			{ "GetFunction", &UPlayFabCloudScriptAPI::execGetFunction },
			{ "HelperExecuteEntityCloudScript", &UPlayFabCloudScriptAPI::execHelperExecuteEntityCloudScript },
			{ "HelperExecuteFunction", &UPlayFabCloudScriptAPI::execHelperExecuteFunction },
			{ "HelperGetFunction", &UPlayFabCloudScriptAPI::execHelperGetFunction },
			{ "HelperListFunctions", &UPlayFabCloudScriptAPI::execHelperListFunctions },
			{ "HelperListHttpFunctions", &UPlayFabCloudScriptAPI::execHelperListHttpFunctions },
			{ "HelperListQueuedFunctions", &UPlayFabCloudScriptAPI::execHelperListQueuedFunctions },
			{ "HelperPostFunctionResultForEntityTriggeredAction", &UPlayFabCloudScriptAPI::execHelperPostFunctionResultForEntityTriggeredAction },
			{ "HelperPostFunctionResultForFunctionExecution", &UPlayFabCloudScriptAPI::execHelperPostFunctionResultForFunctionExecution },
			{ "HelperPostFunctionResultForPlayerTriggeredAction", &UPlayFabCloudScriptAPI::execHelperPostFunctionResultForPlayerTriggeredAction },
			{ "HelperPostFunctionResultForScheduledTask", &UPlayFabCloudScriptAPI::execHelperPostFunctionResultForScheduledTask },
			{ "HelperRegisterHttpFunction", &UPlayFabCloudScriptAPI::execHelperRegisterHttpFunction },
			{ "HelperRegisterQueuedFunction", &UPlayFabCloudScriptAPI::execHelperRegisterQueuedFunction },
			{ "HelperUnregisterFunction", &UPlayFabCloudScriptAPI::execHelperUnregisterFunction },
			{ "ListFunctions", &UPlayFabCloudScriptAPI::execListFunctions },
			{ "ListHttpFunctions", &UPlayFabCloudScriptAPI::execListHttpFunctions },
			{ "ListQueuedFunctions", &UPlayFabCloudScriptAPI::execListQueuedFunctions },
			{ "PostFunctionResultForEntityTriggeredAction", &UPlayFabCloudScriptAPI::execPostFunctionResultForEntityTriggeredAction },
			{ "PostFunctionResultForFunctionExecution", &UPlayFabCloudScriptAPI::execPostFunctionResultForFunctionExecution },
			{ "PostFunctionResultForPlayerTriggeredAction", &UPlayFabCloudScriptAPI::execPostFunctionResultForPlayerTriggeredAction },
			{ "PostFunctionResultForScheduledTask", &UPlayFabCloudScriptAPI::execPostFunctionResultForScheduledTask },
			{ "RegisterHttpFunction", &UPlayFabCloudScriptAPI::execRegisterHttpFunction },
			{ "RegisterQueuedFunction", &UPlayFabCloudScriptAPI::execRegisterQueuedFunction },
			{ "UnregisterFunction", &UPlayFabCloudScriptAPI::execUnregisterFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics
	{
		struct PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms
		{
			FCloudScriptExecuteEntityCloudScriptRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms, request), Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest, METADATA_PARAMS(nullptr, 0) }; // 3771956954
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1908020926
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/**\n     * Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution of any kind of\n     * custom server-side functionality you can implement, and it can be used in conjunction with virtually anything.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution of any kind of\ncustom server-side functionality you can implement, and it can be used in conjunction with virtually anything." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "ExecuteEntityCloudScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::PlayFabCloudScriptAPI_eventExecuteEntityCloudScript_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventExecuteFunction_Parms
		{
			FCloudScriptExecuteFunctionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteFunction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest, METADATA_PARAMS(nullptr, 0) }; // 2745536390
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteFunction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2172698862
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteFunction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventExecuteFunction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/**\n     * Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution of any kind of\n     * custom server-side functionality you can implement, and it can be used in conjunction with virtually anything.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution of any kind of\ncustom server-side functionality you can implement, and it can be used in conjunction with virtually anything." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "ExecuteFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::PlayFabCloudScriptAPI_eventExecuteFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventGetFunction_Parms
		{
			FCloudScriptGetFunctionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventGetFunction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest, METADATA_PARAMS(nullptr, 0) }; // 1785514618
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventGetFunction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4104640943
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventGetFunction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventGetFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventGetFunction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Gets registered Azure Functions for a given title id and function name. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Gets registered Azure Functions for a given title id and function name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "GetFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::PlayFabCloudScriptAPI_eventGetFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperExecuteEntityCloudScript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::PlayFabCloudScriptAPI_eventHelperExecuteEntityCloudScript_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperExecuteFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::PlayFabCloudScriptAPI_eventHelperExecuteFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperGetFunction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperGetFunction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperGetFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperGetFunction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperGetFunction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperGetFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::PlayFabCloudScriptAPI_eventHelperGetFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperListFunctions_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListFunctions_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperListFunctions_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperListFunctions_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperListFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::PlayFabCloudScriptAPI_eventHelperListFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperListHttpFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::PlayFabCloudScriptAPI_eventHelperListHttpFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperListQueuedFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::PlayFabCloudScriptAPI_eventHelperListQueuedFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperPostFunctionResultForEntityTriggeredAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::PlayFabCloudScriptAPI_eventHelperPostFunctionResultForEntityTriggeredAction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperPostFunctionResultForFunctionExecution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::PlayFabCloudScriptAPI_eventHelperPostFunctionResultForFunctionExecution_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperPostFunctionResultForPlayerTriggeredAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::PlayFabCloudScriptAPI_eventHelperPostFunctionResultForPlayerTriggeredAction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperPostFunctionResultForScheduledTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::PlayFabCloudScriptAPI_eventHelperPostFunctionResultForScheduledTask_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperRegisterHttpFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::PlayFabCloudScriptAPI_eventHelperRegisterHttpFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperRegisterQueuedFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::PlayFabCloudScriptAPI_eventHelperRegisterQueuedFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) }; // 259978491
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms), &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "// Implements FOnPlayFabCloudScriptRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabCloudScriptRequestCompleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "HelperUnregisterFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::PlayFabCloudScriptAPI_eventHelperUnregisterFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventListFunctions_Parms
		{
			FCloudScriptListFunctionsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListFunctions_Parms, request), Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest, METADATA_PARAMS(nullptr, 0) }; // 1641716254
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListFunctions_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2944187342
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListFunctions_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListFunctions_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Lists all currently registered Azure Functions for a given title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Lists all currently registered Azure Functions for a given title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "ListFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::PlayFabCloudScriptAPI_eventListFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventListHttpFunctions_Parms
		{
			FCloudScriptListFunctionsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListHttpFunctions_Parms, request), Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest, METADATA_PARAMS(nullptr, 0) }; // 1641716254
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListHttpFunctions_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 216697268
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListHttpFunctions_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListHttpFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListHttpFunctions_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Lists all currently registered HTTP triggered Azure Functions for a given title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Lists all currently registered HTTP triggered Azure Functions for a given title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "ListHttpFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::PlayFabCloudScriptAPI_eventListHttpFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics
	{
		struct PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms
		{
			FCloudScriptListFunctionsRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms, request), Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest, METADATA_PARAMS(nullptr, 0) }; // 1641716254
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2903163447
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Lists all currently registered Queue triggered Azure Functions for a given title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Lists all currently registered Queue triggered Azure Functions for a given title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "ListQueuedFunctions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::PlayFabCloudScriptAPI_eventListQueuedFunctions_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics
	{
		struct PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms
		{
			FCloudScriptPostFunctionResultForEntityTriggeredActionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, METADATA_PARAMS(nullptr, 0) }; // 1947259284
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2524172810
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Generate an entity PlayStream event for the provided function result. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Generate an entity PlayStream event for the provided function result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "PostFunctionResultForEntityTriggeredAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::PlayFabCloudScriptAPI_eventPostFunctionResultForEntityTriggeredAction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics
	{
		struct PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms
		{
			FCloudScriptPostFunctionResultForFunctionExecutionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms, request), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest, METADATA_PARAMS(nullptr, 0) }; // 2377986370
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 340883736
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Generate an entity PlayStream event for the provided function result. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Generate an entity PlayStream event for the provided function result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "PostFunctionResultForFunctionExecution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::PlayFabCloudScriptAPI_eventPostFunctionResultForFunctionExecution_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics
	{
		struct PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms
		{
			FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, METADATA_PARAMS(nullptr, 0) }; // 3593394989
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1928700229
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Generate a player PlayStream event for the provided function result. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Generate a player PlayStream event for the provided function result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "PostFunctionResultForPlayerTriggeredAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::PlayFabCloudScriptAPI_eventPostFunctionResultForPlayerTriggeredAction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics
	{
		struct PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms
		{
			FCloudScriptPostFunctionResultForScheduledTaskRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms, request), Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest, METADATA_PARAMS(nullptr, 0) }; // 2907304295
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1068635922
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Generate a PlayStream event for the provided function result. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Generate a PlayStream event for the provided function result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "PostFunctionResultForScheduledTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::PlayFabCloudScriptAPI_eventPostFunctionResultForScheduledTask_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms
		{
			FCloudScriptRegisterHttpFunctionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest, METADATA_PARAMS(nullptr, 0) }; // 106010684
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2631401433
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Registers an HTTP triggered Azure function with a title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Registers an HTTP triggered Azure function with a title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "RegisterHttpFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::PlayFabCloudScriptAPI_eventRegisterHttpFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms
		{
			FCloudScriptRegisterQueuedFunctionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest, METADATA_PARAMS(nullptr, 0) }; // 244736482
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 969049108
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Registers a queue triggered Azure Function with a title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Registers a queue triggered Azure Function with a title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "RegisterQueuedFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::PlayFabCloudScriptAPI_eventRegisterQueuedFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics
	{
		struct PlayFabCloudScriptAPI_eventUnregisterFunction_Parms
		{
			FCloudScriptUnregisterFunctionRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabCloudScriptAPI* ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventUnregisterFunction_Parms, request), Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest, METADATA_PARAMS(nullptr, 0) }; // 3473251434
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventUnregisterFunction_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1162373524
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventUnregisterFunction_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1619175008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventUnregisterFunction_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabCloudScriptAPI_eventUnregisterFunction_Parms, ReturnValue), Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_onSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_onFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_customData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script" },
		{ "Comment", "/** Unregisters an Azure Function with a title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Unregisters an Azure Function with a title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabCloudScriptAPI, nullptr, "UnregisterFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::PlayFabCloudScriptAPI_eventUnregisterFunction_Parms), Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabCloudScriptAPI);
	UClass* Z_Construct_UClass_UPlayFabCloudScriptAPI_NoRegister()
	{
		return UPlayFabCloudScriptAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 1619175008
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature, "DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature" }, // 1908020926
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessExecuteFunction__DelegateSignature, "DelegateOnSuccessExecuteFunction__DelegateSignature" }, // 2172698862
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessGetFunction__DelegateSignature, "DelegateOnSuccessGetFunction__DelegateSignature" }, // 4104640943
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListFunctions__DelegateSignature, "DelegateOnSuccessListFunctions__DelegateSignature" }, // 2944187342
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListHttpFunctions__DelegateSignature, "DelegateOnSuccessListHttpFunctions__DelegateSignature" }, // 216697268
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessListQueuedFunctions__DelegateSignature, "DelegateOnSuccessListQueuedFunctions__DelegateSignature" }, // 2903163447
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature, "DelegateOnSuccessPostFunctionResultForEntityTriggeredAction__DelegateSignature" }, // 2524172810
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature, "DelegateOnSuccessPostFunctionResultForFunctionExecution__DelegateSignature" }, // 340883736
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature, "DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction__DelegateSignature" }, // 1928700229
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature, "DelegateOnSuccessPostFunctionResultForScheduledTask__DelegateSignature" }, // 1068635922
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterHttpFunction__DelegateSignature, "DelegateOnSuccessRegisterHttpFunction__DelegateSignature" }, // 2631401433
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessRegisterQueuedFunction__DelegateSignature, "DelegateOnSuccessRegisterQueuedFunction__DelegateSignature" }, // 969049108
		{ &Z_Construct_UDelegateFunction_UPlayFabCloudScriptAPI_DelegateOnSuccessUnregisterFunction__DelegateSignature, "DelegateOnSuccessUnregisterFunction__DelegateSignature" }, // 1162373524
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteEntityCloudScript, "ExecuteEntityCloudScript" }, // 2549385492
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_ExecuteFunction, "ExecuteFunction" }, // 2343135600
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_GetFunction, "GetFunction" }, // 2289341808
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteEntityCloudScript, "HelperExecuteEntityCloudScript" }, // 426210564
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperExecuteFunction, "HelperExecuteFunction" }, // 3031870292
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperGetFunction, "HelperGetFunction" }, // 3715395309
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListFunctions, "HelperListFunctions" }, // 4254990342
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListHttpFunctions, "HelperListHttpFunctions" }, // 156651267
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperListQueuedFunctions, "HelperListQueuedFunctions" }, // 1059277775
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForEntityTriggeredAction, "HelperPostFunctionResultForEntityTriggeredAction" }, // 1631187713
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForFunctionExecution, "HelperPostFunctionResultForFunctionExecution" }, // 4221909369
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForPlayerTriggeredAction, "HelperPostFunctionResultForPlayerTriggeredAction" }, // 1835117163
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperPostFunctionResultForScheduledTask, "HelperPostFunctionResultForScheduledTask" }, // 1900199321
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterHttpFunction, "HelperRegisterHttpFunction" }, // 1337671548
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperRegisterQueuedFunction, "HelperRegisterQueuedFunction" }, // 425081559
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_HelperUnregisterFunction, "HelperUnregisterFunction" }, // 541537714
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListFunctions, "ListFunctions" }, // 3149069704
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListHttpFunctions, "ListHttpFunctions" }, // 2289996041
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_ListQueuedFunctions, "ListQueuedFunctions" }, // 1394907537
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForEntityTriggeredAction, "PostFunctionResultForEntityTriggeredAction" }, // 1815688972
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForFunctionExecution, "PostFunctionResultForFunctionExecution" }, // 1550847845
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForPlayerTriggeredAction, "PostFunctionResultForPlayerTriggeredAction" }, // 3164799730
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_PostFunctionResultForScheduledTask, "PostFunctionResultForScheduledTask" }, // 2598176587
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterHttpFunction, "RegisterHttpFunction" }, // 2246819858
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_RegisterQueuedFunction, "RegisterQueuedFunction" }, // 237408217
		{ &Z_Construct_UFunction_UPlayFabCloudScriptAPI_UnregisterFunction, "UnregisterFunction" }, // 4249527641
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabCloudScriptAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabCloudScriptAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabCloudScriptRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) }; // 1416689044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabCloudScriptAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabCloudScriptAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabCloudScriptAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_OnPlayFabResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_CallAuthenticationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabCloudScriptAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::ClassParams = {
		&UPlayFabCloudScriptAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabCloudScriptAPI()
	{
		if (!Z_Registration_Info_UClass_UPlayFabCloudScriptAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabCloudScriptAPI.OuterSingleton, Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabCloudScriptAPI.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabCloudScriptAPI>()
	{
		return UPlayFabCloudScriptAPI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabCloudScriptAPI);
	UPlayFabCloudScriptAPI::~UPlayFabCloudScriptAPI() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabCloudScriptAPI, UPlayFabCloudScriptAPI::StaticClass, TEXT("UPlayFabCloudScriptAPI"), &Z_Registration_Info_UClass_UPlayFabCloudScriptAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabCloudScriptAPI), 3283054162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_1594567123(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
