// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Prototype/Muro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}
// Cross Module References
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AMuro_NoRegister();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AMuro();
	PATRON_PROTOTYPE_API UClass* Z_Construct_UClass_AObjetosLaberinto();
	UPackage* Z_Construct_UPackage__Script_Patron_Prototype();
// End Cross Module References
	void AMuro::StaticRegisterNativesAMuro()
	{
	}
	UClass* Z_Construct_UClass_AMuro_NoRegister()
	{
		return AMuro::StaticClass();
	}
	struct Z_Construct_UClass_AMuro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjetosLaberinto,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
		&AMuro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuro, 529630515);
	template<> PATRON_PROTOTYPE_API UClass* StaticClass<AMuro>()
	{
		return AMuro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuro(Z_Construct_UClass_AMuro, &AMuro::StaticClass, TEXT("/Script/Patron_Prototype"), TEXT("AMuro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
