// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/MainWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWidget() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	void UMainWidget::StaticRegisterNativesUMainWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainWidget);
	UClass* Z_Construct_UClass_UMainWidget_NoRegister()
	{
		return UMainWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scoreText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scoreData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bestScoreText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bestScoreText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bestScoreData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bestScoreData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainWidget.h" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "Comment", "// meta\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd. \xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd.(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) + \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xbf\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
		{ "ToolTip", "meta\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd. \xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd.(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) + \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xbf\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText = { "scoreText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMainWidget, scoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData = { "scoreData", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMainWidget, scoreData), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreText = { "bestScoreText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMainWidget, bestScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreData_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreData = { "bestScoreData", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMainWidget, bestScoreData), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_bestScoreData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainWidget_Statics::ClassParams = {
		&UMainWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainWidget()
	{
		if (!Z_Registration_Info_UClass_UMainWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainWidget.OuterSingleton, Z_Construct_UClass_UMainWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainWidget.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<UMainWidget>()
	{
		return UMainWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainWidget);
	UMainWidget::~UMainWidget() {}
	struct Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_MainWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainWidget, UMainWidget::StaticClass, TEXT("UMainWidget"), &Z_Registration_Info_UClass_UMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainWidget), 2152987929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_MainWidget_h_1949252115(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programming_Practice_Unreal5_ShootingGame_ShootingGameCPP_ShootingCPP_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
