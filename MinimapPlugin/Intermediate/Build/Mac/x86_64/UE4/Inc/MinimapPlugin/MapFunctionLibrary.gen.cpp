// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapFunctionLibrary() {}
// Cross Module References
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapFunctionLibrary_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapTrackerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMapFunctionLibrary::execComputeViewFrustum)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
		P_GET_UBOOL(Z_Param_bIsCircular);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_CornerUVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloorDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapFunctionLibrary::ComputeViewFrustum(Z_Param_WorldContextObject,Z_Param_MapView,Z_Param_bIsCircular,Z_Param_Out_CornerUVs,Z_Param_FloorDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execBoxSelectInView)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_StartUV);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EndUV);
		P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
		P_GET_UBOOL(Z_Param_bIsCircular);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMapIconComponent*>*)Z_Param__Result=UMapFunctionLibrary::BoxSelectInView(Z_Param_Out_StartUV,Z_Param_Out_EndUV,Z_Param_MapView,Z_Param_bIsCircular);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execClampIntoView)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadiusUV);
		P_GET_UBOOL(Z_Param_bIsCircular);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMapFunctionLibrary::ClampIntoView(Z_Param_Out_UV,Z_Param_OuterRadiusUV,Z_Param_bIsCircular);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execDetectIsInView)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OuterRadiusUV);
		P_GET_UBOOL(Z_Param_bIsCircular);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMapFunctionLibrary::DetectIsInView(Z_Param_Out_UV,Z_Param_Out_OuterRadiusUV,Z_Param_bIsCircular);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execFindMapView)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EMapViewSearchOption,Z_Param_MapViewSearchOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapViewComponent**)Z_Param__Result=UMapFunctionLibrary::FindMapView(Z_Param_WorldContextObject,EMapViewSearchOption(Z_Param_MapViewSearchOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execGetFirstMapBackground)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMapBackground**)Z_Param__Result=UMapFunctionLibrary::GetFirstMapBackground(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapFunctionLibrary::execGetMapTracker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMapTrackerComponent**)Z_Param__Result=UMapFunctionLibrary::GetMapTracker(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UMapFunctionLibrary::StaticRegisterNativesUMapFunctionLibrary()
	{
		UClass* Class = UMapFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoxSelectInView", &UMapFunctionLibrary::execBoxSelectInView },
			{ "ClampIntoView", &UMapFunctionLibrary::execClampIntoView },
			{ "ComputeViewFrustum", &UMapFunctionLibrary::execComputeViewFrustum },
			{ "DetectIsInView", &UMapFunctionLibrary::execDetectIsInView },
			{ "FindMapView", &UMapFunctionLibrary::execFindMapView },
			{ "GetFirstMapBackground", &UMapFunctionLibrary::execGetFirstMapBackground },
			{ "GetMapTracker", &UMapFunctionLibrary::execGetMapTracker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics
	{
		struct MapFunctionLibrary_eventBoxSelectInView_Parms
		{
			FVector2D StartUV;
			FVector2D EndUV;
			UMapViewComponent* MapView;
			bool bIsCircular;
			TArray<UMapIconComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[];
#endif
		static void NewProp_bIsCircular_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV = { "StartUV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, StartUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV = { "EndUV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, EndUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventBoxSelectInView_Parms*)Obj)->bIsCircular = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventBoxSelectInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Given a box selection in a view, gathers all map icons that intersect with the box.\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Given a box selection in a view, gathers all map icons that intersect with the box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "BoxSelectInView", nullptr, nullptr, sizeof(MapFunctionLibrary_eventBoxSelectInView_Parms), Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics
	{
		struct MapFunctionLibrary_eventClampIntoView_Parms
		{
			FVector2D UV;
			float OuterRadiusUV;
			bool bIsCircular;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRadiusUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterRadiusUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[];
#endif
		static void NewProp_bIsCircular_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV = { "OuterRadiusUV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, OuterRadiusUV), METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventClampIntoView_Parms*)Obj)->bIsCircular = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventClampIntoView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Moves an element completely into minimap space, given its UV coordinates and UV size.\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Moves an element completely into minimap space, given its UV coordinates and UV size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "ClampIntoView", nullptr, nullptr, sizeof(MapFunctionLibrary_eventClampIntoView_Parms), Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics
	{
		struct MapFunctionLibrary_eventComputeViewFrustum_Parms
		{
			const UObject* WorldContextObject;
			UMapViewComponent* MapView;
			bool bIsCircular;
			TArray<FVector2D> CornerUVs;
			float FloorDistance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[];
#endif
		static void NewProp_bIsCircular_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerUVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CornerUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorDistance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventComputeViewFrustum_Parms*)Obj)->bIsCircular = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs_Inner = { "CornerUVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs = { "CornerUVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, CornerUVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance = { "FloorDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, FloorDistance), METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance_MetaData)) };
	void Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventComputeViewFrustum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Computes a top-down trapezoid that represents the player camera's view frustum. Trapezoid is computed by generating 4 lines through the corners of the player's viewport and \n// computing their intersection with the up-facing floor at 'FloorDistance' distance away from the camera. Returns true only when the view frustum could be computed. It fails\n// when the player is looking upward or if looking too closely towards the horizon. On success, CornerUVs stores the 4 points in minimap space that form the trapezoid.\n" },
		{ "CPP_Default_FloorDistance", "600.000000" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Computes a top-down trapezoid that represents the player camera's view frustum. Trapezoid is computed by generating 4 lines through the corners of the player's viewport and\ncomputing their intersection with the up-facing floor at 'FloorDistance' distance away from the camera. Returns true only when the view frustum could be computed. It fails\nwhen the player is looking upward or if looking too closely towards the horizon. On success, CornerUVs stores the 4 points in minimap space that form the trapezoid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "ComputeViewFrustum", nullptr, nullptr, sizeof(MapFunctionLibrary_eventComputeViewFrustum_Parms), Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics
	{
		struct MapFunctionLibrary_eventDetectIsInView_Parms
		{
			FVector2D UV;
			FVector2D OuterRadiusUV;
			bool bIsCircular;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRadiusUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterRadiusUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[];
#endif
		static void NewProp_bIsCircular_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventDetectIsInView_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV = { "OuterRadiusUV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventDetectIsInView_Parms, OuterRadiusUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventDetectIsInView_Parms*)Obj)->bIsCircular = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventDetectIsInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_MetaData)) };
	void Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapFunctionLibrary_eventDetectIsInView_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventDetectIsInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Computes whether an icon is visible in view, given its UV coordinates and UV size in normalized view space.\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Computes whether an icon is visible in view, given its UV coordinates and UV size in normalized view space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "DetectIsInView", nullptr, nullptr, sizeof(MapFunctionLibrary_eventDetectIsInView_Parms), Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics
	{
		struct MapFunctionLibrary_eventFindMapView_Parms
		{
			UObject* WorldContextObject;
			EMapViewSearchOption MapViewSearchOption;
			UMapViewComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MapViewSearchOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapViewSearchOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MapViewSearchOption;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption = { "MapViewSearchOption", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, MapViewSearchOption), Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, ReturnValue), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Utility option to find a MapViewComponent in the world\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Utility option to find a MapViewComponent in the world" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "FindMapView", nullptr, nullptr, sizeof(MapFunctionLibrary_eventFindMapView_Parms), Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_FindMapView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics
	{
		struct MapFunctionLibrary_eventGetFirstMapBackground_Parms
		{
			const UObject* WorldContextObject;
			AMapBackground* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetFirstMapBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetFirstMapBackground_Parms, ReturnValue), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the first MapBackground placed in the level, if any. If you expect more than one MapBackground, you shouldn't use this function.\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Retrieves the first MapBackground placed in the level, if any. If you expect more than one MapBackground, you shouldn't use this function." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "GetFirstMapBackground", nullptr, nullptr, sizeof(MapFunctionLibrary_eventGetFirstMapBackground_Parms), Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics
	{
		struct MapFunctionLibrary_eventGetMapTracker_Parms
		{
			const UObject* WorldContextObject;
			UMapTrackerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetMapTracker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetMapTracker_Parms, ReturnValue), Z_Construct_UClass_UMapTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the central MapTrackerComponent component.\n" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Retrieves the central MapTrackerComponent component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "GetMapTracker", nullptr, nullptr, sizeof(MapFunctionLibrary_eventGetMapTracker_Parms), Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapFunctionLibrary_NoRegister()
	{
		return UMapFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMapFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView, "BoxSelectInView" }, // 4083050117
		{ &Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView, "ClampIntoView" }, // 333791952
		{ &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum, "ComputeViewFrustum" }, // 2351150197
		{ &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView, "DetectIsInView" }, // 3981542396
		{ &Z_Construct_UFunction_UMapFunctionLibrary_FindMapView, "FindMapView" }, // 283199001
		{ &Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground, "GetFirstMapBackground" }, // 3366400359
		{ &Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker, "GetMapTracker" }, // 3904721330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Utility functions for the minimap plugin\n" },
		{ "IncludePath", "MapFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
		{ "ToolTip", "Utility functions for the minimap plugin" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapFunctionLibrary_Statics::ClassParams = {
		&UMapFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapFunctionLibrary, 2573260444);
	template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapFunctionLibrary>()
	{
		return UMapFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapFunctionLibrary(Z_Construct_UClass_UMapFunctionLibrary, &UMapFunctionLibrary::StaticClass, TEXT("/Script/MinimapPlugin"), TEXT("UMapFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
