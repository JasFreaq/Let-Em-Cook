// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabInsightsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabInsightsModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsEmptyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsEmptyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest;
class UScriptStruct* FInsightsInsightsEmptyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsEmptyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsEmptyRequest>()
{
	return FInsightsInsightsEmptyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// Analytics\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "/\n Analytics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsEmptyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsEmptyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsEmptyRequest",
		sizeof(FInsightsInsightsEmptyRequest),
		alignof(FInsightsInsightsEmptyRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse;
class UScriptStruct* FInsightsInsightsGetDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetDetailsResponse>()
{
	return FInsightsInsightsGetDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataUsageMb_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataUsageMb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limits_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Limits;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetDetailsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Amount of data (in MB) currently used by Insights. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Amount of data (in MB) currently used by Insights." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb = { "DataUsageMb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, DataUsageMb), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Details of any error that occurred while retrieving Insights details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Details of any error that occurred while retrieving Insights details." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Allowed range of values for performance level and data storage retention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Allowed range of values for performance level and data storage retention." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits = { "Limits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, Limits), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of pending Insights operations for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of pending Insights operations for the title." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current Insights performance level setting. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current Insights performance level setting." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current Insights data storage retention value in days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current Insights data storage retention value in days." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetDetailsResponse",
		sizeof(FInsightsInsightsGetDetailsResponse),
		alignof(FInsightsInsightsGetDetailsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetLimitsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetLimitsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse;
class UScriptStruct* FInsightsInsightsGetLimitsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetLimitsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetLimitsResponse>()
{
	return FInsightsInsightsGetLimitsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPerformanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPerformanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStorageRetentionDays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultStorageRetentionDays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageMaxRetentionDays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StorageMaxRetentionDays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageMinRetentionDays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StorageMinRetentionDays;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubMeters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMeters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubMeters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetLimitsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Default Insights performance level. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Default Insights performance level." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel = { "DefaultPerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultPerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Default Insights data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Default Insights data storage retention days." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays = { "DefaultStorageRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultStorageRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Maximum allowed data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Maximum allowed data storage retention days." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays = { "StorageMaxRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMaxRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Minimum allowed data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Minimum allowed data storage retention days." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays = { "StorageMinRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMinRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner = { "SubMeters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of Insights submeter limits for the allowed performance levels. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of Insights submeter limits for the allowed performance levels." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters = { "SubMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, SubMeters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetLimitsResponse",
		sizeof(FInsightsInsightsGetLimitsResponse),
		alignof(FInsightsInsightsGetLimitsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest;
class UScriptStruct* FInsightsInsightsGetOperationStatusRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusRequest>()
{
	return FInsightsInsightsGetOperationStatusRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns the current status for the requested operation id. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Returns the current status for the requested operation id." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsGetOperationStatusRequest",
		sizeof(FInsightsInsightsGetOperationStatusRequest),
		alignof(FInsightsInsightsGetOperationStatusRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse;
class UScriptStruct* FInsightsInsightsGetOperationStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusResponse>()
{
	return FInsightsInsightsGetOperationStatusResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationCompletedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationCompletedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationLastUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationLastUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationStartedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationStartedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OperationValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Optional message related to the operation details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Optional message related to the operation details." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation was completed. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation was completed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime = { "OperationCompletedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationCompletedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation status was last updated. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation status was last updated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated = { "OperationLastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationLastUpdated), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation started. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation started." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime = { "OperationStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationStartedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The value requested for the operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The value requested for the operation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue = { "OperationValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current status of the operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current status of the operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetOperationStatusResponse",
		sizeof(FInsightsInsightsGetOperationStatusResponse),
		alignof(FInsightsInsightsGetOperationStatusResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest;
class UScriptStruct* FInsightsInsightsGetPendingOperationsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsRequest>()
{
	return FInsightsInsightsGetPendingOperationsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns a list of operations that are in the pending state for the requested operation type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Returns a list of operations that are in the pending state for the requested operation type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of pending operations requested, or blank for all operation types. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of pending operations requested, or blank for all operation types." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsGetPendingOperationsRequest",
		sizeof(FInsightsInsightsGetPendingOperationsRequest),
		alignof(FInsightsInsightsGetPendingOperationsRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse;
class UScriptStruct* FInsightsInsightsGetPendingOperationsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsResponse>()
{
	return FInsightsInsightsGetPendingOperationsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of pending Insights operations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of pending Insights operations." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetPendingOperationsResponse",
		sizeof(FInsightsInsightsGetPendingOperationsResponse),
		alignof(FInsightsInsightsGetPendingOperationsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsOperationResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsOperationResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse;
class UScriptStruct* FInsightsInsightsOperationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsOperationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsOperationResponse>()
{
	return FInsightsInsightsOperationResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsOperationResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Optional message related to the operation details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Optional message related to the operation details." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsOperationResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsOperationResponse",
		sizeof(FInsightsInsightsOperationResponse),
		alignof(FInsightsInsightsOperationResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsSetPerformanceRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetPerformanceRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest;
class UScriptStruct* FInsightsInsightsSetPerformanceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetPerformanceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetPerformanceRequest>()
{
	return FInsightsInsightsSetPerformanceRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sets the performance level to the requested value. Use the GetLimits method to get the allowed values. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Sets the performance level to the requested value. Use the GetLimits method to get the allowed values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetPerformanceRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The Insights performance level to apply to the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The Insights performance level to apply to the title." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, PerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsSetPerformanceRequest",
		sizeof(FInsightsInsightsSetPerformanceRequest),
		alignof(FInsightsInsightsSetPerformanceRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInsightsInsightsSetStorageRetentionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetStorageRetentionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest;
class UScriptStruct* FInsightsInsightsSetStorageRetentionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetStorageRetentionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetStorageRetentionRequest>()
{
	return FInsightsInsightsSetStorageRetentionRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetStorageRetentionRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The Insights data storage retention value (in days) to apply to the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The Insights data storage retention value (in days) to apply to the title." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsSetStorageRetentionRequest",
		sizeof(FInsightsInsightsSetStorageRetentionRequest),
		alignof(FInsightsInsightsSetStorageRetentionRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics::ScriptStructInfo[] = {
		{ FInsightsInsightsEmptyRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewStructOps, TEXT("InsightsInsightsEmptyRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsEmptyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsEmptyRequest), 201941827U) },
		{ FInsightsInsightsGetDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetDetailsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetDetailsResponse), 331697410U) },
		{ FInsightsInsightsGetLimitsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetLimitsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetLimitsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetLimitsResponse), 1480048940U) },
		{ FInsightsInsightsGetOperationStatusRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewStructOps, TEXT("InsightsInsightsGetOperationStatusRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetOperationStatusRequest), 4107247505U) },
		{ FInsightsInsightsGetOperationStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetOperationStatusResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetOperationStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetOperationStatusResponse), 116825435U) },
		{ FInsightsInsightsGetPendingOperationsRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewStructOps, TEXT("InsightsInsightsGetPendingOperationsRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetPendingOperationsRequest), 2745787188U) },
		{ FInsightsInsightsGetPendingOperationsResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewStructOps, TEXT("InsightsInsightsGetPendingOperationsResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsGetPendingOperationsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsGetPendingOperationsResponse), 938717220U) },
		{ FInsightsInsightsOperationResponse::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewStructOps, TEXT("InsightsInsightsOperationResponse"), &Z_Registration_Info_UScriptStruct_InsightsInsightsOperationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsOperationResponse), 563297340U) },
		{ FInsightsInsightsSetPerformanceRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewStructOps, TEXT("InsightsInsightsSetPerformanceRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsSetPerformanceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsSetPerformanceRequest), 1046854223U) },
		{ FInsightsInsightsSetStorageRetentionRequest::StaticStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewStructOps, TEXT("InsightsInsightsSetStorageRetentionRequest"), &Z_Registration_Info_UScriptStruct_InsightsInsightsSetStorageRetentionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInsightsInsightsSetStorageRetentionRequest), 3312507680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_3327610636(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
