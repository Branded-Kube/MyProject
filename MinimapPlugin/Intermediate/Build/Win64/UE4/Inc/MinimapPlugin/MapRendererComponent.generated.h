// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FLinearColor;
class UMapViewComponent;
enum class EMapViewSearchOption : uint8;
#ifdef MINIMAPPLUGIN_MapRendererComponent_generated_h
#error "MapRendererComponent.generated.h already included, missing '#pragma once' in MapRendererComponent.h"
#endif
#define MINIMAPPLUGIN_MapRendererComponent_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapClickedSignature_Parms \
{ \
	FVector WorldLocation; \
	bool bIsLeftMouseButton; \
}; \
static inline void FMapClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapClickedSignature, FVector WorldLocation, bool bIsLeftMouseButton) \
{ \
	_Script_MinimapPlugin_eventMapClickedSignature_Parms Parms; \
	Parms.WorldLocation=WorldLocation; \
	Parms.bIsLeftMouseButton=bIsLeftMouseButton ? true : false; \
	MapClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execGetBackgroundFillColor); \
	DECLARE_FUNCTION(execSetBackgroundFillColor); \
	DECLARE_FUNCTION(execGetFrustumFloorDistance); \
	DECLARE_FUNCTION(execSetFrustumFloorDistance); \
	DECLARE_FUNCTION(execGetDrawFrustum); \
	DECLARE_FUNCTION(execSetDrawFrustum); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execSetIsRendered); \
	DECLARE_FUNCTION(execIsCircular); \
	DECLARE_FUNCTION(execSetIsCircular); \
	DECLARE_FUNCTION(execSetMapView); \
	DECLARE_FUNCTION(execSetAutoLocateMapView);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetMargin); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execGetBackgroundFillColor); \
	DECLARE_FUNCTION(execSetBackgroundFillColor); \
	DECLARE_FUNCTION(execGetFrustumFloorDistance); \
	DECLARE_FUNCTION(execSetFrustumFloorDistance); \
	DECLARE_FUNCTION(execGetDrawFrustum); \
	DECLARE_FUNCTION(execSetDrawFrustum); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execSetIsRendered); \
	DECLARE_FUNCTION(execIsCircular); \
	DECLARE_FUNCTION(execSetIsCircular); \
	DECLARE_FUNCTION(execSetMapView); \
	DECLARE_FUNCTION(execSetAutoLocateMapView);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapRendererComponent(); \
	friend struct Z_Construct_UClass_UMapRendererComponent_Statics; \
public: \
	DECLARE_CLASS(UMapRendererComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapRendererComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMapRendererComponent(); \
	friend struct Z_Construct_UClass_UMapRendererComponent_Statics; \
public: \
	DECLARE_CLASS(UMapRendererComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapRendererComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapRendererComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapRendererComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapRendererComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapRendererComponent(UMapRendererComponent&&); \
	NO_API UMapRendererComponent(const UMapRendererComponent&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapRendererComponent(UMapRendererComponent&&); \
	NO_API UMapRendererComponent(const UMapRendererComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapRendererComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapRendererComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AutoLocateMapView() { return STRUCT_OFFSET(UMapRendererComponent, AutoLocateMapView); } \
	FORCEINLINE static uint32 __PPO__bIsCircular() { return STRUCT_OFFSET(UMapRendererComponent, bIsCircular); } \
	FORCEINLINE static uint32 __PPO__bIsRendered() { return STRUCT_OFFSET(UMapRendererComponent, bIsRendered); } \
	FORCEINLINE static uint32 __PPO__bDrawFrustum() { return STRUCT_OFFSET(UMapRendererComponent, bDrawFrustum); } \
	FORCEINLINE static uint32 __PPO__FrustumFloorDistance() { return STRUCT_OFFSET(UMapRendererComponent, FrustumFloorDistance); } \
	FORCEINLINE static uint32 __PPO__BackgroundFillColor() { return STRUCT_OFFSET(UMapRendererComponent, BackgroundFillColor); } \
	FORCEINLINE static uint32 __PPO__HorizontalAlignment() { return STRUCT_OFFSET(UMapRendererComponent, HorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__VerticalAlignment() { return STRUCT_OFFSET(UMapRendererComponent, VerticalAlignment); } \
	FORCEINLINE static uint32 __PPO__Margin() { return STRUCT_OFFSET(UMapRendererComponent, Margin); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(UMapRendererComponent, Size); } \
	FORCEINLINE static uint32 __PPO__FillMaterial() { return STRUCT_OFFSET(UMapRendererComponent, FillMaterial); } \
	FORCEINLINE static uint32 __PPO__FillMaterialInstance() { return STRUCT_OFFSET(UMapRendererComponent, FillMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__MapTracker() { return STRUCT_OFFSET(UMapRendererComponent, MapTracker); } \
	FORCEINLINE static uint32 __PPO__MapView() { return STRUCT_OFFSET(UMapRendererComponent, MapView); } \
	FORCEINLINE static uint32 __PPO__HoveringIcons() { return STRUCT_OFFSET(UMapRendererComponent, HoveringIcons); } \
	FORCEINLINE static uint32 __PPO__BufferedHoverStartEvents() { return STRUCT_OFFSET(UMapRendererComponent, BufferedHoverStartEvents); } \
	FORCEINLINE static uint32 __PPO__BufferedHoverEndEvents() { return STRUCT_OFFSET(UMapRendererComponent, BufferedHoverEndEvents); } \
	FORCEINLINE static uint32 __PPO__LastCanvas() { return STRUCT_OFFSET(UMapRendererComponent, LastCanvas); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_24_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapRendererComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
