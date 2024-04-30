// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayFabMatchmakerModelDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FMatchmakerAuthUserResponse;
struct FMatchmakerPlayerJoinedResponse;
struct FMatchmakerPlayerLeftResponse;
struct FMatchmakerUserInfoResponse;
#ifdef PLAYFAB_PlayFabMatchmakerModelDecoder_generated_h
#error "PlayFabMatchmakerModelDecoder.generated.h already included, missing '#pragma once' in PlayFabMatchmakerModelDecoder.h"
#endif
#define PLAYFAB_PlayFabMatchmakerModelDecoder_generated_h

#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_SPARSE_DATA
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeUserInfoResponseResponse); \
	DECLARE_FUNCTION(execdecodePlayerLeftResponseResponse); \
	DECLARE_FUNCTION(execdecodePlayerJoinedResponseResponse); \
	DECLARE_FUNCTION(execdecodeAuthUserResponseResponse);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeUserInfoResponseResponse); \
	DECLARE_FUNCTION(execdecodePlayerLeftResponseResponse); \
	DECLARE_FUNCTION(execdecodePlayerJoinedResponseResponse); \
	DECLARE_FUNCTION(execdecodeAuthUserResponseResponse);


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_ACCESSORS
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerModelDecoder)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerModelDecoder)


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerModelDecoder(UPlayFabMatchmakerModelDecoder&&); \
	NO_API UPlayFabMatchmakerModelDecoder(const UPlayFabMatchmakerModelDecoder&); \
public: \
	NO_API virtual ~UPlayFabMatchmakerModelDecoder();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerModelDecoder(UPlayFabMatchmakerModelDecoder&&); \
	NO_API UPlayFabMatchmakerModelDecoder(const UPlayFabMatchmakerModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerModelDecoder) \
	NO_API virtual ~UPlayFabMatchmakerModelDecoder();


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_23_PROLOG
#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_RPC_WRAPPERS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_INCLASS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_SPARSE_DATA \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_ACCESSORS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMatchmakerModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jasfi_Documents_Unreal_Projects_LetEmCook_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
