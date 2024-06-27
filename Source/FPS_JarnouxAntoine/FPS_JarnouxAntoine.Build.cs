// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_JarnouxAntoine : ModuleRules
{
	public FPS_JarnouxAntoine(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput", 
            "UMG",
            "Slate",
            "SlateCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "GameplayTasks",
            "NavigationSystem"
        });
    }
}
