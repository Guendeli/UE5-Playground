// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/RestartWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestartWidget() {}
// Cross Module References
	SANDBOX_API UClass* Z_Construct_UClass_URestartWidget();
	SANDBOX_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	DEFINE_FUNCTION(URestartWidget::execOnRestartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClicked();
		P_NATIVE_END;
	}
	void URestartWidget::StaticRegisterNativesURestartWidget()
	{
		UClass* Class = URestartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRestartClicked", &URestartWidget::execOnRestartClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnRestartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URestartWidget_OnRestartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URestartWidget);
	UClass* Z_Construct_UClass_URestartWidget_NoRegister()
	{
		return URestartWidget::StaticClass();
	}
	struct Z_Construct_UClass_URestartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RestartButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URestartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URestartWidget_OnRestartClicked, "OnRestartClicked" }, // 4157215382
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RestartWidget.h" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URestartWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData), Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestartWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestartWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URestartWidget_Statics::ClassParams = {
		&URestartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URestartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URestartWidget()
	{
		if (!Z_Registration_Info_UClass_URestartWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URestartWidget.OuterSingleton, Z_Construct_UClass_URestartWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URestartWidget.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<URestartWidget>()
	{
		return URestartWidget::StaticClass();
	}
	URestartWidget::URestartWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestartWidget);
	URestartWidget::~URestartWidget() {}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URestartWidget, URestartWidget::StaticClass, TEXT("URestartWidget"), &Z_Registration_Info_UClass_URestartWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URestartWidget), 1626046634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_1240194404(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_RestartWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
