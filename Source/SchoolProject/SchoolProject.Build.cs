// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SchoolProject : ModuleRules
{
	public SchoolProject(ReadOnlyTargetRules Target) : base(Target)
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
			"SchoolProject",
			"SchoolProject/Variant_Platforming",
			"SchoolProject/Variant_Platforming/Animation",
			"SchoolProject/Variant_Combat",
			"SchoolProject/Variant_Combat/AI",
			"SchoolProject/Variant_Combat/Animation",
			"SchoolProject/Variant_Combat/Gameplay",
			"SchoolProject/Variant_Combat/Interfaces",
			"SchoolProject/Variant_Combat/UI",
			"SchoolProject/Variant_SideScrolling",
			"SchoolProject/Variant_SideScrolling/AI",
			"SchoolProject/Variant_SideScrolling/Gameplay",
			"SchoolProject/Variant_SideScrolling/Interfaces",
			"SchoolProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
