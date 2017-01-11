/*
* Author: Kingsley (modified by YoursTruly)
* Mount the player in the vehicle they are directly looking at based on their distance.
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* call tft_ace_fnc_getIn;
*
* Public: No
*/

if((isNull ACE_player) || {vehicle ACE_player != ACE_player} || {!alive ACE_player} || {ACE_player getVariable ["ace_unconscious", false]}) exitWith { false };

private _start = AGLtoASL positionCameraToWorld [0, 0, 0];
private _end = _start vectorAdd (getCameraViewDirection ACE_player vectorMultiply 4);
private _objects = lineIntersectsSurfaces [_start, _end, ACE_player];
private _target = (_objects param [0, []]) param [2, objNull];

if((isNull _target) || {!alive _target} || {{_target isKindOf _x} count ["Air","LandVehicle","Ship","StaticMortar"] <= 0} ||
    {locked _target >= 2} || {!([ACE_player, _target] call ace_common_fnc_canInteractWith)}) exitWith { false };

if(_target emptyPositions "Driver" > 0) exitWith { ACE_player moveInDriver _target; true };
if(_target emptyPositions "Gunner" > 0) exitWith { ACE_player moveInGunner _target; true };
if(_target emptyPositions "Commander" > 0) exitWith { ACE_player moveInCommander _target; true };
if(_target emptyPositions "Cargo" > 0) exitWith { ACE_player moveInCargo _target; true };

false
