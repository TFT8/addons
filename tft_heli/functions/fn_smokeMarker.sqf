/*
Author: Ampers
Drop a smoke marker grenade out of a helicopter

* Arguments:
* 0: helicopter
*
* Return Value:
* -

* Example:
* [_hel] call tft_fnc_smokeMarker
*/

params ["_hel"];

private _smk = createVehicle ["SmokeShellRed", [0, 0, 1000], [], 0, "CAN_COLLIDE"];
_smk attachTo [_hel, [0, 0, boundingBoxReal _hel # 0 # 2]];
detach _smk;
_smk setVelocity (velocity _hel);