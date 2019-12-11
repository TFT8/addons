
private _position0 = positionCameraToWorld [0, 0, 0];
private _position1 = positionCameraToWorld [0, 0, 100];
private _intersections = lineIntersectsSurfaces [AGLToASL _position0, AGLToASL _position1, cameraOn, objNull, true, 1, "GEOM"];
if (_intersections isEqualTo []) exitWith {[objNull, ""]};
private _lamp = _intersections select 0 select 2;
private _state = lightIsOn _lamp;
if (_state == "ERROR") exitWith {hint format ["Can't toggle lights on \n%1", _lamp]};
_state = ["ON", "OFF"] select (_state == "ON");
hint format ["%1\n%2", _lamp, _state];
_lamp switchLight _state