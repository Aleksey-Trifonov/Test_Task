// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_task/TestTaskHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTaskHUD() {}
// Cross Module References
	TEST_TASK_API UClass* Z_Construct_UClass_UTestTaskHUD_NoRegister();
	TEST_TASK_API UClass* Z_Construct_UClass_UTestTaskHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Test_task();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTestTaskHUD::execHighlightSelectedTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightSelectedTab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestTaskHUD::execCollectWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestTaskHUD::execSetButtonFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestTaskHUD::execSelectPreviousTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectPreviousTab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTestTaskHUD::execSelectNextTab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNextTab();
		P_NATIVE_END;
	}
	void UTestTaskHUD::StaticRegisterNativesUTestTaskHUD()
	{
		UClass* Class = UTestTaskHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectWidgets", &UTestTaskHUD::execCollectWidgets },
			{ "HighlightSelectedTab", &UTestTaskHUD::execHighlightSelectedTab },
			{ "SelectNextTab", &UTestTaskHUD::execSelectNextTab },
			{ "SelectPreviousTab", &UTestTaskHUD::execSelectPreviousTab },
			{ "SetButtonFocus", &UTestTaskHUD::execSetButtonFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTaskHUD, nullptr, "CollectWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTaskHUD_CollectWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestTaskHUD_CollectWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTaskHUD, nullptr, "HighlightSelectedTab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTaskHUD, nullptr, "SelectNextTab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTaskHUD_SelectNextTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestTaskHUD_SelectNextTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTaskHUD, nullptr, "SelectPreviousTab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTaskHUD, nullptr, "SetButtonFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestTaskHUD_NoRegister()
	{
		return UTestTaskHUD::StaticClass();
	}
	struct Z_Construct_UClass_UTestTaskHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabLines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TabTexts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnselectedButtonOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnselectedButtonOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButtonOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButtonOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LibraryLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LibraryTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionsLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MissionsLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionsTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MissionsTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HomeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomeTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HomeTab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTaskHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_task,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestTaskHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestTaskHUD_CollectWidgets, "CollectWidgets" }, // 300714732
		{ &Z_Construct_UFunction_UTestTaskHUD_HighlightSelectedTab, "HighlightSelectedTab" }, // 2597832035
		{ &Z_Construct_UFunction_UTestTaskHUD_SelectNextTab, "SelectNextTab" }, // 1476543006
		{ &Z_Construct_UFunction_UTestTaskHUD_SelectPreviousTab, "SelectPreviousTab" }, // 902597094
		{ &Z_Construct_UFunction_UTestTaskHUD_SetButtonFocus, "SetButtonFocus" }, // 4194966747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestTaskHUD.h" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines = { "TabLines", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, TabLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines_Inner = { "TabLines", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts = { "TabTexts", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, TabTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts_Inner = { "TabTexts", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_UnselectedButtonOverlay_MetaData[] = {
		{ "Category", "Overlays" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_UnselectedButtonOverlay = { "UnselectedButtonOverlay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, UnselectedButtonOverlay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_UnselectedButtonOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_UnselectedButtonOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SelectedButtonOverlay_MetaData[] = {
		{ "Category", "Overlays" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SelectedButtonOverlay = { "SelectedButtonOverlay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, SelectedButtonOverlay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SelectedButtonOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SelectedButtonOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_DescriptionHeader_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_DescriptionHeader = { "DescriptionHeader", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, DescriptionHeader), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_DescriptionHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_DescriptionHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsLine = { "SettingsLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, SettingsLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsTab_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsTab = { "SettingsTab", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, SettingsTab), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryLine = { "LibraryLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, LibraryLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryTab_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryTab = { "LibraryTab", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, LibraryTab), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsLine = { "MissionsLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, MissionsLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsTab_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsTab = { "MissionsTab", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, MissionsTab), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeLine = { "HomeLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, HomeLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeTab_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestTaskHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeTab = { "HomeTab", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestTaskHUD, HomeTab), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeTab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestTaskHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_TabTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_UnselectedButtonOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SelectedButtonOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_DescriptionHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_SettingsTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_LibraryTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_MissionsTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestTaskHUD_Statics::NewProp_HomeTab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTaskHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestTaskHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestTaskHUD_Statics::ClassParams = {
		&UTestTaskHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestTaskHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTaskHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTaskHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTaskHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestTaskHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestTaskHUD, 2955871891);
	template<> TEST_TASK_API UClass* StaticClass<UTestTaskHUD>()
	{
		return UTestTaskHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestTaskHUD(Z_Construct_UClass_UTestTaskHUD, &UTestTaskHUD::StaticClass, TEXT("/Script/Test_task"), TEXT("UTestTaskHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTaskHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
