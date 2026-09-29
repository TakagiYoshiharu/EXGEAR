using UnrealBuildTool;

public class EXGEARServerTarget : TargetRules
{
	public EXGEARServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("EXGEAR");
	}
}
