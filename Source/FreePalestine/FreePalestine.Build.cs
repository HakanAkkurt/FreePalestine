// Copyright Hakan Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FreePalestine : ModuleRules
{
	public FreePalestine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
