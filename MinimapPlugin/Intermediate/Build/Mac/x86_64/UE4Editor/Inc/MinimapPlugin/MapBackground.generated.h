// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapBackground;
class UTextureRenderTarget2D;
class UTexture;
class UTexture2D;
class UMapRendererComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef MINIMAPPLUGIN_MapBackground_generated_h
#error "MapBackground.generated.h already included, missing '#pragma once' in MapBackground.h"
#endif
#define MINIMAPPLUGIN_MapBackground_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics; \
	MINIMAPPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MINIMAPPLUGIN_API UScriptStruct* StaticStruct<struct FMapBackgroundLevel>();

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_20_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
	int32 Level; \
	UTextureRenderTarget2D* RenderTarget; \
}; \
static inline void FMapBackgroundOverlayChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundOverlayChangedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	Parms.Level=Level; \
	Parms.RenderTarget=RenderTarget; \
	MapBackgroundOverlayChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
	int32 Level; \
	UTextureRenderTarget2D* RenderTarget; \
}; \
static inline void FMapBackgroundRenderedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundRenderedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	Parms.Level=Level; \
	Parms.RenderTarget=RenderTarget; \
	MapBackgroundRenderedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_18_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundAppearanceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundAppearanceChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundAppearanceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_17_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundMaterialChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_16_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundTextureChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundTextureChangedSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundTextureChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRerenderBackground); \
	DECLARE_FUNCTION(execGetBackgroundTextureAtHeight); \
	DECLARE_FUNCTION(execGetBackgroundOverlay); \
	DECLARE_FUNCTION(execSetBackgroundOverlay); \
	DECLARE_FUNCTION(execGetBackgroundTexture); \
	DECLARE_FUNCTION(execSetBackgroundTexture); \
	DECLARE_FUNCTION(execIsMultiLevel); \
	DECLARE_FUNCTION(execGetBackgroundZOrder); \
	DECLARE_FUNCTION(execSetBackgroundZOrder); \
	DECLARE_FUNCTION(execGetBackgroundPriority); \
	DECLARE_FUNCTION(execSetBackgroundPriority); \
	DECLARE_FUNCTION(execIsBackgroundVisible); \
	DECLARE_FUNCTION(execSetBackgroundVisible); \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForCanvas); \
	DECLARE_FUNCTION(execGetBackgroundMaterialForUMG); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForUMG);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRerenderBackground); \
	DECLARE_FUNCTION(execGetBackgroundTextureAtHeight); \
	DECLARE_FUNCTION(execGetBackgroundOverlay); \
	DECLARE_FUNCTION(execSetBackgroundOverlay); \
	DECLARE_FUNCTION(execGetBackgroundTexture); \
	DECLARE_FUNCTION(execSetBackgroundTexture); \
	DECLARE_FUNCTION(execIsMultiLevel); \
	DECLARE_FUNCTION(execGetBackgroundZOrder); \
	DECLARE_FUNCTION(execSetBackgroundZOrder); \
	DECLARE_FUNCTION(execGetBackgroundPriority); \
	DECLARE_FUNCTION(execSetBackgroundPriority); \
	DECLARE_FUNCTION(execIsBackgroundVisible); \
	DECLARE_FUNCTION(execSetBackgroundVisible); \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForCanvas); \
	DECLARE_FUNCTION(execGetBackgroundMaterialForUMG); \
	DECLARE_FUNCTION(execSetBackgroundMaterialForUMG);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapBackground(); \
	friend struct Z_Construct_UClass_AMapBackground_Statics; \
public: \
	DECLARE_CLASS(AMapBackground, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapBackground)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS \
private: \
	static void StaticRegisterNativesAMapBackground(); \
	friend struct Z_Construct_UClass_AMapBackground_Statics; \
public: \
	DECLARE_CLASS(AMapBackground, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapBackground)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapBackground(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapBackground) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBackground); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapBackground(AMapBackground&&); \
	NO_API AMapBackground(const AMapBackground&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapBackground(AMapBackground&&); \
	NO_API AMapBackground(const AMapBackground&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapBackground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapBackground); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapBackground)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BackgroundLevels() { return STRUCT_OFFSET(AMapBackground, BackgroundLevels); } \
	FORCEINLINE static uint32 __PPO__BackgroundMaterial_UMG() { return STRUCT_OFFSET(AMapBackground, BackgroundMaterial_UMG); } \
	FORCEINLINE static uint32 __PPO__BackgroundMaterial_Canvas() { return STRUCT_OFFSET(AMapBackground, BackgroundMaterial_Canvas); } \
	FORCEINLINE static uint32 __PPO__bBackgroundVisible() { return STRUCT_OFFSET(AMapBackground, bBackgroundVisible); } \
	FORCEINLINE static uint32 __PPO__BackgroundPriority() { return STRUCT_OFFSET(AMapBackground, BackgroundPriority); } \
	FORCEINLINE static uint32 __PPO__BackgroundZOrder() { return STRUCT_OFFSET(AMapBackground, BackgroundZOrder); } \
	FORCEINLINE static uint32 __PPO__DynamicRenderTargetSize() { return STRUCT_OFFSET(AMapBackground, DynamicRenderTargetSize); } \
	FORCEINLINE static uint32 __PPO__bRenderNavigationMesh() { return STRUCT_OFFSET(AMapBackground, bRenderNavigationMesh); } \
	FORCEINLINE static uint32 __PPO__HiddenActorClasses() { return STRUCT_OFFSET(AMapBackground, HiddenActorClasses); } \
	FORCEINLINE static uint32 __PPO__HiddenActors() { return STRUCT_OFFSET(AMapBackground, HiddenActors); } \
	FORCEINLINE static uint32 __PPO__MaterialInstances() { return STRUCT_OFFSET(AMapBackground, MaterialInstances); } \
	FORCEINLINE static uint32 __PPO__LevelVisualizers() { return STRUCT_OFFSET(AMapBackground, LevelVisualizers); } \
	FORCEINLINE static uint32 __PPO__CaptureComponent2D() { return STRUCT_OFFSET(AMapBackground, CaptureComponent2D); } \
	FORCEINLINE static uint32 __PPO__NavMeshRenderingComponent() { return STRUCT_OFFSET(AMapBackground, NavMeshRenderingComponent); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_60_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapBackground>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
