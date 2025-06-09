// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/ObjetosLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetosLaberinto() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AObjetosLaberinto_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AObjetosLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void AObjetosLaberinto::StaticRegisterNativesAObjetosLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AObjetosLaberinto_NoRegister()
	{
		return AObjetosLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AObjetosLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjetosLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetosLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjetosLaberinto.h" },
		{ "ModuleRelativePath", "ObjetosLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjetosLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetosLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjetosLaberinto_Statics::ClassParams = {
		&AObjetosLaberinto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObjetosLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetosLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjetosLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjetosLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjetosLaberinto, 365227338);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AObjetosLaberinto>()
	{
		return AObjetosLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjetosLaberinto(Z_Construct_UClass_AObjetosLaberinto, &AObjetosLaberinto::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AObjetosLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetosLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
