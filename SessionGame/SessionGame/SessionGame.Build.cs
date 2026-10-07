using UnrealBuildTool;

public class SessionGame : ModuleRules {
    public SessionGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MyNacon",
            "PhysicsCore",
            "ReplayModule",
            "Slate",
            "SlateCore",
            "TRX",
            "TelemetryLib",
            "UMG",
        });
    }
}
