// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapFog;
class UMapRevealerComponent;
class UMapRendererComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
struct FVector;
#ifdef MINIMAPPLUGIN_MapFog_generated_h
#error "MapFog.generated.h already included, missing '#pragma once' in MapFog.h"
#endif
#define MINIMAPPLUGIN_MapFog_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_12_DELEGATE \
struct _Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms \
{ \
	AMapFog* MapFog; \
}; \
static inline void FMapFogMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogMaterialChangedSignature, AMapFog* MapFog) \
{ \
	_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms Parms; \
	Parms.MapFog=MapFog; \
	MapFogMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMapRevealerUnregistered); \
	DECLARE_FUNCTION(execOnMapRevealerRegistered); \
	DECLARE_FUNCTION(execGetFogMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetFogMaterialForCanvas); \
	DECLARE_FUNCTION(execGetFogMaterialForUMG); \
	DECLARE_FUNCTION(execSetFogMaterialForUMG); \
	DECLARE_FUNCTION(execGetWorldToPixelRatio); \
	DECLARE_FUNCTION(execGetSourceFogRenderTarget); \
	DECLARE_FUNCTION(execGetDestinationFogRenderTarget); \
	DECLARE_FUNCTION(execGetFogAtLocation);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMapRevealerUnregistered); \
	DECLARE_FUNCTION(execOnMapRevealerRegistered); \
	DECLARE_FUNCTION(execGetFogMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetFogMaterialForCanvas); \
	DECLARE_FUNCTION(execGetFogMaterialForUMG); \
	DECLARE_FUNCTION(execSetFogMaterialForUMG); \
	DECLARE_FUNCTION(execGetWorldToPixelRatio); \
	DECLARE_FUNCTION(execGetSourceFogRenderTarget); \
	DECLARE_FUNCTION(execGetDestinationFogRenderTarget); \
	DECLARE_FUNCTION(execGetFogAtLocation);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapFog(); \
	friend struct Z_Construct_UClass_AMapFog_Statics; \
public: \
	DECLARE_CLASS(AMapFog, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapFog)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMapFog(); \
	friend struct Z_Construct_UClass_AMapFog_Statics; \
public: \
	DECLARE_CLASS(AMapFog, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapFog)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapFog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapFog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapFog(AMapFog&&); \
	NO_API AMapFog(const AMapFog&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapFog(AMapFog&&); \
	NO_API AMapFog(const AMapFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapFog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapFog)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FogRenderTargetSize() { return STRUCT_OFFSET(AMapFog, FogRenderTargetSize); } \
	FORCEINLINE static uint32 __PPO__FogMaterial_UMG() { return STRUCT_OFFSET(AMapFog, FogMaterial_UMG); } \
	FORCEINLINE static uint32 __PPO__FogMaterial_Canvas() { return STRUCT_OFFSET(AMapFog, FogMaterial_Canvas); } \
	FORCEINLINE static uint32 __PPO__MinimapOpacityHidden() { return STRUCT_OFFSET(AMapFog, MinimapOpacityHidden); } \
	FORCEINLINE static uint32 __PPO__MinimapOpacityExplored() { return STRUCT_OFFSET(AMapFog, MinimapOpacityExplored); } \
	FORCEINLINE static uint32 __PPO__MinimapOpacityRevealing() { return STRUCT_OFFSET(AMapFog, MinimapOpacityRevealing); } \
	FORCEINLINE static uint32 __PPO__FogCombineMaterial() { return STRUCT_OFFSET(AMapFog, FogCombineMaterial); } \
	FORCEINLINE static uint32 __PPO__FogCacheLifetime() { return STRUCT_OFFSET(AMapFog, FogCacheLifetime); } \
	FORCEINLINE static uint32 __PPO__bEnableWorldFog() { return STRUCT_OFFSET(AMapFog, bEnableWorldFog); } \
	FORCEINLINE static uint32 __PPO__FogPostProcessMaterial() { return STRUCT_OFFSET(AMapFog, FogPostProcessMaterial); } \
	FORCEINLINE static uint32 __PPO__WorldOpacityHidden() { return STRUCT_OFFSET(AMapFog, WorldOpacityHidden); } \
	FORCEINLINE static uint32 __PPO__WorldOpacityExplored() { return STRUCT_OFFSET(AMapFog, WorldOpacityExplored); } \
	FORCEINLINE static uint32 __PPO__WorldOpacityRevealing() { return STRUCT_OFFSET(AMapFog, WorldOpacityRevealing); } \
	FORCEINLINE static uint32 __PPO__PostProcessVolume() { return STRUCT_OFFSET(AMapFog, PostProcessVolume); } \
	FORCEINLINE static uint32 __PPO__AutoLocatePostProcessVolume() { return STRUCT_OFFSET(AMapFog, AutoLocatePostProcessVolume); } \
	FORCEINLINE static uint32 __PPO__PermanentRevealRT_A() { return STRUCT_OFFSET(AMapFog, PermanentRevealRT_A); } \
	FORCEINLINE static uint32 __PPO__PermanentRevealRT_B() { return STRUCT_OFFSET(AMapFog, PermanentRevealRT_B); } \
	FORCEINLINE static uint32 __PPO__RevealRT_Staging() { return STRUCT_OFFSET(AMapFog, RevealRT_Staging); } \
	FORCEINLINE static uint32 __PPO__MaterialInstances() { return STRUCT_OFFSET(AMapFog, MaterialInstances); } \
	FORCEINLINE static uint32 __PPO__FogCombineMatInst() { return STRUCT_OFFSET(AMapFog, FogCombineMatInst); } \
	FORCEINLINE static uint32 __PPO__FogPostProcessMatInst() { return STRUCT_OFFSET(AMapFog, FogPostProcessMatInst); } \
	FORCEINLINE static uint32 __PPO__MapRevealers() { return STRUCT_OFFSET(AMapFog, MapRevealers); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_14_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapFog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
