// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References
	void UPlayFabRuntimeSettings::StaticRegisterNativesUPlayFabRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabRuntimeSettings);
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister()
	{
		return UPlayFabRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductionEnvironmentURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductionEnvironmentURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the PlayFab plugin in the Unreal GUI\n* This ends up being more like \"build time constants\", as they can't be changed at runtime\n*/" },
		{ "IncludePath", "PlayFabRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the PlayFab plugin in the Unreal GUI\nThis ends up being more like \"build time constants\", as they can't be changed at runtime" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// URL endpoint of the PlayFab production environment\n" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
		{ "ToolTip", "URL endpoint of the PlayFab production environment" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL = { "ProductionEnvironmentURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, ProductionEnvironmentURL), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Game Title ID\n" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
		{ "ToolTip", "Game Title ID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, TitleId), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Secret Key, Do not add this to the clients!\n" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
		{ "ToolTip", "Secret Key, Do not add this to the clients!" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayFabRuntimeSettings, DeveloperSecretKey), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams = {
		&UPlayFabRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton, Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabRuntimeSettings.OuterSingleton;
	}
	template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabRuntimeSettings>()
	{
		return UPlayFabRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabRuntimeSettings);
	UPlayFabRuntimeSettings::~UPlayFabRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabRuntimeSettings, UPlayFabRuntimeSettings::StaticClass, TEXT("UPlayFabRuntimeSettings"), &Z_Registration_Info_UClass_UPlayFabRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabRuntimeSettings), 2095787587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_4293430467(TEXT("/Script/PlayFabCommon"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFabCommon_Public_PlayFabRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
