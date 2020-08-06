/*
Author: Ampers
Move unit into vehicle seat

* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* -

* Example:
* [_heli, _player] call tft_fnc_moveToHatch
* [vehicle player, player] call tft_fnc_moveToHatch
*/

params ["_heli", "_unit"];

private _proxy = "tft_proxy_floorhatch" createVehicle [0, 0, 100];
_proxy attachTo [_heli, [0, -1.25, -2]];
_heli setVariable ["tft_proxy_floorhatch", _proxy, true];

moveOut _unit;
[{
	params ["_unit"];
	vehicle _unit == _unit
}, {
	params ["_unit", "_proxy"];
	_unit moveInAny _proxy;
}, [_unit, _proxy]] call CBA_fnc_waitUntilAndExecute;
