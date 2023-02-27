// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/KillZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillZone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AKillZone();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AKillZone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void AKillZone::StaticRegisterNativesAKillZone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillZone);
	UClass* Z_Construct_UClass_AKillZone_NoRegister()
	{
		return AKillZone::StaticClass();
	}
	struct Z_Construct_UClass_AKillZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillZone.h" },
		{ "ModuleRelativePath", "Public/KillZone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillZone_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "KillZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KillZone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillZone_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AKillZone, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKillZone_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKillZone_Statics::NewProp_boxComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKillZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillZone_Statics::NewProp_boxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillZone_Statics::ClassParams = {
		&AKillZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKillZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKillZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKillZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillZone()
	{
		if (!Z_Registration_Info_UClass_AKillZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillZone.OuterSingleton, Z_Construct_UClass_AKillZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKillZone.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<AKillZone>()
	{
		return AKillZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillZone);
	AKillZone::~AKillZone() {}
	struct Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_KillZone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_KillZone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKillZone, AKillZone::StaticClass, TEXT("AKillZone"), &Z_Registration_Info_UClass_AKillZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillZone), 24085738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_KillZone_h_3123468912(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_KillZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_KillZone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
