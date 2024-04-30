// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabProfilesModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest;
class UScriptStruct* FProfilesGetGlobalPolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyRequest>()
{
	return FProfilesGetGlobalPolicyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\n * customized this will return the default starter policy built by PlayFab.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\ncustomized this will return the default starter policy built by PlayFab." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetGlobalPolicyRequest",
		sizeof(FProfilesGetGlobalPolicyRequest),
		alignof(FProfilesGetGlobalPolicyRequest),
		Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse;
class UScriptStruct* FProfilesGetGlobalPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyResponse>()
{
	return FProfilesGetGlobalPolicyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetGlobalPolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetGlobalPolicyResponse",
		sizeof(FProfilesGetGlobalPolicyResponse),
		alignof(FProfilesGetGlobalPolicyResponse),
		Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetEntityProfileRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfileRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest;
class UScriptStruct* FProfilesGetEntityProfileRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileRequest>()
{
	return FProfilesGetEntityProfileRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[];
#endif
		static void NewProp_DataAsObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\n * retrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\n * read means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\n * read. If consistency is important the Version Number on the result can be used to compare which version of the profile\n * any reader has.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\nretrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\nread means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\nread. If consistency is important the Version Number on the result can be used to compare which version of the profile\nany reader has." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
	{
		((FProfilesGetEntityProfileRequest*)Obj)->DataAsObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProfilesGetEntityProfileRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetEntityProfileRequest",
		sizeof(FProfilesGetEntityProfileRequest),
		alignof(FProfilesGetEntityProfileRequest),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetEntityProfileResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfileResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse;
class UScriptStruct* FProfilesGetEntityProfileResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileResponse>()
{
	return FProfilesGetEntityProfileResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Profile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity profile */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity profile" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfileResponse, Profile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetEntityProfileResponse",
		sizeof(FProfilesGetEntityProfileResponse),
		alignof(FProfilesGetEntityProfileResponse),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetEntityProfilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest;
class UScriptStruct* FProfilesGetEntityProfilesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesRequest>()
{
	return FProfilesGetEntityProfilesRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[];
#endif
		static void NewProp_DataAsObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\n * Profiles that the caller is not allowed to read will silently not be included in the results.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\nProfiles that the caller is not allowed to read will silently not be included in the results." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
	{
		((FProfilesGetEntityProfilesRequest*)Obj)->DataAsObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProfilesGetEntityProfilesRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity keys of the profiles to load. Must be between 1 and 25 */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity keys of the profiles to load. Must be between 1 and 25" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetEntityProfilesRequest",
		sizeof(FProfilesGetEntityProfilesRequest),
		alignof(FProfilesGetEntityProfilesRequest),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetEntityProfilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse;
class UScriptStruct* FProfilesGetEntityProfilesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesResponse>()
{
	return FProfilesGetEntityProfilesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity profiles */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity profiles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetEntityProfilesResponse, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetEntityProfilesResponse",
		sizeof(FProfilesGetEntityProfilesResponse),
		alignof(FProfilesGetEntityProfilesResponse),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerAccountIds_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterPlayerAccountIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a master player account id (PlayFab ID), returns all title player accounts associated with it. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a master player account id (PlayFab ID), returns all title player accounts associated with it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Master player account ids. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Master player account ids." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds = { "MasterPlayerAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, MasterPlayerAccountIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Optional id of title to get players from, required if calling using a master_player_account. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Optional id of title to get players from, required if calling using a master_player_account." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Dictionary of master player ids mapped to title player entity keys and id pairs */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Dictionary of master player ids mapped to title player entity keys and id pairs" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromProviderIDsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromProviderIDsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse;
class UScriptStruct* FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromProviderIDsResponse>()
{
	return FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromProviderIDsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\n     * doesn't exist or doesn't play the requested title.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\ndoesn't exist or doesn't play the requested title." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromProviderIDsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromProviderIDsResponse",
		sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse),
		alignof(FProfilesGetTitlePlayersFromProviderIDsResponse),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromXboxLiveIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest;
class UScriptStruct* FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>()
{
	return FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sandbox_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Sandbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxLiveIds_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_XboxLiveIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a collection of Xbox IDs (XUIDs), returns all title player accounts. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a collection of Xbox IDs (XUIDs), returns all title player accounts." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Xbox Sandbox the players had on their Xbox tokens. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Xbox Sandbox the players had on their Xbox tokens." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, Sandbox), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** List of Xbox Live XUIDs */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "List of Xbox Live XUIDs" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds = { "XboxLiveIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, XboxLiveIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromXboxLiveIDsRequest",
		sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
		alignof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest;
class UScriptStruct* FProfilesSetGlobalPolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyRequest>()
{
	return FProfilesSetGlobalPolicyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\n * compiled and cached for several minutes so an update here may not be reflected in behavior for a short time.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\ncompiled and cached for several minutes so an update here may not be reflected in behavior for a short time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetGlobalPolicyRequest",
		sizeof(FProfilesSetGlobalPolicyRequest),
		alignof(FProfilesSetGlobalPolicyRequest),
		Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse;
class UScriptStruct* FProfilesSetGlobalPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyResponse>()
{
	return FProfilesSetGlobalPolicyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetGlobalPolicyResponse",
		sizeof(FProfilesSetGlobalPolicyResponse),
		alignof(FProfilesSetGlobalPolicyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetProfileLanguageRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetProfileLanguageRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest;
class UScriptStruct* FProfilesSetProfileLanguageRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageRequest>()
{
	return FProfilesSetProfileLanguageRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\n * passed in.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\npassed in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The expected version of a profile to perform this update on */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The expected version of a profile to perform this update on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion = { "ExpectedVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, ExpectedVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The language to set on the given entity. Deletes the profile's language if passed in a null string. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The language to set on the given entity. Deletes the profile's language if passed in a null string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetProfileLanguageRequest",
		sizeof(FProfilesSetProfileLanguageRequest),
		alignof(FProfilesSetProfileLanguageRequest),
		Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetProfileLanguageResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetProfileLanguageResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse;
class UScriptStruct* FProfilesSetProfileLanguageResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageResponse>()
{
	return FProfilesSetProfileLanguageResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The type of operation that occured on the profile's language */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The type of operation that occured on the profile's language" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, OperationResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData)) }; // 1096483792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The updated version of the profile after the language update */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The updated version of the profile after the language update" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, VersionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetProfileLanguageResponse",
		sizeof(FProfilesSetProfileLanguageResponse),
		alignof(FProfilesSetProfileLanguageResponse),
		Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest;
class UScriptStruct* FProfilesSetEntityProfilePolicyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyRequest>()
{
	return FProfilesSetEntityProfilePolicyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Statements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Statements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This will set the access policy statements on the given entity profile. This is not additive, any existing statements\n * will be replaced with the statements in this request.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "This will set the access policy statements on the given entity profile. This is not additive, any existing statements\nwill be replaced with the statements in this request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The statements to include in the access policy. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The statements to include in the access policy." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyRequest",
		sizeof(FProfilesSetEntityProfilePolicyRequest),
		alignof(FProfilesSetEntityProfilePolicyRequest),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse;
class UScriptStruct* FProfilesSetEntityProfilePolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyResponse>()
{
	return FProfilesSetEntityProfilePolicyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\n     * profile, not global statements from titles and namespaces.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\nprofile, not global statements from titles and namespaces." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyResponse",
		sizeof(FProfilesSetEntityProfilePolicyResponse),
		alignof(FProfilesSetEntityProfilePolicyResponse),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics::ScriptStructInfo[] = {
		{ FProfilesGetGlobalPolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewStructOps, TEXT("ProfilesGetGlobalPolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetGlobalPolicyRequest), 759420975U) },
		{ FProfilesGetGlobalPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewStructOps, TEXT("ProfilesGetGlobalPolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetGlobalPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetGlobalPolicyResponse), 2781639064U) },
		{ FProfilesGetEntityProfileRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewStructOps, TEXT("ProfilesGetEntityProfileRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfileRequest), 468062843U) },
		{ FProfilesGetEntityProfileResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewStructOps, TEXT("ProfilesGetEntityProfileResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfileResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfileResponse), 189980676U) },
		{ FProfilesGetEntityProfilesRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewStructOps, TEXT("ProfilesGetEntityProfilesRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfilesRequest), 1890335171U) },
		{ FProfilesGetEntityProfilesResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewStructOps, TEXT("ProfilesGetEntityProfilesResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetEntityProfilesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetEntityProfilesResponse), 1957867284U) },
		{ FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), 4021459377U) },
		{ FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), 2446374524U) },
		{ FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromProviderIDsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse), 60662274U) },
		{ FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewStructOps, TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"), &Z_Registration_Info_UScriptStruct_ProfilesGetTitlePlayersFromXboxLiveIDsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest), 1361035228U) },
		{ FProfilesSetGlobalPolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewStructOps, TEXT("ProfilesSetGlobalPolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetGlobalPolicyRequest), 4131664584U) },
		{ FProfilesSetGlobalPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::NewStructOps, TEXT("ProfilesSetGlobalPolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetGlobalPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetGlobalPolicyResponse), 1216262072U) },
		{ FProfilesSetProfileLanguageRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewStructOps, TEXT("ProfilesSetProfileLanguageRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetProfileLanguageRequest), 189263084U) },
		{ FProfilesSetProfileLanguageResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewStructOps, TEXT("ProfilesSetProfileLanguageResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetProfileLanguageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetProfileLanguageResponse), 1392421154U) },
		{ FProfilesSetEntityProfilePolicyRequest::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewStructOps, TEXT("ProfilesSetEntityProfilePolicyRequest"), &Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetEntityProfilePolicyRequest), 2275257508U) },
		{ FProfilesSetEntityProfilePolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewStructOps, TEXT("ProfilesSetEntityProfilePolicyResponse"), &Z_Registration_Info_UScriptStruct_ProfilesSetEntityProfilePolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfilesSetEntityProfilePolicyResponse), 2927986483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_3262083484(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
