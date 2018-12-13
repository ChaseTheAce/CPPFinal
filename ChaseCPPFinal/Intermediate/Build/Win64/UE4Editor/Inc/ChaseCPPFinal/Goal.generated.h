// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHASECPPFINAL_Goal_generated_h
#error "Goal.generated.h already included, missing '#pragma once' in Goal.h"
#endif
#define CHASECPPFINAL_Goal_generated_h

#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlipMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	}


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlipMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	}


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaseCPPFinal"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaseCPPFinal"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public:


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoal)


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_PRIVATE_PROPERTY_OFFSET
#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_10_PROLOG
#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_PRIVATE_PROPERTY_OFFSET \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_RPC_WRAPPERS \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_INCLASS \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_PRIVATE_PROPERTY_OFFSET \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_INCLASS_NO_PURE_DECLS \
	ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ChaseCPPFinal_Source_ChaseCPPFinal_Goal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
