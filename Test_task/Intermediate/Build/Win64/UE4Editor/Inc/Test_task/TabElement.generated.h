// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TASK_TabElement_generated_h
#error "TabElement.generated.h already included, missing '#pragma once' in TabElement.h"
#endif
#define TEST_TASK_TabElement_generated_h

#define Test_task_Source_Test_task_TabElement_h_15_SPARSE_DATA
#define Test_task_Source_Test_task_TabElement_h_15_RPC_WRAPPERS
#define Test_task_Source_Test_task_TabElement_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_task_Source_Test_task_TabElement_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTabElement(); \
	friend struct Z_Construct_UClass_UTabElement_Statics; \
public: \
	DECLARE_CLASS(UTabElement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(UTabElement)


#define Test_task_Source_Test_task_TabElement_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTabElement(); \
	friend struct Z_Construct_UClass_UTabElement_Statics; \
public: \
	DECLARE_CLASS(UTabElement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(UTabElement)


#define Test_task_Source_Test_task_TabElement_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTabElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTabElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTabElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTabElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTabElement(UTabElement&&); \
	NO_API UTabElement(const UTabElement&); \
public:


#define Test_task_Source_Test_task_TabElement_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTabElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTabElement(UTabElement&&); \
	NO_API UTabElement(const UTabElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTabElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTabElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTabElement)


#define Test_task_Source_Test_task_TabElement_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TabText() { return STRUCT_OFFSET(UTabElement, TabText); } \
	FORCEINLINE static uint32 __PPO__TabImage() { return STRUCT_OFFSET(UTabElement, TabImage); }


#define Test_task_Source_Test_task_TabElement_h_12_PROLOG
#define Test_task_Source_Test_task_TabElement_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TabElement_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TabElement_h_15_SPARSE_DATA \
	Test_task_Source_Test_task_TabElement_h_15_RPC_WRAPPERS \
	Test_task_Source_Test_task_TabElement_h_15_INCLASS \
	Test_task_Source_Test_task_TabElement_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_task_Source_Test_task_TabElement_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TabElement_h_15_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TabElement_h_15_SPARSE_DATA \
	Test_task_Source_Test_task_TabElement_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TabElement_h_15_INCLASS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TabElement_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_TASK_API UClass* StaticClass<class UTabElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_task_Source_Test_task_TabElement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
