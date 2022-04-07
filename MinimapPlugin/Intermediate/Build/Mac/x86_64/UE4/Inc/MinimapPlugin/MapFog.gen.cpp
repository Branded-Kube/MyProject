// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapFog() {}
// Cross Module References
	MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapFog_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapFog();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics
	{
		struct _Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms
		{
			AMapFog* MapFog;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapFog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapFog = { "MapFog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms, MapFog), Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapFog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapFogMaterialChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMapFog::execOnMapRevealerUnregistered)
	{
		P_GET_OBJECT(UMapRevealerComponent,Z_Param_MapRevealer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapRevealerUnregistered(Z_Param_MapRevealer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execOnMapRevealerRegistered)
	{
		P_GET_OBJECT(UMapRevealerComponent,Z_Param_MapRevealer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapRevealerRegistered(Z_Param_MapRevealer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetFogMaterialInstanceForCanvas)
	{
		P_GET_OBJECT(UMapRendererComponent,Z_Param_Renderer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetFogMaterialInstanceForCanvas(Z_Param_Renderer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execSetFogMaterialForCanvas)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogMaterialForCanvas(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetFogMaterialForUMG)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetFogMaterialForUMG();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execSetFogMaterialForUMG)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogMaterialForUMG(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetWorldToPixelRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWorldToPixelRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetSourceFogRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetSourceFogRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetDestinationFogRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetDestinationFogRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMapFog::execGetFogAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_UBOOL(Z_Param_bRequireCurrentlyRevealing);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFogAtLocation(Z_Param_Out_WorldLocation,Z_Param_bRequireCurrentlyRevealing,Z_Param_Out_RevealFactor);
		P_NATIVE_END;
	}
	void AMapFog::StaticRegisterNativesAMapFog()
	{
		UClass* Class = AMapFog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDestinationFogRenderTarget", &AMapFog::execGetDestinationFogRenderTarget },
			{ "GetFogAtLocation", &AMapFog::execGetFogAtLocation },
			{ "GetFogMaterialForUMG", &AMapFog::execGetFogMaterialForUMG },
			{ "GetFogMaterialInstanceForCanvas", &AMapFog::execGetFogMaterialInstanceForCanvas },
			{ "GetSourceFogRenderTarget", &AMapFog::execGetSourceFogRenderTarget },
			{ "GetWorldToPixelRatio", &AMapFog::execGetWorldToPixelRatio },
			{ "OnMapRevealerRegistered", &AMapFog::execOnMapRevealerRegistered },
			{ "OnMapRevealerUnregistered", &AMapFog::execOnMapRevealerUnregistered },
			{ "SetFogMaterialForCanvas", &AMapFog::execSetFogMaterialForCanvas },
			{ "SetFogMaterialForUMG", &AMapFog::execSetFogMaterialForUMG },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics
	{
		struct MapFog_eventGetDestinationFogRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetDestinationFogRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is written to this frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is written to this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetDestinationFogRenderTarget", nullptr, nullptr, sizeof(MapFog_eventGetDestinationFogRenderTarget_Parms), Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics
	{
		struct MapFog_eventGetFogAtLocation_Parms
		{
			FVector WorldLocation;
			bool bRequireCurrentlyRevealing;
			float RevealFactor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentlyRevealing_MetaData[];
#endif
		static void NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentlyRevealing;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RevealFactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetFogAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj)
	{
		((MapFog_eventGetFogAtLocation_Parms*)Obj)->bRequireCurrentlyRevealing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing = { "bRequireCurrentlyRevealing", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFog_eventGetFogAtLocation_Parms), &Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_RevealFactor = { "RevealFactor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetFogAtLocation_Parms, RevealFactor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapFog_eventGetFogAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapFog_eventGetFogAtLocation_Parms), &Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_RevealFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves fog at location. Returns true if the location was covered by this MapFog. Warning: Reads from render target which is expensive, but only does this once per frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves fog at location. Returns true if the location was covered by this MapFog. Warning: Reads from render target which is expensive, but only does this once per frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogAtLocation", nullptr, nullptr, sizeof(MapFog_eventGetFogAtLocation_Parms), Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetFogAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics
	{
		struct MapFog_eventGetFogMaterialForUMG_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialForUMG_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's fog in UMG\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's fog in UMG" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogMaterialForUMG", nullptr, nullptr, sizeof(MapFog_eventGetFogMaterialForUMG_Parms), Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics
	{
		struct MapFog_eventGetFogMaterialInstanceForCanvas_Parms
		{
			UMapRendererComponent* Renderer;
			UMaterialInstanceDynamic* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Renderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Renderer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialInstanceForCanvas_Parms, Renderer), Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialInstanceForCanvas_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's fog on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's fog on UCanvas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogMaterialInstanceForCanvas", nullptr, nullptr, sizeof(MapFog_eventGetFogMaterialInstanceForCanvas_Parms), Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics
	{
		struct MapFog_eventGetSourceFogRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetSourceFogRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is read from this frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is read from this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetSourceFogRenderTarget", nullptr, nullptr, sizeof(MapFog_eventGetSourceFogRenderTarget_Parms), Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics
	{
		struct MapFog_eventGetWorldToPixelRatio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventGetWorldToPixelRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the ratio between world units and pixels\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the ratio between world units and pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetWorldToPixelRatio", nullptr, nullptr, sizeof(MapFog_eventGetWorldToPixelRatio_Parms), Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics
	{
		struct MapFog_eventOnMapRevealerRegistered_Parms
		{
			UMapRevealerComponent* MapRevealer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventOnMapRevealerRegistered_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "OnMapRevealerRegistered", nullptr, nullptr, sizeof(MapFog_eventOnMapRevealerRegistered_Parms), Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics
	{
		struct MapFog_eventOnMapRevealerUnregistered_Parms
		{
			UMapRevealerComponent* MapRevealer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventOnMapRevealerUnregistered_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "OnMapRevealerUnregistered", nullptr, nullptr, sizeof(MapFog_eventOnMapRevealerUnregistered_Parms), Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics
	{
		struct MapFog_eventSetFogMaterialForCanvas_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventSetFogMaterialForCanvas_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's fog on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Changes what material is used to render this volume's fog on UCanvas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "SetFogMaterialForCanvas", nullptr, nullptr, sizeof(MapFog_eventSetFogMaterialForCanvas_Parms), Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics
	{
		struct MapFog_eventSetFogMaterialForUMG_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapFog_eventSetFogMaterialForUMG_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's fog in UMG\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Changes what material is used to render this volume's fog in UMG" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "SetFogMaterialForUMG", nullptr, nullptr, sizeof(MapFog_eventSetFogMaterialForUMG_Parms), Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMapFog_NoRegister()
	{
		return AMapFog::StaticClass();
	}
	struct Z_Construct_UClass_AMapFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMapFogMaterialChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapFogMaterialChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogRenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FogRenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaterial_UMG_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogMaterial_UMG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaterial_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogMaterial_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityHidden_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityExplored_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityExplored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityRevealing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityRevealing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCombineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogCombineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCacheLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogCacheLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldFog_MetaData[];
#endif
		static void NewProp_bEnableWorldFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogPostProcessMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogPostProcessMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityHidden_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityExplored_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityExplored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityRevealing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityRevealing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessVolume;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoLocatePostProcessVolume_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLocatePostProcessVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoLocatePostProcessVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PermanentRevealRT_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PermanentRevealRT_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PermanentRevealRT_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PermanentRevealRT_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevealRT_Staging_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RevealRT_Staging;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCombineMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogCombineMatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogPostProcessMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogPostProcessMatInst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapRevealers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapRevealers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapRevealers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMapAreaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapFog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget, "GetDestinationFogRenderTarget" }, // 119225372
		{ &Z_Construct_UFunction_AMapFog_GetFogAtLocation, "GetFogAtLocation" }, // 3629383700
		{ &Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG, "GetFogMaterialForUMG" }, // 191347145
		{ &Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas, "GetFogMaterialInstanceForCanvas" }, // 767111702
		{ &Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget, "GetSourceFogRenderTarget" }, // 1830333584
		{ &Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio, "GetWorldToPixelRatio" }, // 2943575526
		{ &Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered, "OnMapRevealerRegistered" }, // 2878993221
		{ &Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered, "OnMapRevealerUnregistered" }, // 3516657162
		{ &Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas, "SetFogMaterialForCanvas" }, // 2953774630
		{ &Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG, "SetFogMaterialForUMG" }, // 469542434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapFog.h" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when the material used to render the background changes\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Event that fires when the material used to render the background changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged = { "OnMapFogMaterialChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, OnMapFogMaterialChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// Width and height of the texture in which vision information is stored. Increase to have more detailed fog boundaries at the cost of performance.\n// Especially if you use GetFogAtLocation() or any icon is configured to show/hide based on fog, having a large render target size will impact performance.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Width and height of the texture in which vision information is stored. Increase to have more detailed fog boundaries at the cost of performance.\nEspecially if you use GetFogAtLocation() or any icon is configured to show/hide based on fog, having a large render target size will impact performance." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize = { "FogRenderTargetSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogRenderTargetSize), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to render the fog in UMG. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog in UMG. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG = { "FogMaterial_UMG", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to render the fog on HUD canvas. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog on HUD canvas. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas = { "FogMaterial_Canvas", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is hidden in fog\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is hidden in fog" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden = { "MinimapOpacityHidden", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityHidden), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is explored before by a permanent map revealer\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is explored before by a permanent map revealer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored = { "MinimapOpacityExplored", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityExplored), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is currently being revealed\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is currently being revealed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing = { "MinimapOpacityRevealing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityRevealing), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to control how the revealed area expands over time given the previous and current frames' revealed areas.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to control how the revealed area expands over time given the previous and current frames' revealed areas." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial = { "FogCombineMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogCombineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime_MetaData[] = {
		{ "Category", "Gameplay Fog" },
		{ "Comment", "// If you call GetFogAtLocation() or if any icons are configured to show/hide based on fog, texture data will be retrieved from the GPU. Because this is a slow operation, the retrieved data \n// is cached and reused for a duration. This setting controls that duration. You can increase it for better performance but delayed response to fog.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If you call GetFogAtLocation() or if any icons are configured to show/hide based on fog, texture data will be retrieved from the GPU. Because this is a slow operation, the retrieved data\nis cached and reused for a duration. This setting controls that duration. You can increase it for better performance but delayed response to fog." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime = { "FogCacheLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogCacheLifetime), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If true, will apply fog to world as a post process effect\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If true, will apply fog to world as a post process effect" },
	};
#endif
	void Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_SetBit(void* Obj)
	{
		((AMapFog*)Obj)->bEnableWorldFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog = { "bEnableWorldFog", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapFog), &Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// This material is used to render the fog in the world as a post process effect\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog in the world as a post process effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial = { "FogPostProcessMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is hidden in fog\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is hidden in fog" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden = { "WorldOpacityHidden", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, WorldOpacityHidden), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is explored before by a permanent map revealer\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is explored before by a permanent map revealer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored = { "WorldOpacityExplored", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, WorldOpacityExplored), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is currently being revealed\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is currently being revealed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing = { "WorldOpacityRevealing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, WorldOpacityRevealing), METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If set, the FogPostProcessMaterial will be applied to this volume\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If set, the FogPostProcessMaterial will be applied to this volume" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume = { "PostProcessVolume", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, PostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If PostProcessVolume isn't set, this setting controls what the plugin will do\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If PostProcessVolume isn't set, this setting controls what the plugin will do" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume = { "AutoLocatePostProcessVolume", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, AutoLocatePostProcessVolume), Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A_MetaData[] = {
		{ "Comment", "// Render targets that store what parts of the fog are permanently revealed\n// Two render targets per reveal type for buffer swapping\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Render targets that store what parts of the fog are permanently revealed\nTwo render targets per reveal type for buffer swapping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A = { "PermanentRevealRT_A", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, PermanentRevealRT_A), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B = { "PermanentRevealRT_B", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, PermanentRevealRT_B), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging = { "RevealRT_Staging", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, RevealRT_Staging), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_ValueProp = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_Key_KeyProp = { "MaterialInstances_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "Comment", "// Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, MaterialInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst_MetaData[] = {
		{ "Comment", "// Instance of the fog combine material\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the fog combine material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst = { "FogCombineMatInst", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogCombineMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst_MetaData[] = {
		{ "Comment", "// Instance of the fog post process material\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the fog post process material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst = { "FogPostProcessMatInst", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, FogPostProcessMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_Inner = { "MapRevealers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_MetaData[] = {
		{ "Comment", "// Keep track of all fog revealers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Keep track of all fog revealers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers = { "MapRevealers", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapFog, MapRevealers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapFog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapFog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapFog_Statics::ClassParams = {
		&AMapFog::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapFog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapFog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapFog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapFog, 2026798522);
	template<> MINIMAPPLUGIN_API UClass* StaticClass<AMapFog>()
	{
		return AMapFog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapFog(Z_Construct_UClass_AMapFog, &AMapFog::StaticClass, TEXT("/Script/MinimapPlugin"), TEXT("AMapFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
