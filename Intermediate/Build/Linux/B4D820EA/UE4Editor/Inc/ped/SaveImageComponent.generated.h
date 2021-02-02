// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PED_SaveImageComponent_generated_h
#error "SaveImageComponent.generated.h already included, missing '#pragma once' in SaveImageComponent.h"
#endif
#define PED_SaveImageComponent_generated_h

#define ped_Source_ped_SaveImageComponent_h_15_RPC_WRAPPERS
#define ped_Source_ped_SaveImageComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ped_Source_ped_SaveImageComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveImageComponent(); \
	friend struct Z_Construct_UClass_USaveImageComponent_Statics; \
public: \
	DECLARE_CLASS(USaveImageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ped"), NO_API) \
	DECLARE_SERIALIZER(USaveImageComponent)


#define ped_Source_ped_SaveImageComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveImageComponent(); \
	friend struct Z_Construct_UClass_USaveImageComponent_Statics; \
public: \
	DECLARE_CLASS(USaveImageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ped"), NO_API) \
	DECLARE_SERIALIZER(USaveImageComponent)


#define ped_Source_ped_SaveImageComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveImageComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveImageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveImageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveImageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveImageComponent(USaveImageComponent&&); \
	NO_API USaveImageComponent(const USaveImageComponent&); \
public:


#define ped_Source_ped_SaveImageComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveImageComponent(USaveImageComponent&&); \
	NO_API USaveImageComponent(const USaveImageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveImageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveImageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveImageComponent)


#define ped_Source_ped_SaveImageComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define ped_Source_ped_SaveImageComponent_h_12_PROLOG
#define ped_Source_ped_SaveImageComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ped_Source_ped_SaveImageComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ped_Source_ped_SaveImageComponent_h_15_RPC_WRAPPERS \
	ped_Source_ped_SaveImageComponent_h_15_INCLASS \
	ped_Source_ped_SaveImageComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ped_Source_ped_SaveImageComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ped_Source_ped_SaveImageComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	ped_Source_ped_SaveImageComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ped_Source_ped_SaveImageComponent_h_15_INCLASS_NO_PURE_DECLS \
	ped_Source_ped_SaveImageComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PED_API UClass* StaticClass<class USaveImageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ped_Source_ped_SaveImageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
