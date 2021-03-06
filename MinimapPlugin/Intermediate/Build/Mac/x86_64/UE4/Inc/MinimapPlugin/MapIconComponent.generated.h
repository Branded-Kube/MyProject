// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapIconComponent;
class UMapViewComponent;
enum class EIconFogInteraction : uint8;
enum class EIconBackgroundInteraction : uint8;
class UTexture2D;
struct FLinearColor;
enum class EIconSizeUnit : uint8;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UUserWidget;
#ifdef MINIMAPPLUGIN_MapIconComponent_generated_h
#error "MapIconComponent.generated.h already included, missing '#pragma once' in MapIconComponent.h"
#endif
#define MINIMAPPLUGIN_MapIconComponent_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_22_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconClickedSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
	bool bIsLeftMouse; \
}; \
static inline void FMapIconClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconClickedSignature, UMapIconComponent* MapIcon, bool bIsLeftMouse) \
{ \
	_Script_MinimapPlugin_eventMapIconClickedSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	Parms.bIsLeftMouse=bIsLeftMouse ? true : false; \
	MapIconClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_21_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconHoverEndSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconHoverEndSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconHoverEndSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconHoverEndSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconHoverEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_20_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconHoverStartSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconHoverStartSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconHoverStartSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconHoverStartSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconHoverStartSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_19_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconDestroyedSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconDestroyedSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconDestroyedSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_18_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
	UMapViewComponent* View; \
}; \
static inline void FMapIconLeftViewSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconLeftViewSignature, UMapIconComponent* MapIcon, UMapViewComponent* View) \
{ \
	_Script_MinimapPlugin_eventMapIconLeftViewSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	Parms.View=View; \
	MapIconLeftViewSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_17_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
	UMapViewComponent* View; \
}; \
static inline void FMapIconEnteredViewSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconEnteredViewSignature, UMapIconComponent* MapIcon, UMapViewComponent* View) \
{ \
	_Script_MinimapPlugin_eventMapIconEnteredViewSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	Parms.View=View; \
	MapIconEnteredViewSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_16_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconAppearanceChangedSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconAppearanceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconAppearanceChangedSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconAppearanceChangedSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconAppearanceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_15_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconMaterialInstancesChangedSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconMaterialInstancesChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconMaterialInstancesChangedSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconMaterialInstancesChangedSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconMaterialInstancesChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_14_DELEGATE \
struct _Script_MinimapPlugin_eventMapIconMaterialChangedSignature_Parms \
{ \
	UMapIconComponent* MapIcon; \
}; \
static inline void FMapIconMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconMaterialChangedSignature, UMapIconComponent* MapIcon) \
{ \
	_Script_MinimapPlugin_eventMapIconMaterialChangedSignature_Parms Parms; \
	Parms.MapIcon=MapIcon; \
	MapIconMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceiveClicked); \
	DECLARE_FUNCTION(execReceiveHoverEnd); \
	DECLARE_FUNCTION(execReceiveHoverStart); \
	DECLARE_FUNCTION(execIsRenderedInView); \
	DECLARE_FUNCTION(execMarkRenderedInView); \
	DECLARE_FUNCTION(execGetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execSetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execGetIconFogInteraction); \
	DECLARE_FUNCTION(execSetIconFogInteraction); \
	DECLARE_FUNCTION(execGetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execSetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execGetObjectiveArrowSize); \
	DECLARE_FUNCTION(execSetObjectiveArrowSize); \
	DECLARE_FUNCTION(execDoesObjectiveArrowRotate); \
	DECLARE_FUNCTION(execSetObjectiveArrowRotates); \
	DECLARE_FUNCTION(execGetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execSetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execIsObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execSetObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execGetIconZOrder); \
	DECLARE_FUNCTION(execSetIconZOrder); \
	DECLARE_FUNCTION(execGetIconDrawColor); \
	DECLARE_FUNCTION(execSetIconDrawColor); \
	DECLARE_FUNCTION(execGetIconSizeUnit); \
	DECLARE_FUNCTION(execGetIconSize); \
	DECLARE_FUNCTION(execSetIconSize); \
	DECLARE_FUNCTION(execDoesIconRotate); \
	DECLARE_FUNCTION(execSetIconRotates); \
	DECLARE_FUNCTION(execIsIconInteractable); \
	DECLARE_FUNCTION(execSetIconInteractable); \
	DECLARE_FUNCTION(execIsIconVisible); \
	DECLARE_FUNCTION(execSetIconVisible); \
	DECLARE_FUNCTION(execGetIconTooltipText); \
	DECLARE_FUNCTION(execSetIconTooltipText); \
	DECLARE_FUNCTION(execGetIconTexture); \
	DECLARE_FUNCTION(execSetIconTexture); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForCanvas); \
	DECLARE_FUNCTION(execResetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForCanvas); \
	DECLARE_FUNCTION(execGetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execSetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execRegisterMaterialInstanceFromUMG); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForUMG); \
	DECLARE_FUNCTION(execResetIconMaterialForUMG); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForUMG); \
	DECLARE_FUNCTION(execGetIconMaterialForUMG); \
	DECLARE_FUNCTION(execSetIconMaterialForUMG);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceiveClicked); \
	DECLARE_FUNCTION(execReceiveHoverEnd); \
	DECLARE_FUNCTION(execReceiveHoverStart); \
	DECLARE_FUNCTION(execIsRenderedInView); \
	DECLARE_FUNCTION(execMarkRenderedInView); \
	DECLARE_FUNCTION(execGetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execSetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execGetIconFogInteraction); \
	DECLARE_FUNCTION(execSetIconFogInteraction); \
	DECLARE_FUNCTION(execGetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execSetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execGetObjectiveArrowSize); \
	DECLARE_FUNCTION(execSetObjectiveArrowSize); \
	DECLARE_FUNCTION(execDoesObjectiveArrowRotate); \
	DECLARE_FUNCTION(execSetObjectiveArrowRotates); \
	DECLARE_FUNCTION(execGetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execSetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execIsObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execSetObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execGetIconZOrder); \
	DECLARE_FUNCTION(execSetIconZOrder); \
	DECLARE_FUNCTION(execGetIconDrawColor); \
	DECLARE_FUNCTION(execSetIconDrawColor); \
	DECLARE_FUNCTION(execGetIconSizeUnit); \
	DECLARE_FUNCTION(execGetIconSize); \
	DECLARE_FUNCTION(execSetIconSize); \
	DECLARE_FUNCTION(execDoesIconRotate); \
	DECLARE_FUNCTION(execSetIconRotates); \
	DECLARE_FUNCTION(execIsIconInteractable); \
	DECLARE_FUNCTION(execSetIconInteractable); \
	DECLARE_FUNCTION(execIsIconVisible); \
	DECLARE_FUNCTION(execSetIconVisible); \
	DECLARE_FUNCTION(execGetIconTooltipText); \
	DECLARE_FUNCTION(execSetIconTooltipText); \
	DECLARE_FUNCTION(execGetIconTexture); \
	DECLARE_FUNCTION(execSetIconTexture); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForCanvas); \
	DECLARE_FUNCTION(execResetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForCanvas); \
	DECLARE_FUNCTION(execGetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execSetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execRegisterMaterialInstanceFromUMG); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForUMG); \
	DECLARE_FUNCTION(execResetIconMaterialForUMG); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForUMG); \
	DECLARE_FUNCTION(execGetIconMaterialForUMG); \
	DECLARE_FUNCTION(execSetIconMaterialForUMG);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapIconComponent(); \
	friend struct Z_Construct_UClass_UMapIconComponent_Statics; \
