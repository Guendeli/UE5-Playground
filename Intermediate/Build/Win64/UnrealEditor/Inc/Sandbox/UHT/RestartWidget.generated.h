// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RestartWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDBOX_RestartWidget_generated_h
#error "RestartWidget.generated.h already included, missing '#pragma once' in RestartWidget.h"
#endif
#define SANDBOX_RestartWidget_generated_h

#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_SPARSE_DATA
#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRestartClicked);


#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_ACCESSORS
#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestartWidget(); \
	friend struct Z_Construct_UClass_URestartWidget_Statics; \
public: \
	DECLARE_CLASS(URestartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sandbox"), NO_API) \
	DECLARE_SERIALIZER(URestartWidget)


#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestartWidget(URestartWidget&&); \
	NO_API URestartWidget(const URestartWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestartWidget) \
	NO_API virtual ~URestartWidget();


#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_13_PROLOG
#define FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_SPARSE_DATA \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_ACCESSORS \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANDBOX_API UClass* StaticClass<class URestartWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
