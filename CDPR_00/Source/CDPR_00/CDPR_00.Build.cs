// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CDPR_00 : ModuleRules
{
	public CDPR_00(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CDPR_00",
			"CDPR_00/Variant_Platforming",
			"CDPR_00/Variant_Platforming/Animation",
			"CDPR_00/Variant_Combat",
			"CDPR_00/Variant_Combat/AI",
			"CDPR_00/Variant_Combat/Animation",
			"CDPR_00/Variant_Combat/Gameplay",
			"CDPR_00/Variant_Combat/Interfaces",
			"CDPR_00/Variant_Combat/UI",
			"CDPR_00/Variant_SideScrolling",
			"CDPR_00/Variant_SideScrolling/AI",
			"CDPR_00/Variant_SideScrolling/Gameplay",
			"CDPR_00/Variant_SideScrolling/Interfaces",
			"CDPR_00/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
