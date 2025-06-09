// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/Patron_PrototypeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatron_PrototypeGameMode() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_APatron_PrototypeGameMode_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_APatron_PrototypeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void APatron_PrototypeGameMode::StaticRegisterNativesAPatron_PrototypeGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatron_PrototypeGameMode_NoRegister()
	{
		return APatron_PrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatron_PrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatron_PrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_PrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Patron_PrototypeGameMode.h" },
		{ "ModuleRelativePath", "Patron_PrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatron_PrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatron_PrototypeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatron_PrototypeGameMode_Statics::ClassParams = {
		&APatron_PrototypeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APatron_PrototypeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_PrototypeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatron_PrototypeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatron_PrototypeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatron_PrototypeGameMode, 3651719081);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<APatron_PrototypeGameMode>()
	{
		return APatron_PrototypeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatron_PrototypeGameMode(Z_Construct_UClass_APatron_PrototypeGameMode, &APatron_PrototypeGameMode::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("APatron_PrototypeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatron_PrototypeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
