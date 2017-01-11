/*
 * Author: [Name of Author(s)]
 * [Description]
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument <OBJECT>
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * ["something", player] call ace_common_fnc_imanexample
 *
 * Public: [Yes/No]
 */

private ["_unit", "_screams", "_scream", "_position"];

_unit = _this;

if(!local _unit) exitWith {};
if!(_unit in playableUnits) exitWith {};

_screams = [
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_01.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_02.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_03.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_04.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_05.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_06.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_07.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_08.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_09.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_10.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_11.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_12.wss",
  "A3\sounds_f\characters\human-sfx\Person0\P0_hit_13.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_01.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_02.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_03.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_04.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_05.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_06.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_07.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_08.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_09.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_10.wss",
  "A3\sounds_f\characters\human-sfx\Person1\P1_hit_11.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_01.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_02.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_03.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_04.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_05.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_06.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_07.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_08.wss",
  "A3\sounds_f\characters\human-sfx\Person2\P2_hit_09.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_01.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_02.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_03.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_04.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_05.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_06.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_07.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_08.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_09.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_10.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_11.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_12.wss",
  "A3\sounds_f\characters\human-sfx\Person3\P3_hit_13.wss"
];

_position = _unit modelToWorld (_unit selectionPosition "Head");
_position set [2, (_position select 2) + ((getPosASLW _unit select 2) - (getPosATL _unit select 2) max 0)];

_scream = _screams select (floor random (count _screams));

playSound3D [
  _scream,
  objNull,
  False,
  _position,
  1.75,
  1,
  300
];
