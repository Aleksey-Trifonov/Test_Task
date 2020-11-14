// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_task/TabElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabElement() {}
// Cross Module References
	TEST_TASK_API UClass* Z_Construct_UClass_UTabElement_NoRegister();
	TEST_TASK_API UClass* Z_Construct_UClass_UTabElement();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Test_task();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UTabElement::StaticRegisterNativesUTabElement()
	{
	}
	UClass* Z_Construct_UClass_UTabElement_NoRegister()
	{
		return UTabElement::StaticClass();
	}
	struct Z_Construct_UClass_UTabElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTabElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TabElement.h" },
		{ "ModuleRelativePath", "TabElement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabElement_Statics::NewProp_TabImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TabElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabElement_Statics::NewProp_TabImage = { "TabImage", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabElement, TabImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabElement_Statics::NewProp_TabImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabElement_Statics::NewProp_TabImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabElement_Statics::NewProp_TabText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TabElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabElement_Statics::NewProp_TabText = { "TabText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTabElement, TabText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTabElement_Statics::NewProp_TabText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabElement_Statics::NewProp_TabText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTabElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabElement_Statics::NewProp_TabImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabElement_Statics::NewProp_TabText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTabElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTabElement_Statics::ClassParams = {
		&UTabElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTabElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTabElement_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTabElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTabElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTabElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTabElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTabElement, 814914249);
	template<> TEST_TASK_API UClass* StaticClass<UTabElement>()
	{
		return UTabElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTabElement(Z_Construct_UClass_UTabElement, &UTabElement::StaticClass, TEXT("/Script/Test_task"), TEXT("UTabElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTabElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
