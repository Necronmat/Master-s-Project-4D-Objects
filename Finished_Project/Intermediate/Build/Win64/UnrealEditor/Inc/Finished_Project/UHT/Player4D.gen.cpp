// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Finished_Project/Player4D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer4D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_AGameMode4D_NoRegister();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_APlayer4D();
	FINISHED_PROJECT_API UClass* Z_Construct_UClass_APlayer4D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Finished_Project();
// End Cross Module References
	void APlayer4D::StaticRegisterNativesAPlayer4D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayer4D);
	UClass* Z_Construct_UClass_APlayer4D_NoRegister()
	{
		return APlayer4D::StaticClass();
	}
	struct Z_Construct_UClass_APlayer4D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer4D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Finished_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer4D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player4D.h" },
		{ "ModuleRelativePath", "Player4D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer4D_Statics::NewProp_mCollision_MetaData[] = {
		{ "Category", "Player4D" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player4D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer4D_Statics::NewProp_mCollision = { "mCollision", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer4D, mCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer4D_Statics::NewProp_mCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::NewProp_mCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer4D_Statics::NewProp_mCamera_MetaData[] = {
		{ "Category", "Player4D" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player4D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer4D_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer4D, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer4D_Statics::NewProp_mCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::NewProp_mCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer4D_Statics::NewProp_mGameMode_MetaData[] = {
		{ "Category", "Player4D" },
		{ "ModuleRelativePath", "Player4D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer4D_Statics::NewProp_mGameMode = { "mGameMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer4D, mGameMode), Z_Construct_UClass_AGameMode4D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer4D_Statics::NewProp_mGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::NewProp_mGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer4D_Statics::NewProp_mSpeed_MetaData[] = {
		{ "Category", "Player4D" },
		{ "ModuleRelativePath", "Player4D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer4D_Statics::NewProp_mSpeed = { "mSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayer4D, mSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer4D_Statics::NewProp_mSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::NewProp_mSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer4D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer4D_Statics::NewProp_mCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer4D_Statics::NewProp_mCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer4D_Statics::NewProp_mGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer4D_Statics::NewProp_mSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer4D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer4D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayer4D_Statics::ClassParams = {
		&APlayer4D::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer4D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer4D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer4D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer4D()
	{
		if (!Z_Registration_Info_UClass_APlayer4D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayer4D.OuterSingleton, Z_Construct_UClass_APlayer4D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayer4D.OuterSingleton;
	}
	template<> FINISHED_PROJECT_API UClass* StaticClass<APlayer4D>()
	{
		return APlayer4D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer4D);
	APlayer4D::~APlayer4D() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Player4D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Player4D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayer4D, APlayer4D::StaticClass, TEXT("APlayer4D"), &Z_Registration_Info_UClass_APlayer4D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayer4D), 2486416882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Player4D_h_272605530(TEXT("/Script/Finished_Project"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Player4D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Uni_work_UClan_Masters_Project_Finished_Project_Source_Finished_Project_Player4D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
