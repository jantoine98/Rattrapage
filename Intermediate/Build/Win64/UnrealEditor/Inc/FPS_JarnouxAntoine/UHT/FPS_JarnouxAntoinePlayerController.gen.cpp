// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_JarnouxAntoine/FPS_JarnouxAntoinePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_JarnouxAntoinePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FPS_JARNOUXANTOINE_API UClass* Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController();
	FPS_JARNOUXANTOINE_API UClass* Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_JarnouxAntoine();
// End Cross Module References
	void AFPS_JarnouxAntoinePlayerController::StaticRegisterNativesAFPS_JarnouxAntoinePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_JarnouxAntoinePlayerController);
	UClass* Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_NoRegister()
	{
		return AFPS_JarnouxAntoinePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_JarnouxAntoine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPS_JarnouxAntoinePlayerController.h" },
		{ "ModuleRelativePath", "FPS_JarnouxAntoinePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "FPS_JarnouxAntoinePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPS_JarnouxAntoinePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_JarnouxAntoinePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::ClassParams = {
		&AFPS_JarnouxAntoinePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController()
	{
		if (!Z_Registration_Info_UClass_AFPS_JarnouxAntoinePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_JarnouxAntoinePlayerController.OuterSingleton, Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_JarnouxAntoinePlayerController.OuterSingleton;
	}
	template<> FPS_JARNOUXANTOINE_API UClass* StaticClass<AFPS_JarnouxAntoinePlayerController>()
	{
		return AFPS_JarnouxAntoinePlayerController::StaticClass();
	}
	AFPS_JarnouxAntoinePlayerController::AFPS_JarnouxAntoinePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_JarnouxAntoinePlayerController);
	AFPS_JarnouxAntoinePlayerController::~AFPS_JarnouxAntoinePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoinePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoinePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_JarnouxAntoinePlayerController, AFPS_JarnouxAntoinePlayerController::StaticClass, TEXT("AFPS_JarnouxAntoinePlayerController"), &Z_Registration_Info_UClass_AFPS_JarnouxAntoinePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_JarnouxAntoinePlayerController), 4240731453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoinePlayerController_h_2212636442(TEXT("/Script/FPS_JarnouxAntoine"),
		Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoinePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoinePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
