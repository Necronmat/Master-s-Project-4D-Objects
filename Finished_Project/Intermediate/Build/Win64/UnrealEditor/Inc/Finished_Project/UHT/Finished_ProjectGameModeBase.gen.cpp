// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finished_Project/Finished_ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinished_ProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_AFinished_ProjectGameModeBase();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_AFinished_ProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Finished_Project();
// End Cross Module References
	void AFinished_ProjectGameModeBase::StaticRegisterNativesAFinished_ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinished_ProjectGameModeBase);
	UClass* Z_Construct_UClass_AFinished_ProjectGameModeBase_NoRegister()
	{
		return AFinished_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Finished_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Finished_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Finished_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinished_ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::ClassParams = {
		&AFinished_ProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinished_ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFinished_ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinished_ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AFinished_ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFinished_ProjectGameModeBase.OuterSingleton;
	}
	template<> FINISHED_PROJECT_API UClass* StaticClass<AFinished_ProjectGameModeBase>()
	{
		return AFinished_ProjectGameModeBase::StaticClass();
	}
	AFinished_ProjectGameModeBase::AFinished_ProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinished_ProjectGameModeBase);
	AFinished_ProjectGameModeBase::~AFinished_ProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Finished_ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Finished_ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFinished_ProjectGameModeBase, AFinished_ProjectGameModeBase::StaticClass, TEXT("AFinished_ProjectGameModeBase"), &Z_Registration_Info_UClass_AFinished_ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinished_ProjectGameModeBase), 1207328153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Finished_ProjectGameModeBase_h_794086362(TEXT("/Script/Finished_Project"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Finished_ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Finished_ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
