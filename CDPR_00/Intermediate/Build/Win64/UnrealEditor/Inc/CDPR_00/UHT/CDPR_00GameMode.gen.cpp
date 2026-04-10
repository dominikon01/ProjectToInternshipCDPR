// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CDPR_00GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCDPR_00GameMode() {}

// ********** Begin Cross Module References ********************************************************
CDPR_00_API UClass* Z_Construct_UClass_ACDPR_00GameMode();
CDPR_00_API UClass* Z_Construct_UClass_ACDPR_00GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CDPR_00();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACDPR_00GameMode *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACDPR_00GameMode;
UClass* ACDPR_00GameMode::GetPrivateStaticClass()
{
	using TClass = ACDPR_00GameMode;
	if (!Z_Registration_Info_UClass_ACDPR_00GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CDPR_00GameMode"),
			Z_Registration_Info_UClass_ACDPR_00GameMode.InnerSingleton,
			StaticRegisterNativesACDPR_00GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACDPR_00GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACDPR_00GameMode_NoRegister()
{
	return ACDPR_00GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACDPR_00GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CDPR_00GameMode.h" },
		{ "ModuleRelativePath", "CDPR_00GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACDPR_00GameMode constinit property declarations *************************
// ********** End Class ACDPR_00GameMode constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDPR_00GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACDPR_00GameMode_Statics
UObject* (*const Z_Construct_UClass_ACDPR_00GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CDPR_00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACDPR_00GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACDPR_00GameMode_Statics::ClassParams = {
	&ACDPR_00GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACDPR_00GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACDPR_00GameMode_Statics::Class_MetaDataParams)
};
void ACDPR_00GameMode::StaticRegisterNativesACDPR_00GameMode()
{
}
UClass* Z_Construct_UClass_ACDPR_00GameMode()
{
	if (!Z_Registration_Info_UClass_ACDPR_00GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACDPR_00GameMode.OuterSingleton, Z_Construct_UClass_ACDPR_00GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACDPR_00GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACDPR_00GameMode);
ACDPR_00GameMode::~ACDPR_00GameMode() {}
// ********** End Class ACDPR_00GameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h__Script_CDPR_00_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACDPR_00GameMode, ACDPR_00GameMode::StaticClass, TEXT("ACDPR_00GameMode"), &Z_Registration_Info_UClass_ACDPR_00GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACDPR_00GameMode), 162849721U) },
	};
}; // Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h__Script_CDPR_00_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h__Script_CDPR_00_79346017{
	TEXT("/Script/CDPR_00"),
	Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h__Script_CDPR_00_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h__Script_CDPR_00_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
