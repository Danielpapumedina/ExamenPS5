// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_Proyect : ModuleRules
{
	public First_Proyect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
