// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/Wall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SANDBOX_API UClass* Z_Construct_UClass_AWall();
	SANDBOX_API UClass* Z_Construct_UClass_AWall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	void AWall::StaticRegisterNativesAWall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWall);
	UClass* Z_Construct_UClass_AWall_NoRegister()
	{
		return AWall::StaticClass();
	}
	struct Z_Construct_UClass_AWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wall.h" },
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWall_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWall, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_AWall_Statics::NewProp_RootScene_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
		&AWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AWall_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWall()
	{
		if (!Z_Registration_Info_UClass_AWall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWall.OuterSingleton, Z_Construct_UClass_AWall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWall.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<AWall>()
	{
		return AWall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
	AWall::~AWall() {}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_Wall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_Wall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWall, AWall::StaticClass, TEXT("AWall"), &Z_Registration_Info_UClass_AWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWall), 863385885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_Wall_h_68273036(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_Wall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_Wall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
