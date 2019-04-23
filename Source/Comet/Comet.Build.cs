// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Comet : ModuleRules
{
	public Comet(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore", "ShaderCore", "ProceduralMeshComponent", "ApexDestruction" });
        PrivateDependencyModuleNames.AddRange(new string[] { "ProceduralMeshComponent" });
    }
}
