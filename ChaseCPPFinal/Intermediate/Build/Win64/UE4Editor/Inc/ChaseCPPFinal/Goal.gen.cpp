// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaseCPPFinal/Goal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoal() {}
// Cross Module References
	CHASECPPFINAL_API UClass* Z_Construct_UClass_AGoal_NoRegister();
	CHASECPPFINAL_API UClass* Z_Construct_UClass_AGoal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ChaseCPPFinal();
	CHASECPPFINAL_API UFunction* Z_Construct_UFunction_AGoal_FlipMove();
	CHASECPPFINAL_API UFunction* Z_Construct_UFunction_AGoal_Move();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CHASECPPFINAL_API UClass* Z_Construct_UClass_ATarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AGoal::StaticRegisterNativesAGoal()
	{
		UClass* Class = AGoal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlipMove", &AGoal::execFlipMove },
			{ "Move", &AGoal::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoal_FlipMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_FlipMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoal_FlipMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoal, "FlipMove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoal_FlipMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGoal_FlipMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoal_FlipMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoal_FlipMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoal_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoal_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoal_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoal, "Move", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoal_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGoal_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoal_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoal_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoal_NoRegister()
	{
		return AGoal::StaticClass();
	}
	struct Z_Construct_UClass_AGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTargetBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyTargetBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_goalMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_goalMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaseCPPFinal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoal_FlipMove, "FlipMove" }, // 895758811
		{ &Z_Construct_UFunction_AGoal_Move, "Move" }, // 1067296061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Goal.h" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_MyTargetBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_MyTargetBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "MyTargetBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(AGoal, MyTargetBlueprint), Z_Construct_UClass_ATarget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_MyTargetBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_MyTargetBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_goalMat_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_goalMat = { UE4CodeGen_Private::EPropertyClass::Object, "goalMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGoal, goalMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_goalMat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_goalMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Goal" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_moveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "moveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGoal, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_moveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_origin_MetaData[] = {
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_origin = { UE4CodeGen_Private::EPropertyClass::Struct, "origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGoal, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_origin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalModel_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalModel = { UE4CodeGen_Private::EPropertyClass::Object, "GoalModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalModel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData[] = {
		{ "Category", "Goal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox = { UE4CodeGen_Private::EPropertyClass::Object, "GoalBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AGoal, GoalBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_MyTargetBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_goalMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoal_Statics::NewProp_GoalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoal_Statics::ClassParams = {
		&AGoal::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoal, 1956451294);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoal(Z_Construct_UClass_AGoal, &AGoal::StaticClass, TEXT("/Script/ChaseCPPFinal"), TEXT("AGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
