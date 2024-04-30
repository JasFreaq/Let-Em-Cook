// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/PlayFabEventsModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsModels() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References

static_assert(std::is_polymorphic<FEventsCreateTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsCreateTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest;
class UScriptStruct* FEventsCreateTelemetryKeyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsCreateTelemetryKeyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsCreateTelemetryKeyRequest>()
{
	return FEventsCreateTelemetryKeyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// PlayStream Events\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "/\n PlayStream Events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsCreateTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the new key. Telemetry key names must be unique within the scope of the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the new key. Telemetry key names must be unique within the scope of the title." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsCreateTelemetryKeyRequest",
		sizeof(FEventsCreateTelemetryKeyRequest),
		alignof(FEventsCreateTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsCreateTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsCreateTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse;
class UScriptStruct* FEventsCreateTelemetryKeyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsCreateTelemetryKeyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsCreateTelemetryKeyResponse>()
{
	return FEventsCreateTelemetryKeyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewKeyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewKeyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsCreateTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Details about the newly created telemetry key. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Details about the newly created telemetry key." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails = { "NewKeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsCreateTelemetryKeyResponse, NewKeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsCreateTelemetryKeyResponse",
		sizeof(FEventsCreateTelemetryKeyResponse),
		alignof(FEventsCreateTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsDeleteTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsDeleteTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest;
class UScriptStruct* FEventsDeleteTelemetryKeyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsDeleteTelemetryKeyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsDeleteTelemetryKeyRequest>()
{
	return FEventsDeleteTelemetryKeyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsDeleteTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to delete." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsDeleteTelemetryKeyRequest",
		sizeof(FEventsDeleteTelemetryKeyRequest),
		alignof(FEventsDeleteTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsDeleteTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsDeleteTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse;
class UScriptStruct* FEventsDeleteTelemetryKeyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsDeleteTelemetryKeyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsDeleteTelemetryKeyResponse>()
{
	return FEventsDeleteTelemetryKeyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasKeyDeleted_MetaData[];
#endif
		static void NewProp_WasKeyDeleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasKeyDeleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsDeleteTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Indicates whether or not the key was deleted. If false, no key with that name existed. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Indicates whether or not the key was deleted. If false, no key with that name existed." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_SetBit(void* Obj)
	{
		((FEventsDeleteTelemetryKeyResponse*)Obj)->WasKeyDeleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted = { "WasKeyDeleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEventsDeleteTelemetryKeyResponse), &Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsDeleteTelemetryKeyResponse",
		sizeof(FEventsDeleteTelemetryKeyResponse),
		alignof(FEventsDeleteTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsGetTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsGetTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest;
class UScriptStruct* FEventsGetTelemetryKeyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsGetTelemetryKeyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsGetTelemetryKeyRequest>()
{
	return FEventsGetTelemetryKeyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsGetTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to retrieve. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to retrieve." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsGetTelemetryKeyRequest",
		sizeof(FEventsGetTelemetryKeyRequest),
		alignof(FEventsGetTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsGetTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsGetTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse;
class UScriptStruct* FEventsGetTelemetryKeyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsGetTelemetryKeyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsGetTelemetryKeyResponse>()
{
	return FEventsGetTelemetryKeyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsGetTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Details about the requested telemetry key. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Details about the requested telemetry key." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsGetTelemetryKeyResponse, KeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsGetTelemetryKeyResponse",
		sizeof(FEventsGetTelemetryKeyResponse),
		alignof(FEventsGetTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsListTelemetryKeysRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsListTelemetryKeysRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest;
class UScriptStruct* FEventsListTelemetryKeysRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsListTelemetryKeysRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsListTelemetryKeysRequest>()
{
	return FEventsListTelemetryKeysRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsListTelemetryKeysRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsListTelemetryKeysRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsListTelemetryKeysRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsListTelemetryKeysRequest",
		sizeof(FEventsListTelemetryKeysRequest),
		alignof(FEventsListTelemetryKeysRequest),
		Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsListTelemetryKeysResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsListTelemetryKeysResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse;
class UScriptStruct* FEventsListTelemetryKeysResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsListTelemetryKeysResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsListTelemetryKeysResponse>()
{
	return FEventsListTelemetryKeysResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsListTelemetryKeysResponse>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_Inner = { "KeyDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The telemetry keys configured for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The telemetry keys configured for the title." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsListTelemetryKeysResponse, KeyDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsListTelemetryKeysResponse",
		sizeof(FEventsListTelemetryKeysResponse),
		alignof(FEventsListTelemetryKeysResponse),
		Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsSetTelemetryKeyActiveRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsSetTelemetryKeyActiveRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest;
class UScriptStruct* FEventsSetTelemetryKeyActiveRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsSetTelemetryKeyActiveRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsSetTelemetryKeyActiveRequest>()
{
	return FEventsSetTelemetryKeyActiveRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsSetTelemetryKeyActiveRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Whether to set the key to active (true) or deactivated (false). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Whether to set the key to active (true) or deactivated (false)." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FEventsSetTelemetryKeyActiveRequest*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEventsSetTelemetryKeyActiveRequest), &Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to update. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to update." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsSetTelemetryKeyActiveRequest",
		sizeof(FEventsSetTelemetryKeyActiveRequest),
		alignof(FEventsSetTelemetryKeyActiveRequest),
		Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsSetTelemetryKeyActiveResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsSetTelemetryKeyActiveResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse;
class UScriptStruct* FEventsSetTelemetryKeyActiveResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsSetTelemetryKeyActiveResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsSetTelemetryKeyActiveResponse>()
{
	return FEventsSetTelemetryKeyActiveResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasKeyUpdated_MetaData[];
#endif
		static void NewProp_WasKeyUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasKeyUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsSetTelemetryKeyActiveResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The most current details about the telemetry key that was to be updated. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The most current details about the telemetry key that was to be updated." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveResponse, KeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Indicates whether or not the key was updated. If false, the key was already in the desired state. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Indicates whether or not the key was updated. If false, the key was already in the desired state." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_SetBit(void* Obj)
	{
		((FEventsSetTelemetryKeyActiveResponse*)Obj)->WasKeyUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated = { "WasKeyUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEventsSetTelemetryKeyActiveResponse), &Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsSetTelemetryKeyActiveResponse",
		sizeof(FEventsSetTelemetryKeyActiveResponse),
		alignof(FEventsSetTelemetryKeyActiveResponse),
		Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsWriteEventsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsWriteEventsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest;
class UScriptStruct* FEventsWriteEventsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsRequest, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsRequest>()
{
	return FEventsWriteEventsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsWriteEventsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The collection of events to write. Up to 200 events can be written per request. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The collection of events to write. Up to 200 events can be written per request." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsWriteEventsRequest, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsWriteEventsRequest",
		sizeof(FEventsWriteEventsRequest),
		alignof(FEventsWriteEventsRequest),
		Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.InnerSingleton, Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventsWriteEventsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsWriteEventsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse;
class UScriptStruct* FEventsWriteEventsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsResponse, (UObject*)Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.OuterSingleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsResponse>()
{
	return FEventsWriteEventsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignedEventIds_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignedEventIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/**\n     * The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\n     * returned if FlushToPlayStream option is true.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\nreturned if FlushToPlayStream option is true." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds = { "AssignedEventIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventsWriteEventsResponse, AssignedEventIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsWriteEventsResponse",
		sizeof(FEventsWriteEventsResponse),
		alignof(FEventsWriteEventsResponse),
		Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.InnerSingleton, Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModels_h_Statics::ScriptStructInfo[] = {
		{ FEventsCreateTelemetryKeyRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewStructOps, TEXT("EventsCreateTelemetryKeyRequest"), &Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsCreateTelemetryKeyRequest), 658858662U) },
		{ FEventsCreateTelemetryKeyResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewStructOps, TEXT("EventsCreateTelemetryKeyResponse"), &Z_Registration_Info_UScriptStruct_EventsCreateTelemetryKeyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsCreateTelemetryKeyResponse), 3629178358U) },
		{ FEventsDeleteTelemetryKeyRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewStructOps, TEXT("EventsDeleteTelemetryKeyRequest"), &Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsDeleteTelemetryKeyRequest), 638034048U) },
		{ FEventsDeleteTelemetryKeyResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewStructOps, TEXT("EventsDeleteTelemetryKeyResponse"), &Z_Registration_Info_UScriptStruct_EventsDeleteTelemetryKeyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsDeleteTelemetryKeyResponse), 3200916101U) },
		{ FEventsGetTelemetryKeyRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewStructOps, TEXT("EventsGetTelemetryKeyRequest"), &Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsGetTelemetryKeyRequest), 1961851806U) },
		{ FEventsGetTelemetryKeyResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewStructOps, TEXT("EventsGetTelemetryKeyResponse"), &Z_Registration_Info_UScriptStruct_EventsGetTelemetryKeyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsGetTelemetryKeyResponse), 1845952931U) },
		{ FEventsListTelemetryKeysRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewStructOps, TEXT("EventsListTelemetryKeysRequest"), &Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsListTelemetryKeysRequest), 4207896548U) },
		{ FEventsListTelemetryKeysResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewStructOps, TEXT("EventsListTelemetryKeysResponse"), &Z_Registration_Info_UScriptStruct_EventsListTelemetryKeysResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsListTelemetryKeysResponse), 483537787U) },
		{ FEventsSetTelemetryKeyActiveRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewStructOps, TEXT("EventsSetTelemetryKeyActiveRequest"), &Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsSetTelemetryKeyActiveRequest), 4087037754U) },
		{ FEventsSetTelemetryKeyActiveResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewStructOps, TEXT("EventsSetTelemetryKeyActiveResponse"), &Z_Registration_Info_UScriptStruct_EventsSetTelemetryKeyActiveResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsSetTelemetryKeyActiveResponse), 1842938461U) },
		{ FEventsWriteEventsRequest::StaticStruct, Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewStructOps, TEXT("EventsWriteEventsRequest"), &Z_Registration_Info_UScriptStruct_EventsWriteEventsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsWriteEventsRequest), 1713629731U) },
		{ FEventsWriteEventsResponse::StaticStruct, Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewStructOps, TEXT("EventsWriteEventsResponse"), &Z_Registration_Info_UScriptStruct_EventsWriteEventsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventsWriteEventsResponse), 2690361904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModels_h_3868846710(TEXT("/Script/PlayFab"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
