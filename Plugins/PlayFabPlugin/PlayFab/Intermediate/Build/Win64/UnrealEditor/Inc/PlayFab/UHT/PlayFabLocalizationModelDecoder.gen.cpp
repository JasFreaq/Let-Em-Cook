// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabLocalizationModelDecoder.h"
#include "../Classes/PlayFabLocalizationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLocalizationGetLanguageListResponse*)Z_Param__Result=UPlayFabLocalizationModelDecoder::decodeGetLanguageListResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabLocalizationModelDecoder::StaticRegisterNativesUPlayFabLocalizationModelDecoder()
	{
		UClass* Class = UPlayFabLocalizationModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeGetLanguageListResponseResponse", &UPlayFabLocalizationModelDecoder::execdecodeGetLanguageListResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics
	{
		struct PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FLocalizationGetLanguageListResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, METADATA_PARAMS(nullptr, 0) }; // 64734286
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
		{ "Comment", "/** Decode the GetLanguageListResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModelDecoder.h" },
		{ "ToolTip", "Decode the GetLanguageListResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabLocalizationModelDecoder, nullptr, "decodeGetLanguageListResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PlayFabLocalizationModelDecoder_eventdecodeGetLanguageListResponseResponse_Parms), Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabLocalizationModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder_NoRegister()
	{
		return UPlayFabLocalizationModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabLocalizationModelDecoder_decodeGetLanguageListResponseResponse, "decodeGetLanguageListResponseResponse" }, // 3559180194
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabLocalizationModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabLocalizationModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams = {
		&UPlayFabLocalizationModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabLocalizationModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabLocalizationModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabLocalizationModelDecoder>()
	{
		return UPlayFabLocalizationModelDecoder::StaticClass();
	}
	UPlayFabLocalizationModelDecoder::UPlayFabLocalizationModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabLocalizationModelDecoder);
	UPlayFabLocalizationModelDecoder::~UPlayFabLocalizationModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabLocalizationModelDecoder, UPlayFabLocalizationModelDecoder::StaticClass, TEXT("UPlayFabLocalizationModelDecoder"), &Z_Registration_Info_UClass_UPlayFabLocalizationModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabLocalizationModelDecoder), 1977952234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_272655161(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
