// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/VictoryBox.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SANDBOX_API UClass* Z_Construct_UClass_AVictoryBox();
	SANDBOX_API UClass* Z_Construct_UClass_AVictoryBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	DEFINE_FUNCTION(AVictoryBox::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_sourceComponent);
		P_GET_OBJECT(AActor,Z_Param_targetActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_targetComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_targetBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_sourceComponent,Z_Param_targetActor,Z_Param_targetComponent,Z_Param_targetBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void AVictoryBox::StaticRegisterNativesAVictoryBox()
	{
		UClass* Class = AVictoryBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AVictoryBox::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics
	{
		struct VictoryBox_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* sourceComponent;
			AActor* targetActor;
			UPrimitiveComponent* targetComponent;
			int32 targetBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sourceComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targetComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_targetBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sourceComponent = { "sourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryBox_eventOnBeginOverlap_Parms, sourceComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sourceComponent_MetaData), Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sourceComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryBox_eventOnBeginOverlap_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetComponent = { "targetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryBox_eventOnBeginOverlap_Parms, targetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetComponent_MetaData), Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetBodyIndex = { "targetBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryBox_eventOnBeginOverlap_Parms, targetBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((VictoryBox_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VictoryBox_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VictoryBox_eventOnBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData), Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_targetBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VictoryBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVictoryBox, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::VictoryBox_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::VictoryBox_eventOnBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVictoryBox_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVictoryBox_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVictoryBox);
	UClass* Z_Construct_UClass_AVictoryBox_NoRegister()
	{
		return AVictoryBox::StaticClass();
	}
	struct Z_Construct_UClass_AVictoryBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVictoryBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVictoryBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVictoryBox_OnBeginOverlap, "OnBeginOverlap" }, // 2247962207
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoryBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VictoryBox.h" },
		{ "ModuleRelativePath", "VictoryBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoryBox_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Victory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VictoryBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictoryBox_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictoryBox, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_AVictoryBox_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVictoryBox_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Victory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VictoryBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVictoryBox_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVictoryBox, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::NewProp_CollisionBox_MetaData), Z_Construct_UClass_AVictoryBox_Statics::NewProp_CollisionBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVictoryBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictoryBox_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVictoryBox_Statics::NewProp_CollisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVictoryBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVictoryBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVictoryBox_Statics::ClassParams = {
		&AVictoryBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVictoryBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AVictoryBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVictoryBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVictoryBox()
	{
		if (!Z_Registration_Info_UClass_AVictoryBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVictoryBox.OuterSingleton, Z_Construct_UClass_AVictoryBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVictoryBox.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<AVictoryBox>()
	{
		return AVictoryBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryBox);
	AVictoryBox::~AVictoryBox() {}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVictoryBox, AVictoryBox::StaticClass, TEXT("AVictoryBox"), &Z_Registration_Info_UClass_AVictoryBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVictoryBox), 2321621911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_3659979905(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_VictoryBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
