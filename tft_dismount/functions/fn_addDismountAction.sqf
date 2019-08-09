/*
Author: Ampers
Adds dismount action to player

* Arguments:
* -
*
* Return Value:
* Exit position <ARRAY>

* Example:
* _this call tft_fnc_addDismountAction
*/

params ["_unit"];

if !(_unit == player) exitWith {};

//if (player getVariable ["tft_dismount_enabled", false]) exitWith {};
//player setVariable ["tft_dismount_enabled", true];
if !hasInterface exitWith {};
player addAction 
[
    "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1' shadow=2 /> <t color='#89f3ff'>Get Out</t>", 
    {
        [] call tft_fnc_dismount
    },
    [],
    7, 
    false, 
    true, 
    "GetOut",
    "_this == player && (vehicle player) != player", // _target, _this, _originalTarget
    -1
]