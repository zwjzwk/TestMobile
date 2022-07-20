// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestMobile : ModuleRules
{
	public TestMobile(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
