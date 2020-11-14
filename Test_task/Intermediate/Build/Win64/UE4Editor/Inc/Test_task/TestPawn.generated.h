// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TASK_TestPawn_generated_h
#error "TestPawn.generated.h already included, missing '#pragma once' in TestPawn.h"
#endif
#define TEST_TASK_TestPawn_generated_h

#define Test_task_Source_Test_task_TestPawn_h_13_SPARSE_DATA
#define Test_task_Source_Test_task_TestPawn_h_13_RPC_WRAPPERS
#define Test_task_Source_Test_task_TestPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_task_Source_Test_task_TestPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPawn(); \
	friend struct Z_Construct_UClass_ATestPawn_Statics; \
public: \
	DECLARE_CLASS(ATestPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(ATestPawn)


#define Test_task_Source_Test_task_TestPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestPawn(); \
	friend struct Z_Construct_UClass_ATestPawn_Statics; \
public: \
	DECLARE_CLASS(ATestPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test_task"), NO_API) \
	DECLARE_SERIALIZER(ATestPawn)


#define Test_task_Source_Test_task_TestPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPawn(ATestPawn&&); \
	NO_API ATestPawn(const ATestPawn&); \
public:


#define Test_task_Source_Test_task_TestPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPawn(ATestPawn&&); \
	NO_API ATestPawn(const ATestPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestPawn)


#define Test_task_Source_Test_task_TestPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define Test_task_Source_Test_task_TestPawn_h_10_PROLOG
#define Test_task_Source_Test_task_TestPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TestPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TestPawn_h_13_SPARSE_DATA \
	Test_task_Source_Test_task_TestPawn_h_13_RPC_WRAPPERS \
	Test_task_Source_Test_task_TestPawn_h_13_INCLASS \
	Test_task_Source_Test_task_TestPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_task_Source_Test_task_TestPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_task_Source_Test_task_TestPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_task_Source_Test_task_TestPawn_h_13_SPARSE_DATA \
	Test_task_Source_Test_task_TestPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TestPawn_h_13_INCLASS_NO_PURE_DECLS \
	Test_task_Source_Test_task_TestPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_TASK_API UClass* StaticClass<class ATestPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_task_Source_Test_task_TestPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
