using UnrealBuildTool;

public class EXGEAREditorTarget : TargetRules
{
	public EXGEAREditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("EXGEAR");
	}
}
