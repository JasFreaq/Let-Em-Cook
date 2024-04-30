// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabBaseModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabBaseModel() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabError;
class UScriptStruct* FPlayFabError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabError, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabError"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabError.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabError>()
{
	return FPlayFabError::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayFabError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasError_MetaData[];
#endif
		static void NewProp_hasError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabError>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Is there an error */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Is there an error" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit(void* Obj)
	{
		((FPlayFabError*)Obj)->hasError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError = { "hasError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlayFabError), &Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error code recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error code recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabError, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error name recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error name recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName = { "ErrorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabError, ErrorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error message recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error message recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabError, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error details recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error details recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails = { "ErrorDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabError, ErrorDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabError",
		sizeof(FPlayFabError),
		alignof(FPlayFabError),
		Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayFabError.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayFabBaseModel;
class UScriptStruct* FPlayFabBaseModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabBaseModel, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabBaseModel"));
	}
	return Z_Registration_Info_UScriptStruct_PlayFabBaseModel.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabBaseModel>()
{
	return FPlayFabBaseModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_responseError_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_responseError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_responseData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabBaseModel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error USTRUCT recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error USTRUCT recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError = { "responseError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabBaseModel, responseError), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData)) }; // 1203376160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the full JSON recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the full JSON recieved from playfab." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayFabBaseModel, responseData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabBaseModel",
		sizeof(FPlayFabBaseModel),
		alignof(FPlayFabBaseModel),
		Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayFabBaseModel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics::ScriptStructInfo[] = {
		{ FPlayFabError::StaticStruct, Z_Construct_UScriptStruct_FPlayFabError_Statics::NewStructOps, TEXT("PlayFabError"), &Z_Registration_Info_UScriptStruct_PlayFabError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabError), 1203376160U) },
		{ FPlayFabBaseModel::StaticStruct, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewStructOps, TEXT("PlayFabBaseModel"), &Z_Registration_Info_UScriptStruct_PlayFabBaseModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayFabBaseModel), 259978491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_1652734172(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabBaseModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
