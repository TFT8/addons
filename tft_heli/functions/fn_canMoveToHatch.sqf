/*
Author: Ampers
Move unit into vehicle seat

* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* -

* Example:
* [_heli, _player] call tft_fnc_canMoveToHatch
*/

params ["_heli", "_unit"];

private _proxy = _heli getVariable ["tft_proxy_floorhatch", objNull];
isNull _proxy || {
[] isEqualTo crew _proxy
}
 