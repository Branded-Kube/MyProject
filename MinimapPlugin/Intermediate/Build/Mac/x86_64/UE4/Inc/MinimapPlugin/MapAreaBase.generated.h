// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapViewComponent;
struct FVector2D;
class UBoxComponent;
#ifdef MINIMAPPLUGIN_MapAreaBase_generated_h
#error "MapAreaBase.generated.h already included, missing '#pragma once' in MapAreaBase.h"
#endif
#define MINIMAPPLUGIN_MapAreaBase_generated_h

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_RPC_WRAPPERS
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapAreaPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UMapAreaPrimitiveComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapAreaPrimitiveComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMapAreaPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UMapAreaPrimitiveComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapAreaPrimitiveComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapAreaPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapAreaPrimitiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapAreaPrimitiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapAreaPrimitiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapAreaPrimitiveComponent(UMapAreaPrimitiveComponent&&); \
	NO_API UMapAreaPrimitiveComponent(const UMapAreaPrimitiveComponent&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapAreaPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapAreaPrimitiveComponent(UMapAreaPrimitiveComponent&&); \
	NO_API UMapAreaPrimitiveComponent(const UMapAreaPrimitiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapAreaPrimitiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapAreaPrimitiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapAreaPrimitiveComponent)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_13_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapAreaPrimitiveComponent>();

#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_SPARSE_DATA
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelAtHeight); \
	DECLARE_FUNCTION(execGetMapViewCornerUVs); \
	DECLARE_FUNCTION(execGetMapAspectRatio); \
	DECLARE_FUNCTION(execGetMapView); \
	DECLARE_FUNCTION(execGetAreaBounds);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelAtHeight); \
	DECLARE_FUNCTION(execGetMapViewCornerUVs); \
	DECLARE_FUNCTION(execGetMapAspectRatio); \
	DECLARE_FUNCTION(execGetMapView); \
	DECLARE_FUNCTION(execGetAreaBounds);


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapAreaBase(); \
	friend struct Z_Construct_UClass_AMapAreaBase_Statics; \
public: \
	DECLARE_CLASS(AMapAreaBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapAreaBase)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAMapAreaBase(); \
	friend struct Z_Construct_UClass_AMapAreaBase_Statics; \
public: \
	DECLARE_CLASS(AMapAreaBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapAreaBase)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapAreaBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapAreaBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapAreaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapAreaBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapAreaBase(AMapAreaBase&&); \
	NO_API AMapAreaBase(const AMapAreaBase&); \
public:


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapAreaBase(AMapAreaBase&&); \
	NO_API AMapAreaBase(const AMapAreaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapAreaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapAreaBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapAreaBase)


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaBounds() { return STRUCT_OFFSET(AMapAreaBase, AreaBounds); } \
	FORCEINLINE static uint32 __PPO__AreaPrimitive() { return STRUCT_OFFSET(AMapAreaBase, AreaPrimitive); } \
	FORCEINLINE static uint32 __PPO__AreaMapView() { return STRUCT_OFFSET(AMapAreaBase, AreaMapView); }


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_29_PROLOG
#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_SPARSE_DATA \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapAreaBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
