// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CDPR_00Character.h"

#ifdef CDPR_00_CDPR_00Character_generated_h
#error "CDPR_00Character.generated.h already included, missing '#pragma once' in CDPR_00Character.h"
#endif
#define CDPR_00_CDPR_00Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACDPR_00Character ********************************************************
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_ACDPR_00Character_Statics;
CDPR_00_API UClass* Z_Construct_UClass_ACDPR_00Character_NoRegister();

#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDPR_00Character(); \
	friend struct ::Z_Construct_UClass_ACDPR_00Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CDPR_00_API UClass* ::Z_Construct_UClass_ACDPR_00Character_NoRegister(); \
public: \
	DECLARE_CLASS2(ACDPR_00Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CDPR_00"), Z_Construct_UClass_ACDPR_00Character_NoRegister) \
	DECLARE_SERIALIZER(ACDPR_00Character)


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACDPR_00Character(ACDPR_00Character&&) = delete; \
	ACDPR_00Character(const ACDPR_00Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDPR_00Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDPR_00Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACDPR_00Character) \
	NO_API virtual ~ACDPR_00Character();


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_24_PROLOG
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_INCLASS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACDPR_00Character;

// ********** End Class ACDPR_00Character **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
