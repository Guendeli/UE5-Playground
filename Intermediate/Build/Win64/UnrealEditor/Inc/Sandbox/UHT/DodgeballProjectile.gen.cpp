// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sandbox/DodgeballProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SANDBOX_API UClass* Z_Construct_UClass_ADodgeballProjectile();
	SANDBOX_API UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sandbox();
// End Cross Module References
	DEFINE_FUNCTION(ADodgeballProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_hitComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void ADodgeballProjectile::StaticRegisterNativesADodgeballProjectile()
	{
		UClass* Class = ADodgeballProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ADodgeballProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics
	{
		struct DodgeballProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* hitComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnHit_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hitComp_MetaData), Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherComp_MetaData), Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DodgeballProjectile_eventOnHit_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_normalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADodgeballProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::DodgeballProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::DodgeballProjectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADodgeballProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADodgeballProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADodgeballProjectile);
	UClass* Z_Construct_UClass_ADodgeballProjectile_NoRegister()
	{
		return ADodgeballProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BounceSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADodgeballProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADodgeballProjectile_OnHit, "OnHit" }, // 2145283127
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DodgeballProjectile.h" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_BounceSound_MetaData[] = {
		{ "Category", "DodgeballProjectile" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_BounceSound = { "BounceSound", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, BounceSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_BounceSound_MetaData), Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_BounceSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Attenuation_MetaData), Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Attenuation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dodgeball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "dodgeball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADodgeballProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_BounceSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballProjectile_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballProjectile_Statics::ClassParams = {
		&ADodgeballProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ADodgeballProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADodgeballProjectile()
	{
		if (!Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton, Z_Construct_UClass_ADodgeballProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADodgeballProjectile.OuterSingleton;
	}
	template<> SANDBOX_API UClass* StaticClass<ADodgeballProjectile>()
	{
		return ADodgeballProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballProjectile);
	ADodgeballProjectile::~ADodgeballProjectile() {}
	struct Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeballProjectile, ADodgeballProjectile::StaticClass, TEXT("ADodgeballProjectile"), &Z_Registration_Info_UClass_ADodgeballProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeballProjectile), 3052623053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_2455244502(TEXT("/Script/Sandbox"),
		Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Sandbox_Source_Sandbox_DodgeballProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
