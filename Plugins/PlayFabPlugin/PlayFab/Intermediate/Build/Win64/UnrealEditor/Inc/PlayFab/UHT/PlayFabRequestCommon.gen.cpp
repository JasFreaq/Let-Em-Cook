// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabRequestCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRequestCommon() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabRequestCommon;
class UScriptStruct* FPlayFabRequestCommon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabRequestCommon, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabRequestCommon"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabRequestCommon>()
{
	return FPlayFabRequestCommon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuthenticationContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for all PlayFab Requests\n*/" },
		{ "ModuleRelativePath", "Classes/PlayFabRequestCommon.h" },
		{ "ToolTip", "Base class for all PlayFab Requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabRequestCommon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData[] = {
		{ "Category", "PlayFab | Core" },
		{ "Comment", "// An optional authentication context (can used in multi-user scenarios)\n" },
		{ "ModuleRelativePath", "Classes/PlayFabRequestCommon.h" },
		{ "ToolTip", "An optional authentication context (can used in multi-user scenarios)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabRequestCommon, AuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabRequestCommon",
		sizeof(FPlayFabRequestCommon),
		alignof(FPlayFabRequestCommon),
		Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayFabRequestCommon.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics::ScriptStructInfo[] = {
		{ FPlayFabRequestCommon::StaticStruct, Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewStructOps, TEXT("PlayFabRequestCommon"), &Z_Registration_Info_UScriptStruct_PlayFabRequestCommon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabRequestCommon), 678113657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_988066343(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabRequestCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
