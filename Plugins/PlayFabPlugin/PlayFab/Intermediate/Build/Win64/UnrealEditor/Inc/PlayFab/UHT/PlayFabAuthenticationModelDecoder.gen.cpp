// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabAuthenticationModelDecoder.h"
#include "../Classes/PlayFabAuthenticationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationValidateEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeValidateEntityTokenResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationGetEntityTokenResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeGetEntityTokenResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeEmptyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationEmptyResponse*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationModelDecoder::execdecodeAuthenticateCustomIdResultResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAuthenticationAuthenticateCustomIdResult*)Z_Param__Result=UPlayFabAuthenticationModelDecoder::decodeAuthenticateCustomIdResultResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationModelDecoder::StaticRegisterNativesUPlayFabAuthenticationModelDecoder()
	{
		UClass* Class = UPlayFabAuthenticationModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAuthenticateCustomIdResultResponse", &UPlayFabAuthenticationModelDecoder::execdecodeAuthenticateCustomIdResultResponse },
			{ "decodeEmptyResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeEmptyResponseResponse },
			{ "decodeGetEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeGetEntityTokenResponseResponse },
			{ "decodeValidateEntityTokenResponseResponse", &UPlayFabAuthenticationModelDecoder::execdecodeValidateEntityTokenResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationAuthenticateCustomIdResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult, METADATA_PARAMS(nullptr, 0) }; // 2087557775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the AuthenticateCustomIdResult response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the AuthenticateCustomIdResult response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeAuthenticateCustomIdResultResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeAuthenticateCustomIdResultResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationEmptyResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationEmptyResponse, METADATA_PARAMS(nullptr, 0) }; // 4062543642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the EmptyResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeEmptyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationGetEntityTokenResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, METADATA_PARAMS(nullptr, 0) }; // 1091729655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the GetEntityTokenResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the GetEntityTokenResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeGetEntityTokenResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeGetEntityTokenResponseResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics
	{
		struct PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FAuthenticationValidateEntityTokenResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, METADATA_PARAMS(nullptr, 0) }; // 329391930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Decode the ValidateEntityTokenResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
		{ "ToolTip", "Decode the ValidateEntityTokenResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, nullptr, "decodeValidateEntityTokenResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PlayFabAuthenticationModelDecoder_eventdecodeValidateEntityTokenResponseResponse_Parms), Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabAuthenticationModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_NoRegister()
	{
		return UPlayFabAuthenticationModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeAuthenticateCustomIdResultResponse, "decodeAuthenticateCustomIdResultResponse" }, // 1537209719
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 3087103975
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeGetEntityTokenResponseResponse, "decodeGetEntityTokenResponseResponse" }, // 2265013800
		{ &Z_Construct_UFunction_UPlayFabAuthenticationModelDecoder_decodeValidateEntityTokenResponseResponse, "decodeValidateEntityTokenResponseResponse" }, // 3811383592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabAuthenticationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams = {
		&UPlayFabAuthenticationModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabAuthenticationModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabAuthenticationModelDecoder>()
	{
		return UPlayFabAuthenticationModelDecoder::StaticClass();
	}
	UPlayFabAuthenticationModelDecoder::UPlayFabAuthenticationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationModelDecoder);
	UPlayFabAuthenticationModelDecoder::~UPlayFabAuthenticationModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabAuthenticationModelDecoder, UPlayFabAuthenticationModelDecoder::StaticClass, TEXT("UPlayFabAuthenticationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabAuthenticationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabAuthenticationModelDecoder), 3979430981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_3563719511(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
