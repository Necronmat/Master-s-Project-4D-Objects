// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finished_Project/GameMode4D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode4D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_AGameMode4D();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_AGameMode4D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Finished_Project();
// End Cross Module References
	DEFINE_FUNCTION(AGameMode4D::execDisplayRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayRotation_Implementation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode4D::execDisplayPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPosition_Implementation(Z_Param_position,Z_Param_w);
		P_NATIVE_END;
	}
	struct GameMode4D_eventDisplayPosition_Parms
	{
		FVector position;
		float w;
	};
	struct GameMode4D_eventDisplayRotation_Parms
	{
		FRotator rotation;
	};
	static FName NAME_AGameMode4D_DisplayPosition = FName(TEXT("DisplayPosition"));
	void AGameMode4D::DisplayPosition(FVector position, float w)
	{
		GameMode4D_eventDisplayPosition_Parms Parms;
		Parms.position=position;
		Parms.w=w;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode4D_DisplayPosition),&Parms);
	}
	static FName NAME_AGameMode4D_DisplayRotation = FName(TEXT("DisplayRotation"));
	void AGameMode4D::DisplayRotation(FRotator rotation)
	{
		GameMode4D_eventDisplayRotation_Parms Parms;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode4D_DisplayRotation),&Parms);
	}
	void AGameMode4D::StaticRegisterNativesAGameMode4D()
	{
		UClass* Class = AGameMode4D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayPosition", &AGameMode4D::execDisplayPosition },
			{ "DisplayRotation", &AGameMode4D::execDisplayRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameMode4D_eventDisplayPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameMode4D_eventDisplayPosition_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::NewProp_w,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode4D, nullptr, "DisplayPosition", nullptr, nullptr, sizeof(GameMode4D_eventDisplayPosition_Parms), Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode4D_DisplayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode4D_DisplayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameMode4D_eventDisplayRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode4D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode4D, nullptr, "DisplayRotation", nullptr, nullptr, sizeof(GameMode4D_eventDisplayRotation_Parms), Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode4D_DisplayRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameMode4D_DisplayRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameMode4D);
	UClass* Z_Construct_UClass_AGameMode4D_NoRegister()
	{
		return AGameMode4D::StaticClass();
	}
	struct Z_Construct_UClass_AGameMode4D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameMode4D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Finished_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameMode4D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameMode4D_DisplayPosition, "DisplayPosition" }, // 1729044191
		{ &Z_Construct_UFunction_AGameMode4D_DisplayRotation, "DisplayRotation" }, // 2519332597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode4D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode4D.h" },
		{ "ModuleRelativePath", "GameMode4D.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameMode4D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode4D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameMode4D_Statics::ClassParams = {
		&AGameMode4D::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameMode4D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode4D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameMode4D()
	{
		if (!Z_Registration_Info_UClass_AGameMode4D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameMode4D.OuterSingleton, Z_Construct_UClass_AGameMode4D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameMode4D.OuterSingleton;
	}
	template<> FINISHED_PROJECT_API UClass* StaticClass<AGameMode4D>()
	{
		return AGameMode4D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode4D);
	AGameMode4D::~AGameMode4D() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_GameMode4D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_GameMode4D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameMode4D, AGameMode4D::StaticClass, TEXT("AGameMode4D"), &Z_Registration_Info_UClass_AGameMode4D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameMode4D), 3767479430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_GameMode4D_h_3826512060(TEXT("/Script/Finished_Project"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_GameMode4D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_GameMode4D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
