// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabGroupsModelDecoder.h"
#include "../Classes/PlayFabGroupsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabGroupsModelDecoder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabGroupsModelDecoder();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabGroupsModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeUpdateGroupRoleResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsUpdateGroupRoleResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeUpdateGroupRoleResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeUpdateGroupResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsUpdateGroupResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeUpdateGroupResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListMembershipOpportunitiesResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListMembershipOpportunitiesResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListMembershipOpportunitiesResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListMembershipResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListMembershipResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListMembershipResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListGroupMembersResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListGroupMembersResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListGroupMembersResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListGroupInvitationsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListGroupInvitationsResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListGroupInvitationsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListGroupBlocksResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListGroupBlocksResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListGroupBlocksResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeListGroupApplicationsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsListGroupApplicationsResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeListGroupApplicationsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeIsMemberResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsIsMemberResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeIsMemberResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeInviteToGroupResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsInviteToGroupResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeInviteToGroupResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeGetGroupResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsGetGroupResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeGetGroupResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeCreateGroupRoleResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsCreateGroupRoleResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeCreateGroupRoleResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeCreateGroupResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsCreateGroupResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeCreateGroupResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeApplyToGroupResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsApplyToGroupResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeApplyToGroupResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabGroupsModelDecoder::execdecodeEmptyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGroupsEmptyResponse*)Z_Param__Result=UPlayFabGroupsModelDecoder::decodeEmptyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabGroupsModelDecoder::StaticRegisterNativesUPlayFabGroupsModelDecoder()
	{
		UClass* Class = UPlayFabGroupsModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeApplyToGroupResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeApplyToGroupResponseResponse },
			{ "decodeCreateGroupResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeCreateGroupResponseResponse },
			{ "decodeCreateGroupRoleResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeCreateGroupRoleResponseResponse },
			{ "decodeEmptyResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeEmptyResponseResponse },
			{ "decodeGetGroupResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeGetGroupResponseResponse },
			{ "decodeInviteToGroupResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeInviteToGroupResponseResponse },
			{ "decodeIsMemberResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeIsMemberResponseResponse },
			{ "decodeListGroupApplicationsResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListGroupApplicationsResponseResponse },
			{ "decodeListGroupBlocksResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListGroupBlocksResponseResponse },
			{ "decodeListGroupInvitationsResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListGroupInvitationsResponseResponse },
			{ "decodeListGroupMembersResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListGroupMembersResponseResponse },
			{ "decodeListMembershipOpportunitiesResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListMembershipOpportunitiesResponseResponse },
			{ "decodeListMembershipResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeListMembershipResponseResponse },
			{ "decodeUpdateGroupResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeUpdateGroupResponseResponse },
			{ "decodeUpdateGroupRoleResponseResponse", &UPlayFabGroupsModelDecoder::execdecodeUpdateGroupRoleResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeApplyToGroupResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsApplyToGroupResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeApplyToGroupResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeApplyToGroupResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse, METADATA_PARAMS(nullptr, 0) }; // 1876193958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ApplyToGroupResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ApplyToGroupResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeApplyToGroupResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeApplyToGroupResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeCreateGroupResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsCreateGroupResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeCreateGroupResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeCreateGroupResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsCreateGroupResponse, METADATA_PARAMS(nullptr, 0) }; // 566252915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the CreateGroupResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the CreateGroupResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeCreateGroupResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeCreateGroupResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeCreateGroupRoleResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsCreateGroupRoleResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeCreateGroupRoleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeCreateGroupRoleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse, METADATA_PARAMS(nullptr, 0) }; // 3882216280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the CreateGroupRoleResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the CreateGroupRoleResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeCreateGroupRoleResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeCreateGroupRoleResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeEmptyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsEmptyResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeEmptyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeEmptyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsEmptyResponse, METADATA_PARAMS(nullptr, 0) }; // 2905260349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the EmptyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the EmptyResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeEmptyResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeEmptyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeGetGroupResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsGetGroupResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeGetGroupResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeGetGroupResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsGetGroupResponse, METADATA_PARAMS(nullptr, 0) }; // 497176995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the GetGroupResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the GetGroupResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeGetGroupResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeGetGroupResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeInviteToGroupResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsInviteToGroupResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeInviteToGroupResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeInviteToGroupResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse, METADATA_PARAMS(nullptr, 0) }; // 4025688478
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the InviteToGroupResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the InviteToGroupResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeInviteToGroupResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeInviteToGroupResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeIsMemberResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsIsMemberResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeIsMemberResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeIsMemberResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsIsMemberResponse, METADATA_PARAMS(nullptr, 0) }; // 3530059689
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the IsMemberResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the IsMemberResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeIsMemberResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeIsMemberResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListGroupApplicationsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListGroupApplicationsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupApplicationsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupApplicationsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse, METADATA_PARAMS(nullptr, 0) }; // 3214658079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListGroupApplicationsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListGroupApplicationsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListGroupApplicationsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListGroupApplicationsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListGroupBlocksResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListGroupBlocksResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupBlocksResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupBlocksResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse, METADATA_PARAMS(nullptr, 0) }; // 637768100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListGroupBlocksResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListGroupBlocksResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListGroupBlocksResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListGroupBlocksResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListGroupInvitationsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListGroupInvitationsResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupInvitationsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupInvitationsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse, METADATA_PARAMS(nullptr, 0) }; // 709007298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListGroupInvitationsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListGroupInvitationsResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListGroupInvitationsResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListGroupInvitationsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListGroupMembersResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListGroupMembersResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupMembersResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListGroupMembersResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse, METADATA_PARAMS(nullptr, 0) }; // 3308752004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListGroupMembersResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListGroupMembersResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListGroupMembersResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListGroupMembersResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListMembershipOpportunitiesResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListMembershipOpportunitiesResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListMembershipOpportunitiesResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListMembershipOpportunitiesResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse, METADATA_PARAMS(nullptr, 0) }; // 1564943841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListMembershipOpportunitiesResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListMembershipOpportunitiesResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListMembershipOpportunitiesResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListMembershipOpportunitiesResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeListMembershipResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsListMembershipResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListMembershipResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeListMembershipResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsListMembershipResponse, METADATA_PARAMS(nullptr, 0) }; // 1174925209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the ListMembershipResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the ListMembershipResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeListMembershipResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeListMembershipResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeUpdateGroupResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsUpdateGroupResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeUpdateGroupResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeUpdateGroupResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse, METADATA_PARAMS(nullptr, 0) }; // 1056724544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the UpdateGroupResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the UpdateGroupResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeUpdateGroupResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeUpdateGroupResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics
	{
		struct PlayFabGroupsModelDecoder_eventdecodeUpdateGroupRoleResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FGroupsUpdateGroupRoleResponse ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeUpdateGroupRoleResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayFabGroupsModelDecoder_eventdecodeUpdateGroupRoleResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse, METADATA_PARAMS(nullptr, 0) }; // 732891689
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::NewProp_response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Decode the UpdateGroupRoleResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
		{ "ToolTip", "Decode the UpdateGroupRoleResponse response object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabGroupsModelDecoder, nullptr, "decodeUpdateGroupRoleResponseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::PlayFabGroupsModelDecoder_eventdecodeUpdateGroupRoleResponseResponse_Parms), Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayFabGroupsModelDecoder);
	UClass* Z_Construct_UClass_UPlayFabGroupsModelDecoder_NoRegister()
	{
		return UPlayFabGroupsModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeApplyToGroupResponseResponse, "decodeApplyToGroupResponseResponse" }, // 2563568338
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupResponseResponse, "decodeCreateGroupResponseResponse" }, // 4252310184
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeCreateGroupRoleResponseResponse, "decodeCreateGroupRoleResponseResponse" }, // 245970505
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeEmptyResponseResponse, "decodeEmptyResponseResponse" }, // 232966064
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeGetGroupResponseResponse, "decodeGetGroupResponseResponse" }, // 895197414
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeInviteToGroupResponseResponse, "decodeInviteToGroupResponseResponse" }, // 420179348
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeIsMemberResponseResponse, "decodeIsMemberResponseResponse" }, // 1976204826
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupApplicationsResponseResponse, "decodeListGroupApplicationsResponseResponse" }, // 101563015
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupBlocksResponseResponse, "decodeListGroupBlocksResponseResponse" }, // 1811854532
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupInvitationsResponseResponse, "decodeListGroupInvitationsResponseResponse" }, // 1521510204
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListGroupMembersResponseResponse, "decodeListGroupMembersResponseResponse" }, // 2172808673
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipOpportunitiesResponseResponse, "decodeListMembershipOpportunitiesResponseResponse" }, // 1309320002
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeListMembershipResponseResponse, "decodeListMembershipResponseResponse" }, // 730289100
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupResponseResponse, "decodeUpdateGroupResponseResponse" }, // 4009740491
		{ &Z_Construct_UFunction_UPlayFabGroupsModelDecoder_decodeUpdateGroupRoleResponseResponse, "decodeUpdateGroupRoleResponseResponse" }, // 968785005
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabGroupsModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabGroupsModelDecoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::ClassParams = {
		&UPlayFabGroupsModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabGroupsModelDecoder()
	{
		if (!Z_Registration_Info_UClass_UPlayFabGroupsModelDecoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayFabGroupsModelDecoder.OuterSingleton, Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayFabGroupsModelDecoder.OuterSingleton;
	}
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabGroupsModelDecoder>()
	{
		return UPlayFabGroupsModelDecoder::StaticClass();
	}
	UPlayFabGroupsModelDecoder::UPlayFabGroupsModelDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabGroupsModelDecoder);
	UPlayFabGroupsModelDecoder::~UPlayFabGroupsModelDecoder() {}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayFabGroupsModelDecoder, UPlayFabGroupsModelDecoder::StaticClass, TEXT("UPlayFabGroupsModelDecoder"), &Z_Registration_Info_UClass_UPlayFabGroupsModelDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayFabGroupsModelDecoder), 2390659881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_2548242110(TEXT("/Script/PlayFab"),
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
