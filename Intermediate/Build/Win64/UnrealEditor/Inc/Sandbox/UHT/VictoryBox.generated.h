// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VictoryBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SANDBOX_VictoryBox_generated_h
#error "VictoryBox.generated.h already included, missing '#pragma once' in VictoryBox.h"
#endif
#define SANDBOX_VictoryBox_generated_h

#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_SPARSE_DATA
#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVictoryBox(); \
	friend struct Z_Construct_UClass_AVictoryBox_Statics; \
public: \
	DECLARE_CLASS(AVictoryBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(AVictoryBox)


#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVictoryBox(AVictoryBox&&); \
	NO_API AVictoryBox(const AVictoryBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVictoryBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVictoryBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVictoryBox) \
	NO_API virtual ~AVictoryBox();


#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_10_PROLOG
#define FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_SPARSE_DATA \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class AVictoryBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
