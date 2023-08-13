// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CoopGameStudy : ModuleRules
{
	public CoopGameStudy(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
