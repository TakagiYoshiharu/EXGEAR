using UnrealBuildTool;

public class EXGEARTarget : TargetRules
{
	public EXGEARTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("EXGEAR");
	}
}
