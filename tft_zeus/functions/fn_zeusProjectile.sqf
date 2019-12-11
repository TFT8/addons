/*
Author: Ampers
Check if projectile can reach target, then remote executes on the unit.

* Arguments:
* -
*
* Return Value:
* Exit position <ARRAY>

* Example:
* [] call tft_fnc_dismount
*/

params ["_unit", "_magazine", "_muzzle", "_firemode", "_mousePosASL"];

private _position0 = positionCameraToWorld [0, 0, 0];
private _intersections = lineIntersectsSurfaces [AGLToASL _position0, _mousePosASL, cameraOn, objNull, true, 1, "GEOM"];

private _targetPos = _mousePosASL;
if !(_intersections isEqualTo []) then {
	_targetPos = _intersections # 0 # 0;
	//systemChat str _targetPos;
};

// check if can reach
private _initSpeed = getNumber (configFile >> "CfgMagazines" >> _magazine >> "initSpeed");
private _eyePos = eyePos _unit;
private _distance = _eyePos distance2D _targetPos;
private _height = _eyePos # 2 - _targetPos # 2;
private _g = 9.8066;
private _angle = (acos((_g * _distance^2/_initSpeed^2-_height)/(_eyePos distance _targetPos)) + atan (_distance / _height)) / 2;

if !(_angle isEqualType 0) then {
	[objNull, format ["Can't reach target! D:%1 H:%2", _distance, _height]] call bis_fnc_showCuratorFeedbackMessage;
};

private _throwFlatTrajectory = profileNamespace getVariable ["amp_projectiles_throwFlatTrajectory", 1];

[_unit, _magazine, _muzzle, _firemode, _targetPos, _throwFlatTrajectory] remoteExecCall ["tft_zeus_fnc_unitProjectile", _unit];