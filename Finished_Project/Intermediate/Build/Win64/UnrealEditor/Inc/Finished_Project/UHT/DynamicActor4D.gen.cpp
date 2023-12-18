// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finished_Project/DynamicActor4D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicActor4D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_ADynamicActor4D();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_ADynamicActor4D_NoRegister();
	FINISHED_PROJECT_API UEnum* Z_Construct_UEnum_Finished_Project_E4DShape();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor();
	UPackage* Z_Construct_UPackage__Script_Finished_Project();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E4DShape;
	static UEnum* E4DShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E4DShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E4DShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Finished_Project_E4DShape, (UObject*)Z_Construct_UPackage__Script_Finished_Project(), TEXT("E4DShape"));
		}
		return Z_Registration_Info_UEnum_E4DShape.OuterSingleton;
	}
	template<> FINISHED_PROJECT_API UEnum* StaticEnum<E4DShape>()
	{
		return E4DShape_StaticEnum();
	}
	struct Z_Construct_UEnum_Finished_Project_E4DShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enumerators[] = {
		{ "E4DShape::Cell5", (int64)E4DShape::Cell5 },
		{ "E4DShape::Cell8", (int64)E4DShape::Cell8 },
		{ "E4DShape::Cell16", (int64)E4DShape::Cell16 },
		{ "E4DShape::Cell24", (int64)E4DShape::Cell24 },
		{ "E4DShape::Cell120", (int64)E4DShape::Cell120 },
		{ "E4DShape::Cell600", (int64)E4DShape::Cell600 },
		{ "E4DShape::Random", (int64)E4DShape::Random },
		{ "E4DShape::Custom", (int64)E4DShape::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cell120.Name", "E4DShape::Cell120" },
		{ "Cell16.Name", "E4DShape::Cell16" },
		{ "Cell24.Name", "E4DShape::Cell24" },
		{ "Cell5.Name", "E4DShape::Cell5" },
		{ "Cell600.Name", "E4DShape::Cell600" },
		{ "Cell8.Name", "E4DShape::Cell8" },
		{ "Custom.Name", "E4DShape::Custom" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
		{ "Random.Name", "E4DShape::Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Finished_Project_E4DShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Finished_Project,
		nullptr,
		"E4DShape",
		"E4DShape",
		Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Finished_Project_E4DShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Finished_Project_E4DShape()
	{
		if (!Z_Registration_Info_UEnum_E4DShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E4DShape.InnerSingleton, Z_Construct_UEnum_Finished_Project_E4DShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E4DShape.InnerSingleton;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppendCustom4D)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_GET_TARRAY(FVector4f,Z_Param_points4D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::AppendCustom4D(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW,Z_Param_points4D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppendRandom4D)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_GET_TARRAY(FVector4f,Z_Param_points4D);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::AppendRandom4D(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW,Z_Param_points4D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend600Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append600Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend120Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append120Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend24Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append24Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend16Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append16Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend8Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append8Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicActor4D::execAppend5Cell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_currentWAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentWPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_wScale);
		P_GET_STRUCT(FVector,Z_Param_wAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxW);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minW);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=ADynamicActor4D::Append5Cell(Z_Param_TargetMesh,Z_Param_currentWAngle,Z_Param_currentWPosition,Z_Param_wPosition,Z_Param_wScale,Z_Param_wAngle,Z_Param_maxW,Z_Param_minW);
		P_NATIVE_END;
	}
	void ADynamicActor4D::StaticRegisterNativesADynamicActor4D()
	{
		UClass* Class = ADynamicActor4D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Append120Cell", &ADynamicActor4D::execAppend120Cell },
			{ "Append16Cell", &ADynamicActor4D::execAppend16Cell },
			{ "Append24Cell", &ADynamicActor4D::execAppend24Cell },
			{ "Append5Cell", &ADynamicActor4D::execAppend5Cell },
			{ "Append600Cell", &ADynamicActor4D::execAppend600Cell },
			{ "Append8Cell", &ADynamicActor4D::execAppend8Cell },
			{ "AppendCustom4D", &ADynamicActor4D::execAppendCustom4D },
			{ "AppendRandom4D", &ADynamicActor4D::execAppendRandom4D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics
	{
		struct DynamicActor4D_eventAppend120Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend120Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append120Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::DynamicActor4D_eventAppend120Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append120Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append120Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics
	{
		struct DynamicActor4D_eventAppend16Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend16Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append16Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::DynamicActor4D_eventAppend16Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append16Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append16Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics
	{
		struct DynamicActor4D_eventAppend24Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend24Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append24Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::DynamicActor4D_eventAppend24Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append24Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append24Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics
	{
		struct DynamicActor4D_eventAppend5Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend5Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append5Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::DynamicActor4D_eventAppend5Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append5Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append5Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics
	{
		struct DynamicActor4D_eventAppend600Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend600Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append600Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::DynamicActor4D_eventAppend600Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append600Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append600Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics
	{
		struct DynamicActor4D_eventAppend8Cell_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, minW), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppend8Cell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "Append8Cell", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::DynamicActor4D_eventAppend8Cell_Parms), Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_Append8Cell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_Append8Cell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics
	{
		struct DynamicActor4D_eventAppendCustom4D_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			TArray<FVector4f> points4D;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
		static const UECodeGen_Private::FStructPropertyParams NewProp_points4D_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_points4D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, minW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_points4D_Inner = { "points4D", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_points4D = { "points4D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, points4D), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendCustom4D_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_points4D_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_points4D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "AppendCustom4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::DynamicActor4D_eventAppendCustom4D_Parms), Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics
	{
		struct DynamicActor4D_eventAppendRandom4D_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector currentWAngle;
			float currentWPosition;
			float wPosition;
			float wScale;
			FVector wAngle;
			float maxW;
			float minW;
			TArray<FVector4f> points4D;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_currentWAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentWPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxW;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minW;
		static const UECodeGen_Private::FStructPropertyParams NewProp_points4D_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_points4D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_currentWAngle = { "currentWAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, currentWAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_currentWPosition = { "currentWPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, currentWPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wPosition = { "wPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, wPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wScale = { "wScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, wScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wAngle = { "wAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, wAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_maxW = { "maxW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, maxW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_minW = { "minW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, minW), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_points4D_Inner = { "points4D", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_points4D = { "points4D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, points4D), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicActor4D_eventAppendRandom4D_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_currentWAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_currentWPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_wAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_maxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_minW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_points4D_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_points4D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Primitives" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicActor4D, nullptr, "AppendRandom4D", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::DynamicActor4D_eventAppendRandom4D_Parms), Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicActor4D);
	UClass* Z_Construct_UClass_ADynamicActor4D_NoRegister()
	{
		return ADynamicActor4D::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicActor4D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentAngleW_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mCurrentAngleW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mCurrentW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mScaleW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mScaleW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPositionW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mPositionW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mAngleW_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mAngleW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMaxW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMinW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mMinW;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRandPointNum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mRandPointNum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mPoints4D_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPoints4D_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mPoints4D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicActor4D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneratedDynamicMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Finished_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADynamicActor4D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynamicActor4D_Append120Cell, "Append120Cell" }, // 2560566776
		{ &Z_Construct_UFunction_ADynamicActor4D_Append16Cell, "Append16Cell" }, // 1129810459
		{ &Z_Construct_UFunction_ADynamicActor4D_Append24Cell, "Append24Cell" }, // 2593220524
		{ &Z_Construct_UFunction_ADynamicActor4D_Append5Cell, "Append5Cell" }, // 1228280871
		{ &Z_Construct_UFunction_ADynamicActor4D_Append600Cell, "Append600Cell" }, // 628020584
		{ &Z_Construct_UFunction_ADynamicActor4D_Append8Cell, "Append8Cell" }, // 3030112589
		{ &Z_Construct_UFunction_ADynamicActor4D_AppendCustom4D, "AppendCustom4D" }, // 3373532043
		{ &Z_Construct_UFunction_ADynamicActor4D_AppendRandom4D, "AppendRandom4D" }, // 1432161705
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DynamicActor4D.h" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentAngleW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "Comment", "//Players current w angle and position\n" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
		{ "ToolTip", "Players current w angle and position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentAngleW = { "mCurrentAngleW", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mCurrentAngleW), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentAngleW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentAngleW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentW = { "mCurrentW", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mCurrentW), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mScaleW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "Comment", "//The shapes w scale position and rotation.\n" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
		{ "ToolTip", "The shapes w scale position and rotation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mScaleW = { "mScaleW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mScaleW), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mScaleW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mScaleW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPositionW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPositionW = { "mPositionW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mPositionW), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPositionW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPositionW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mAngleW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mAngleW = { "mAngleW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mAngleW), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mAngleW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mAngleW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMaxW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "Comment", "//The max and min w value that the shape will appare at\n" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
		{ "ToolTip", "The max and min w value that the shape will appare at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMaxW = { "mMaxW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mMaxW), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMaxW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMaxW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMinW_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMinW = { "mMinW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mMinW), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMinW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMinW_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType = { "mShapeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mShapeType), Z_Construct_UEnum_Finished_Project_E4DShape, METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType_MetaData)) }; // 271607790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mRandPointNum_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "EditCondition", "mShapeType == E4DShape::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mRandPointNum = { "mRandPointNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mRandPointNum), METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mRandPointNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mRandPointNum_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D_Inner = { "mPoints4D", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D_MetaData[] = {
		{ "Category", "DynamicActor4D" },
		{ "EditCondition", "mShapeType == E4DShape::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "DynamicActor4D.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D = { "mPoints4D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicActor4D, mPoints4D), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicActor4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentAngleW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mCurrentW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mScaleW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPositionW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mAngleW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMaxW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mMinW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mRandPointNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicActor4D_Statics::NewProp_mPoints4D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicActor4D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicActor4D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicActor4D_Statics::ClassParams = {
		&ADynamicActor4D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADynamicActor4D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicActor4D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicActor4D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicActor4D()
	{
		if (!Z_Registration_Info_UClass_ADynamicActor4D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicActor4D.OuterSingleton, Z_Construct_UClass_ADynamicActor4D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADynamicActor4D.OuterSingleton;
	}
	template<> FINISHED_PROJECT_API UClass* StaticClass<ADynamicActor4D>()
	{
		return ADynamicActor4D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicActor4D);
	ADynamicActor4D::~ADynamicActor4D() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::EnumInfo[] = {
		{ E4DShape_StaticEnum, TEXT("E4DShape"), &Z_Registration_Info_UEnum_E4DShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 271607790U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicActor4D, ADynamicActor4D::StaticClass, TEXT("ADynamicActor4D"), &Z_Registration_Info_UClass_ADynamicActor4D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicActor4D), 222645734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_285328660(TEXT("/Script/Finished_Project"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_DynamicActor4D_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
