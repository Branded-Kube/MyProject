// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINIMAPPLUGIN_MapEnums_generated_h
#error "MapEnums.generated.h already included, missing '#pragma once' in MapEnums.h"
#endif
#define MINIMAPPLUGIN_MapEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapEnums_h


#define FOREACH_ENUM_EMAPVIEWROTATIONMODE(op) \
	op(EMapViewRotationMode::UseFixedRotation) \
	op(EMapViewRotationMode::InheritYaw) 

enum class EMapViewRotationMode : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewRotationMode>();

#define FOREACH_ENUM_EFOGPOSTPROCESSVOLUMEOPTION(op) \
	op(EFogPostProcessVolumeOption::AutoLocate) \
	op(EFogPostProcessVolumeOption::AutoLocateOrCreate) \
	op(EFogPostProcessVolumeOption::Manual) 

enum class EFogPostProcessVolumeOption : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EFogPostProcessVolumeOption>();

#define FOREACH_ENUM_EMAPVIEWSEARCHOPTION(op) \
	op(EMapViewSearchOption::Any) \
	op(EMapViewSearchOption::OnPlayer) \
	op(EMapViewSearchOption::OnMapBackground) \
	op(EMapViewSearchOption::OnMapFog) \
	op(EMapViewSearchOption::Disabled) 

enum class EMapViewSearchOption : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewSearchOption>();

#define FOREACH_ENUM_EICONBACKGROUNDINTERACTION(op) \
	op(EIconBackgroundInteraction::AlwaysRender) \
	op(EIconBackgroundInteraction::OnlyRenderInSameVolume) \
	op(EIconBackgroundInteraction::OnlyRenderOnSameFloor) \
	op(EIconBackgroundInteraction::OnlyRenderInPriorityVolume) \
	op(EIconBackgroundInteraction::OnlyRenderOnPriorityFloor) 

enum class EIconBackgroundInteraction : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconBackgroundInteraction>();

#define FOREACH_ENUM_EICONFOGINTERACTION(op) \
	op(EIconFogInteraction::OnlyRenderWhenRevealing) \
	op(EIconFogInteraction::OnlyRenderWhenExplored) \
	op(EIconFogInteraction::AlwaysRenderUnderFog) \
	op(EIconFogInteraction::AlwaysRenderAboveFog) 

enum class EIconFogInteraction : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconFogInteraction>();

#define FOREACH_ENUM_EMAPFOGREVEALMODE(op) \
	op(EMapFogRevealMode::Off) \
	op(EMapFogRevealMode::Temporary) \
	op(EMapFogRevealMode::Permanent) 

enum class EMapFogRevealMode : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapFogRevealMode>();

#define FOREACH_ENUM_EICONSIZEUNIT(op) \
	op(EIconSizeUnit::ScreenSpace) \
	op(EIconSizeUnit::WorldSpace) 

enum class EIconSizeUnit : uint8;
template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconSizeUnit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
