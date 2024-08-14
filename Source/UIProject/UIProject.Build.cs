// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UIProject : ModuleRules
{
	public UIProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(new string[] {
            "UIProject",
        });
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","Slate","SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Slate",
			"SlateCore",
			"CommonGame",
			"CommonInput",
			"CommonUI",
			"GameplayTags",
			"ModularGameplay",
			"ModularGameplayActors",
			"UMG"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
