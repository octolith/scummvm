/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "bladerunner/script/scene.h"

namespace BladeRunner {

void SceneScriptCT12::InitializeScene() {
	if (Game_Flag_Query(123)) {
		Setup_Scene_Information(-419.0f, -6.5f, 696.0f, 616);
	} else if (Game_Flag_Query(432)) {
		Setup_Scene_Information(-292.0f, -6.5f, 990.0f, 827);
		if (!Game_Flag_Query(150)) {
			Game_Flag_Set(150);
		}
		Game_Flag_Reset(432);
	} else if (Game_Flag_Query(86)) {
		Setup_Scene_Information(-493.0f, -6.5f, 1174.0f, 990);
	} else {
		Setup_Scene_Information(-386.13f, -6.5f, 1132.72f, 783);
	}
	Scene_Exit_Add_2D_Exit(0, 0, 0, 40, 479, 3);
	Scene_Exit_Add_2D_Exit(1, 78, 224, 162, 330, 0);
	Scene_Exit_Add_2D_Exit(2, 500, 180, 619, 346, 0);
	if (Global_Variable_Query(1) > 2) {
		Scene_Exit_Add_2D_Exit(3, 620, 0, 639, 479, 1);
	}
	if (Global_Variable_Query(1) > 3) {
		Scene_Exit_Add_2D_Exit(4, 324, 150, 435, 340, 0);
	}
	Ambient_Sounds_Add_Looping_Sound(54, 33, 1, 1);
	Ambient_Sounds_Add_Looping_Sound(55, 20, -100, 1);
	Ambient_Sounds_Add_Looping_Sound(56, 20, -100, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 0, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 20, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 40, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Speech_Sound(60, 50, 10, 260, 17, 24, -100, 100, -101, -101, 1, 1);
	Ambient_Sounds_Add_Sound(68, 60, 180, 20, 33, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(69, 60, 180, 16, 25, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(375, 60, 180, 50, 100, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(376, 50, 180, 50, 100, 0, 0, -101, -101, 0, 0);
	Ambient_Sounds_Add_Sound(377, 50, 180, 50, 100, 0, 0, -101, -101, 0, 0);
	if (Global_Variable_Query(1) < 2 && Actor_Query_Goal_Number(53) == 1) {
		Actor_Put_In_Set(53, 4);
		Actor_Set_At_XYZ(53, -534.0f, -6.5f, 952.0f, 367);
		Game_Flag_Set(294);
	}
	if (Game_Flag_Query(123) && Game_Flag_Query(248)) {
		if (Global_Variable_Query(1) != 2 && Global_Variable_Query(1) != 3) {
			Scene_Loop_Start_Special(0, 1, 0);
		}
		Scene_Loop_Set_Default(2);
		Game_Flag_Reset(123);
	} else if (Game_Flag_Query(123) && !Game_Flag_Query(248)) {
		if (Global_Variable_Query(1) != 2 && Global_Variable_Query(1) != 3) {
			Scene_Loop_Start_Special(0, 0, 0);
		}
		Scene_Loop_Set_Default(2);
		Game_Flag_Reset(123);
	} else if (Game_Flag_Query(76) && Game_Flag_Query(294)) {
		Game_Flag_Reset(76);
		Scene_Loop_Set_Default(4);
	} else if (Game_Flag_Query(76) && !Game_Flag_Query(294)) {
		Game_Flag_Reset(76);
		Scene_Loop_Set_Default(2);
	} else {
		Scene_Loop_Set_Default(2);

	}
}

void SceneScriptCT12::SceneLoaded() {
	Obstacle_Object("BOX18", true);
	Unobstacle_Object("SPINNER BODY", true);
	Unobstacle_Object("HOWFLOOR", true);
	Unclickable_Object("TURBINE");
}

bool SceneScriptCT12::MouseClick(int x, int y) {
	return false;
}

bool SceneScriptCT12::ClickedOn3DObject(const char *objectName, bool a2) {
	return false;
}

bool SceneScriptCT12::ClickedOnActor(int actorId) {
	if (actorId == 28) {
		Actor_Face_Actor(0, 28, true);
		Actor_Says(0, 8910, 16);
	}
	if (actorId == 24 && Global_Variable_Query(1) == 4 && Game_Flag_Query(671) && Game_Flag_Query(703)) {
		Actor_Face_Actor(24, 0, true);
		Actor_Face_Actor(0, 24, true);
		Actor_Says(0, 710, 3);
		Actor_Says(24, 20, 3);
		Actor_Says(0, 715, 3);
		Actor_Says(24, 30, 3);
		Actor_Says(0, 720, 3);
		Actor_Says(24, 40, 3);
		Actor_Says(24, 50, 3);
		Actor_Says(24, 60, 3);
		Actor_Says(0, 725, 3);
		Actor_Says(24, 70, 3);
		Actor_Says(24, 80, 3);
		Actor_Says(24, 90, 3);
		Actor_Says(24, 100, 3);
		Actor_Says(24, 110, 3);
		Game_Flag_Set(629);
		Game_Flag_Set(666);
		Actor_Set_Goal_Number(0, 400);
	}
	return false;
}

bool SceneScriptCT12::ClickedOnItem(int itemId, bool a2) {
	return false;
}

bool SceneScriptCT12::ClickedOnExit(int exitId) {
	if (exitId == 0) {
		if (!Loop_Actor_Walk_To_XYZ(0, -419.14999f, -6.5f, 696.94f, 0, 1, false, 0)) {
			Ambient_Sounds_Remove_All_Non_Looping_Sounds(1);
			Game_Flag_Set(88);
			Set_Enter(4, 13);
		}
		return true;
	}
	if (exitId == 1) {
		if (!Loop_Actor_Walk_To_XYZ(0, -182.69f, -6.5f, 696.94f, 0, 1, false, 0)) {
			Ambient_Sounds_Remove_All_Non_Looping_Sounds(1);
			Ambient_Sounds_Remove_All_Looping_Sounds(1);
			Game_Flag_Set(89);
			Set_Enter(5, 15);
		}
		return true;
	}
	if (exitId == 2) {
		if (!Loop_Actor_Walk_To_XYZ(0, -386.13f, -6.5f, 1132.72f, 0, 1, false, 0)) {
			Ambient_Sounds_Remove_All_Non_Looping_Sounds(1);
			Ambient_Sounds_Remove_All_Looping_Sounds(1);
			Game_Flag_Set(90);
			Set_Enter(28, 17);
		}
		return true;
	}
	if (exitId == 3) {
		if (!Loop_Actor_Walk_To_XYZ(0, -493.0f, -6.5f, 1174.0f, 0, 1, false, 0)) {
			Ambient_Sounds_Remove_All_Non_Looping_Sounds(1);
			Ambient_Sounds_Remove_All_Looping_Sounds(1);
			Game_Flag_Set(91);
			Set_Enter(33, 23);
		}
		return true;
	}
	if (exitId == 4) {
		if (!Loop_Actor_Walk_To_XYZ(0, -292.0f, -6.5f, 990.0f, 0, 1, false, 0)) {
			if (Global_Variable_Query(1) == 4) {
				Game_Flag_Set(629);
			}
			Ambient_Sounds_Remove_All_Non_Looping_Sounds(1);
			Ambient_Sounds_Remove_All_Looping_Sounds(1);
			Game_Flag_Set(433);
			Set_Enter(82, 94);
		}
		return true;
	}
	return false;
}

bool SceneScriptCT12::ClickedOn2DRegion(int region) {
	return false;
}

void SceneScriptCT12::SceneFrameAdvanced(int frame) {
	if (!((frame - 1) % 10)) {
		/*int v2 = Random_Query(0, 1);
		if (v2 <= 1)
		{
			if (v2)
			{
				v1 = 60;
			}
			else
			{
				v1 = 59;
			}
		}*/
		Sound_Play(/*v1*/Random_Query(59, 60), 10, -80, -80, 50);
	}
	if (frame == 160) {
		Actor_Change_Animation_Mode(53, 41);
	}
	if (frame == 152) {
		Sound_Play(116, 100, 40, 0, 50);
	}
	if (frame == 203) {
		Sound_Play(119, 100, 40, 0, 50);
	}
	if (frame == 212) {
		Sound_Play(117, 40, 0, 0, 50);
	}
	if (frame == 269) {
		Player_Gains_Control();
		Player_Set_Combat_Mode(false);
		Actor_Set_Invisible(53, false);
	}
}

void SceneScriptCT12::ActorChangedGoal(int actorId, int newGoal, int oldGoal, bool currentSet) {
}

void SceneScriptCT12::PlayerWalkedIn() {
	if (Global_Variable_Query(1) < 2 && !Game_Flag_Query(64) && Actor_Query_Goal_Number(53) == 1) {
		Player_Loses_Control();
		Loop_Actor_Walk_To_Actor(53, 0, 48, 0, false);
		Actor_Face_Actor(53, 0, true);
		Actor_Face_Actor(0, 53, true);
		Actor_Says(53, 0, 3);
		Actor_Says(0, 670, 3);
		Actor_Says(53, 10, 3);
		Actor_Says(0, 675, 3);
		Actor_Says(53, 20, 3);
		Actor_Says(0, 680, 3);
		Actor_Says(53, 30, 3);
		Actor_Says(0, 685, 3);
		Actor_Says(53, 40, 3);
		Actor_Says(0, 690, 3);
		Actor_Clue_Acquire(0, 33, 1, 53);
		Game_Flag_Set(64);
		CDB_Set_Crime(20, 8);
		if (Game_Flag_Query(64) && Game_Flag_Query(40)) {
			Actor_Says(53, 50, 3);
			Actor_Says(0, 695, 3);
			Actor_Says(53, 60, 3);
			Actor_Says(0, 700, 3);
			Actor_Says(53, 70, 3);
			Actor_Clue_Acquire(53, 222, 1, -1);
		} else if (Game_Flag_Query(64) && Game_Flag_Query(41)) {
			Actor_Says(53, 80, 3);
			Actor_Says(53, 90, 3);
			Actor_Says(0, 705, 3);
			Actor_Says(53, 100, 3);
			Actor_Clue_Acquire(53, 215, 1, -1);
		}
		Actor_Set_Goal_Number(53, 2);
	}
	if (Game_Flag_Query(86)) {
		Loop_Actor_Walk_To_XYZ(0, -520.0f, -6.5f, 1103.0f, 0, 0, false, 0);
		Game_Flag_Reset(86);
	}
}

void SceneScriptCT12::PlayerWalkedOut() {
	Game_Flag_Reset(443);
	if (Game_Flag_Query(433)) {
		Game_Flag_Reset(176);
		Game_Flag_Set(259);
	}
}

void SceneScriptCT12::DialogueQueueFlushed(int a1) {
}

} // End of namespace BladeRunner
