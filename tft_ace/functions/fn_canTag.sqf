/*
Author: YoursTruly
[Description]

* Arguments:
* 0: player
*
* Return Value:
* The return value <BOOL>

* Example:
* ["something", player] call ace_common_fnc_imanexample

* Public: [Yes/No]
*/

params ["_player"];

_hasSpray = count (['ACE_SpraypaintBlack','ACE_SpraypaintRed','ACE_SpraypaintGreen','ACE_SpraypaintBlue'] arrayIntersect items _player) > 0;
_closeToTag = [_player] call ace_tagging_fnc_checkTaggable;

_hasSpray && {_closeToTag}
