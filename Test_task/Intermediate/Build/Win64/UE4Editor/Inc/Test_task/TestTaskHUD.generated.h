// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TASK_TestTaskHUD_generated_h
#error "TestTaskHUD.generated.h already included, missing '#pragma once' in TestTaskHUD.h"
#endif
#define TEST_TASK_TestTaskHUD_generated_h

#define Test_task_Source_Test_task_TestTaskHUD_h_12_SPARSE_DATA
#define Test_task_Source_Test_task_TestTaskHUD_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHighlightSelectedTab); \
	DECLARE_FUNCTION(execCollectWidgets); \
	DECLARE_FUNCTION(execSetButtonFocus); \
	DECLARE_FUNCTION(execSelectPreviousTab); \
	DECLARE_FUNCTION(execSelectNextTab);


#define Test_task_Source_Test_task_TestTaskHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHighlightSelectedTab); \
	DECLARE_FUNCTION(execCollectWidgets); \
	DECLARE_FUNCTION(execSetButtonFocus); \
	DECLARE_FUNCTION(execSelectPreviousTab); \
	DECLARE_FUNCTION(execSelectNextTab);


#define Test_task_Source_Test_task_TestTaskHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestTaskHUD(); \
	friend struct Z_Construct_UClass_UTestTaskHUD_Statics; \
public: \
	DECLARE_CLASS(UTestTaskHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(UTestTaskHUD)


#define Test_task_Source_Test_task_TestTaskHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTestTaskHUD(); \
	friend struct Z_Construct_UClass_UTestTaskHUD_Statics; \
public: \
	DECLARE_CLASS(UTestTaskHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(UTestTaskHUD)


#define Test_task_Source_Test_task_TestTaskHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestTaskHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTaskHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestTaskHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTaskHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestTaskHUD(UTestTaskHUD&&); \
	NO_API UTestTaskHUD(const UTestTaskHUD&); \
public:


#define Test_task_Source_Test_task_TestTaskHUD_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestTaskHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestTaskHUD(UTestTaskHUD&&); \
	NO_API UTestTaskHUD(const UTestTaskHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestTaskHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestTaskHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestTaskHUD)


#define Test_task_Source_Test_task_TestTaskHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HomeTab() { return STRUCT_OFFSET(UTestTaskHUD, HomeTab); } \
	FORCEINLINE static uint32 __PPO__HomeLine() { return STRUCT_OFFSET(UTestTaskHUD, HomeLine); } \
	FORCEINLINE static uint32 __PPO__MissionsTab() { return STRUCT_OFFSET(UTestTaskHUD, MissionsTab); } \
	FORCEINLINE static uint32 __PPO__MissionsLine() { return STRUCT_OFFSET(UTestTaskHUD, MissionsLine); } \
	FORCEINLINE static uint32 __PPO__LibraryTab() { return STRUCT_OFFSET(UTestTaskHUD, LibraryTab); } \
	FORCEINLINE static uint32 __PPO__LibraryLine() { return STRUCT_OFFSET(UTestTaskHUD, LibraryLine); } \
	FORCEINLINE static uint32 __PPO__SettingsTab() { return STRUCT_OFFSET(UTestTaskHUD, SettingsTab); } \
	FORCEINLINE static uint32 __PPO__SettingsLine() { return STRUCT_OFFSET(UTestTaskHUD, SettingsLine); } \
	FORCEINLINE static uint32 __PPO__DescriptionHeader() { return STRUCT_OFFSET(UTestTaskHUD, DescriptionHeader); } \
	FORCEINLINE static uint32 __PPO__SelectedButtonOverlay() { return STRUCT_OFFSET(UTestTaskHUD, SelectedButtonOverlay); } \
	FORCEINLINE static uint32 __PPO__UnselectedButtonOverlay() { return STRUCT_OFFSET(UTestTaskHUD, UnselectedButtonOverlay); } \
	FORCEINLINE static uint32 __PPO__TabTexts() { return STRUCT_OFFSET(UTestTaskHUD, TabTexts); } \
	FORCEINLINE static uint32 __PPO__TabLines() { return STRUCT_OFFSET(UTestTaskHUD, TabLines); }


#define Test_task_Source_Test_task_TestTaskHUD_h_9_PROLOG
#define Test_task_Source_Test_task_TestTaskHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TestTaskHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TestTaskHUD_h_12_SPARSE_DATA \
	Test_task_Source_Test_task_TestTaskHUD_h_12_RPC_WRAPPERS \
	Test_task_Source_Test_task_TestTaskHUD_h_12_INCLASS \
	Test_task_Source_Test_task_TestTaskHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_task_Source_Test_task_TestTaskHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TestTaskHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TestTaskHUD_h_12_SPARSE_DATA \
	Test_task_Source_Test_task_TestTaskHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TestTaskHUD_h_12_INCLASS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TestTaskHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_TASK_API UClass* StaticClass<class UTestTaskHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_task_Source_Test_task_TestTaskHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
