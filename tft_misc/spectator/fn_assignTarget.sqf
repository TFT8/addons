#include "\A3\Functions_F_Exp_A\EGSpectatorCommonDefines.inc"

disableSerialization;
params ["_display", "_key", "_x", "_y", "", "", ""];
private ["_ret", "_target", "_camera", "_intersections", "_focus"];

_ret = false;
if((uiNamespace getVariable [VAR_INTERFACE_VISIBLE, false]) &&
   {!(uiNamespace getVariable [VAR_MAP_VISIBLE, false])}) then
{
    _focus = uiNamespace getVariable [VAR_FOCUS, objNull];
    _intersections = [_x, _y, _focus, vehicle _focus] call BIS_fnc_getIntersectionsUnderCursor;

    if(count _intersections > 0) then {
        _target = (_intersections select 0) select 3;
    };
    if !(_target isKindOf "Man") then {
        if (count crew _target > 0) then {
            _target = (crew _target) select 0;
        } else {
            _target = objNull;
        };
    };

    _camera	= missionNamespace getVariable [VAR_CAMERA, objNull];
    if(!isNull _target && {alive _target} && {!isNull _camera}) then {
        ["SetFocus", [_target]] call DISPLAY;
        playsound "ReadoutClick";
        setMousePosition [0.5, 0.5];
        _ret = true;
    };
};

_ret
