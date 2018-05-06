

using UnrealBuildTool;
using System.Collections.Generic;

public class game_1WeekTarget : TargetRules
{
	public game_1WeekTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "game_1Week" } );
	}
}
