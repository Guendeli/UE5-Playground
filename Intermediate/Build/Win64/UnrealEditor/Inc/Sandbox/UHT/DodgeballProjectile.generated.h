// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DodgeballProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SANDBOX_DodgeballProjectile_generated_h
#error "DodgeballProjectile.generated.h already included, missing '#pragma once' in DodgeballProjectile.h"
#endif
#define SANDBOX_DodgeballProjectile_generated_h

#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_SPARSE_DATA
#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADodgeballProjectile(); \
	friend struct Z_Construct_UClass_ADodgeballProjectile_Statics; \
public: \
	DECLARE_CLASS(ADodgeballProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(ADodgeballProjectile)


#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADodgeballProjectile(ADodgeballProjectile&&); \
	NO_API ADodgeballProjectile(const ADodgeballProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADodgeballProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADodgeballProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADodgeballProjectile) \
	NO_API virtual ~ADodgeballProjectile();


#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_11_PROLOG
#define FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_SPARSE_DATA \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class ADodgeballProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
