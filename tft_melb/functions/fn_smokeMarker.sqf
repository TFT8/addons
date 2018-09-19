/*
Author: Ampers
Drop a smoke marker grenade out of a helicopter

* Arguments:
* 0: helicopter
*
* Return Value:
* -

* Example:
* [_hel] call tft_melb_fnc_smokeMarker
*/

params ["_hel"];

private _smk = createVehicle ["SmokeShellRed", (position _hel) vectorAdd [0, 0, -1], [], 0, "CAN_COLLIDE"];
_smk setVelocity (velocity _hel);