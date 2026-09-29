using UnrealBuildTool;

public class EXGEARClientTarget : TargetRules
{
	public EXGEARClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("EXGEAR");
	}
}
