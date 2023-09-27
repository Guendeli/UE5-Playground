// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/DodgeBallPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeBallPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SANDBOX_API UClass* Z_Construct_UClass_ADodgeBallPlayerController();
	SANDBOX_API UClass* Z_Construct_UClass_ADodgeBallPlayerController_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	void ADodgeBallPlayerController::StaticRegisterNativesADodgeBallPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADodgeBallPlayerController);
	UClass* Z_Construct_UClass_ADodgeBallPlayerController_NoRegister()
	{
		return ADodgeBallPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeBallPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_RestartWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_RestartWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BP_HUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RestartWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeBallPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeBallPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DodgeBallPlayerController.h" },
		{ "ModuleRelativePath", "DodgeBallPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_RestartWidget_MetaData[] = {
		{ "Category", "DodgeBallPlayerController" },
		{ "ModuleRelativePath", "DodgeBallPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_RestartWidget = { "BP_RestartWidget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeBallPlayerController, BP_RestartWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_RestartWidget_MetaData), Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_RestartWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_HUDWidget_MetaData[] = {
		{ "Category", "DodgeBallPlayerController" },
		{ "ModuleRelativePath", "DodgeBallPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_HUDWidget = { "BP_HUDWidget", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeBallPlayerController, BP_HUDWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_HUDWidget_MetaData), Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_HUDWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_RestartWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeBallPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_RestartWidget = { "RestartWidget", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeBallPlayerController, RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_RestartWidget_MetaData), Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_RestartWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeBallPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeBallPlayerController, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeBallPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_RestartWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_BP_HUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_RestartWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeBallPlayerController_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeBallPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeBallPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeBallPlayerController_Statics::ClassParams = {
		&ADodgeBallPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADodgeBallPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADodgeBallPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeBallPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADodgeBallPlayerController()
	{
		if (!Z_Registration_Info_UClass_ADodgeBallPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeBallPlayerController.OuterSingleton, Z_Construct_UClass_ADodgeBallPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADodgeBallPlayerController.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<ADodgeBallPlayerController>()
	{
		return ADodgeBallPlayerController::StaticClass();
	}
	ADodgeBallPlayerController::ADodgeBallPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeBallPlayerController);
	ADodgeBallPlayerController::~ADodgeBallPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeBallPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeBallPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeBallPlayerController, ADodgeBallPlayerController::StaticClass, TEXT("ADodgeBallPlayerController"), &Z_Registration_Info_UClass_ADodgeBallPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeBallPlayerController), 3373867950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeBallPlayerController_h_3806231074(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeBallPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeBallPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
