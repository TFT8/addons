/*
Author: Ampers
Deploy a BLUFOR AR-2 Darter out of a helicopter

* Arguments:
* 0: <OBJECT> helicopter
*
* Return Value:
* 1: <OBJECT> darter

* Example:
* [_hel] call tft_fnc_smokeMarker
*/

params ["_hel"];

private _uav = createVehicle ["B_UAV_01_F", [0, 0, 1000], [], 0, "FLY"];
createVehicleCrew _uav;
_uav attachTo [_hel, [boundingBoxReal _hel # 0 # 0, 0, 0]];
detach _uav;
_uav setVelocity (velocity _hel);
if hasInterface then {player connectTerminalToUAV _uav};
_uav