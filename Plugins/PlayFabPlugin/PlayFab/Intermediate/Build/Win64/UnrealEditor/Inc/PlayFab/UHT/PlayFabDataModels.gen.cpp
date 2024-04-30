// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabDataModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FDataAbortFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataAbortFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest;
class UScriptStruct* FDataAbortFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsRequest>()
{
	return FDataAbortFileUploadsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Aborts the pending upload of the requested files. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Aborts the pending upload of the requested files." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to have their pending uploads aborted. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to have their pending uploads aborted." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataAbortFileUploadsRequest",
		sizeof(FDataAbortFileUploadsRequest),
		alignof(FDataAbortFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataAbortFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataAbortFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse;
class UScriptStruct* FDataAbortFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsResponse>()
{
	return FDataAbortFileUploadsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataAbortFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataAbortFileUploadsResponse",
		sizeof(FDataAbortFileUploadsResponse),
		alignof(FDataAbortFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataDeleteFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataDeleteFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest;
class UScriptStruct* FDataDeleteFilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesRequest>()
{
	return FDataDeleteFilesRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Deletes the requested files from the entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Deletes the requested files from the entity's profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be deleted. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be deleted." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataDeleteFilesRequest",
		sizeof(FDataDeleteFilesRequest),
		alignof(FDataDeleteFilesRequest),
		Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataDeleteFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataDeleteFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse;
class UScriptStruct* FDataDeleteFilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesResponse>()
{
	return FDataDeleteFilesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDeleteFilesResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataDeleteFilesResponse",
		sizeof(FDataDeleteFilesResponse),
		alignof(FDataDeleteFilesResponse),
		Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataFinalizeFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest;
class UScriptStruct* FDataFinalizeFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsRequest>()
{
	return FDataFinalizeFileUploadsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\n * pointers from pending to live.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\npointers from pending to live." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsRequest",
		sizeof(FDataFinalizeFileUploadsRequest),
		alignof(FDataFinalizeFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataFinalizeFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse;
class UScriptStruct* FDataFinalizeFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsResponse>()
{
	return FDataFinalizeFileUploadsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of metadata for the entity's files */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of metadata for the entity's files" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsResponse",
		sizeof(FDataFinalizeFileUploadsResponse),
		alignof(FDataFinalizeFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataGetFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetFilesRequest;
class UScriptStruct* FDataGetFilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesRequest>()
{
	return FDataGetFilesRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\n * have been successfully uploaded, files that are still pending will either return the old value, if it exists, or\n * nothing.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\nhave been successfully uploaded, files that are still pending will either return the old value, if it exists, or\nnothing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataGetFilesRequest",
		sizeof(FDataGetFilesRequest),
		alignof(FDataGetFilesRequest),
		Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataGetFilesRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataGetFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetFilesResponse;
class UScriptStruct* FDataGetFilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetFilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesResponse>()
{
	return FDataGetFilesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of metadata for the entity's files */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of metadata for the entity's files" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetFilesResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetFilesResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataGetFilesResponse",
		sizeof(FDataGetFilesResponse),
		alignof(FDataGetFilesResponse),
		Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataGetFilesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataInitiateFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataInitiateFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest;
class UScriptStruct* FDataInitiateFileUploadsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsRequest>()
{
	return FDataInitiateFileUploadsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\n * FinalizeFileUploads must be called to move the file status from pending to live.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\nFinalizeFileUploads must be called to move the file status from pending to live." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataInitiateFileUploadsRequest",
		sizeof(FDataInitiateFileUploadsRequest),
		alignof(FDataInitiateFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataInitiateFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataInitiateFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse;
class UScriptStruct* FDataInitiateFileUploadsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsResponse>()
{
	return FDataInitiateFileUploadsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UploadDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UploadDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner = { "UploadDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of file names and upload urls */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of file names and upload urls" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails = { "UploadDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, UploadDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataInitiateFileUploadsResponse",
		sizeof(FDataInitiateFileUploadsResponse),
		alignof(FDataInitiateFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataGetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetObjectsRequest;
class UScriptStruct* FDataGetObjectsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsRequest>()
{
	return FDataGetObjectsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeObject_MetaData[];
#endif
		static void NewProp_EscapeObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EscapeObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Gets JSON objects from an entity profile and returns it. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Gets JSON objects from an entity profile and returns it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/**\n     * Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\n     * object.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\nobject." },
	};
#endif
	void Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit(void* Obj)
	{
		((FDataGetObjectsRequest*)Obj)->EscapeObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject = { "EscapeObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataGetObjectsRequest), &Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataGetObjectsRequest",
		sizeof(FDataGetObjectsRequest),
		alignof(FDataGetObjectsRequest),
		Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataGetObjectsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataGetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataGetObjectsResponse;
class UScriptStruct* FDataGetObjectsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsResponse>()
{
	return FDataGetObjectsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetObjectsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Requested objects that the calling entity has access to */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Requested objects that the calling entity has access to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetObjectsResponse, Objects), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataGetObjectsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataGetObjectsResponse",
		sizeof(FDataGetObjectsResponse),
		alignof(FDataGetObjectsResponse),
		Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataGetObjectsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataSetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataSetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataSetObjectsRequest;
class UScriptStruct* FDataSetObjectsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsRequest>()
{
	return FDataSetObjectsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\n * concurrency operations during update. If the current version differs from the version in the request the request will be\n * ignored. If no version is set on the request then the value will always be updated if the values differ. Using the\n * version value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\n * to update the same profile.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\nconcurrency operations during update. If the current version differs from the version in the request the request will be\nignored. If no version is set on the request then the value will always be updated if the values differ. Using the\nversion value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\nto update the same profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\n     * GetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\nGetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Collection of objects to set on the profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of objects to set on the profile." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsRequest, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataSetObjectsRequest",
		sizeof(FDataSetObjectsRequest),
		alignof(FDataSetObjectsRequest),
		Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton, Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataSetObjectsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataSetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataSetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataSetObjectsResponse;
class UScriptStruct* FDataSetObjectsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsResponse>()
{
	return FDataSetObjectsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SetResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** New version of the entity profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "New version of the entity profile." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner = { "SetResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** New version of the entity profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "New version of the entity profile." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults = { "SetResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataSetObjectsResponse, SetResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataSetObjectsResponse",
		sizeof(FDataSetObjectsResponse),
		alignof(FDataSetObjectsResponse),
		Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataSetObjectsResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics::ScriptStructInfo[] = {
		{ FDataAbortFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewStructOps, TEXT("DataAbortFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataAbortFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataAbortFileUploadsRequest), 2534038532U) },
		{ FDataAbortFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewStructOps, TEXT("DataAbortFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataAbortFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataAbortFileUploadsResponse), 4032651659U) },
		{ FDataDeleteFilesRequest::StaticStruct, Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewStructOps, TEXT("DataDeleteFilesRequest"), &Z_Registration_Info_UScriptStruct_DataDeleteFilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDeleteFilesRequest), 168736U) },
		{ FDataDeleteFilesResponse::StaticStruct, Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewStructOps, TEXT("DataDeleteFilesResponse"), &Z_Registration_Info_UScriptStruct_DataDeleteFilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDeleteFilesResponse), 361986050U) },
		{ FDataFinalizeFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewStructOps, TEXT("DataFinalizeFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFinalizeFileUploadsRequest), 1254320965U) },
		{ FDataFinalizeFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewStructOps, TEXT("DataFinalizeFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataFinalizeFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataFinalizeFileUploadsResponse), 1144336839U) },
		{ FDataGetFilesRequest::StaticStruct, Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewStructOps, TEXT("DataGetFilesRequest"), &Z_Registration_Info_UScriptStruct_DataGetFilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetFilesRequest), 1071324261U) },
		{ FDataGetFilesResponse::StaticStruct, Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewStructOps, TEXT("DataGetFilesResponse"), &Z_Registration_Info_UScriptStruct_DataGetFilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetFilesResponse), 3734285849U) },
		{ FDataInitiateFileUploadsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewStructOps, TEXT("DataInitiateFileUploadsRequest"), &Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataInitiateFileUploadsRequest), 2805545625U) },
		{ FDataInitiateFileUploadsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewStructOps, TEXT("DataInitiateFileUploadsResponse"), &Z_Registration_Info_UScriptStruct_DataInitiateFileUploadsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataInitiateFileUploadsResponse), 1973159413U) },
		{ FDataGetObjectsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewStructOps, TEXT("DataGetObjectsRequest"), &Z_Registration_Info_UScriptStruct_DataGetObjectsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetObjectsRequest), 2747943435U) },
		{ FDataGetObjectsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewStructOps, TEXT("DataGetObjectsResponse"), &Z_Registration_Info_UScriptStruct_DataGetObjectsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataGetObjectsResponse), 3182623602U) },
		{ FDataSetObjectsRequest::StaticStruct, Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewStructOps, TEXT("DataSetObjectsRequest"), &Z_Registration_Info_UScriptStruct_DataSetObjectsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataSetObjectsRequest), 2345598932U) },
		{ FDataSetObjectsResponse::StaticStruct, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewStructOps, TEXT("DataSetObjectsResponse"), &Z_Registration_Info_UScriptStruct_DataSetObjectsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataSetObjectsResponse), 3568447562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_724000399(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
