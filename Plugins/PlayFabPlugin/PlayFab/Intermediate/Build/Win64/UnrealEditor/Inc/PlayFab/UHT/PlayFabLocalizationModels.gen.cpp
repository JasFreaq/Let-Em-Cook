// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabLocalizationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FLocalizationGetLanguageListRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLocalizationGetLanguageListRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest;
class UScriptStruct* FLocalizationGetLanguageListRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListRequest>()
{
	return FLocalizationGetLanguageListRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// Localization\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "/\n Localization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalizationGetLanguageListRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"LocalizationGetLanguageListRequest",
		sizeof(FLocalizationGetLanguageListRequest),
		alignof(FLocalizationGetLanguageListRequest),
		Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLocalizationGetLanguageListResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLocalizationGetLanguageListResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse;
class UScriptStruct* FLocalizationGetLanguageListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListResponse>()
{
	return FLocalizationGetLanguageListResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LanguageList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
		{ "Comment", "/** The list of allowed languages, in BCP47 two-letter format */" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "The list of allowed languages, in BCP47 two-letter format" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList = { "LanguageList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalizationGetLanguageListResponse, LanguageList), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"LocalizationGetLanguageListResponse",
		sizeof(FLocalizationGetLanguageListResponse),
		alignof(FLocalizationGetLanguageListResponse),
		Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics::ScriptStructInfo[] = {
		{ FLocalizationGetLanguageListRequest::StaticStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewStructOps, TEXT("LocalizationGetLanguageListRequest"), &Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationGetLanguageListRequest), 357284393U) },
		{ FLocalizationGetLanguageListResponse::StaticStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewStructOps, TEXT("LocalizationGetLanguageListResponse"), &Z_Registration_Info_UScriptStruct_LocalizationGetLanguageListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizationGetLanguageListResponse), 64734286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_1879476464(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
