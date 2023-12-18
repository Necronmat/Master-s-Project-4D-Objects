// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Finished_Project : ModuleRules
{
	public Finished_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        bEnableUndefinedIdentifierWarnings = false;

        bUseRTTI = true;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GeometryCore", "CGAL",});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Eigen");
        AddEngineThirdPartyPrivateStaticDependencies(Target, "Boost");
        AddEngineThirdPartyPrivateStaticDependencies(Target, "zlib");

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
