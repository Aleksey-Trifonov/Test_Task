// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_task/TestTaskPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTaskPlayerController() {}
// Cross Module References
	TEST_TASK_API UClass* Z_Construct_UClass_ATestTaskPlayerController_NoRegister();
	TEST_TASK_API UClass* Z_Construct_UClass_ATestTaskPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Test_task();
// End Cross Module References
	void ATestTaskPlayerController::StaticRegisterNativesATestTaskPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATestTaskPlayerController_NoRegister()
	{
		return ATestTaskPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATestTaskPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTaskPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTaskPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTaskPlayerController.h" },
		{ "ModuleRelativePath", "TestTaskPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTaskPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTaskPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTaskPlayerController_Statics::ClassParams = {
		&ATestTaskPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestTaskPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestTaskPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTaskPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTaskPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTaskPlayerController, 2142617397);
	template<> TEST_TASK_API UClass* StaticClass<ATestTaskPlayerController>()
	{
		return ATestTaskPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTaskPlayerController(Z_Construct_UClass_ATestTaskPlayerController, &ATestTaskPlayerController::StaticClass, TEXT("/Script/Test_task"), TEXT("ATestTaskPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTaskPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
