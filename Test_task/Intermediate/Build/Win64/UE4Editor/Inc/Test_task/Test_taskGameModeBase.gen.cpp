// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_task/Test_taskGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_taskGameModeBase() {}
// Cross Module References
	TEST_TASK_API UClass* Z_Construct_UClass_ATest_taskGameModeBase_NoRegister();
	TEST_TASK_API UClass* Z_Construct_UClass_ATest_taskGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Test_task();
// End Cross Module References
	void ATest_taskGameModeBase::StaticRegisterNativesATest_taskGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATest_taskGameModeBase_NoRegister()
	{
		return ATest_taskGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATest_taskGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_taskGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_taskGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Test_taskGameModeBase.h" },
		{ "ModuleRelativePath", "Test_taskGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_taskGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_taskGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_taskGameModeBase_Statics::ClassParams = {
		&ATest_taskGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATest_taskGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_taskGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_taskGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_taskGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_taskGameModeBase, 1265488175);
	template<> TEST_TASK_API UClass* StaticClass<ATest_taskGameModeBase>()
	{
		return ATest_taskGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_taskGameModeBase(Z_Construct_UClass_ATest_taskGameModeBase, &ATest_taskGameModeBase::StaticClass, TEXT("/Script/Test_task"), TEXT("ATest_taskGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_taskGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
