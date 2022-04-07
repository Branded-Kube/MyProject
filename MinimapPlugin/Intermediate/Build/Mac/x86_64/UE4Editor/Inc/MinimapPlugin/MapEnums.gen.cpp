// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapEnums() {}
// Cross Module References
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode();
	UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode();
	MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit();
// End Cross Module References
	static UEnum* EMapViewRotationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapViewRotationMode"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewRotationMode>()
	{
		return EMapViewRotationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapViewRotationMode(EMapViewRotationMode_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EMapViewRotationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Hash() { return 1556988697U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapViewRotationMode"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMapViewRotationMode::UseFixedRotation", (int64)EMapViewRotationMode::UseFixedRotation },
				{ "EMapViewRotationMode::InheritYaw", (int64)EMapViewRotationMode::InheritYaw },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Icon size can be defined in screen or world units\n" },
				{ "InheritYaw.Comment", "// The map view inherits the parent component's yaw and adds InheritedYawOffset\n" },
				{ "InheritYaw.Name", "EMapViewRotationMode::InheritYaw" },
				{ "InheritYaw.ToolTip", "The map view inherits the parent component's yaw and adds InheritedYawOffset" },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "ToolTip", "Icon size can be defined in screen or world units" },
				{ "UseFixedRotation.Comment", "// The map view always uses FixedRotation as world rotation\n" },
				{ "UseFixedRotation.Name", "EMapViewRotationMode::UseFixedRotation" },
				{ "UseFixedRotation.ToolTip", "The map view always uses FixedRotation as world rotation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EMapViewRotationMode",
				"EMapViewRotationMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFogPostProcessVolumeOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EFogPostProcessVolumeOption"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EFogPostProcessVolumeOption>()
	{
		return EFogPostProcessVolumeOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFogPostProcessVolumeOption(EFogPostProcessVolumeOption_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EFogPostProcessVolumeOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Hash() { return 2698676323U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFogPostProcessVolumeOption"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFogPostProcessVolumeOption::AutoLocate", (int64)EFogPostProcessVolumeOption::AutoLocate },
				{ "EFogPostProcessVolumeOption::AutoLocateOrCreate", (int64)EFogPostProcessVolumeOption::AutoLocateOrCreate },
				{ "EFogPostProcessVolumeOption::Manual", (int64)EFogPostProcessVolumeOption::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoLocate.Comment", "// An unbound post process volume will be looked for in the level\n" },
				{ "AutoLocate.Name", "EFogPostProcessVolumeOption::AutoLocate" },
				{ "AutoLocate.ToolTip", "An unbound post process volume will be looked for in the level" },
				{ "AutoLocateOrCreate.Comment", "// An unbound post process volume will be looked for in the level. If not found, it will be created.\n" },
				{ "AutoLocateOrCreate.Name", "EFogPostProcessVolumeOption::AutoLocateOrCreate" },
				{ "AutoLocateOrCreate.ToolTip", "An unbound post process volume will be looked for in the level. If not found, it will be created." },
				{ "BlueprintType", "true" },
				{ "Comment", "// Utility option for map fog to auto-locate a PostProcessVolume to add the fog post process effect to\n" },
				{ "Manual.Comment", "// No post process volume will be looked for. You must manually set it, or no fog post process effect is applied.\n" },
				{ "Manual.Name", "EFogPostProcessVolumeOption::Manual" },
				{ "Manual.ToolTip", "No post process volume will be looked for. You must manually set it, or no fog post process effect is applied." },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "ToolTip", "Utility option for map fog to auto-locate a PostProcessVolume to add the fog post process effect to" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EFogPostProcessVolumeOption",
				"EFogPostProcessVolumeOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMapViewSearchOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapViewSearchOption"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapViewSearchOption>()
	{
		return EMapViewSearchOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapViewSearchOption(EMapViewSearchOption_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EMapViewSearchOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Hash() { return 3566706680U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapViewSearchOption"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMapViewSearchOption::Any", (int64)EMapViewSearchOption::Any },
				{ "EMapViewSearchOption::OnPlayer", (int64)EMapViewSearchOption::OnPlayer },
				{ "EMapViewSearchOption::OnMapBackground", (int64)EMapViewSearchOption::OnMapBackground },
				{ "EMapViewSearchOption::OnMapFog", (int64)EMapViewSearchOption::OnMapFog },
				{ "EMapViewSearchOption::Disabled", (int64)EMapViewSearchOption::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Comment", "// The minimap will try to find a MapViewComponent anywhere in the world, prioritizing in this order: players, background actors, fog actors, other actors\n" },
				{ "Any.Name", "EMapViewSearchOption::Any" },
				{ "Any.ToolTip", "The minimap will try to find a MapViewComponent anywhere in the world, prioritizing in this order: players, background actors, fog actors, other actors" },
				{ "BlueprintType", "true" },
				{ "Comment", "// Utility option for minimap renderers to auto-locate a MapViewComponent in the world\n" },
				{ "Disabled.Comment", "// The minimap will not try to find a MapViewComponent. You must manually supply it.\n" },
				{ "Disabled.Name", "EMapViewSearchOption::Disabled" },
				{ "Disabled.ToolTip", "The minimap will not try to find a MapViewComponent. You must manually supply it." },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "OnMapBackground.Comment", "// The minimap will try to find a MapViewComponent on a background actor\n" },
				{ "OnMapBackground.Name", "EMapViewSearchOption::OnMapBackground" },
				{ "OnMapBackground.ToolTip", "The minimap will try to find a MapViewComponent on a background actor" },
				{ "OnMapFog.Comment", "// The minimap will try to find a MapViewComponent on a fog actor\n" },
				{ "OnMapFog.Name", "EMapViewSearchOption::OnMapFog" },
				{ "OnMapFog.ToolTip", "The minimap will try to find a MapViewComponent on a fog actor" },
				{ "OnPlayer.Comment", "// The minimap will try to find a MapViewComponent on the first player's pawn or controller\n" },
				{ "OnPlayer.Name", "EMapViewSearchOption::OnPlayer" },
				{ "OnPlayer.ToolTip", "The minimap will try to find a MapViewComponent on the first player's pawn or controller" },
				{ "ToolTip", "Utility option for minimap renderers to auto-locate a MapViewComponent in the world" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EMapViewSearchOption",
				"EMapViewSearchOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EIconBackgroundInteraction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconBackgroundInteraction"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconBackgroundInteraction>()
	{
		return EIconBackgroundInteraction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIconBackgroundInteraction(EIconBackgroundInteraction_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EIconBackgroundInteraction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Hash() { return 2852275395U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIconBackgroundInteraction"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EIconBackgroundInteraction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIconBackgroundInteraction::AlwaysRender", (int64)EIconBackgroundInteraction::AlwaysRender },
				{ "EIconBackgroundInteraction::OnlyRenderInSameVolume", (int64)EIconBackgroundInteraction::OnlyRenderInSameVolume },
				{ "EIconBackgroundInteraction::OnlyRenderOnSameFloor", (int64)EIconBackgroundInteraction::OnlyRenderOnSameFloor },
				{ "EIconBackgroundInteraction::OnlyRenderInPriorityVolume", (int64)EIconBackgroundInteraction::OnlyRenderInPriorityVolume },
				{ "EIconBackgroundInteraction::OnlyRenderOnPriorityFloor", (int64)EIconBackgroundInteraction::OnlyRenderOnPriorityFloor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysRender.Comment", "// Icon visibility is not affected by MapBackgrounds\n" },
				{ "AlwaysRender.Name", "EIconBackgroundInteraction::AlwaysRender" },
				{ "AlwaysRender.ToolTip", "Icon visibility is not affected by MapBackgrounds" },
				{ "BlueprintType", "true" },
				{ "Comment", "// Icon size can be defined in screen or world units\n" },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "OnlyRenderInPriorityVolume.Comment", "// Same as OnlyRenderInSameVolume, but the MapViewComponent must be in an equally high priority MapBackground as this icon\n" },
				{ "OnlyRenderInPriorityVolume.Name", "EIconBackgroundInteraction::OnlyRenderInPriorityVolume" },
				{ "OnlyRenderInPriorityVolume.ToolTip", "Same as OnlyRenderInSameVolume, but the MapViewComponent must be in an equally high priority MapBackground as this icon" },
				{ "OnlyRenderInSameVolume.Comment", "// Icon is only visible when inside the same MapBackground as the MapViewComponent\n" },
				{ "OnlyRenderInSameVolume.Name", "EIconBackgroundInteraction::OnlyRenderInSameVolume" },
				{ "OnlyRenderInSameVolume.ToolTip", "Icon is only visible when inside the same MapBackground as the MapViewComponent" },
				{ "OnlyRenderOnPriorityFloor.Comment", "// Same as OnlyRenderOnSameFloor, but the MapViewComponent must be in an equally high priority MapBackground as this icon\n" },
				{ "OnlyRenderOnPriorityFloor.Name", "EIconBackgroundInteraction::OnlyRenderOnPriorityFloor" },
				{ "OnlyRenderOnPriorityFloor.ToolTip", "Same as OnlyRenderOnSameFloor, but the MapViewComponent must be in an equally high priority MapBackground as this icon" },
				{ "OnlyRenderOnSameFloor.Comment", "// Icon is only visible when inside the same MapBackground as the MapViewComponent, and on the same floor\n" },
				{ "OnlyRenderOnSameFloor.Name", "EIconBackgroundInteraction::OnlyRenderOnSameFloor" },
				{ "OnlyRenderOnSameFloor.ToolTip", "Icon is only visible when inside the same MapBackground as the MapViewComponent, and on the same floor" },
				{ "ToolTip", "Icon size can be defined in screen or world units" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EIconBackgroundInteraction",
				"EIconBackgroundInteraction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EIconFogInteraction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconFogInteraction"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconFogInteraction>()
	{
		return EIconFogInteraction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIconFogInteraction(EIconFogInteraction_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EIconFogInteraction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Hash() { return 1335010418U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIconFogInteraction"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EIconFogInteraction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIconFogInteraction::OnlyRenderWhenRevealing", (int64)EIconFogInteraction::OnlyRenderWhenRevealing },
				{ "EIconFogInteraction::OnlyRenderWhenExplored", (int64)EIconFogInteraction::OnlyRenderWhenExplored },
				{ "EIconFogInteraction::AlwaysRenderUnderFog", (int64)EIconFogInteraction::AlwaysRenderUnderFog },
				{ "EIconFogInteraction::AlwaysRenderAboveFog", (int64)EIconFogInteraction::AlwaysRenderAboveFog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysRenderAboveFog.Comment", "// Icon is always visible on top of fog\n" },
				{ "AlwaysRenderAboveFog.Name", "EIconFogInteraction::AlwaysRenderAboveFog" },
				{ "AlwaysRenderAboveFog.ToolTip", "Icon is always visible on top of fog" },
				{ "AlwaysRenderUnderFog.Comment", "// Icon is always visible but under the fog. Opaque fog will hide the icon.\n" },
				{ "AlwaysRenderUnderFog.Name", "EIconFogInteraction::AlwaysRenderUnderFog" },
				{ "AlwaysRenderUnderFog.ToolTip", "Icon is always visible but under the fog. Opaque fog will hide the icon." },
				{ "BlueprintType", "true" },
				{ "Comment", "// Icon size can be defined in screen or world units\n" },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "OnlyRenderWhenExplored.Comment", "// Icon is only visible when the icon location is revealed or has been revealed. Reveal factor must exceed FogRevealThreshold.\n" },
				{ "OnlyRenderWhenExplored.Name", "EIconFogInteraction::OnlyRenderWhenExplored" },
				{ "OnlyRenderWhenExplored.ToolTip", "Icon is only visible when the icon location is revealed or has been revealed. Reveal factor must exceed FogRevealThreshold." },
				{ "OnlyRenderWhenRevealing.Comment", "// Icon is only visible when the icon location is being revealed currently. Reveal factor must exceed FogRevealThreshold.\n" },
				{ "OnlyRenderWhenRevealing.Name", "EIconFogInteraction::OnlyRenderWhenRevealing" },
				{ "OnlyRenderWhenRevealing.ToolTip", "Icon is only visible when the icon location is being revealed currently. Reveal factor must exceed FogRevealThreshold." },
				{ "ToolTip", "Icon size can be defined in screen or world units" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EIconFogInteraction",
				"EIconFogInteraction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMapFogRevealMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EMapFogRevealMode"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EMapFogRevealMode>()
	{
		return EMapFogRevealMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapFogRevealMode(EMapFogRevealMode_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EMapFogRevealMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Hash() { return 2406790988U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapFogRevealMode"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMapFogRevealMode::Off", (int64)EMapFogRevealMode::Off },
				{ "EMapFogRevealMode::Temporary", (int64)EMapFogRevealMode::Temporary },
				{ "EMapFogRevealMode::Permanent", (int64)EMapFogRevealMode::Permanent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// The way in which an actor reveals fog\n" },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "Off.Comment", "// When reveal mode is Off, this actor won't reveal anything on the minimap\n" },
				{ "Off.Name", "EMapFogRevealMode::Off" },
				{ "Off.ToolTip", "When reveal mode is Off, this actor won't reveal anything on the minimap" },
				{ "Permanent.Comment", "// When reveal mode is Permanent, areas this actor visits will be permanently revealed. However, icons may still be configured to be hidden unless a revealing actor is currently nearby.\n" },
				{ "Permanent.Name", "EMapFogRevealMode::Permanent" },
				{ "Permanent.ToolTip", "When reveal mode is Permanent, areas this actor visits will be permanently revealed. However, icons may still be configured to be hidden unless a revealing actor is currently nearby." },
				{ "Temporary.Comment", "// When reveal mode is Temporary, this actor will reveal an area on the minimap while hs is nearby\n" },
				{ "Temporary.Name", "EMapFogRevealMode::Temporary" },
				{ "Temporary.ToolTip", "When reveal mode is Temporary, this actor will reveal an area on the minimap while hs is nearby" },
				{ "ToolTip", "The way in which an actor reveals fog" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EMapFogRevealMode",
				"EMapFogRevealMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EIconSizeUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit, Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("EIconSizeUnit"));
		}
		return Singleton;
	}
	template<> MINIMAPPLUGIN_API UEnum* StaticEnum<EIconSizeUnit>()
	{
		return EIconSizeUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIconSizeUnit(EIconSizeUnit_StaticEnum, TEXT("/Script/MinimapPlugin"), TEXT("EIconSizeUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Hash() { return 1854838813U; }
	UEnum* Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MinimapPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIconSizeUnit"), 0, Get_Z_Construct_UEnum_MinimapPlugin_EIconSizeUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIconSizeUnit::ScreenSpace", (int64)EIconSizeUnit::ScreenSpace },
				{ "EIconSizeUnit::WorldSpace", (int64)EIconSizeUnit::WorldSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Icon size can be defined in screen or world units\n" },
				{ "ModuleRelativePath", "Public/MapEnums.h" },
				{ "ScreenSpace.Comment", "// Icon size is defined in pixels. Will always appear as the same size, no matter the zoom level.\n" },
				{ "ScreenSpace.Name", "EIconSizeUnit::ScreenSpace" },
				{ "ScreenSpace.ToolTip", "Icon size is defined in pixels. Will always appear as the same size, no matter the zoom level." },
				{ "ToolTip", "Icon size can be defined in screen or world units" },
				{ "WorldSpace.Comment", "// Icon size is defined in world units. When zooming in and out, the icon will scale up and down accordingly.\n" },
				{ "WorldSpace.Name", "EIconSizeUnit::WorldSpace" },
				{ "WorldSpace.ToolTip", "Icon size is defined in world units. When zooming in and out, the icon will scale up and down accordingly." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin,
				nullptr,
				"EIconSizeUnit",
				"EIconSizeUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
