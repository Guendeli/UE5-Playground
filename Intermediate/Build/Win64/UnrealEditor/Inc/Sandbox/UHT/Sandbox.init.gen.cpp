// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSandbox_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Sandbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Sandbox()
	{
		if (!Z_Registration_Info_UPackage__Script_Sandbox.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Sandbox",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9B9B7820,
				0x08B99BAD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Sandbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Sandbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Sandbox(Z_Construct_UPackage__Script_Sandbox, TEXT("/Script/Sandbox"), Z_Registration_Info_UPackage__Script_Sandbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9B9B7820, 0x08B99BAD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
