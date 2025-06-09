// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/GeneradorLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorLaberinto() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AGeneradorLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void AGeneradorLaberinto::StaticRegisterNativesAGeneradorLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorLaberinto.h" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams = {
		&AGeneradorLaberinto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorLaberinto, 3503901208);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AGeneradorLaberinto>()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorLaberinto(Z_Construct_UClass_AGeneradorLaberinto, &AGeneradorLaberinto::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AGeneradorLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
