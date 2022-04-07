// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMapViewComponent;
struct FVector2D;
class UMapIconComponent;
enum class EMapViewSearchOption : uint8;
class AMapBackground;
class UMapTrackerComponent;
#ifdef MINIMAPPLUGIN_MapFunctionLibrary_generated_h
#error "MapFunctionLibrary.generated.h already included, missing '#pragma once' in MapFunctionLibrary.h"
#endif
#define MINIMAPPLUGIN_MapFunctionLibrary_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeViewFrustum); \
	DECLARE_FUNCTION(execBoxSelectInView); \
	DECLARE_FUNCTION(execClampIntoView); \
	DECLARE_FUNCTION(execDetectIsInView); \
	DECLARE_FUNCTION(execFindMapView); \
	DECLARE_FUNCTION(execGetFirstMapBackground); \
	DECLARE_FUNCTION(execGetMapTracker);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeViewFrustum); \
	DECLARE_FUNCTION(execBoxSelectInView); \
	DECLARE_FUNCTION(execClampIntoView); \
	DECLARE_FUNCTION(execDetectIsInView); \
	DECLARE_FUNCTION(execFindMapView); \
	DECLARE_FUNCTION(execGetFirstMapBackground); \
	DECLARE_FUNCTION(execGetMapTracker);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapFunctionLibrary)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapFunctionLibrary)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapFunctionLibrary(UMapFunctionLibrary&&); \
	NO_API UMapFunctionLibrary(const UMapFunctionLibrary&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapFunctionLibrary(UMapFunctionLibrary&&); \
	NO_API UMapFunctionLibrary(const UMapFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapFunctionLibrary)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_16_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
