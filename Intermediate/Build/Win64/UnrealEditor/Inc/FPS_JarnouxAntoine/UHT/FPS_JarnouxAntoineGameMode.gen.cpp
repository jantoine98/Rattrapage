// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_JarnouxAntoine/FPS_JarnouxAntoineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_JarnouxAntoineGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPS_JARNOUXANTOINE_API UClass* Z_Construct_UClass_AFPS_JarnouxAntoineGameMode();
	FPS_JARNOUXANTOINE_API UClass* Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_JarnouxAntoine();
// End Cross Module References
	void AFPS_JarnouxAntoineGameMode::StaticRegisterNativesAFPS_JarnouxAntoineGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_JarnouxAntoineGameMode);
	UClass* Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_NoRegister()
	{
		return AFPS_JarnouxAntoineGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_JarnouxAntoine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_JarnouxAntoineGameMode.h" },
		{ "ModuleRelativePath", "FPS_JarnouxAntoineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_JarnouxAntoineGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::ClassParams = {
		&AFPS_JarnouxAntoineGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPS_JarnouxAntoineGameMode()
	{
		if (!Z_Registration_Info_UClass_AFPS_JarnouxAntoineGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_JarnouxAntoineGameMode.OuterSingleton, Z_Construct_UClass_AFPS_JarnouxAntoineGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_JarnouxAntoineGameMode.OuterSingleton;
	}
	template<> FPS_JARNOUXANTOINE_API UClass* StaticClass<AFPS_JarnouxAntoineGameMode>()
	{
		return AFPS_JarnouxAntoineGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_JarnouxAntoineGameMode);
	AFPS_JarnouxAntoineGameMode::~AFPS_JarnouxAntoineGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoineGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoineGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_JarnouxAntoineGameMode, AFPS_JarnouxAntoineGameMode::StaticClass, TEXT("AFPS_JarnouxAntoineGameMode"), &Z_Registration_Info_UClass_AFPS_JarnouxAntoineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_JarnouxAntoineGameMode), 2952010396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoineGameMode_h_3012226613(TEXT("/Script/FPS_JarnouxAntoine"),
		Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antoi_Travaux_FPS_JarnouxAntoine_Source_FPS_JarnouxAntoine_FPS_JarnouxAntoineGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
