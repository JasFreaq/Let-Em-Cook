// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabMatchmakerModelDecoder.h"
#include "../Classes/PlayFabMatchmakerModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodeUserInfoResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerUserInfoResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodeUserInfoResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodePlayerLeftResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerPlayerLeftResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodePlayerLeftResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodePlayerJoinedResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerPlayerJoinedResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodePlayerJoinedResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabMatchmakerModelDecoder::execdecodeAuthUserResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatchmakerAuthUserResponse*)Z_Param__Result=UPlayFabMatchmakerModelDecoder::decodeAuthUserResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabMatchmakerModelDecoder::StaticRegisterNativesUPlayFabMatchmakerModelDecoder()
	{
		UClass* Class = UPlayFabMatchmakerModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAuthUserResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodeAuthUserResponseResponse },
			{ "decodePlayerJoinedResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodePlayerJoinedResponseResponse },
			{ "decodePlayerLeftResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodePlayerLeftResponseResponse },
			{ "decodeUserInfoResponseResponse", &UPlayFabMatchmakerModelDecoder::execdecodeUserInfoResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerAuthUserResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, METADATA_PARAMS(nullptr, 0) }; // 4152380234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Decode the AuthUserResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModelDecoder.h" },
		{ "ToolTip", "Decode the AuthUserResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodeAuthUserResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PlayFabMatchmakerModelDecoder_eventdecodeAuthUserResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerPlayerJoinedResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, METADATA_PARAMS(nullptr, 0) }; // 286416917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Decode the PlayerJoinedResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModelDecoder.h" },
		{ "ToolTip", "Decode the PlayerJoinedResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodePlayerJoinedResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PlayFabMatchmakerModelDecoder_eventdecodePlayerJoinedResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerPlayerLeftResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, METADATA_PARAMS(nullptr, 0) }; // 3397007784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Decode the PlayerLeftResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModelDecoder.h" },
		{ "ToolTip", "Decode the PlayerLeftResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodePlayerLeftResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PlayFabMatchmakerModelDecoder_eventdecodePlayerLeftResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics
	{
		struct PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FMatchmakerUserInfoResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, METADATA_PARAMS(nullptr, 0) }; // 561383855
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Decode the UserInfoResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModelDecoder.h" },
		{ "ToolTip", "Decode the UserInfoResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, nullptr, "decodeUserInfoResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PlayFabMatchmakerModelDecoder_eventdecodeUserInfoResponseResponse_Parms), Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabMatchmakerModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_NoRegister()
	{
		return UPlayFabMatchmakerModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeAuthUserResponseResponse, "decodeAuthUserResponseResponse" }, // 495695573
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerJoinedResponseResponse, "decodePlayerJoinedResponseResponse" }, // 669587667
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodePlayerLeftResponseResponse, "decodePlayerLeftResponseResponse" }, // 816534984
		{ &Z_Construct_UFunction_UPlayFabMatchmakerModelDecoder_decodeUserInfoResponseResponse, "decodeUserInfoResponseResponse" }, // 4270382057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabMatchmakerModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabMatchmakerModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::ClassParams = {
		&UPlayFabMatchmakerModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabMatchmakerModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabMatchmakerModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabMatchmakerModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabMatchmakerModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabMatchmakerModelDecoder>()
	{
		return UPlayFabMatchmakerModelDecoder::StaticClass();
	}
	UPlayFabMatchmakerModelDecoder::UPlayFabMatchmakerModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabMatchmakerModelDecoder);
	UPlayFabMatchmakerModelDecoder::~UPlayFabMatchmakerModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabMatchmakerModelDecoder, UPlayFabMatchmakerModelDecoder::StaticClass, TEXT("UPlayFabMatchmakerModelDecoder"), &Z_Registration_Info_UClass_UPlayFabMatchmakerModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabMatchmakerModelDecoder), 3136092859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_335563937(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
