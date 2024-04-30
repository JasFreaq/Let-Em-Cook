// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabMatchmakerAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayFabMatchmakerAPI;
struct FMatchmakerAuthUserRequest;
struct FMatchmakerAuthUserResponse;
struct FMatchmakerPlayerJoinedRequest;
struct FMatchmakerPlayerJoinedResponse;
struct FMatchmakerPlayerLeftRequest;
struct FMatchmakerPlayerLeftResponse;
struct FMatchmakerUserInfoRequest;
struct FMatchmakerUserInfoResponse;
struct FPlayFabBaseModel;
struct FPlayFabError;
#ifdef PLAYFAB_PlayFabMatchmakerAPI_generated_h
#error "PlayFabMatchmakerAPI.generated.h already included, missing '#pragma once' in PlayFabMatchmakerAPI.h"
#endif
#define PLAYFAB_PlayFabMatchmakerAPI_generated_h

#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_24_DELEGATE \
PLAYFAB_API void FOnPlayFabMatchmakerRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabMatchmakerRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_32_DELEGATE \
static void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_62_DELEGATE \
static void FDelegateOnSuccessAuthUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthUser, FMatchmakerAuthUserResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_75_DELEGATE \
static void FDelegateOnSuccessPlayerJoined_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerJoined, FMatchmakerPlayerJoinedResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_88_DELEGATE \
static void FDelegateOnSuccessPlayerLeft_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerLeft, FMatchmakerPlayerLeftResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_101_DELEGATE \
static void FDelegateOnSuccessUserInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUserInfo, FMatchmakerUserInfoResponse result, UObject* customData);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execUserInfo); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execAuthUser);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execUserInfo); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execAuthUser);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ACCESSORS
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public: \
	NO_API virtual ~UPlayFabMatchmakerAPI();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI) \
	NO_API virtual ~UPlayFabMatchmakerAPI();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_26_PROLOG
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabMatchmakerAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMatchmakerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
