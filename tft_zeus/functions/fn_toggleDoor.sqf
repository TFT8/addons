
private _doorInfo = [100] call ace_interaction_fnc_getDoor;
_doorInfo params ["_house", "_door"];
private _getDoorAnimations = _doorInfo call ace_interaction_fnc_getDoorAnimations;
_getDoorAnimations params ["_animations"];
private _phase = [0, 1] select (_house animationPhase (_animations select 0) < 0.5);
hint format ["%1\n%2\n%3", _house, _door, ["Closed", "Opened"] select _phase];
{_house animate [_x, _phase]; false} count _animations