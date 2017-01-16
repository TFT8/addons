/*
Author: YoursTruly
Check if it's possible to create a tag here.

* Arguments:
* 0: Unit trying to tag <OBJECT>
*
* Return Value:
* -

* Example:
* [player] call tft_ace_fnc_canTag
*/

params ["_player"];

private _hasSpray = count (['ACE_SpraypaintBlack','ACE_SpraypaintRed','ACE_SpraypaintGreen','ACE_SpraypaintBlue'] arrayIntersect items _player) > 0;
private _taggableArea = [_player] call ace_tagging_fnc_checkTaggable;

_hasSpray && {_taggableArea}
