// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabUtilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabUtilities::execgetPhotonAppId)
	{
		P_GET_UBOOL(Z_Param_Realtime);
		P_GET_UBOOL(Z_Param_Chat);
		P_GET_UBOOL(Z_Param_Turnbased);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPlayFabUtilities::getPhotonAppId(Z_Param_Realtime,Z_Param_Chat,Z_Param_Turnbased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabUtilities::execgetErrorText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPlayFabUtilities::getErrorText(Z_Param_code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabUtilities::execsetPlayFabSettings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameTitleId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayFabSecretApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductionUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonRealtimeAppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonTurnbasedAppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PhotonChatAppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlayFabUtilities::setPlayFabSettings(Z_Param_GameTitleId,Z_Param_PlayFabSecretApiKey,Z_Param_ProductionUrl,Z_Param_PhotonRealtimeAppId,Z_Param_PhotonTurnbasedAppId,Z_Param_PhotonChatAppId);
		P_NATIVE_END;
	}
	void UPlayFabUtilities::StaticRegisterNativesUPlayFabUtilities()
	{
		UClass* Class = UPlayFabUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getErrorText", &UPlayFabUtilities::execgetErrorText },
			{ "getPhotonAppId", &UPlayFabUtilities::execgetPhotonAppId },
			{ "setPlayFabSettings", &UPlayFabUtilities::execsetPlayFabSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics
	{
		struct PlayFabUtilities_eventgetErrorText_Parms
		{
			int32 code;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_code;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventgetErrorText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Errors" },
		{ "Comment", "/** Returns the error code text given the error code */" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
		{ "ToolTip", "Returns the error code text given the error code" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getErrorText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PlayFabUtilities_eventgetErrorText_Parms), Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_getErrorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getErrorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics
	{
		struct PlayFabUtilities_eventgetPhotonAppId_Parms
		{
			bool Realtime;
			bool Chat;
			bool Turnbased;
			FString ReturnValue;
		};
		static void NewProp_Realtime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Realtime;
		static void NewProp_Chat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Chat;
		static void NewProp_Turnbased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Turnbased;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Realtime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime = { "Realtime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Chat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat = { "Chat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit(void* Obj)
	{
		((PlayFabUtilities_eventgetPhotonAppId_Parms*)Obj)->Turnbased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased = { "Turnbased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayFabUtilities_eventgetPhotonAppId_Parms), &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventgetPhotonAppId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Realtime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Chat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_Turnbased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Photon | Authentication" },
		{ "Comment", "/** Returns the requested photon application id. */" },
		{ "CPP_Default_Chat", "false" },
		{ "CPP_Default_Realtime", "false" },
		{ "CPP_Default_Turnbased", "false" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
		{ "ToolTip", "Returns the requested photon application id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "getPhotonAppId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PlayFabUtilities_eventgetPhotonAppId_Parms), Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics
	{
		struct PlayFabUtilities_eventsetPlayFabSettings_Parms
		{
			FString GameTitleId;
			FString PlayFabSecretApiKey;
			FString ProductionUrl;
			FString PhotonRealtimeAppId;
			FString PhotonTurnbasedAppId;
			FString PhotonChatAppId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameTitleId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFabSecretApiKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductionUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonRealtimeAppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonTurnbasedAppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PhotonChatAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId = { "GameTitleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, GameTitleId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey = { "PlayFabSecretApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PlayFabSecretApiKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl = { "ProductionUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, ProductionUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId = { "PhotonRealtimeAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonRealtimeAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId = { "PhotonTurnbasedAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonTurnbasedAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId = { "PhotonChatAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabUtilities_eventsetPlayFabSettings_Parms, PhotonChatAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_GameTitleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PlayFabSecretApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_ProductionUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonRealtimeAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonTurnbasedAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::NewProp_PhotonChatAppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Settings" },
		{ "Comment", "/** Setup the PlayFab settings used throughout the plugin. */" },
		{ "CPP_Default_PhotonChatAppId", "" },
		{ "CPP_Default_PhotonRealtimeAppId", "" },
		{ "CPP_Default_PhotonTurnbasedAppId", "" },
		{ "CPP_Default_PlayFabSecretApiKey", "" },
		{ "CPP_Default_ProductionUrl", "" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
		{ "ToolTip", "Setup the PlayFab settings used throughout the plugin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabUtilities, nullptr, "setPlayFabSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PlayFabUtilities_eventsetPlayFabSettings_Parms), Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabUtilities);
	UClass* Z_Construct_UClass_UPlayFabUtilities_NoRegister()
	{
		return UPlayFabUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabUtilities_getErrorText, "getErrorText" }, // 2553097142
		{ &Z_Construct_UFunction_UPlayFabUtilities_getPhotonAppId, "getPhotonAppId" }, // 1341151706
		{ &Z_Construct_UFunction_UPlayFabUtilities_setPlayFabSettings, "setPlayFabSettings" }, // 3582995999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabUtilities.h" },
		{ "ModuleRelativePath", "Classes/PlayFabUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams = {
		&UPlayFabUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabUtilities()
	{
		if (!Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton, Z_Construct_UClass_UPlayFabUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabUtilities.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabUtilities>()
	{
		return UPlayFabUtilities::StaticClass();
	}
	UPlayFabUtilities::UPlayFabUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabUtilities);
	UPlayFabUtilities::~UPlayFabUtilities() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabUtilities, UPlayFabUtilities::StaticClass, TEXT("UPlayFabUtilities"), &Z_Registration_Info_UClass_UPlayFabUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabUtilities), 4038397521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_722170525(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
