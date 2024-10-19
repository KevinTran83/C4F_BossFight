// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C4F_BossFight : ModuleRules
{
	public C4F_BossFight(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
