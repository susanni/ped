// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ped/SaveImageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveImageComponent() {}
// Cross Module References
	PED_API UClass* Z_Construct_UClass_USaveImageComponent_NoRegister();
	PED_API UClass* Z_Construct_UClass_USaveImageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ped();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void USaveImageComponent::StaticRegisterNativesUSaveImageComponent()
	{
	}
	UClass* Z_Construct_UClass_USaveImageComponent_NoRegister()
	{
		return USaveImageComponent::StaticClass();
	}
	struct Z_Construct_UClass_USaveImageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSaving_MetaData[];
#endif
		static void NewProp_DisableSaving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSaving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveImageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveImageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Utilities for SceneCaptureComponent2D to save color + depth images to disk.\n" },
		{ "IncludePath", "SaveImageComponent.h" },
		{ "ModuleRelativePath", "SaveImageComponent.h" },
		{ "ToolTip", "Utilities for SceneCaptureComponent2D to save color + depth images to disk." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving_MetaData[] = {
		{ "Category", "SaveImageComponent" },
		{ "ModuleRelativePath", "SaveImageComponent.h" },
	};
#endif
	void Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving_SetBit(void* Obj)
	{
		((USaveImageComponent*)Obj)->DisableSaving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving = { "DisableSaving", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveImageComponent), &Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveImageComponent_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SaveImageComponent" },
		{ "ModuleRelativePath", "SaveImageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveImageComponent_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveImageComponent, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_TextureTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveImageComponent_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "SaveImageComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SaveImageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveImageComponent_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveImageComponent, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_CaptureComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveImageComponent_Statics::NewProp_CaptureComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveImageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveImageComponent_Statics::NewProp_DisableSaving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveImageComponent_Statics::NewProp_TextureTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveImageComponent_Statics::NewProp_CaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveImageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveImageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveImageComponent_Statics::ClassParams = {
		&USaveImageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveImageComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveImageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USaveImageComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveImageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveImageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveImageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveImageComponent, 2239508780);
	template<> PED_API UClass* StaticClass<USaveImageComponent>()
	{
		return USaveImageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveImageComponent(Z_Construct_UClass_USaveImageComponent, &USaveImageComponent::StaticClass, TEXT("/Script/ped"), TEXT("USaveImageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveImageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
