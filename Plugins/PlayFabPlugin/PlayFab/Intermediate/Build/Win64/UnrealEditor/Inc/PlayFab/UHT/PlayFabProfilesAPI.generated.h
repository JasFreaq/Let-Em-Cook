// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabProfilesAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabProfilesAPI;
struct FPlayFabBaseModel;
struct FPlayFabError;
struct FProfilesGetEntityProfileRequest;
struct FProfilesGetEntityProfileResponse;
struct FProfilesGetEntityProfilesRequest;
struct FProfilesGetEntityProfilesResponse;
struct FProfilesGetGlobalPolicyRequest;
struct FProfilesGetGlobalPolicyResponse;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
struct FProfilesGetTitlePlayersFromProviderIDsResponse;
struct FProfilesGetTitlePlayersFromXboxLiveIDsRequest;
struct FProfilesSetEntityProfilePolicyRequest;
struct FProfilesSetEntityProfilePolicyResponse;
struct FProfilesSetGlobalPolicyRequest;
struct FProfilesSetGlobalPolicyResponse;
struct FProfilesSetProfileLanguageRequest;
struct FProfilesSetProfileLanguageResponse;
#ifdef PLAYFAB_PlayFabProfilesAPI_generated_h
#error "PlayFabProfilesAPI.generated.h already included, missing '#pragma once' in PlayFabProfilesAPI.h"
#endif
#define PLAYFAB_PlayFabProfilesAPI_generated_h

#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabProfilesRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabProfilesRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_62_DELEGATE \
static void FDelegateOnSuccessGetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGlobalPolicy, FProfilesGetGlobalPolicyResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_75_DELEGATE \
static void FDelegateOnSuccessGetProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfile, FProfilesGetEntityProfileResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_88_DELEGATE \
static void FDelegateOnSuccessGetProfiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfiles, FProfilesGetEntityProfilesResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_101_DELEGATE \
static void FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds, FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_114_DELEGATE \
static void FDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs, FProfilesGetTitlePlayersFromProviderIDsResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_127_DELEGATE \
static void FDelegateOnSuccessSetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGlobalPolicy, FProfilesSetGlobalPolicyResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_140_DELEGATE \
static void FDelegateOnSuccessSetProfileLanguage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfileLanguage, FProfilesSetProfileLanguageResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_156_DELEGATE \
static void FDelegateOnSuccessSetProfilePolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfilePolicy, FProfilesSetEntityProfilePolicyResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetProfilePolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetGlobalPolicy);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetProfilePolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetGlobalPolicy);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ACCESSORS
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public: \
	NO_API virtual ~UPlayFabProfilesAPI();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesAPI) \
	NO_API virtual ~UPlayFabProfilesAPI();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_26_PROLOG
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabProfilesAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProfilesAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
