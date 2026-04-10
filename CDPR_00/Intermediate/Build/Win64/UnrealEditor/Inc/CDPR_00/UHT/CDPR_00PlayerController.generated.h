// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CDPR_00PlayerController.h"

#ifdef CDPR_00_CDPR_00PlayerController_generated_h
#error "CDPR_00PlayerController.generated.h already included, missing '#pragma once' in CDPR_00PlayerController.h"
#endif
#define CDPR_00_CDPR_00PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACDPR_00PlayerController *************************************************
struct Z_Construct_UClass_ACDPR_00PlayerController_Statics;
CDPR_00_API UClass* Z_Construct_UClass_ACDPR_00PlayerController_NoRegister();

#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDPR_00PlayerController(); \
	friend struct ::Z_Construct_UClass_ACDPR_00PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CDPR_00_API UClass* ::Z_Construct_UClass_ACDPR_00PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACDPR_00PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CDPR_00"), Z_Construct_UClass_ACDPR_00PlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACDPR_00PlayerController)


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACDPR_00PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACDPR_00PlayerController(ACDPR_00PlayerController&&) = delete; \
	ACDPR_00PlayerController(const ACDPR_00PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDPR_00PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDPR_00PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACDPR_00PlayerController) \
	NO_API virtual ~ACDPR_00PlayerController();


#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_16_PROLOG
#define FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACDPR_00PlayerController;

// ********** End Class ACDPR_00PlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VisualStudio_CDPR_00_Source_CDPR_00_CDPR_00PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
