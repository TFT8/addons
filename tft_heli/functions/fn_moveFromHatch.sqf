/*
Author: Ampers
Move unit into vehicle seat

* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* -

* Example:
* [vehicle player, player] call tft_fnc_moveToHatch
*/

params ["_proxy", "_unit"];

private _heli = attachedTo _proxy;
_heli setVariable ["tft_proxy_floorhatch", objNull, true];
moveOut _unit;

[{
	params ["_unit"];
	vehicle _unit == _unit
}, {
	params ["_unit", "_heli"];
	_unit moveInAny _heli;
}, [_unit, _heli]] call CBA_fnc_waitUntilAndExecute;

deleteVehicle _proxy;