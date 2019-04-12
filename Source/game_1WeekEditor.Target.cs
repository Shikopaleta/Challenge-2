

using UnrealBuildTool;
using System.Collections.Generic;

public class game_1WeekEditorTarget : TargetRules
{
	public game_1WeekEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "game_1Week" } );
	}
}
