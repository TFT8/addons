/*
Author: Ampers
Adds dismount action to player

* Arguments:
* Unit <OBJECT>
* Priority <NUMBER>
*
* Return Value:
* Exit position <ARRAY>

* Example:
* [_this, _priority] call tft_fnc_addDismountAction
*/

params ["_unit", ["_priority", 7, [0]]];

if !(_unit == player) exitWith {};
if !hasInterface exitWith {};

private _id = player getVariable "tft_dismount_action_id";
if !(isNil "_id") then {
	player removeAction _id;
};
_id = player addAction 
[
    "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1' shadow=2 /> <t color='#89f3ff'>Dismount</t>", 
    {
        [] call tft_fnc_dismount
    },
    [],
    _priority, 
    false, 
    true, 
    "GetOut",
    "_this == player && (vehicle player) != player", // _target, _this, _originalTarget
    -1
];
player setVariable ["tft_dismount_action_id", _id];