// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// ********** Begin Cross Module References ********************************************************
CDPR_00_API UClass* Z_Construct_UClass_UHealthComponent();
CDPR_00_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
CDPR_00_API UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature();
CDPR_00_API UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CDPR_00();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDeath **************************************************************
struct Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDeath constinit property declarations ******************************
// ********** End Delegate FOnDeath constinit property declarations ********************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CDPR_00, nullptr, "OnDeath__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnHealthUpdate *******************************************************
struct Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnHealthUpdate constinit property declarations ***********************
// ********** End Delegate FOnHealthUpdate constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CDPR_00, nullptr, "OnHealthUpdate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdate)
{
	OnHealthUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnHealthUpdate *********************************************************

// ********** Begin Class UHealthComponent Function AddHealth **************************************
struct Z_Construct_UFunction_UHealthComponent_AddHealth_Statics
{
	struct HealthComponent_eventAddHealth_Parms
	{
		int32 Health;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddHealth constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddHealth constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddHealth Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventAddHealth_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers) < 2048);
// ********** End Function AddHealth Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "AddHealth", 	Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::HealthComponent_eventAddHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::HealthComponent_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execAddHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Health);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_Health);
	P_NATIVE_END;
}
// ********** End Class UHealthComponent Function AddHealth ****************************************

// ********** Begin Class UHealthComponent Function SetHealth **************************************
struct Z_Construct_UFunction_UHealthComponent_SetHealth_Statics
{
	struct HealthComponent_eventSetHealth_Parms
	{
		int32 Health;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHealth constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHealth constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHealth Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetHealth_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers) < 2048);
// ********** End Function SetHealth Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetHealth", 	Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::HealthComponent_eventSetHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::HealthComponent_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Health);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_Health);
	P_NATIVE_END;
}
// ********** End Class UHealthComponent Function SetHealth ****************************************

// ********** Begin Class UHealthComponent Function TakeDamage *************************************
struct Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics
{
	struct HealthComponent_eventTakeDamage_Parms
	{
		int32 Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TakeDamage constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TakeDamage constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TakeDamage Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers) < 2048);
// ********** End Function TakeDamage Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeDamage", 	Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execTakeDamage)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UHealthComponent Function TakeDamage ***************************************

// ********** Begin Class UHealthComponent *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthComponent;
UClass* UHealthComponent::GetPrivateStaticClass()
{
	using TClass = UHealthComponent;
	if (!Z_Registration_Info_UClass_UHealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HealthComponent"),
			Z_Registration_Info_UClass_UHealthComponent.InnerSingleton,
			StaticRegisterNativesUHealthComponent,
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
	return Z_Registration_Info_UClass_UHealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
{
	return UHealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthComponent.h" },
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdate_MetaData[] = {
		{ "ModuleRelativePath", "HealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHealthComponent constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHealthComponent constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddHealth"), .Pointer = &UHealthComponent::execAddHealth },
		{ .NameUTF8 = UTF8TEXT("SetHealth"), .Pointer = &UHealthComponent::execSetHealth },
		{ .NameUTF8 = UTF8TEXT("TakeDamage"), .Pointer = &UHealthComponent::execTakeDamage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_AddHealth, "AddHealth" }, // 3189779731
		{ &Z_Construct_UFunction_UHealthComponent_SetHealth, "SetHealth" }, // 3095695691
		{ &Z_Construct_UFunction_UHealthComponent_TakeDamage, "TakeDamage" }, // 1809977543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHealthComponent_Statics

// ********** Begin Class UHealthComponent Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnDeath), Z_Construct_UDelegateFunction_CDPR_00_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 2118458208
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthUpdate = { "OnHealthUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnHealthUpdate), Z_Construct_UDelegateFunction_CDPR_00_OnHealthUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthUpdate_MetaData), NewProp_OnHealthUpdate_MetaData) }; // 2708564800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
// ********** End Class UHealthComponent Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CDPR_00,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
	&UHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
};
void UHealthComponent::StaticRegisterNativesUHealthComponent()
{
	UClass* Class = UHealthComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UHealthComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UHealthComponent()
{
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// ********** End Class UHealthComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h__Script_CDPR_00_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 1932069003U) },
	};
}; // Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h__Script_CDPR_00_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h__Script_CDPR_00_3544585458{
	TEXT("/Script/CDPR_00"),
	Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h__Script_CDPR_00_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h__Script_CDPR_00_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
