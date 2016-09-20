params ["_player"];

_hasSpray = count (['ACE_SpraypaintBlack','ACE_SpraypaintRed','ACE_SpraypaintGreen','ACE_SpraypaintBlue'] arrayIntersect items _player) > 0;
_closeToTag = [_player] call ace_tagging_fnc_checkTaggable;

_hasSpray && {_closeToTag}
