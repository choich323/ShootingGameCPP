// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/EnemyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyActor();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void AEnemyActor::StaticRegisterNativesAEnemyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyActor);
	UClass* Z_Construct_UClass_AEnemyActor_NoRegister()
	{
		return AEnemyActor::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_traceRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyActor.h" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "EnemyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyActor_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "EnemyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyActor, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyActor_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_meshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_traceRate_MetaData[] = {
		{ "Category", "EnemyActor" },
		{ "Comment", "// \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
		{ "ToolTip", "\xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_traceRate = { "traceRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyActor, traceRate), METADATA_PARAMS(Z_Construct_UClass_AEnemyActor_Statics::NewProp_traceRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_traceRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "EnemyActor" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyActor, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_traceRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyActor_Statics::ClassParams = {
		&AEnemyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyActor()
	{
		if (!Z_Registration_Info_UClass_AEnemyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyActor.OuterSingleton, Z_Construct_UClass_AEnemyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyActor.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<AEnemyActor>()
	{
		return AEnemyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyActor);
	AEnemyActor::~AEnemyActor() {}
	struct Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_EnemyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_EnemyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyActor, AEnemyActor::StaticClass, TEXT("AEnemyActor"), &Z_Registration_Info_UClass_AEnemyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyActor), 3244030214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_EnemyActor_h_3475408869(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_EnemyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_EnemyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