public: \
	DECLARE_CLASS(UMapIconComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapIconComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMapIconComponent(); \
	friend struct Z_Construct_UClass_UMapIconComponent_Statics; \
public: \
	DECLARE_CLASS(UMapIconComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapIconComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapIconComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapIconComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapIconComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapIconComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapIconComponent(UMapIconComponent&&); \
	NO_API UMapIconComponent(const UMapIconComponent&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapIconComponent(UMapIconComponent&&); \
	NO_API UMapIconComponent(const UMapIconComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapIconComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapIconComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapIconComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IconCategory() { return STRUCT_OFFSET(UMapIconComponent, IconCategory); } \
	FORCEINLINE static uint32 __PPO__IconTexture() { return STRUCT_OFFSET(UMapIconComponent, IconTexture); } \
	FORCEINLINE static uint32 __PPO__IconMaterial_UMG() { return STRUCT_OFFSET(UMapIconComponent, IconMaterial_UMG); } \
	FORCEINLINE static uint32 __PPO__IconMaterial_Canvas() { return STRUCT_OFFSET(UMapIconComponent, IconMaterial_Canvas); } \
	FORCEINLINE static uint32 __PPO__bIconVisible() { return STRUCT_OFFSET(UMapIconComponent, bIconVisible); } \
	FORCEINLINE static uint32 __PPO__bIconRotates() { return STRUCT_OFFSET(UMapIconComponent, bIconRotates); } \
	FORCEINLINE static uint32 __PPO__IconSizeUnit() { return STRUCT_OFFSET(UMapIconComponent, IconSizeUnit); } \
	FORCEINLINE static uint32 __PPO__IconSize() { return STRUCT_OFFSET(UMapIconComponent, IconSize); } \
	FORCEINLINE static uint32 __PPO__IconDrawColor() { return STRUCT_OFFSET(UMapIconComponent, IconDrawColor); } \
	FORCEINLINE static uint32 __PPO__IconZOrder() { return STRUCT_OFFSET(UMapIconComponent, IconZOrder); } \
	FORCEINLINE static uint32 __PPO__bObjectiveArrowEnabled() { return STRUCT_OFFSET(UMapIconComponent, bObjectiveArrowEnabled); } \
	FORCEINLINE static uint32 __PPO__ObjectiveArrowTexture() { return STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowTexture); } \
	FORCEINLINE static uint32 __PPO__ObjectiveArrowMaterial_UMG() { return STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterial_UMG); } \
	FORCEINLINE static uint32 __PPO__ObjectiveArrowMaterial_Canvas() { return STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterial_Canvas); } \
	FORCEINLINE static uint32 __PPO__bObjectiveArrowRotates() { return STRUCT_OFFSET(UMapIconComponent, bObjectiveArrowRotates); } \
	FORCEINLINE static uint32 __PPO__ObjectiveArrowSize() { return STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowSize); } \
	FORCEINLINE static uint32 __PPO__bIconInteractable() { return STRUCT_OFFSET(UMapIconComponent, bIconInteractable); } \
	FORCEINLINE static uint32 __PPO__IconTooltipText() { return STRUCT_OFFSET(UMapIconComponent, IconTooltipText); } \
	FORCEINLINE static uint32 __PPO__IconBackgroundInteraction() { return STRUCT_OFFSET(UMapIconComponent, IconBackgroundInteraction); } \
	FORCEINLINE static uint32 __PPO__IconFogInteraction() { return STRUCT_OFFSET(UMapIconComponent, IconFogInteraction); } \
	FORCEINLINE static uint32 __PPO__IconFogRevealThreshold() { return STRUCT_OFFSET(UMapIconComponent, IconFogRevealThreshold); } \
	FORCEINLINE static uint32 __PPO__bHideOwnerInsideFog() { return STRUCT_OFFSET(UMapIconComponent, bHideOwnerInsideFog); } \
	FORCEINLINE static uint32 __PPO__IsRenderedPerView() { return STRUCT_OFFSET(UMapIconComponent, IsRenderedPerView); } \
	FORCEINLINE static uint32 __PPO__InitialIconMaterial_UMG() { return STRUCT_OFFSET(UMapIconComponent, InitialIconMaterial_UMG); } \
	FORCEINLINE static uint32 __PPO__InitialIconMaterial_Canvas() { return STRUCT_OFFSET(UMapIconComponent, InitialIconMaterial_Canvas); } \
	FORCEINLINE static uint32 __PPO__IconMaterialInstances_UMG() { return STRUCT_OFFSET(UMapIconComponent, IconMaterialInstances_UMG); } \
	FORCEINLINE static uint32 __PPO__IconMaterialInstances_Canvas() { return STRUCT_OFFSET(UMapIconComponent, IconMaterialInstances_Canvas); } \
	FORCEINLINE static uint32 __PPO__ObjectiveArrowMaterialInstances_Canvas() { return STRUCT_OFFSET(UMapIconComponent, ObjectiveArrowMaterialInstances_Canvas); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_28_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapIconComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
