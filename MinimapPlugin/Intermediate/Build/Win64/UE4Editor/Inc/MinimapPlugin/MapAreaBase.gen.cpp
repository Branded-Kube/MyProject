// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapAreaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapAreaBase() {}
// Cross Module References
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UMapAreaPrimitiveComponent::StaticRegisterNativesUMapAreaPrimitiveComponent()
	{
	}
	UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister()
	{
		return UMapAreaPrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This component makes it easy to press F to focus on MapAreaBase actors.\n" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MapAreaBase.h" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "This component makes it easy to press F to focus on MapAreaBase actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapAreaPrimitiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::ClassParams = {
		&UMapAreaPrimitiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapAreaPrimitiveComponent, 3550248103);
	template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapAreaPrimitiveComponent>()
	{
		return UMapAreaPrimitiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapAreaPrimitiveComponent(Z_Construct_UClass_UMapAreaPrimitiveComponent, &UMapAreaPrimitiveComponent::StaticClass, TEXT("/Script/MinimapPlugin"), TEXT("UMapAreaPrimitiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapAreaPrimitiveComponent);
	DEFINE_FUNCTION(AMapAreaBase::execGetLevelAtHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevelAtHeight(Z_Param_WorldZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapAreaBase::execGetMapViewCornerUVs)
	{
		P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_CornerUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMapViewCornerUVs(Z_Param_MapView,Z_Param_Out_CornerUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapAreaBase::execGetMapAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMapAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapAreaBase::execGetMapView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapViewComponent**)Z_Param__Result=P_THIS->GetMapView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapAreaBase::execGetAreaBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBoxComponent**)Z_Param__Result=P_THIS->GetAreaBounds();
		P_NATIVE_END;
	}
	void AMapAreaBase::StaticRegisterNativesAMapAreaBase()
	{
		UClass* Class = AMapAreaBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAreaBounds", &AMapAreaBase::execGetAreaBounds },
			{ "GetLevelAtHeight", &AMapAreaBase::execGetLevelAtHeight },
			{ "GetMapAspectRatio", &AMapAreaBase::execGetMapAspectRatio },
			{ "GetMapView", &AMapAreaBase::execGetMapView },
			{ "GetMapViewCornerUVs", &AMapAreaBase::execGetMapViewCornerUVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics
	{
		struct MapAreaBase_eventGetAreaBounds_Parms
		{
			UBoxComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetAreaBounds_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the BoxComponent that represents the area covered by this MapBackground\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns the BoxComponent that represents the area covered by this MapBackground" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetAreaBounds", nullptr, nullptr, sizeof(MapAreaBase_eventGetAreaBounds_Parms), Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapAreaBase_GetAreaBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics
	{
		struct MapAreaBase_eventGetLevelAtHeight_Parms
		{
			float WorldZ;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ = { "WorldZ", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetLevelAtHeight_Parms, WorldZ), METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetLevelAtHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whichever background texture is active\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns whichever background texture is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetLevelAtHeight", nullptr, nullptr, sizeof(MapAreaBase_eventGetLevelAtHeight_Parms), Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics
	{
		struct MapAreaBase_eventGetMapAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the aspect ratio SizeX / SizeY of the map's volume. Z is ignored.\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Retrieves the aspect ratio SizeX / SizeY of the map's volume. Z is ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapAspectRatio", nullptr, nullptr, sizeof(MapAreaBase_eventGetMapAspectRatio_Parms), Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics
	{
		struct MapAreaBase_eventGetMapView_Parms
		{
			UMapViewComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapView_Parms, ReturnValue), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns a MapViewComponent that represents the area covered by this MapBackground\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns a MapViewComponent that represents the area covered by this MapBackground" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapView", nullptr, nullptr, sizeof(MapAreaBase_eventGetMapView_Parms), Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics
	{
		struct MapAreaBase_eventGetMapViewCornerUVs_Parms
		{
			UMapViewComponent* MapView;
			TArray<FVector2D> CornerUVs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapView;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerUVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CornerUVs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapViewCornerUVs_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs_Inner = { "CornerUVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs = { "CornerUVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapViewCornerUVs_Parms, CornerUVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapAreaBase_eventGetMapViewCornerUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapAreaBase_eventGetMapViewCornerUVs_Parms), &Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Computes the map view's corners' UV coordinates in this area\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Computes the map view's corners' UV coordinates in this area" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapViewCornerUVs", nullptr, nullptr, sizeof(MapAreaBase_eventGetMapViewCornerUVs_Parms), Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMapAreaBase_NoRegister()
	{
		return AMapAreaBase::StaticClass();
	}
	struct Z_Construct_UClass_AMapAreaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaPrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaMapView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaMapView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapAreaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapAreaBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapAreaBase_GetAreaBounds, "GetAreaBounds" }, // 2254805740
		{ &Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight, "GetLevelAtHeight" }, // 152868401
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio, "GetMapAspectRatio" }, // 3622382658
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapView, "GetMapView" }, // 963518355
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs, "GetMapViewCornerUVs" }, // 3892759652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapAreaBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class of actors that represent part of the world in the minimap, for example to add a background or fog.\n" },
		{ "IncludePath", "MapAreaBase.h" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Base class of actors that represent part of the world in the minimap, for example to add a background or fog." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// When viewed top-down, the world area covered by this box is mapped to the minimap\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "When viewed top-down, the world area covered by this box is mapped to the minimap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds = { "AreaBounds", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapAreaBase, AreaBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// This component ensures that the viewport will focus on the volume correctly when pressing F in the editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "This component ensures that the viewport will focus on the volume correctly when pressing F in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive = { "AreaPrimitive", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapAreaBase, AreaPrimitive), Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// A MapView component that can be used to render exactly the area covered by this MapBackground to the minimap\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "A MapView component that can be used to render exactly the area covered by this MapBackground to the minimap" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView = { "AreaMapView", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapAreaBase, AreaMapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapAreaBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapAreaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapAreaBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapAreaBase_Statics::ClassParams = {
		&AMapAreaBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapAreaBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapAreaBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapAreaBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapAreaBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapAreaBase, 2320340391);
	template<> MINIMAPPLUGIN_API UClass* StaticClass<AMapAreaBase>()
	{
		return AMapAreaBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapAreaBase(Z_Construct_UClass_AMapAreaBase, &AMapAreaBase::StaticClass, TEXT("/Script/MinimapPlugin"), TEXT("AMapAreaBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapAreaBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
