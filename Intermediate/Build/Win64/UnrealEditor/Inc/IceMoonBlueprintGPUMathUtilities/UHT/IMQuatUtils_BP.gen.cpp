// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMQuatUtils_BP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIMQuatUtils_BP() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMQuatUtils_BP();
ICEMOONBLUEPRINTGPUMATHUTILITIES_API UClass* Z_Construct_UClass_UIMQuatUtils_BP_NoRegister();
UPackage* Z_Construct_UPackage__Script_IceMoonBlueprintGPUMathUtilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIMQuatUtils_BP Function AxisAngleToQuat *********************************
struct Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics
{
	struct IMQuatUtils_BP_eventAxisAngleToQuat_Parms
	{
		FVector Axis;
		float Angle;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Quaternion" },
		{ "ModuleRelativePath", "Public/IMQuatUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventAxisAngleToQuat_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventAxisAngleToQuat_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventAxisAngleToQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMQuatUtils_BP, nullptr, "AxisAngleToQuat", Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::IMQuatUtils_BP_eventAxisAngleToQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::IMQuatUtils_BP_eventAxisAngleToQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMQuatUtils_BP::execAxisAngleToQuat)
{
	P_GET_STRUCT(FVector,Z_Param_Axis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UIMQuatUtils_BP::AxisAngleToQuat(Z_Param_Axis,Z_Param_Angle);
	P_NATIVE_END;
}
// ********** End Class UIMQuatUtils_BP Function AxisAngleToQuat ***********************************

// ********** Begin Class UIMQuatUtils_BP Function GetRotationBetweenVectors ***********************
struct Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics
{
	struct IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms
	{
		FVector From;
		FVector To;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Quaternion" },
		{ "ModuleRelativePath", "Public/IMQuatUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_From;
	static const UECodeGen_Private::FStructPropertyParams NewProp_To;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMQuatUtils_BP, nullptr, "GetRotationBetweenVectors", Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::IMQuatUtils_BP_eventGetRotationBetweenVectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMQuatUtils_BP::execGetRotationBetweenVectors)
{
	P_GET_STRUCT(FVector,Z_Param_From);
	P_GET_STRUCT(FVector,Z_Param_To);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=UIMQuatUtils_BP::GetRotationBetweenVectors(Z_Param_From,Z_Param_To);
	P_NATIVE_END;
}
// ********** End Class UIMQuatUtils_BP Function GetRotationBetweenVectors *************************

// ********** Begin Class UIMQuatUtils_BP Function QuatRotateVector ********************************
struct Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics
{
	struct IMQuatUtils_BP_eventQuatRotateVector_Parms
	{
		FVector Vec;
		FQuat Quat;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "IM|Math|Quaternion" },
		{ "ModuleRelativePath", "Public/IMQuatUtils_BP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventQuatRotateVector_Parms, Vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventQuatRotateVector_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMQuatUtils_BP_eventQuatRotateVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_Vec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_Quat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIMQuatUtils_BP, nullptr, "QuatRotateVector", Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::IMQuatUtils_BP_eventQuatRotateVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::IMQuatUtils_BP_eventQuatRotateVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMQuatUtils_BP::execQuatRotateVector)
{
	P_GET_STRUCT(FVector,Z_Param_Vec);
	P_GET_STRUCT(FQuat,Z_Param_Quat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UIMQuatUtils_BP::QuatRotateVector(Z_Param_Vec,Z_Param_Quat);
	P_NATIVE_END;
}
// ********** End Class UIMQuatUtils_BP Function QuatRotateVector **********************************

// ********** Begin Class UIMQuatUtils_BP **********************************************************
void UIMQuatUtils_BP::StaticRegisterNativesUIMQuatUtils_BP()
{
	UClass* Class = UIMQuatUtils_BP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AxisAngleToQuat", &UIMQuatUtils_BP::execAxisAngleToQuat },
		{ "GetRotationBetweenVectors", &UIMQuatUtils_BP::execGetRotationBetweenVectors },
		{ "QuatRotateVector", &UIMQuatUtils_BP::execQuatRotateVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIMQuatUtils_BP;
UClass* UIMQuatUtils_BP::GetPrivateStaticClass()
{
	using TClass = UIMQuatUtils_BP;
	if (!Z_Registration_Info_UClass_UIMQuatUtils_BP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IMQuatUtils_BP"),
			Z_Registration_Info_UClass_UIMQuatUtils_BP.InnerSingleton,
			StaticRegisterNativesUIMQuatUtils_BP,
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
	return Z_Registration_Info_UClass_UIMQuatUtils_BP.InnerSingleton;
}
UClass* Z_Construct_UClass_UIMQuatUtils_BP_NoRegister()
{
	return UIMQuatUtils_BP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIMQuatUtils_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IMQuatUtils_BP.h" },
		{ "ModuleRelativePath", "Public/IMQuatUtils_BP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMQuatUtils_BP_AxisAngleToQuat, "AxisAngleToQuat" }, // 3597000430
		{ &Z_Construct_UFunction_UIMQuatUtils_BP_GetRotationBetweenVectors, "GetRotationBetweenVectors" }, // 1748551706
		{ &Z_Construct_UFunction_UIMQuatUtils_BP_QuatRotateVector, "QuatRotateVector" }, // 1011046366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMQuatUtils_BP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMQuatUtils_BP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonBlueprintGPUMathUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMQuatUtils_BP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMQuatUtils_BP_Statics::ClassParams = {
	&UIMQuatUtils_BP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMQuatUtils_BP_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMQuatUtils_BP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMQuatUtils_BP()
{
	if (!Z_Registration_Info_UClass_UIMQuatUtils_BP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMQuatUtils_BP.OuterSingleton, Z_Construct_UClass_UIMQuatUtils_BP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMQuatUtils_BP.OuterSingleton;
}
UIMQuatUtils_BP::UIMQuatUtils_BP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMQuatUtils_BP);
UIMQuatUtils_BP::~UIMQuatUtils_BP() {}
// ********** End Class UIMQuatUtils_BP ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMQuatUtils_BP, UIMQuatUtils_BP::StaticClass, TEXT("UIMQuatUtils_BP"), &Z_Registration_Info_UClass_UIMQuatUtils_BP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMQuatUtils_BP), 4161540204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_2411966541(TEXT("/Script/IceMoonBlueprintGPUMathUtilities"),
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonBlueprintGPUMathUtilities_Source_IceMoonBlueprintGPUMathUtilities_Public_IMQuatUtils_BP_h__Script_IceMoonBlueprintGPUMathUtilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
