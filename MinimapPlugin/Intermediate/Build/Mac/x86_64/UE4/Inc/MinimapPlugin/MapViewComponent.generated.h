// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapViewComponent;
class AMapBackground;
class UMapIconComponent;
struct FVector;
#ifdef MINIMAPPLUGIN_MapViewComponent_generated_h
#error "MapViewComponent.generated.h already included, missing '#pragma once' in MapViewComponent.h"
#endif
#define MINIMAPPLUGIN_MapViewComponent_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_12_DELEGATE \
struct _Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms \
{ \
	UMapViewComponent* MapView; \
}; \
static inline void FMapViewDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewDestroyedSignature, UMapViewComponent* MapView) \
{ \
	_Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms Parms; \
	Parms.MapView=MapView; \
	MapViewDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_11_DELEGATE \
struct _Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms \
{ \
	UMapViewComponent* MapView; \
}; \
static inline void FMapViewSizeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewSizeChangedSignature, UMapViewComponent* MapView) \
{ \
	_Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms Parms; \
	Parms.MapView=MapView; \
	MapViewSizeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_10_DELEGATE \
struct _Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms \
{ \
	UMapViewComponent* MapView; \
}; \
static inline void FMapViewCategoriesChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewCategoriesChangedSignature, UMapViewComponent* MapView) \
{ \
	_Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms Parms; \
	Parms.MapView=MapView; \
	MapViewCategoriesChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterMultiLevelMapBackground); \
	DECLARE_FUNCTION(execRegisterMultiLevelMapBackground); \
	DECLARE_FUNCTION(execIsSameBackgroundLevel); \
	DECLARE_FUNCTION(execGetActiveBackgroundLevel); \
	DECLARE_FUNCTION(execGetActiveBackgroundPriority); \
	DECLARE_FUNCTION(execDeprojectViewToWorld); \
	DECLARE_FUNCTION(execGetViewYaw); \
	DECLARE_FUNCTION(execGetViewCoordinates); \
	DECLARE_FUNCTION(execViewContains); \
	DECLARE_FUNCTION(execGetWorldCorners); \
	DECLARE_FUNCTION(execGetViewAspectRatio); \
	DECLARE_FUNCTION(execGetZoomScale); \
	DECLARE_FUNCTION(execSetZoomScale); \
	DECLARE_FUNCTION(execGetViewExtent); \
	DECLARE_FUNCTION(execSetViewExtent); \
	DECLARE_FUNCTION(execIsIconCategoryVisible); \
	DECLARE_FUNCTION(execSetIconCategoryVisible);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterMultiLevelMapBackground); \
	DECLARE_FUNCTION(execRegisterMultiLevelMapBackground); \
	DECLARE_FUNCTION(execIsSameBackgroundLevel); \
	DECLARE_FUNCTION(execGetActiveBackgroundLevel); \
	DECLARE_FUNCTION(execGetActiveBackgroundPriority); \
	DECLARE_FUNCTION(execDeprojectViewToWorld); \
	DECLARE_FUNCTION(execGetViewYaw); \
	DECLARE_FUNCTION(execGetViewCoordinates); \
	DECLARE_FUNCTION(execViewContains); \
	DECLARE_FUNCTION(execGetWorldCorners); \
	DECLARE_FUNCTION(execGetViewAspectRatio); \
	DECLARE_FUNCTION(execGetZoomScale); \
	DECLARE_FUNCTION(execSetZoomScale); \
	DECLARE_FUNCTION(execGetViewExtent); \
	DECLARE_FUNCTION(execSetViewExtent); \
	DECLARE_FUNCTION(execIsIconCategoryVisible); \
	DECLARE_FUNCTION(execSetIconCategoryVisible);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapViewComponent(); \
	friend struct Z_Construct_UClass_UMapViewComponent_Statics; \
public: \
	DECLARE_CLASS(UMapViewComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapViewComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMapViewComponent(); \
	friend struct Z_Construct_UClass_UMapViewComponent_Statics; \
public: \
	DECLARE_CLASS(UMapViewComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapViewComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapViewComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapViewComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapViewComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapViewComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapViewComponent(UMapViewComponent&&); \
	NO_API UMapViewComponent(const UMapViewComponent&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapViewComponent(UMapViewComponent&&); \
	NO_API UMapViewComponent(const UMapViewComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapViewComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapViewComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapViewComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapBackgrounds() { return STRUCT_OFFSET(UMapViewComponent, MapBackgrounds); } \
	FORCEINLINE static uint32 __PPO__PositionOnMultiLevelBackgrounds() { return STRUCT_OFFSET(UMapViewComponent, PositionOnMultiLevelBackgrounds); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_21_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapViewComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
