/*
Author: Ampersand
Check if it's destroy bush or cut grass.

* Arguments:
* 0: Unit trying to tag <OBJECT>
*
* Return Value:
* -

* Example:
* [player] call tft_ace_fnc_canReduceFoliage
*/

params ["_player"];

if !([_player] call ace_trenches_fnc_canDigTrench) exitWith {false}; 

private _position0 = AGLToASL positionCameraToWorld [0, 0, 0]; 
private _position1 = AGLToASL positionCameraToWorld [0, 0, 2]; 
 
private _intersections = lineIntersectsSurfaces [_position0, _position1, cameraOn, objNull, true, 1, "VIEW"]; 
 
if (_intersections isEqualTo []) exitWith {false};

(_intersections # 0) params ["_intersectPosASL", "_surfaceNormal", "_intersectObj", "_parentObject"];

//terrain
if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) exitWith {true}; 
//not terrain
if !((nearestTerrainObjects [ _intersectObj , ["Bush"], 0]) isEqualTo [] ) exitWith {true}; 
