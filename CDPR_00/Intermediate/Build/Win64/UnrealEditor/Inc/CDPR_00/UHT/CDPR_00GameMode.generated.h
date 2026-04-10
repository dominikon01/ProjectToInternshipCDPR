// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CDPR_00GameMode.h"

#ifdef CDPR_00_CDPR_00GameMode_generated_h
#error "CDPR_00GameMode.generated.h already included, missing '#pragma once' in CDPR_00GameMode.h"
#endif
#define CDPR_00_CDPR_00GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACDPR_00GameMode *********************************************************
struct Z_Construct_UClass_ACDPR_00GameMode_Statics;
CDPR_00_API UClass* Z_Construct_UClass_ACDPR_00GameMode_NoRegister();

#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDPR_00GameMode(); \
	friend struct ::Z_Construct_UClass_ACDPR_00GameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CDPR_00_API UClass* ::Z_Construct_UClass_ACDPR_00GameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACDPR_00GameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CDPR_00"), Z_Construct_UClass_ACDPR_00GameMode_NoRegister) \
	DECLARE_SERIALIZER(ACDPR_00GameMode)


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACDPR_00GameMode(ACDPR_00GameMode&&) = delete; \
	ACDPR_00GameMode(const ACDPR_00GameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDPR_00GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDPR_00GameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACDPR_00GameMode) \
	NO_API virtual ~ACDPR_00GameMode();


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_12_PROLOG
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACDPR_00GameMode;

// ********** End Class ACDPR_00GameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
