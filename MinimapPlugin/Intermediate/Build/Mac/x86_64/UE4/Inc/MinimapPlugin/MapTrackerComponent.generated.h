// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapRevealerComponent;
class AMapFog;
class AMapBackground;
class UMapIconComponent;
struct FVector;
#ifdef MINIMAPPLUGIN_MapTrackerComponent_generated_h
#error "MapTrackerComponent.generated.h already included, missing '#pragma once' in MapTrackerComponent.h"
#endif
#define MINIMAPPLUGIN_MapTrackerComponent_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_21_DELEGATE \
struct _Script_MinimapPlugin_eventMapRevealerUnregisteredSignature_Parms \
{ \
	UMapRevealerComponent* MapRevealer; \
}; \
static inline void FMapRevealerUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapRevealerUnregisteredSignature, UMapRevealerComponent* MapRevealer) \
{ \
	_Script_MinimapPlugin_eventMapRevealerUnregisteredSignature_Parms Parms; \
	Parms.MapRevealer=MapRevealer; \
	MapRevealerUnregisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_20_DELEGATE \
struct _Script_MinimapPlugin_eventMapRevealerRegisteredSignature_Parms \
{ \
	UMapRevealerComponent* MapRevealer; \
}; \
static inline void FMapRevealerRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapRevealerRegisteredSignature, UMapRevealerComponent* MapRevealer) \
{ \
	_Script_MinimapPlugin_eventMapRevealerRegisteredSignature_Parms Parms; \
	Parms.MapRevealer=MapRevealer; \
	MapRevealerRegisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapFogUnregisteredSignature_Parms \
{ \
	AMapFog* MapFog; \
}; \
static inline void FMapFogUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogUnregisteredSignature, AMapFog* MapFog) \
{ \
	_Script_MinimapPlugin_eventMapFogUnregisteredSignature_Parms Parms; \
	Parms.MapFog=MapFog; \
	MapFogUnregisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_18_DELEGATE \
struct _Script_MinimapPlugin_eventMapFogRegisteredSignature_Parms \
{ \
	AMapFog* MapFog; \
}; \
static inline void FMapFogRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogRegisteredSignature, AMapFog* MapFog) \
{ \
	_Script_MinimapPlugin_eventMapFogRegisteredSignature_Parms Parms; \
	Parms.MapFog=MapFog; \
	MapFogRegisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_17_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundUnregisteredSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundUnregisteredSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundUnregisteredSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundUnregisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_16_DELEGATE \
struct _Script_MinimapPlugin_eventMapBackgroundRegisteredSignature_Parms \
{ \
	AMapBackground* MapBackground; \
}; \
static inline void FMapBackgroundRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundRegisteredSignature, AMapBackground* MapBackground) \
{ \
	_Script_MinimapPlugin_eventMapBackgroundRegisteredSignature_Parms Parms; \
	Parms.MapBackground=MapBackground; \
	MapBackgroundRegisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_15_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconUnregisteredSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconUnregisteredSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconUnregisteredSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconUnregisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_14_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconRegisteredSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconRegisteredSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconRegisteredSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconRegisteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMapRevealers); \
	DECLARE_FUNCTION(execGetFogRevealedFactor); \
	DECLARE_FUNCTION(execHasMapFog); \
	DECLARE_FUNCTION(execGetMapFogs); \
	DECLARE_FUNCTION(execGetMapBackgrounds); \
	DECLARE_FUNCTION(execGetMapIcons);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMapRevealers); \
	DECLARE_FUNCTION(execGetFogRevealedFactor); \
	DECLARE_FUNCTION(execHasMapFog); \
	DECLARE_FUNCTION(execGetMapFogs); \
	DECLARE_FUNCTION(execGetMapBackgrounds); \
	DECLARE_FUNCTION(execGetMapIcons);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapTrackerComponent(); \
	friend struct Z_Construct_UClass_UMapTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMapTrackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapTrackerComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMapTrackerComponent(); \
	friend struct Z_Construct_UClass_UMapTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMapTrackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapTrackerComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapTrackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapTrackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapTrackerComponent(UMapTrackerComponent&&); \
	NO_API UMapTrackerComponent(const UMapTrackerComponent&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapTrackerComponent(UMapTrackerComponent&&); \
	NO_API UMapTrackerComponent(const UMapTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapTrackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapTrackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapTrackerComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapIcons() { return STRUCT_OFFSET(UMapTrackerComponent, MapIcons); } \
	FORCEINLINE static uint32 __PPO__MapBackgrounds() { return STRUCT_OFFSET(UMapTrackerComponent, MapBackgrounds); } \
	FORCEINLINE static uint32 __PPO__MapFogs() { return STRUCT_OFFSET(UMapTrackerComponent, MapFogs); } \
	FORCEINLINE static uint32 __PPO__MapRevealers() { return STRUCT_OFFSET(UMapTrackerComponent, MapRevealers); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_26_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
