/*
* Author: Ampers
* 
*
* Arguments:
* 0: Curator <OBJECT>
*
* Return Value:
* -
*
* Example:
* [_curator] call tft_zeus_fnc_ehCuratorObjectPlaced
*/
params ["_zeus"];

if !hasInterface exitWith {};

// Spawn placement
private _handle = _zeus addEventHandler ["CuratorObjectPlaced", {
	params ["_curator", "_entity"];
	if !(_entity isKindOf "AllVehicles") exitWith {};
	if ((count (curatorSelected # 0)) > 1)  exitWith {};
	
	private _position0 = positionCameraToWorld [0, 0, 0];
	private _mousePosASL = AGLToASL screenToWorld getMousePosition;
	private _intersections = lineIntersectsSurfaces [AGLToASL _position0, _mousePosASL, cameraOn, _entity, true, 1, "GEOM"];
	
	if !(_intersections isEqualTo []) then {
		(_intersections # 0) params ["_intersectPosASL", "_surfaceNormal", "_intersectObject", "_parentObject"];
		_entity setDir (positionCameraToWorld [0, 0, 0] getDir positionCameraToWorld [0, 0, 1]);
		if !(_intersectObject isEqualTo objNull) then {
			_entity setPosASL _intersectPosASL;
			_entity setVectorUp _surfaceNormal;
		};
	};

	if (_entity isKindOf "Air" && {!(driver _entity isEqualTo objNull) && {surfaceIsWater position _entity}}) then {
		private _altitude = 50;
		_entity setVehiclePosition [(getPos _entity vectorAdd [0,0,_altitude]), [], 0, "FLY"];
		if (_entity isKindOf "Plane") then {
			_entity setVelocityModelSpace [0, 100, 0];
		};
	};
}];