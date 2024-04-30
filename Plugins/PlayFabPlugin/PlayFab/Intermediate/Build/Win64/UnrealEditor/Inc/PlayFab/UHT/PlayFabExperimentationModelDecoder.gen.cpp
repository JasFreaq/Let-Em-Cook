// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabExperimentationModelDecoder.h"
#include "../Classes/PlayFabExperimentationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabExperimentationModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetTreatmentAssignmentResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationGetTreatmentAssignmentResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetLatestScorecardResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationGetLatestScorecardResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExperimentsResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationGetExperimentsResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupTrafficResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationGetExclusionGroupTrafficResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupTrafficResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupsResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationGetExclusionGroupsResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupsResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeEmptyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationEmptyResponse*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeCreateExperimentResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationCreateExperimentResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabExperimentationModelDecoder::execdecodeCreateExclusionGroupResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FExperimentationCreateExclusionGroupResult*)Z_Param__Result=UPlayFabExperimentationModelDecoder::decodeCreateExclusionGroupResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabExperimentationModelDecoder::StaticRegisterNativesUPlayFabExperimentationModelDecoder()
	{
		UClass* Class = UPlayFabExperimentationModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeCreateExclusionGroupResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeCreateExclusionGroupResultResponse },
			{ "decodeCreateExperimentResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeCreateExperimentResultResponse },
			{ "decodeEmptyResponseResponse", &UPlayFabExperimentationModelDecoder::execdecodeEmptyResponseResponse },
			{ "decodeGetExclusionGroupsResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupsResultResponse },
			{ "decodeGetExclusionGroupTrafficResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExclusionGroupTrafficResultResponse },
			{ "decodeGetExperimentsResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetExperimentsResultResponse },
			{ "decodeGetLatestScorecardResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetLatestScorecardResultResponse },
			{ "decodeGetTreatmentAssignmentResultResponse", &UPlayFabExperimentationModelDecoder::execdecodeGetTreatmentAssignmentResultResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationCreateExclusionGroupResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, METADATA_PARAMS(nullptr, 0) }; // 4103382966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the CreateExclusionGroupResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the CreateExclusionGroupResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeCreateExclusionGroupResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExclusionGroupResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationCreateExperimentResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult, METADATA_PARAMS(nullptr, 0) }; // 843745214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the CreateExperimentResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the CreateExperimentResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeCreateExperimentResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeCreateExperimentResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationEmptyResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationEmptyResponse, METADATA_PARAMS(nullptr, 0) }; // 1300677066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the EmptyResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeEmptyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationGetExclusionGroupsResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult, METADATA_PARAMS(nullptr, 0) }; // 2385097013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the GetExclusionGroupsResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the GetExclusionGroupsResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExclusionGroupsResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupsResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationGetExclusionGroupTrafficResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult, METADATA_PARAMS(nullptr, 0) }; // 920875114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the GetExclusionGroupTrafficResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the GetExclusionGroupTrafficResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExclusionGroupTrafficResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExclusionGroupTrafficResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationGetExperimentsResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult, METADATA_PARAMS(nullptr, 0) }; // 4178905107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the GetExperimentsResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the GetExperimentsResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetExperimentsResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetExperimentsResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationGetLatestScorecardResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, METADATA_PARAMS(nullptr, 0) }; // 3575427961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the GetLatestScorecardResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the GetLatestScorecardResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetLatestScorecardResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetLatestScorecardResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics
	{
		struct PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FExperimentationGetTreatmentAssignmentResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult, METADATA_PARAMS(nullptr, 0) }; // 3466471447
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Decode the GetTreatmentAssignmentResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
		{ "ToolTip", "Decode the GetTreatmentAssignmentResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabExperimentationModelDecoder, nullptr, "decodeGetTreatmentAssignmentResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PlayFabExperimentationModelDecoder_eventdecodeGetTreatmentAssignmentResultResponse_Parms), Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabExperimentationModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder_NoRegister()
	{
		return UPlayFabExperimentationModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExclusionGroupResultResponse, "decodeCreateExclusionGroupResultResponse" }, // 2679989617
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeCreateExperimentResultResponse, "decodeCreateExperimentResultResponse" }, // 386753364
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 2541064907
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupsResultResponse, "decodeGetExclusionGroupsResultResponse" }, // 564438425
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExclusionGroupTrafficResultResponse, "decodeGetExclusionGroupTrafficResultResponse" }, // 4149534829
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetExperimentsResultResponse, "decodeGetExperimentsResultResponse" }, // 1577810790
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetLatestScorecardResultResponse, "decodeGetLatestScorecardResultResponse" }, // 1861983878
		{ &Z_Construct_UFunction_UPlayFabExperimentationModelDecoder_decodeGetTreatmentAssignmentResultResponse, "decodeGetTreatmentAssignmentResultResponse" }, // 482027563
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabExperimentationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabExperimentationModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::ClassParams = {
		&UPlayFabExperimentationModelDecoder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabExperimentationModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabExperimentationModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabExperimentationModelDecoder>()
	{
		return UPlayFabExperimentationModelDecoder::StaticClass();
	}
	UPlayFabExperimentationModelDecoder::UPlayFabExperimentationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabExperimentationModelDecoder);
	UPlayFabExperimentationModelDecoder::~UPlayFabExperimentationModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabExperimentationModelDecoder, UPlayFabExperimentationModelDecoder::StaticClass, TEXT("UPlayFabExperimentationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabExperimentationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabExperimentationModelDecoder), 1254473795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_1002034486(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
