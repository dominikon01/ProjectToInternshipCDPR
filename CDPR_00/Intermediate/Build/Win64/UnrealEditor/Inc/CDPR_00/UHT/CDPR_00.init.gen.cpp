// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDPR_00_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	CDPR_00_API UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature();
	CDPR_00_API UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnEnemyDied__DelegateSignature();
	CDPR_00_API UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CDPR_00;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CDPR_00()
	{
		if (!Z_Registration_Info_UPackage__Script_CDPR_00.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CDPR_00_OnEnemyDied__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CDPR_00",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x549FD7BF,
			0x9DC739E1,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CDPR_00.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CDPR_00.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CDPR_00(Z_Construct_UPackage__Script_CDPR_00, TEXT("/Script/CDPR_00"), Z_Registration_Info_UPackage__Script_CDPR_00, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x549FD7BF, 0x9DC739E1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
