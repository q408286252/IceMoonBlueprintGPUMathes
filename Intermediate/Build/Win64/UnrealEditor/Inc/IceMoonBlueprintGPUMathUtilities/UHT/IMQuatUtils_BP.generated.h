// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMQuatUtils_BP.h"

#ifdef ICEMOONBLUEPRINTGPUMATHUTILITIES_IMQuatUtils_BP_generated_h
#error "IMQuatUtils_BP.generated.h already included, missing '#pragma once' in IMQuatUtils_BP.h"
#endif
#define ICEMOONBLUEPRINTGPUMATHUTILITIES_IMQuatUtils_BP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIMQuatUtils_BP **********************************************************
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationBetweenVectors); \
	DECLARE_FUNCTION(execAxisAngleToQuat); \
	DECLARE_FUNCTION(execQuatRotateVector);


ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMQuatUtils_BP_NoRegister();

#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMQuatUtils_BP(); \
	friend struct Z_Construct_UClass_UIMQuatUtils_BP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMQuatUtils_BP_NoRegister(); \
public: \
	DECLARE_CLASS2(UIMQuatUtils_BP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IceMoonBlueprintGPUMathUtilities"), Z_Construct_UClass_UIMQuatUtils_BP_NoRegister) \
	DECLARE_SERIALIZER(UIMQuatUtils_BP)


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMQuatUtils_BP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIMQuatUtils_BP(UIMQuatUtils_BP&&) = delete; \
	UIMQuatUtils_BP(const UIMQuatUtils_BP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMQuatUtils_BP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMQuatUtils_BP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMQuatUtils_BP) \
	NO_API virtual ~UIMQuatUtils_BP();


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_6_PROLOG
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_INCLASS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIMQuatUtils_BP;

// ********** End Class UIMQuatUtils_BP ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
