// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabExperimentationModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabExperimentationModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentType();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationCreateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest;
class UScriptStruct* FExperimentationCreateExclusionGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupRequest>()
{
	return FExperimentationCreateExclusionGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and exclusion group details, will create a new exclusion group for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and exclusion group details, will create a new exclusion group for the title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupRequest",
		sizeof(FExperimentationCreateExclusionGroupRequest),
		alignof(FExperimentationCreateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationCreateExclusionGroupResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult;
class UScriptStruct* FExperimentationCreateExclusionGroupResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupResult>()
{
	return FExperimentationCreateExclusionGroupResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Identifier of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Identifier of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExclusionGroupResult, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupResult",
		sizeof(FExperimentationCreateExclusionGroupResult),
		alignof(FExperimentationCreateExclusionGroupResult),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationCreateExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationCreateExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest;
class UScriptStruct* FExperimentationCreateExperimentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExperimentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExperimentRequest>()
{
	return FExperimentationCreateExperimentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupTrafficAllocation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExclusionGroupTrafficAllocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExperimentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExperimentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SegmentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccountTestIds_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitlePlayerAccountTestIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and experiment details, will create a new experiment for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, will create a new experiment for the title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExperimentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should end. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should end." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Percentage of exclusion group traffic that will see this experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Percentage of exclusion group traffic that will see this experiment." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation = { "ExclusionGroupTrafficAllocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExclusionGroupTrafficAllocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Type of experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Type of experiment." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType = { "ExperimentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExperimentType), Z_Construct_UEnum_PlayFab_EExperimentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData)) }; // 1639699922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the segment to which this experiment applies. Defaults to the 'All Players' segment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the segment to which this experiment applies. Defaults to the 'All Players' segment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should start." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/**\n     * List of title player account IDs that automatically receive treatments in the experiment, but are not included when\n     * calculating experiment metrics.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of title player account IDs that automatically receive treatments in the experiment, but are not included when\ncalculating experiment metrics." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds = { "TitlePlayerAccountTestIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, TitlePlayerAccountTestIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of variants for the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of variants for the experiment." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationCreateExperimentRequest",
		sizeof(FExperimentationCreateExperimentRequest),
		alignof(FExperimentationCreateExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationCreateExperimentResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationCreateExperimentResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult;
class UScriptStruct* FExperimentationCreateExperimentResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExperimentResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExperimentResult>()
{
	return FExperimentationCreateExperimentResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExperimentResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the new experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the new experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationCreateExperimentResult, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationCreateExperimentResult",
		sizeof(FExperimentationCreateExperimentResult),
		alignof(FExperimentationCreateExperimentResult),
		Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationDeleteExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationDeleteExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest;
class UScriptStruct* FExperimentationDeleteExclusionGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationDeleteExclusionGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationDeleteExclusionGroupRequest>()
{
	return FExperimentationDeleteExclusionGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given an entity token and an exclusion group ID this API deletes the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and an exclusion group ID this API deletes the exclusion group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationDeleteExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationDeleteExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group to delete." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationDeleteExclusionGroupRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationDeleteExclusionGroupRequest",
		sizeof(FExperimentationDeleteExclusionGroupRequest),
		alignof(FExperimentationDeleteExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse;
class UScriptStruct* FExperimentationEmptyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationEmptyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationEmptyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationEmptyResponse>()
{
	return FExperimentationEmptyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationEmptyResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationEmptyResponse",
		sizeof(FExperimentationEmptyResponse),
		alignof(FExperimentationEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationDeleteExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationDeleteExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest;
class UScriptStruct* FExperimentationDeleteExperimentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationDeleteExperimentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationDeleteExperimentRequest>()
{
	return FExperimentationDeleteExperimentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity token and an experiment ID this API deletes the experiment. A running experiment must be stopped before\n * it can be deleted.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and an experiment ID this API deletes the experiment. A running experiment must be stopped before\nit can be deleted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationDeleteExperimentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationDeleteExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to delete." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationDeleteExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationDeleteExperimentRequest",
		sizeof(FExperimentationDeleteExperimentRequest),
		alignof(FExperimentationDeleteExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExclusionGroupsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest;
class UScriptStruct* FExperimentationGetExclusionGroupsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupsRequest>()
{
	return FExperimentationGetExclusionGroupsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token will return the list of all exclusion groups for a title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token will return the list of all exclusion groups for a title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExclusionGroupsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupsRequest",
		sizeof(FExperimentationGetExclusionGroupsRequest),
		alignof(FExperimentationGetExclusionGroupsRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExclusionGroupsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult;
class UScriptStruct* FExperimentationGetExclusionGroupsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupsResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupsResult>()
{
	return FExperimentationGetExclusionGroupsResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExclusionGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExclusionGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupsResult>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_Inner = { "ExclusionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of exclusion groups for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of exclusion groups for the title." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups = { "ExclusionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExclusionGroupsResult, ExclusionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupsResult",
		sizeof(FExperimentationGetExclusionGroupsResult),
		alignof(FExperimentationGetExclusionGroupsResult),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupTrafficRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExclusionGroupTrafficRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest;
class UScriptStruct* FExperimentationGetExclusionGroupTrafficRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupTrafficRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupTrafficRequest>()
{
	return FExperimentationGetExclusionGroupTrafficRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token and an exclusion group ID, will return the list of traffic allocations for the exclusion\n * group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an exclusion group ID, will return the list of traffic allocations for the exclusion\ngroup." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupTrafficRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupTrafficRequest",
		sizeof(FExperimentationGetExclusionGroupTrafficRequest),
		alignof(FExperimentationGetExclusionGroupTrafficRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupTrafficResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExclusionGroupTrafficResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult;
class UScriptStruct* FExperimentationGetExclusionGroupTrafficResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupTrafficResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupTrafficResult>()
{
	return FExperimentationGetExclusionGroupTrafficResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficAllocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficAllocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficAllocations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupTrafficResult>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_Inner = { "TrafficAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of traffic allocations for the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of traffic allocations for the exclusion group." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations = { "TrafficAllocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficResult, TrafficAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupTrafficResult",
		sizeof(FExperimentationGetExclusionGroupTrafficResult),
		alignof(FExperimentationGetExclusionGroupTrafficResult),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExperimentsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExperimentsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest;
class UScriptStruct* FExperimentationGetExperimentsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExperimentsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExperimentsRequest>()
{
	return FExperimentationGetExperimentsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token will return the list of all experiments for a title, including scheduled, started, stopped or\n * completed experiments.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token will return the list of all experiments for a title, including scheduled, started, stopped or\ncompleted experiments." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExperimentsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExperimentsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExperimentsRequest",
		sizeof(FExperimentationGetExperimentsRequest),
		alignof(FExperimentationGetExperimentsRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetExperimentsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExperimentsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult;
class UScriptStruct* FExperimentationGetExperimentsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExperimentsResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExperimentsResult>()
{
	return FExperimentationGetExperimentsResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Experiments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Experiments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Experiments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExperimentsResult>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_Inner = { "Experiments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of experiments for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of experiments for the title." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments = { "Experiments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetExperimentsResult, Experiments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExperimentsResult",
		sizeof(FExperimentationGetExperimentsResult),
		alignof(FExperimentationGetExperimentsResult),
		Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetLatestScorecardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest;
class UScriptStruct* FExperimentationGetLatestScorecardRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardRequest>()
{
	return FExperimentationGetLatestScorecardRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and experiment details, will return the latest available scorecard. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, will return the latest available scorecard." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardRequest",
		sizeof(FExperimentationGetLatestScorecardRequest),
		alignof(FExperimentationGetLatestScorecardRequest),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetLatestScorecardResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult;
class UScriptStruct* FExperimentationGetLatestScorecardResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardResult>()
{
	return FExperimentationGetLatestScorecardResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scorecard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scorecard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Scorecard for the experiment of the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Scorecard for the experiment of the title." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard = { "Scorecard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetLatestScorecardResult, Scorecard), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardResult",
		sizeof(FExperimentationGetLatestScorecardResult),
		alignof(FExperimentationGetLatestScorecardResult),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetTreatmentAssignmentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetTreatmentAssignmentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest;
class UScriptStruct* FExperimentationGetTreatmentAssignmentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetTreatmentAssignmentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetTreatmentAssignmentRequest>()
{
	return FExperimentationGetTreatmentAssignmentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title player or a title entity token, returns the treatment variants and variables assigned to the entity across\n * all running experiments\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title player or a title entity token, returns the treatment variants and variables assigned to the entity across\nall running experiments" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetTreatmentAssignmentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetTreatmentAssignmentRequest",
		sizeof(FExperimentationGetTreatmentAssignmentRequest),
		alignof(FExperimentationGetTreatmentAssignmentRequest),
		Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationGetTreatmentAssignmentResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetTreatmentAssignmentResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult;
class UScriptStruct* FExperimentationGetTreatmentAssignmentResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetTreatmentAssignmentResult"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetTreatmentAssignmentResult>()
{
	return FExperimentationGetTreatmentAssignmentResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreatmentAssignment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreatmentAssignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetTreatmentAssignmentResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Treatment assignment for the entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Treatment assignment for the entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment = { "TreatmentAssignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentResult, TreatmentAssignment), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetTreatmentAssignmentResult",
		sizeof(FExperimentationGetTreatmentAssignmentResult),
		alignof(FExperimentationGetTreatmentAssignmentResult),
		Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationStartExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationStartExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest;
class UScriptStruct* FExperimentationStartExperimentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationStartExperimentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationStartExperimentRequest>()
{
	return FExperimentationStartExperimentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and an experiment ID, this API starts the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an experiment ID, this API starts the experiment." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationStartExperimentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationStartExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to start." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationStartExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationStartExperimentRequest",
		sizeof(FExperimentationStartExperimentRequest),
		alignof(FExperimentationStartExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationStopExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationStopExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest;
class UScriptStruct* FExperimentationStopExperimentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationStopExperimentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationStopExperimentRequest>()
{
	return FExperimentationStopExperimentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and an experiment ID, this API stops the experiment if it is running. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an experiment ID, this API stops the experiment if it is running." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationStopExperimentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationStopExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to stop. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to stop." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationStopExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationStopExperimentRequest",
		sizeof(FExperimentationStopExperimentRequest),
		alignof(FExperimentationStopExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationUpdateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest;
class UScriptStruct* FExperimentationUpdateExclusionGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExclusionGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExclusionGroupRequest>()
{
	return FExperimentationUpdateExclusionGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given an entity token and exclusion group details this API updates the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and exclusion group details this API updates the exclusion group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group to update. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group to update." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExclusionGroupRequest",
		sizeof(FExperimentationUpdateExclusionGroupRequest),
		alignof(FExperimentationUpdateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExperimentationUpdateExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest;
class UScriptStruct* FExperimentationUpdateExperimentRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExperimentRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExperimentRequest>()
{
	return FExperimentationUpdateExperimentRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupTrafficAllocation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExclusionGroupTrafficAllocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExperimentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExperimentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SegmentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccountTestIds_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitlePlayerAccountTestIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token and experiment details, this API updates the experiment. If an experiment is already running,\n * only the description and duration properties can be updated.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, this API updates the experiment. If an experiment is already running,\nonly the description and duration properties can be updated." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExperimentRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should end. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should end." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the exclusion group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Percentage of exclusion group traffic that will see this experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Percentage of exclusion group traffic that will see this experiment." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation = { "ExclusionGroupTrafficAllocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupTrafficAllocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Type of experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Type of experiment." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType = { "ExperimentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExperimentType), Z_Construct_UEnum_PlayFab_EExperimentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData)) }; // 1639699922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the experiment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the segment to which this experiment applies. Defaults to the 'All Players' segment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the segment to which this experiment applies. Defaults to the 'All Players' segment." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should start." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/**\n     * List of title player account IDs that automatically receive treatments in the experiment, but are not included when\n     * calculating experiment metrics.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of title player account IDs that automatically receive treatments in the experiment, but are not included when\ncalculating experiment metrics." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds = { "TitlePlayerAccountTestIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, TitlePlayerAccountTestIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of variants for the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of variants for the experiment." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExperimentRequest",
		sizeof(FExperimentationUpdateExperimentRequest),
		alignof(FExperimentationUpdateExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.InnerSingleton, Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModels_h_Statics::ScriptStructInfo[] = {
		{ FExperimentationCreateExclusionGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewStructOps, TEXT("ExperimentationCreateExclusionGroupRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationCreateExclusionGroupRequest), 1248914583U) },
		{ FExperimentationCreateExclusionGroupResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewStructOps, TEXT("ExperimentationCreateExclusionGroupResult"), &Z_Registration_Info_UScriptStruct_ExperimentationCreateExclusionGroupResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationCreateExclusionGroupResult), 4103382966U) },
		{ FExperimentationCreateExperimentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewStructOps, TEXT("ExperimentationCreateExperimentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationCreateExperimentRequest), 1429875655U) },
		{ FExperimentationCreateExperimentResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewStructOps, TEXT("ExperimentationCreateExperimentResult"), &Z_Registration_Info_UScriptStruct_ExperimentationCreateExperimentResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationCreateExperimentResult), 843745214U) },
		{ FExperimentationDeleteExclusionGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewStructOps, TEXT("ExperimentationDeleteExclusionGroupRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationDeleteExclusionGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationDeleteExclusionGroupRequest), 2294968026U) },
		{ FExperimentationEmptyResponse::StaticStruct, Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::NewStructOps, TEXT("ExperimentationEmptyResponse"), &Z_Registration_Info_UScriptStruct_ExperimentationEmptyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationEmptyResponse), 1300677066U) },
		{ FExperimentationDeleteExperimentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewStructOps, TEXT("ExperimentationDeleteExperimentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationDeleteExperimentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationDeleteExperimentRequest), 961659842U) },
		{ FExperimentationGetExclusionGroupsRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewStructOps, TEXT("ExperimentationGetExclusionGroupsRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExclusionGroupsRequest), 114265486U) },
		{ FExperimentationGetExclusionGroupsResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewStructOps, TEXT("ExperimentationGetExclusionGroupsResult"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExclusionGroupsResult), 2385097013U) },
		{ FExperimentationGetExclusionGroupTrafficRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewStructOps, TEXT("ExperimentationGetExclusionGroupTrafficRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExclusionGroupTrafficRequest), 819606403U) },
		{ FExperimentationGetExclusionGroupTrafficResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewStructOps, TEXT("ExperimentationGetExclusionGroupTrafficResult"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExclusionGroupTrafficResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExclusionGroupTrafficResult), 920875114U) },
		{ FExperimentationGetExperimentsRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewStructOps, TEXT("ExperimentationGetExperimentsRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExperimentsRequest), 3938327793U) },
		{ FExperimentationGetExperimentsResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewStructOps, TEXT("ExperimentationGetExperimentsResult"), &Z_Registration_Info_UScriptStruct_ExperimentationGetExperimentsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetExperimentsResult), 4178905107U) },
		{ FExperimentationGetLatestScorecardRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewStructOps, TEXT("ExperimentationGetLatestScorecardRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetLatestScorecardRequest), 1076408961U) },
		{ FExperimentationGetLatestScorecardResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewStructOps, TEXT("ExperimentationGetLatestScorecardResult"), &Z_Registration_Info_UScriptStruct_ExperimentationGetLatestScorecardResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetLatestScorecardResult), 3575427961U) },
		{ FExperimentationGetTreatmentAssignmentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewStructOps, TEXT("ExperimentationGetTreatmentAssignmentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetTreatmentAssignmentRequest), 2642777748U) },
		{ FExperimentationGetTreatmentAssignmentResult::StaticStruct, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewStructOps, TEXT("ExperimentationGetTreatmentAssignmentResult"), &Z_Registration_Info_UScriptStruct_ExperimentationGetTreatmentAssignmentResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationGetTreatmentAssignmentResult), 3466471447U) },
		{ FExperimentationStartExperimentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewStructOps, TEXT("ExperimentationStartExperimentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationStartExperimentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationStartExperimentRequest), 1629982415U) },
		{ FExperimentationStopExperimentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewStructOps, TEXT("ExperimentationStopExperimentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationStopExperimentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationStopExperimentRequest), 4015588243U) },
		{ FExperimentationUpdateExclusionGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewStructOps, TEXT("ExperimentationUpdateExclusionGroupRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationUpdateExclusionGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationUpdateExclusionGroupRequest), 770127492U) },
		{ FExperimentationUpdateExperimentRequest::StaticStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewStructOps, TEXT("ExperimentationUpdateExperimentRequest"), &Z_Registration_Info_UScriptStruct_ExperimentationUpdateExperimentRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExperimentationUpdateExperimentRequest), 2987194405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModels_h_1553459982(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
