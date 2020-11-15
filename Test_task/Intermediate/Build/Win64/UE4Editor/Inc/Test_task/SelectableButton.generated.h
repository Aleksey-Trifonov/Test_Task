// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TASK_SelectableButton_generated_h
#error "SelectableButton.generated.h already included, missing '#pragma once' in SelectableButton.h"
#endif
#define TEST_TASK_SelectableButton_generated_h

#define Test_task_Source_Test_task_SelectableButton_h_10_DELEGATE \
static inline void FOnSelectableButtonFocusLost_DelegateWrapper(const FMulticastScriptDelegate& OnSelectableButtonFocusLost) \
{ \
	OnSelectableButtonFocusLost.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Test_task_Source_Test_task_SelectableButton_h_9_DELEGATE \
static inline void FOnSelectableButtonFocusObtained_DelegateWrapper(const FMulticastScriptDelegate& OnSelectableButtonFocusObtained) \
{ \
	OnSelectableButtonFocusObtained.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Test_task_Source_Test_task_SelectableButton_h_18_SPARSE_DATA
#define Test_task_Source_Test_task_SelectableButton_h_18_RPC_WRAPPERS
#define Test_task_Source_Test_task_SelectableButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_task_Source_Test_task_SelectableButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectableButton(); \
	friend struct Z_Construct_UClass_USelectableButton_Statics; \
public: \
	DECLARE_CLASS(USelectableButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(USelectableButton)


#define Test_task_Source_Test_task_SelectableButton_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSelectableButton(); \
	friend struct Z_Construct_UClass_USelectableButton_Statics; \
public: \
	DECLARE_CLASS(USelectableButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(USelectableButton)


#define Test_task_Source_Test_task_SelectableButton_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectableButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectableButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectableButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectableButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectableButton(USelectableButton&&); \
	NO_API USelectableButton(const USelectableButton&); \
public:


#define Test_task_Source_Test_task_SelectableButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectableButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectableButton(USelectableButton&&); \
	NO_API USelectableButton(const USelectableButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectableButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectableButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectableButton)


#define Test_task_Source_Test_task_SelectableButton_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectableButton() { return STRUCT_OFFSET(USelectableButton, SelectableButton); } \
	FORCEINLINE static uint32 __PPO__OnSelectableButtonFocusObtained() { return STRUCT_OFFSET(USelectableButton, OnSelectableButtonFocusObtained); } \
	FORCEINLINE static uint32 __PPO__OnSelectableButtonFocusLost() { return STRUCT_OFFSET(USelectableButton, OnSelectableButtonFocusLost); }


#define Test_task_Source_Test_task_SelectableButton_h_15_PROLOG
#define Test_task_Source_Test_task_SelectableButton_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_SelectableButton_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_SelectableButton_h_18_SPARSE_DATA \
	Test_task_Source_Test_task_SelectableButton_h_18_RPC_WRAPPERS \
	Test_task_Source_Test_task_SelectableButton_h_18_INCLASS \
	Test_task_Source_Test_task_SelectableButton_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_task_Source_Test_task_SelectableButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_SelectableButton_h_18_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_SelectableButton_h_18_SPARSE_DATA \
	Test_task_Source_Test_task_SelectableButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_task_Source_Test_task_SelectableButton_h_18_INCLASS_NO_PURE_DECLS \
	Test_task_Source_Test_task_SelectableButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_TASK_API UClass* StaticClass<class USelectableButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_task_Source_Test_task_SelectableButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
