// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabDataModelDecoder.h"
#include "../Classes/PlayFabDataModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabDataModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeSetObjectsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataSetObjectsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeSetObjectsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeGetObjectsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataGetObjectsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeGetObjectsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeInitiateFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataInitiateFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeInitiateFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeGetFilesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataGetFilesResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeGetFilesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeFinalizeFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataFinalizeFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeFinalizeFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeDeleteFilesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataDeleteFilesResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeDeleteFilesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabDataModelDecoder::execdecodeAbortFileUploadsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataAbortFileUploadsResponse*)Z_Param__Result=UPlayFabDataModelDecoder::decodeAbortFileUploadsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabDataModelDecoder::StaticRegisterNativesUPlayFabDataModelDecoder()
	{
		UClass* Class = UPlayFabDataModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAbortFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeAbortFileUploadsResponseResponse },
			{ "decodeDeleteFilesResponseResponse", &UPlayFabDataModelDecoder::execdecodeDeleteFilesResponseResponse },
			{ "decodeFinalizeFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeFinalizeFileUploadsResponseResponse },
			{ "decodeGetFilesResponseResponse", &UPlayFabDataModelDecoder::execdecodeGetFilesResponseResponse },
			{ "decodeGetObjectsResponseResponse", &UPlayFabDataModelDecoder::execdecodeGetObjectsResponseResponse },
			{ "decodeInitiateFileUploadsResponseResponse", &UPlayFabDataModelDecoder::execdecodeInitiateFileUploadsResponseResponse },
			{ "decodeSetObjectsResponseResponse", &UPlayFabDataModelDecoder::execdecodeSetObjectsResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataAbortFileUploadsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, METADATA_PARAMS(nullptr, 0) }; // 4032651659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Decode the AbortFileUploadsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the AbortFileUploadsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeAbortFileUploadsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeAbortFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataDeleteFilesResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataDeleteFilesResponse, METADATA_PARAMS(nullptr, 0) }; // 361986050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Decode the DeleteFilesResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteFilesResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeDeleteFilesResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeDeleteFilesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataFinalizeFileUploadsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, METADATA_PARAMS(nullptr, 0) }; // 1144336839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Decode the FinalizeFileUploadsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the FinalizeFileUploadsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeFinalizeFileUploadsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeFinalizeFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataGetFilesResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataGetFilesResponse, METADATA_PARAMS(nullptr, 0) }; // 3734285849
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Decode the GetFilesResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the GetFilesResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeGetFilesResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeGetFilesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataGetObjectsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataGetObjectsResponse, METADATA_PARAMS(nullptr, 0) }; // 3182623602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Decode the GetObjectsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the GetObjectsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeGetObjectsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeGetObjectsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataInitiateFileUploadsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, METADATA_PARAMS(nullptr, 0) }; // 1973159413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Decode the InitiateFileUploadsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the InitiateFileUploadsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeInitiateFileUploadsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeInitiateFileUploadsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics
	{
		struct PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FDataSetObjectsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataSetObjectsResponse, METADATA_PARAMS(nullptr, 0) }; // 3568447562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Decode the SetObjectsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
		{ "ToolTip", "Decode the SetObjectsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabDataModelDecoder, nullptr, "decodeSetObjectsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PlayFabDataModelDecoder_eventdecodeSetObjectsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabDataModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabDataModelDecoder_NoRegister()
	{
		return UPlayFabDataModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabDataModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeAbortFileUploadsResponseResponse, "decodeAbortFileUploadsResponseResponse" }, // 2045932393
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeDeleteFilesResponseResponse, "decodeDeleteFilesResponseResponse" }, // 2818594643
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeFinalizeFileUploadsResponseResponse, "decodeFinalizeFileUploadsResponseResponse" }, // 931045362
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetFilesResponseResponse, "decodeGetFilesResponseResponse" }, // 1323811376
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeGetObjectsResponseResponse, "decodeGetObjectsResponseResponse" }, // 1043326750
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeInitiateFileUploadsResponseResponse, "decodeInitiateFileUploadsResponseResponse" }, // 1449076036
		{ &Z_Construct_UFunction_UPlayFabDataModelDecoder_decodeSetObjectsResponseResponse, "decodeSetObjectsResponseResponse" }, // 536901108
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabDataModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabDataModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::ClassParams = {
		&UPlayFabDataModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabDataModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabDataModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabDataModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabDataModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabDataModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabDataModelDecoder>()
	{
		return UPlayFabDataModelDecoder::StaticClass();
	}
	UPlayFabDataModelDecoder::UPlayFabDataModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabDataModelDecoder);
	UPlayFabDataModelDecoder::~UPlayFabDataModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabDataModelDecoder, UPlayFabDataModelDecoder::StaticClass, TEXT("UPlayFabDataModelDecoder"), &Z_Registration_Info_UClass_UPlayFabDataModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabDataModelDecoder), 2260341187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_443430079(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
