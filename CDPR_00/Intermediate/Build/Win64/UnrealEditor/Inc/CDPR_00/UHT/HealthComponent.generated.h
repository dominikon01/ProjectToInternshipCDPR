// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealthComponent.h"

#ifdef CDPR_00_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define CDPR_00_HealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnDeath **************************************************************
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_9_DELEGATE \
CDPR_00_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


// ********** End Delegate FOnDeath ****************************************************************

// ********** Begin Delegate FOnHealthUpdate *******************************************************
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_10_DELEGATE \
CDPR_00_API void FOnHealthUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdate);


// ********** End Delegate FOnHealthUpdate *********************************************************

// ********** Begin Class UHealthComponent *********************************************************
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execTakeDamage);


struct Z_Construct_UClass_UHealthComponent_Statics;
CDPR_00_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();

#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct ::Z_Construct_UClass_UHealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CDPR_00_API UClass* ::Z_Construct_UClass_UHealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CDPR_00"), Z_Construct_UClass_UHealthComponent_NoRegister) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&) = delete; \
	UHealthComponent(const UHealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_12_PROLOG
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealthComponent;

// ********** End Class UHealthComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VisualStudio_CDPR_00_Source_CDPR_00_HealthComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
