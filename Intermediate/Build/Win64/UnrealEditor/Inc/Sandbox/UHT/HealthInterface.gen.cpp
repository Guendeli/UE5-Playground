// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/HealthInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SANDBOX_API UClass* Z_Construct_UClass_UHealthInterface();
	SANDBOX_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	DEFINE_FUNCTION(IHealthInterface::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath_Implementation();
		P_NATIVE_END;
	}
	void IHealthInterface::OnDeath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeath instead.");
	}
	void UHealthInterface::StaticRegisterNativesUHealthInterface()
	{
		UClass* Class = UHealthInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &IHealthInterface::execOnDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthInterface_OnDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHealthInterface_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthInterface);
	UClass* Z_Construct_UClass_UHealthInterface_NoRegister()
	{
		return UHealthInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHealthInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthInterface_OnDeath, "OnDeath" }, // 4185346584
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealthInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthInterface_Statics::ClassParams = {
		&UHealthInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHealthInterface()
	{
		if (!Z_Registration_Info_UClass_UHealthInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthInterface.OuterSingleton, Z_Construct_UClass_UHealthInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthInterface.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<UHealthInterface>()
	{
		return UHealthInterface::StaticClass();
	}
	UHealthInterface::UHealthInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthInterface);
	UHealthInterface::~UHealthInterface() {}
	static FName NAME_UHealthInterface_OnDeath = FName(TEXT("OnDeath"));
	void IHealthInterface::Execute_OnDeath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHealthInterface_OnDeath);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
		{
			I->OnDeath_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_HealthInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_HealthInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthInterface, UHealthInterface::StaticClass, TEXT("UHealthInterface"), &Z_Registration_Info_UClass_UHealthInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthInterface), 3386067923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_HealthInterface_h_659075251(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_HealthInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_HealthInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
