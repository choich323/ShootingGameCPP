// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/SaveData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_USaveData();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_USaveData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void USaveData::StaticRegisterNativesUSaveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveData);
	UClass* Z_Construct_UClass_USaveData_NoRegister()
	{
		return USaveData::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreData_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_scoreData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveData.h" },
		{ "ModuleRelativePath", "Public/SaveData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Statics::NewProp_scoreData_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/SaveData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_Statics::NewProp_scoreData = { "scoreData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveData, scoreData), METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::NewProp_scoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::NewProp_scoreData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Statics::NewProp_scoreData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveData_Statics::ClassParams = {
		&USaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData()
	{
		if (!Z_Registration_Info_UClass_USaveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveData.OuterSingleton, Z_Construct_UClass_USaveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveData.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<USaveData>()
	{
		return USaveData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData);
	USaveData::~USaveData() {}
	struct Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_SaveData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_SaveData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveData, USaveData::StaticClass, TEXT("USaveData"), &Z_Registration_Info_UClass_USaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveData), 2947381637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_SaveData_h_358044652(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_SaveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_SaveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
