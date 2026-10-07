using UnrealBuildTool;

public class ReplayModule : ModuleRules {
    public ReplayModule(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayCameras",
            "UMG",
        });
    }
}
