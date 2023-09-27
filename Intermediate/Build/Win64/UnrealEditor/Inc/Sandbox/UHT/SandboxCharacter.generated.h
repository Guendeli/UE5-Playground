// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SandboxCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDBOX_SandboxCharacter_generated_h
#error "SandboxCharacter.generated.h already included, missing '#pragma once' in SandboxCharacter.h"
#endif
#define SANDBOX_SandboxCharacter_generated_h

#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_SPARSE_DATA
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASandboxCharacter(); \
	friend struct Z_Construct_UClass_ASandboxCharacter_Statics; \
public: \
	DECLARE_CLASS(ASandboxCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(ASandboxCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASandboxCharacter*>(this); }


#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASandboxCharacter(ASandboxCharacter&&); \
	NO_API ASandboxCharacter(const ASandboxCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASandboxCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASandboxCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASandboxCharacter) \
	NO_API virtual ~ASandboxCharacter();


#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_19_PROLOG
#define FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_SPARSE_DATA \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class ASandboxCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Sandbox_Source_Sandbox_SandboxCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
