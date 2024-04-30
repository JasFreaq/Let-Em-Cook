// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabGroupsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabGroupsModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAddMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsAcceptGroupApplicationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAcceptGroupApplicationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest;
class UScriptStruct* FGroupsAcceptGroupApplicationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAcceptGroupApplicationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAcceptGroupApplicationRequest>()
{
	return FGroupsAcceptGroupApplicationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accepts an outstanding invitation to to join a group if the invited entity is not blocked by the group. Nothing is\n * returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Accepts an outstanding invitation to to join a group if the invited entity is not blocked by the group. Nothing is\nreturned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAcceptGroupApplicationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Type of the entity to accept as. Must be the same entity as the claimant or an entity that is a child of the claimant\n     * entity.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Type of the entity to accept as. Must be the same entity as the claimant or an entity that is a child of the claimant\nentity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAcceptGroupApplicationRequest",
		sizeof(FGroupsAcceptGroupApplicationRequest),
		alignof(FGroupsAcceptGroupApplicationRequest),
		Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsEmptyResponse;
class UScriptStruct* FGroupsEmptyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsEmptyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsEmptyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsEmptyResponse>()
{
	return FGroupsEmptyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsEmptyResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsEmptyResponse",
		sizeof(FGroupsEmptyResponse),
		alignof(FGroupsEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsEmptyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsAcceptGroupInvitationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAcceptGroupInvitationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest;
class UScriptStruct* FGroupsAcceptGroupInvitationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAcceptGroupInvitationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAcceptGroupInvitationRequest>()
{
	return FGroupsAcceptGroupInvitationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accepts an outstanding invitation to join the group if the invited entity is not blocked by the group. Only the invited\n * entity or a parent in its chain (e.g. title) may accept the invitation on the invited entity's behalf. Nothing is\n * returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Accepts an outstanding invitation to join the group if the invited entity is not blocked by the group. Only the invited\nentity or a parent in its chain (e.g. title) may accept the invitation on the invited entity's behalf. Nothing is\nreturned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAcceptGroupInvitationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAcceptGroupInvitationRequest",
		sizeof(FGroupsAcceptGroupInvitationRequest),
		alignof(FGroupsAcceptGroupInvitationRequest),
		Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsAddMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAddMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest;
class UScriptStruct* FGroupsAddMembersRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAddMembersRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAddMembersRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAddMembersRequest>()
{
	return FGroupsAddMembersRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Adds members to a group or role. Existing members of the group will added to roles within the group, but if the user is\n * not already a member of the group, only title claimants may add them to the group, and others must use the group\n * application or invite system to add new members to a group. Returns nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Adds members to a group or role. Existing members of the group will added to roles within the group, but if the user is\nnot already a member of the group, only title claimants may add them to the group, and others must use the group\napplication or invite system to add new members to a group. Returns nothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAddMembersRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAddMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAddMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** List of entities to add to the group. Only entities of type title_player_account and character may be added to groups. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to add to the group. Only entities of type title_player_account and character may be added to groups." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAddMembersRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional: The ID of the existing role to add the entities to. If this is not specified, the default member role for the\n     * group will be used. Role IDs must be between 1 and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: The ID of the existing role to add the entities to. If this is not specified, the default member role for the\ngroup will be used. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsAddMembersRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAddMembersRequest",
		sizeof(FGroupsAddMembersRequest),
		alignof(FGroupsAddMembersRequest),
		Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAddMembersRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsApplyToGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsApplyToGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest;
class UScriptStruct* FGroupsApplyToGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsApplyToGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsApplyToGroupRequest>()
{
	return FGroupsApplyToGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAcceptOutstandingInvite_MetaData[];
#endif
		static void NewProp_AutoAcceptOutstandingInvite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoAcceptOutstandingInvite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates an application to join a group. Calling this while a group application already exists will return the same\n * application instead of an error and will not refresh the time before the application expires. By default, if the entity\n * has an invitation to join the group outstanding, this will accept the invitation to join the group instead and return an\n * error indicating such, rather than creating a duplicate application to join that will need to be cleaned up later.\n * Returns information about the application or an error indicating an invitation was accepted instead.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates an application to join a group. Calling this while a group application already exists will return the same\napplication instead of an error and will not refresh the time before the application expires. By default, if the entity\nhas an invitation to join the group outstanding, this will accept the invitation to join the group instead and return an\nerror indicating such, rather than creating a duplicate application to join that will need to be cleaned up later.\nReturns information about the application or an error indicating an invitation was accepted instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsApplyToGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional, default true. Automatically accept an outstanding invitation if one exists instead of creating an application */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional, default true. Automatically accept an outstanding invitation if one exists instead of creating an application" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_SetBit(void* Obj)
	{
		((FGroupsApplyToGroupRequest*)Obj)->AutoAcceptOutstandingInvite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite = { "AutoAcceptOutstandingInvite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroupsApplyToGroupRequest), &Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsApplyToGroupRequest",
		sizeof(FGroupsApplyToGroupRequest),
		alignof(FGroupsApplyToGroupRequest),
		Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsApplyToGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsApplyToGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse;
class UScriptStruct* FGroupsApplyToGroupResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsApplyToGroupResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsApplyToGroupResponse>()
{
	return FGroupsApplyToGroupResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an application to join a group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Describes an application to join a group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsApplyToGroupResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Type of entity that requested membership */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Type of entity that requested membership" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** When the application to join will expire and be deleted */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "When the application to join will expire and be deleted" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group that the entity requesting membership to */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group that the entity requesting membership to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsApplyToGroupResponse",
		sizeof(FGroupsApplyToGroupResponse),
		alignof(FGroupsApplyToGroupResponse),
		Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsBlockEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsBlockEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest;
class UScriptStruct* FGroupsBlockEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsBlockEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsBlockEntityRequest>()
{
	return FGroupsBlockEntityRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blocks a list of entities from joining a group. Blocked entities may not create new applications to join, be invited to\n * join, accept an invitation, or have an application accepted. Failure due to being blocked does not clean up existing\n * applications or invitations to the group. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Blocks a list of entities from joining a group. Blocked entities may not create new applications to join, be invited to\njoin, accept an invitation, or have an application accepted. Failure due to being blocked does not clean up existing\napplications or invitations to the group. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsBlockEntityRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsBlockEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsBlockEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsBlockEntityRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsBlockEntityRequest",
		sizeof(FGroupsBlockEntityRequest),
		alignof(FGroupsBlockEntityRequest),
		Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsChangeMemberRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsChangeMemberRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest;
class UScriptStruct* FGroupsChangeMemberRoleRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsChangeMemberRoleRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsChangeMemberRoleRequest>()
{
	return FGroupsChangeMemberRoleRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginRoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Changes the role membership of a list of entities from one role to another in in a single operation. The destination\n * role must already exist. This is equivalent to adding the entities to the destination role and removing from the origin\n * role. Returns nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Changes the role membership of a list of entities from one role to another in in a single operation. The destination\nrole must already exist. This is equivalent to adding the entities to the destination role and removing from the origin\nrole. Returns nothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsChangeMemberRoleRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The ID of the role that the entities will become a member of. This must be an existing role. Role IDs must be between 1\n     * and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role that the entities will become a member of. This must be an existing role. Role IDs must be between 1\nand 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId = { "DestinationRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, DestinationRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * List of entities to move between roles in the group. All entities in this list must be members of the group and origin\n     * role.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to move between roles in the group. All entities in this list must be members of the group and origin\nrole." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role that the entities currently are a member of. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role that the entities currently are a member of. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId = { "OriginRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, OriginRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsChangeMemberRoleRequest",
		sizeof(FGroupsChangeMemberRoleRequest),
		alignof(FGroupsChangeMemberRoleRequest),
		Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsCreateGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsCreateGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest;
class UScriptStruct* FGroupsCreateGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRequest>()
{
	return FGroupsCreateGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates a new group, as well as administration and member roles, based off of a title's group template. Returns\n * information about the group that was created.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates a new group, as well as administration and member roles, based off of a title's group template. Returns\ninformation about the group that was created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. This is unique at the title level by default. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group. This is unique at the title level by default." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsCreateGroupRequest",
		sizeof(FGroupsCreateGroupRequest),
		alignof(FGroupsCreateGroupRequest),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsCreateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse;
class UScriptStruct* FGroupsCreateGroupResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupResponse>()
{
	return FGroupsCreateGroupResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the administrator role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the administrator role for the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The server date and time the group was created. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The server date and time the group was created." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the default member role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the default member role for the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of roles and names that belong to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of roles and names that belong to the group." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupResponse, Roles), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupResponse",
		sizeof(FGroupsCreateGroupResponse),
		alignof(FGroupsCreateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsCreateGroupRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsCreateGroupRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest;
class UScriptStruct* FGroupsCreateGroupRoleRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRoleRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRoleRequest>()
{
	return FGroupsCreateGroupRoleRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates a new role within an existing group, with no members. Both the role ID and role name must be unique within the\n * group, but the name can be the same as the ID. The role ID is set at creation and cannot be changed. Returns information\n * about the role that was created.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates a new role within an existing group, with no members. Both the role ID and role name must be unique within the\ngroup, but the name can be the same as the ID. The role ID is set at creation and cannot be changed. Returns information\nabout the role that was created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRoleRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The ID of the role. This must be unique within the group and cannot be changed. Role IDs must be between 1 and 64\n     * characters long and are restricted to a-Z, A-Z, 0-9, '(', ')', '_', '-' and '.'.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role. This must be unique within the group and cannot be changed. Role IDs must be between 1 and 64\ncharacters long and are restricted to a-Z, A-Z, 0-9, '(', ')', '_', '-' and '.'." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The name of the role. This must be unique within the group and can be changed later. Role names must be between 1 and\n     * 100 characters long\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the role. This must be unique within the group and can be changed later. Role names must be between 1 and\n100 characters long" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsCreateGroupRoleRequest",
		sizeof(FGroupsCreateGroupRoleRequest),
		alignof(FGroupsCreateGroupRoleRequest),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsCreateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse;
class UScriptStruct* FGroupsCreateGroupRoleResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRoleResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRoleResponse>()
{
	return FGroupsCreateGroupRoleResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the group profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the group profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID for the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID for the role" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the role" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupRoleResponse",
		sizeof(FGroupsCreateGroupRoleResponse),
		alignof(FGroupsCreateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsDeleteGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsDeleteGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest;
class UScriptStruct* FGroupsDeleteGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsDeleteGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsDeleteGroupRequest>()
{
	return FGroupsDeleteGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Deletes a group and all roles, invitations, join requests, and blocks associated with it. Permission to delete is only\n * required the group itself to execute this action. The group and data cannot be cannot be recovered once removed, but any\n * abuse reports about the group will remain. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Deletes a group and all roles, invitations, join requests, and blocks associated with it. Permission to delete is only\nrequired the group itself to execute this action. The group and data cannot be cannot be recovered once removed, but any\nabuse reports about the group will remain. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsDeleteGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsDeleteGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group or role to remove */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group or role to remove" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsDeleteGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsDeleteGroupRequest",
		sizeof(FGroupsDeleteGroupRequest),
		alignof(FGroupsDeleteGroupRequest),
		Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsDeleteRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsDeleteRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest;
class UScriptStruct* FGroupsDeleteRoleRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsDeleteRoleRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsDeleteRoleRequest>()
{
	return FGroupsDeleteRoleRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns information about the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Returns information about the role" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsDeleteRoleRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsDeleteRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsDeleteRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role to delete. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role to delete. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsDeleteRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsDeleteRoleRequest",
		sizeof(FGroupsDeleteRoleRequest),
		alignof(FGroupsDeleteRoleRequest),
		Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsGetGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsGetGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest;
class UScriptStruct* FGroupsGetGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsGetGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsGetGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsGetGroupRequest>()
{
	return FGroupsGetGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns the ID, name, role list and other non-membership related information about a group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Returns the ID, name, role list and other non-membership related information about a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsGetGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The full name of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The full name of the group" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsGetGroupRequest",
		sizeof(FGroupsGetGroupRequest),
		alignof(FGroupsGetGroupRequest),
		Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsGetGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsGetGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse;
class UScriptStruct* FGroupsGetGroupResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsGetGroupResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsGetGroupResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsGetGroupResponse>()
{
	return FGroupsGetGroupResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsGetGroupResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the administrator role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the administrator role for the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The server date and time the group was created. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The server date and time the group was created." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the default member role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the default member role for the group." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of roles and names that belong to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of roles and names that belong to the group." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsGetGroupResponse, Roles), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsGetGroupResponse",
		sizeof(FGroupsGetGroupResponse),
		alignof(FGroupsGetGroupResponse),
		Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsInviteToGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsInviteToGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest;
class UScriptStruct* FGroupsInviteToGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsInviteToGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsInviteToGroupRequest>()
{
	return FGroupsInviteToGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAcceptOutstandingApplication_MetaData[];
#endif
		static void NewProp_AutoAcceptOutstandingApplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoAcceptOutstandingApplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Invites a player to join a group, if they are not blocked by the group. An optional role can be provided to\n * automatically assign the player to the role if they accept the invitation. By default, if the entity has an application\n * to the group outstanding, this will accept the application instead and return an error indicating such, rather than\n * creating a duplicate invitation to join that will need to be cleaned up later. Returns information about the new\n * invitation or an error indicating an existing application to join was accepted.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Invites a player to join a group, if they are not blocked by the group. An optional role can be provided to\nautomatically assign the player to the role if they accept the invitation. By default, if the entity has an application\nto the group outstanding, this will accept the application instead and return an error indicating such, rather than\ncreating a duplicate invitation to join that will need to be cleaned up later. Returns information about the new\ninvitation or an error indicating an existing application to join was accepted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsInviteToGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional, default true. Automatically accept an application if one exists instead of creating an invitation */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional, default true. Automatically accept an application if one exists instead of creating an invitation" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_SetBit(void* Obj)
	{
		((FGroupsInviteToGroupRequest*)Obj)->AutoAcceptOutstandingApplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication = { "AutoAcceptOutstandingApplication", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroupsInviteToGroupRequest), &Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional. ID of an existing a role in the group to assign the user to. The group's default member role is used if this\n     * is not specified. Role IDs must be between 1 and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional. ID of an existing a role in the group to assign the user to. The group's default member role is used if this\nis not specified. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsInviteToGroupRequest",
		sizeof(FGroupsInviteToGroupRequest),
		alignof(FGroupsInviteToGroupRequest),
		Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsInviteToGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsInviteToGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse;
class UScriptStruct* FGroupsInviteToGroupResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsInviteToGroupResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsInviteToGroupResponse>()
{
	return FGroupsInviteToGroupResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvitedByEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InvitedByEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvitedEntity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InvitedEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an invitation to a group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Describes an invitation to a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsInviteToGroupResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** When the invitation will expire and be deleted */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "When the invitation will expire and be deleted" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The group that the entity invited to */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The group that the entity invited to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity that created the invitation */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity that created the invitation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity = { "InvitedByEntity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedByEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity that is invited */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity that is invited" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity = { "InvitedEntity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the role in the group to assign the user to. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the role in the group to assign the user to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsInviteToGroupResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsInviteToGroupResponse",
		sizeof(FGroupsInviteToGroupResponse),
		alignof(FGroupsInviteToGroupResponse),
		Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsIsMemberRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsIsMemberRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest;
class UScriptStruct* FGroupsIsMemberRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsIsMemberRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsIsMemberRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsIsMemberRequest>()
{
	return FGroupsIsMemberRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Checks to see if an entity is a member of a group or role within the group. A result indicating if the entity is a\n * member of the group is returned, or a permission error if the caller does not have permission to read the group's member\n * list.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Checks to see if an entity is a member of a group or role within the group. A result indicating if the entity is a\nmember of the group is returned, or a permission error if the caller does not have permission to read the group's member\nlist." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsIsMemberRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsIsMemberRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsIsMemberRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsIsMemberRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional: ID of the role to check membership of. Defaults to any role (that is, check to see if the entity is a member\n     * of the group in any capacity) if not specified.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: ID of the role to check membership of. Defaults to any role (that is, check to see if the entity is a member\nof the group in any capacity) if not specified." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsIsMemberRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsIsMemberRequest",
		sizeof(FGroupsIsMemberRequest),
		alignof(FGroupsIsMemberRequest),
		Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsIsMemberResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsIsMemberResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse;
class UScriptStruct* FGroupsIsMemberResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsIsMemberResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsIsMemberResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsIsMemberResponse>()
{
	return FGroupsIsMemberResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMember_MetaData[];
#endif
		static void NewProp_IsMember_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMember;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsIsMemberResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** A value indicating whether or not the entity is a member. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "A value indicating whether or not the entity is a member." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit(void* Obj)
	{
		((FGroupsIsMemberResponse*)Obj)->IsMember = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember = { "IsMember", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroupsIsMemberResponse), &Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsIsMemberResponse",
		sizeof(FGroupsIsMemberResponse),
		alignof(FGroupsIsMemberResponse),
		Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupApplicationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupApplicationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest;
class UScriptStruct* FGroupsListGroupApplicationsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupApplicationsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupApplicationsRequest>()
{
	return FGroupsListGroupApplicationsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding requests to join a group. Returns a list of all requests to join, as well as when the request will\n * expire. To get the group applications for a specific entity, use ListMembershipOpportunities.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding requests to join a group. Returns a list of all requests to join, as well as when the request will\nexpire. To get the group applications for a specific entity, use ListMembershipOpportunities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupApplicationsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupApplicationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupApplicationsRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupApplicationsRequest",
		sizeof(FGroupsListGroupApplicationsRequest),
		alignof(FGroupsListGroupApplicationsRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupApplicationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupApplicationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse;
class UScriptStruct* FGroupsListGroupApplicationsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupApplicationsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupApplicationsResponse>()
{
	return FGroupsListGroupApplicationsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Applications_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Applications_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Applications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupApplicationsResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_Inner = { "Applications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of applications to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of applications to the group." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications = { "Applications", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupApplicationsResponse, Applications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupApplicationsResponse",
		sizeof(FGroupsListGroupApplicationsResponse),
		alignof(FGroupsListGroupApplicationsResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupBlocksRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupBlocksRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest;
class UScriptStruct* FGroupsListGroupBlocksRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupBlocksRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupBlocksRequest>()
{
	return FGroupsListGroupBlocksRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Lists all entities blocked from joining a group. A list of blocked entities is returned */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all entities blocked from joining a group. A list of blocked entities is returned" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupBlocksRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupBlocksRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupBlocksRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupBlocksRequest",
		sizeof(FGroupsListGroupBlocksRequest),
		alignof(FGroupsListGroupBlocksRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupBlocksResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupBlocksResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse;
class UScriptStruct* FGroupsListGroupBlocksResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupBlocksResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupBlocksResponse>()
{
	return FGroupsListGroupBlocksResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockedEntities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedEntities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockedEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupBlocksResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_Inner = { "BlockedEntities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list blocked entities. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list blocked entities." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities = { "BlockedEntities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupBlocksResponse, BlockedEntities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupBlocksResponse",
		sizeof(FGroupsListGroupBlocksResponse),
		alignof(FGroupsListGroupBlocksResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupInvitationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupInvitationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest;
class UScriptStruct* FGroupsListGroupInvitationsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupInvitationsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupInvitationsRequest>()
{
	return FGroupsListGroupInvitationsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding invitations for a group. Returns a list of entities that have been invited, as well as when the\n * invitation will expire. To get the group invitations for a specific entity, use ListMembershipOpportunities.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding invitations for a group. Returns a list of entities that have been invited, as well as when the\ninvitation will expire. To get the group invitations for a specific entity, use ListMembershipOpportunities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupInvitationsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupInvitationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupInvitationsRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupInvitationsRequest",
		sizeof(FGroupsListGroupInvitationsRequest),
		alignof(FGroupsListGroupInvitationsRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupInvitationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupInvitationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse;
class UScriptStruct* FGroupsListGroupInvitationsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupInvitationsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupInvitationsResponse>()
{
	return FGroupsListGroupInvitationsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Invitations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Invitations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Invitations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupInvitationsResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_Inner = { "Invitations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group invitations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group invitations." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations = { "Invitations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupInvitationsResponse, Invitations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupInvitationsResponse",
		sizeof(FGroupsListGroupInvitationsResponse),
		alignof(FGroupsListGroupInvitationsResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest;
class UScriptStruct* FGroupsListGroupMembersRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupMembersRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupMembersRequest>()
{
	return FGroupsListGroupMembersRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Gets a list of members and the roles they belong to within the group. If the caller does not have permission to view the\n * role, and the member is in no other role, the member is not displayed. Returns a list of entities that are members of\n * the group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Gets a list of members and the roles they belong to within the group. If the caller does not have permission to view the\nrole, and the member is in no other role, the member is not displayed. Returns a list of entities that are members of\nthe group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupMembersRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group to list the members and roles for */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group to list the members and roles for" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupMembersRequest",
		sizeof(FGroupsListGroupMembersRequest),
		alignof(FGroupsListGroupMembersRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListGroupMembersResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupMembersResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse;
class UScriptStruct* FGroupsListGroupMembersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupMembersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupMembersResponse>()
{
	return FGroupsListGroupMembersResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupMembersResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of roles and member entity IDs. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of roles and member entity IDs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListGroupMembersResponse, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupMembersResponse",
		sizeof(FGroupsListGroupMembersResponse),
		alignof(FGroupsListGroupMembersResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListMembershipRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListMembershipRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest;
class UScriptStruct* FGroupsListMembershipRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipRequest>()
{
	return FGroupsListMembershipRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists the groups and roles that an entity is a part of, checking to see if group and role metadata and memberships\n * should be visible to the caller. If the entity is not in any roles that are visible to the caller, the group is not\n * returned in the results, even if the caller otherwise has permission to see that the entity is a member of that group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists the groups and roles that an entity is a part of, checking to see if group and role metadata and memberships\nshould be visible to the caller. If the entity is not in any roles that are visible to the caller, the group is not\nreturned in the results, even if the caller otherwise has permission to see that the entity is a member of that group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListMembershipRequest",
		sizeof(FGroupsListMembershipRequest),
		alignof(FGroupsListMembershipRequest),
		Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListMembershipResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListMembershipResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse;
class UScriptStruct* FGroupsListMembershipResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipResponse>()
{
	return FGroupsListMembershipResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of groups */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of groups" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipResponse, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListMembershipResponse",
		sizeof(FGroupsListMembershipResponse),
		alignof(FGroupsListMembershipResponse),
		Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListMembershipOpportunitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListMembershipOpportunitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest;
class UScriptStruct* FGroupsListMembershipOpportunitiesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipOpportunitiesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipOpportunitiesRequest>()
{
	return FGroupsListMembershipOpportunitiesRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding group applications and invitations for an entity. Anyone may call this for any entity, but data\n * will only be returned for the entity or a parent of that entity. To list invitations or applications for a group to\n * check if a player is trying to join, use ListGroupInvitations and ListGroupApplications.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding group applications and invitations for an entity. Anyone may call this for any entity, but data\nwill only be returned for the entity or a parent of that entity. To list invitations or applications for a group to\ncheck if a player is trying to join, use ListGroupInvitations and ListGroupApplications." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipOpportunitiesRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListMembershipOpportunitiesRequest",
		sizeof(FGroupsListMembershipOpportunitiesRequest),
		alignof(FGroupsListMembershipOpportunitiesRequest),
		Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsListMembershipOpportunitiesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListMembershipOpportunitiesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse;
class UScriptStruct* FGroupsListMembershipOpportunitiesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipOpportunitiesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipOpportunitiesResponse>()
{
	return FGroupsListMembershipOpportunitiesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Applications_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Applications_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Applications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Invitations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Invitations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Invitations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipOpportunitiesResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner = { "Applications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group applications. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group applications." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications = { "Applications", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Applications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner = { "Invitations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group invitations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group invitations." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations = { "Invitations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Invitations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListMembershipOpportunitiesResponse",
		sizeof(FGroupsListMembershipOpportunitiesResponse),
		alignof(FGroupsListMembershipOpportunitiesResponse),
		Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsRemoveGroupApplicationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveGroupApplicationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest;
class UScriptStruct* FGroupsRemoveGroupApplicationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveGroupApplicationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveGroupApplicationRequest>()
{
	return FGroupsRemoveGroupApplicationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes an existing application to join the group. This is used for both rejection of an application as well as\n * withdrawing an application. The applying entity or a parent in its chain (e.g. title) may withdraw the application, and\n * any caller with appropriate access in the group may reject an application. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes an existing application to join the group. This is used for both rejection of an application as well as\nwithdrawing an application. The applying entity or a parent in its chain (e.g. title) may withdraw the application, and\nany caller with appropriate access in the group may reject an application. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveGroupApplicationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveGroupApplicationRequest",
		sizeof(FGroupsRemoveGroupApplicationRequest),
		alignof(FGroupsRemoveGroupApplicationRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsRemoveGroupInvitationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveGroupInvitationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest;
class UScriptStruct* FGroupsRemoveGroupInvitationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveGroupInvitationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveGroupInvitationRequest>()
{
	return FGroupsRemoveGroupInvitationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes an existing invitation to join the group. This is used for both rejection of an invitation as well as rescinding\n * an invitation. The invited entity or a parent in its chain (e.g. title) may reject the invitation by calling this\n * method, and any caller with appropriate access in the group may rescind an invitation. No data is returned in the case\n * of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes an existing invitation to join the group. This is used for both rejection of an invitation as well as rescinding\nan invitation. The invited entity or a parent in its chain (e.g. title) may reject the invitation by calling this\nmethod, and any caller with appropriate access in the group may rescind an invitation. No data is returned in the case\nof success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveGroupInvitationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveGroupInvitationRequest",
		sizeof(FGroupsRemoveGroupInvitationRequest),
		alignof(FGroupsRemoveGroupInvitationRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsRemoveMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest;
class UScriptStruct* FGroupsRemoveMembersRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveMembersRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveMembersRequest>()
{
	return FGroupsRemoveMembersRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes members from a group. A member can always remove themselves from a group, regardless of permissions. Returns\n * nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes members from a group. A member can always remove themselves from a group, regardless of permissions. Returns\nnothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveMembersRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** List of entities to remove */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to remove" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveMembersRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role to remove the entities from. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role to remove the entities from." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsRemoveMembersRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveMembersRequest",
		sizeof(FGroupsRemoveMembersRequest),
		alignof(FGroupsRemoveMembersRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsUnblockEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUnblockEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest;
class UScriptStruct* FGroupsUnblockEntityRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUnblockEntityRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUnblockEntityRequest>()
{
	return FGroupsUnblockEntityRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Unblocks a list of entities from joining a group. No data is returned in the case of success. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Unblocks a list of entities from joining a group. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUnblockEntityRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUnblockEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUnblockEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUnblockEntityRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUnblockEntityRequest",
		sizeof(FGroupsUnblockEntityRequest),
		alignof(FGroupsUnblockEntityRequest),
		Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsUpdateGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUpdateGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest;
class UScriptStruct* FGroupsUpdateGroupRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRequest>()
{
	return FGroupsUpdateGroupRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Updates data about a group, such as the name or default member role. Returns information about whether the update was\n * successful. Only title claimants may modify the administration role for a group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Updates data about a group, such as the name or default member role. Returns information about whether the update was\nsuccessful. Only title claimants may modify the administration role for a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the ID of an existing role to set as the new administrator role for the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the ID of an existing role to set as the new administrator role for the group" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\n     * GetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\nGetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the new name of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the new name of the group" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the ID of an existing role to set as the new member role for the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the ID of an existing role to set as the new member role for the group" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRequest, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUpdateGroupRequest",
		sizeof(FGroupsUpdateGroupRequest),
		alignof(FGroupsUpdateGroupRequest),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsUpdateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse;
class UScriptStruct* FGroupsUpdateGroupResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupResponse>()
{
	return FGroupsUpdateGroupResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SetResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional reason to explain why the operation was the result that it was. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional reason to explain why the operation was the result that it was." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** New version of the group data. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "New version of the group data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Indicates which operation was completed, either Created, Updated, Deleted or None. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Indicates which operation was completed, either Created, Updated, Deleted or None." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData)) }; // 1096483792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupResponse",
		sizeof(FGroupsUpdateGroupResponse),
		alignof(FGroupsUpdateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUpdateGroupRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest;
class UScriptStruct* FGroupsUpdateGroupRoleRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleRequest>()
{
	return FGroupsUpdateGroupRoleRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Updates the role name. Returns information about whether the update was successful. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Updates the role name. Returns information about whether the update was successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\n     * GetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\nGetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the role to update. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the role to update. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The new name of the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The new name of the role" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleRequest",
		sizeof(FGroupsUpdateGroupRoleRequest),
		alignof(FGroupsUpdateGroupRoleRequest),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.InnerSingleton, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse;
class UScriptStruct* FGroupsUpdateGroupRoleResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleResponse>()
{
	return FGroupsUpdateGroupRoleResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SetResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional reason to explain why the operation was the result that it was. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional reason to explain why the operation was the result that it was." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** New version of the role data. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "New version of the role data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Indicates which operation was completed, either Created, Updated, Deleted or None. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Indicates which operation was completed, either Created, Updated, Deleted or None." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData)) }; // 1096483792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleResponse",
		sizeof(FGroupsUpdateGroupRoleResponse),
		alignof(FGroupsUpdateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.InnerSingleton, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModels_h_Statics::ScriptStructInfo[] = {
		{ FGroupsAcceptGroupApplicationRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewStructOps, TEXT("GroupsAcceptGroupApplicationRequest"), &Z_Registration_Info_UScriptStruct_GroupsAcceptGroupApplicationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsAcceptGroupApplicationRequest), 3855812199U) },
		{ FGroupsEmptyResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::NewStructOps, TEXT("GroupsEmptyResponse"), &Z_Registration_Info_UScriptStruct_GroupsEmptyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsEmptyResponse), 2905260349U) },
		{ FGroupsAcceptGroupInvitationRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewStructOps, TEXT("GroupsAcceptGroupInvitationRequest"), &Z_Registration_Info_UScriptStruct_GroupsAcceptGroupInvitationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsAcceptGroupInvitationRequest), 1431562842U) },
		{ FGroupsAddMembersRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewStructOps, TEXT("GroupsAddMembersRequest"), &Z_Registration_Info_UScriptStruct_GroupsAddMembersRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsAddMembersRequest), 1465328270U) },
		{ FGroupsApplyToGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewStructOps, TEXT("GroupsApplyToGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsApplyToGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsApplyToGroupRequest), 120697768U) },
		{ FGroupsApplyToGroupResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewStructOps, TEXT("GroupsApplyToGroupResponse"), &Z_Registration_Info_UScriptStruct_GroupsApplyToGroupResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsApplyToGroupResponse), 1876193958U) },
		{ FGroupsBlockEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewStructOps, TEXT("GroupsBlockEntityRequest"), &Z_Registration_Info_UScriptStruct_GroupsBlockEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsBlockEntityRequest), 1881809797U) },
		{ FGroupsChangeMemberRoleRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewStructOps, TEXT("GroupsChangeMemberRoleRequest"), &Z_Registration_Info_UScriptStruct_GroupsChangeMemberRoleRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsChangeMemberRoleRequest), 856759296U) },
		{ FGroupsCreateGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewStructOps, TEXT("GroupsCreateGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsCreateGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsCreateGroupRequest), 695819048U) },
		{ FGroupsCreateGroupResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewStructOps, TEXT("GroupsCreateGroupResponse"), &Z_Registration_Info_UScriptStruct_GroupsCreateGroupResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsCreateGroupResponse), 566252915U) },
		{ FGroupsCreateGroupRoleRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewStructOps, TEXT("GroupsCreateGroupRoleRequest"), &Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsCreateGroupRoleRequest), 354356306U) },
		{ FGroupsCreateGroupRoleResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewStructOps, TEXT("GroupsCreateGroupRoleResponse"), &Z_Registration_Info_UScriptStruct_GroupsCreateGroupRoleResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsCreateGroupRoleResponse), 3882216280U) },
		{ FGroupsDeleteGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewStructOps, TEXT("GroupsDeleteGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsDeleteGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsDeleteGroupRequest), 4055845017U) },
		{ FGroupsDeleteRoleRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewStructOps, TEXT("GroupsDeleteRoleRequest"), &Z_Registration_Info_UScriptStruct_GroupsDeleteRoleRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsDeleteRoleRequest), 3611743527U) },
		{ FGroupsGetGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewStructOps, TEXT("GroupsGetGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsGetGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsGetGroupRequest), 1985351298U) },
		{ FGroupsGetGroupResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewStructOps, TEXT("GroupsGetGroupResponse"), &Z_Registration_Info_UScriptStruct_GroupsGetGroupResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsGetGroupResponse), 497176995U) },
		{ FGroupsInviteToGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewStructOps, TEXT("GroupsInviteToGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsInviteToGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsInviteToGroupRequest), 3989124798U) },
		{ FGroupsInviteToGroupResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewStructOps, TEXT("GroupsInviteToGroupResponse"), &Z_Registration_Info_UScriptStruct_GroupsInviteToGroupResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsInviteToGroupResponse), 4025688478U) },
		{ FGroupsIsMemberRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewStructOps, TEXT("GroupsIsMemberRequest"), &Z_Registration_Info_UScriptStruct_GroupsIsMemberRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsIsMemberRequest), 1998671103U) },
		{ FGroupsIsMemberResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewStructOps, TEXT("GroupsIsMemberResponse"), &Z_Registration_Info_UScriptStruct_GroupsIsMemberResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsIsMemberResponse), 3530059689U) },
		{ FGroupsListGroupApplicationsRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewStructOps, TEXT("GroupsListGroupApplicationsRequest"), &Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupApplicationsRequest), 2312271997U) },
		{ FGroupsListGroupApplicationsResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewStructOps, TEXT("GroupsListGroupApplicationsResponse"), &Z_Registration_Info_UScriptStruct_GroupsListGroupApplicationsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupApplicationsResponse), 3214658079U) },
		{ FGroupsListGroupBlocksRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewStructOps, TEXT("GroupsListGroupBlocksRequest"), &Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupBlocksRequest), 3262955929U) },
		{ FGroupsListGroupBlocksResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewStructOps, TEXT("GroupsListGroupBlocksResponse"), &Z_Registration_Info_UScriptStruct_GroupsListGroupBlocksResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupBlocksResponse), 637768100U) },
		{ FGroupsListGroupInvitationsRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewStructOps, TEXT("GroupsListGroupInvitationsRequest"), &Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupInvitationsRequest), 3802574821U) },
		{ FGroupsListGroupInvitationsResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewStructOps, TEXT("GroupsListGroupInvitationsResponse"), &Z_Registration_Info_UScriptStruct_GroupsListGroupInvitationsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupInvitationsResponse), 709007298U) },
		{ FGroupsListGroupMembersRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewStructOps, TEXT("GroupsListGroupMembersRequest"), &Z_Registration_Info_UScriptStruct_GroupsListGroupMembersRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupMembersRequest), 1519439174U) },
		{ FGroupsListGroupMembersResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewStructOps, TEXT("GroupsListGroupMembersResponse"), &Z_Registration_Info_UScriptStruct_GroupsListGroupMembersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListGroupMembersResponse), 3308752004U) },
		{ FGroupsListMembershipRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewStructOps, TEXT("GroupsListMembershipRequest"), &Z_Registration_Info_UScriptStruct_GroupsListMembershipRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListMembershipRequest), 1413179559U) },
		{ FGroupsListMembershipResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewStructOps, TEXT("GroupsListMembershipResponse"), &Z_Registration_Info_UScriptStruct_GroupsListMembershipResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListMembershipResponse), 1174925209U) },
		{ FGroupsListMembershipOpportunitiesRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewStructOps, TEXT("GroupsListMembershipOpportunitiesRequest"), &Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListMembershipOpportunitiesRequest), 744758415U) },
		{ FGroupsListMembershipOpportunitiesResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewStructOps, TEXT("GroupsListMembershipOpportunitiesResponse"), &Z_Registration_Info_UScriptStruct_GroupsListMembershipOpportunitiesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsListMembershipOpportunitiesResponse), 1564943841U) },
		{ FGroupsRemoveGroupApplicationRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewStructOps, TEXT("GroupsRemoveGroupApplicationRequest"), &Z_Registration_Info_UScriptStruct_GroupsRemoveGroupApplicationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsRemoveGroupApplicationRequest), 1541592911U) },
		{ FGroupsRemoveGroupInvitationRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewStructOps, TEXT("GroupsRemoveGroupInvitationRequest"), &Z_Registration_Info_UScriptStruct_GroupsRemoveGroupInvitationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsRemoveGroupInvitationRequest), 2459393437U) },
		{ FGroupsRemoveMembersRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewStructOps, TEXT("GroupsRemoveMembersRequest"), &Z_Registration_Info_UScriptStruct_GroupsRemoveMembersRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsRemoveMembersRequest), 924856152U) },
		{ FGroupsUnblockEntityRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewStructOps, TEXT("GroupsUnblockEntityRequest"), &Z_Registration_Info_UScriptStruct_GroupsUnblockEntityRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsUnblockEntityRequest), 684581100U) },
		{ FGroupsUpdateGroupRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewStructOps, TEXT("GroupsUpdateGroupRequest"), &Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsUpdateGroupRequest), 712816480U) },
		{ FGroupsUpdateGroupResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewStructOps, TEXT("GroupsUpdateGroupResponse"), &Z_Registration_Info_UScriptStruct_GroupsUpdateGroupResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsUpdateGroupResponse), 1056724544U) },
		{ FGroupsUpdateGroupRoleRequest::StaticStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewStructOps, TEXT("GroupsUpdateGroupRoleRequest"), &Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsUpdateGroupRoleRequest), 434073169U) },
		{ FGroupsUpdateGroupRoleResponse::StaticStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewStructOps, TEXT("GroupsUpdateGroupRoleResponse"), &Z_Registration_Info_UScriptStruct_GroupsUpdateGroupRoleResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupsUpdateGroupRoleResponse), 732891689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModels_h_2525678038(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
