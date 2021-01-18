if (!hasInterface) exitWith {};

call tft_zeus_fnc_customModules;

// Add keybinds
#include "\a3\ui_f\hpp\definedikcodes.inc"
/*
["TFT8 S3", "tft_zeus_stop", "Stop", {
    if (isNull curatorCamera) exitWith {};
    doStop (curatorSelected # 0);
}, "", [DIK_P, [false, false, false]], false] call CBA_fnc_addKeybind; // P

["TFT8 S3", "tft_zeus_path", "PATH AI Disable", {
    if (isNull curatorCamera) exitWith {};
    {
        //[_x, "Path"] remoteExec ["DisableAI", _x];
        ["zen_common_disableAI", [_x, "PATH"], _x] call CBA_fnc_targetEvent;
    } forEach (curatorSelected # 0);
}, "", [DIK_P, [false, true, false]], false] call CBA_fnc_addKeybind; // Alt + P

["TFT8 S3", "tft_zeus_move", "Move To Cursor", {
    if (isNull curatorCamera) exitWith {};
    private _mousePosASL = if (ctrlShown ((findDisplay 312) displayCtrl 50)) then {
        private _pos2d = (((findDisplay 312) displayCtrl 50) ctrlMapScreenToWorld getMousePosition);
        _pos2d set [2, getTerrainHeightASL _pos2d];
        _pos2d
    } else {
        AGLToASL (screenToWorld getMousePosition);
    };
    private _position0 = AGLToASL positionCameraToWorld [0, 0, 0];
    private _intersections = lineIntersectsSurfaces [_position0, _mousePosASL, cameraOn, objNull, true, 1, "GEOM"];
    
    if !(_intersections isEqualTo []) then {
        (_intersections # 0) params ["_intersectPosASL", "", "_intersectObject", ""];
        if !(isNull _intersectObject) then {
            _mousePosASL = _intersectPosASL;
        };
    };
    
    {
        [_x, ASLToAGL _mousePosASL] remoteExec ["doMove", _x];
    } forEach (curatorSelected # 0);
}, "", [DIK_L, [true, false, false]], false] call CBA_fnc_addKeybind; // Shift + L

["TFT8 S3", "tft_zeus_look", "Look At Cursor", {
    if (isNull curatorCamera) exitWith {};
    private _mousePosASL = if (ctrlShown ((findDisplay 312) displayCtrl 50)) then {
        private _pos2d = (((findDisplay 312) displayCtrl 50) ctrlMapScreenToWorld getMousePosition);
        _pos2d set [2, getTerrainHeightASL _pos2d];
        _pos2d
    } else {
        AGLToASL (screenToWorld getMousePosition);
    };

    private _position0 = AGLToASL positionCameraToWorld [0, 0, 0];
    private _intersections = lineIntersectsSurfaces [_position0, _mousePosASL, cameraOn, objNull, true, 1, "GEOM"];
    
    if !(_intersections isEqualTo []) then {
        (_intersections # 0) params ["_intersectPosASL", "", "_intersectObject", ""];
        if !(isNull _intersectObject) then {
            _mousePosASL = _intersectPosASL;
        };
    };
    {
        //systemChat format ["%1 %2 %3", _x, typeOf _x, (_x distance ASLToAGL _mousePosASL) toFixed 0];
        [_x, ASLToAGL _mousePosASL] remoteExec ["doWatch", _x];
    } forEach (curatorSelected # 0);
}, "", [DIK_L, [false, false, false]], false] call CBA_fnc_addKeybind; // L
["TFT8 S3", "tft_zeus_lookAtMe", "Look At Camera", {
    if (isNull curatorCamera) exitWith {};
    private _position0 = positionCameraToWorld [0, 0, 0];
    {
        [_x, _position0] remoteExec ["doWatch", _x];
    } forEach (curatorSelected # 0);
}, "", [DIK_L, [false, false, true]], false] call CBA_fnc_addKeybind; // Alt + L

["TFT8 S3", "tft_zeus_forceWeaponFire", "Force Fire", {
    if (isNull curatorCamera) exitWith {};
    {
        if (_x isKindOf "CAManBase") then {
            weaponState _x params ["", "_muzzle", "_firemode"];
            _x forceWeaponFire [_muzzle, _firemode];
        } else {
            _x fireAtTarget [objNull];
        };
    } forEach (curatorSelected # 0);
}, "", [DIK_K, [false, true, false]], true] call CBA_fnc_addKeybind; // Ctrl + K
*/

["TFT8 S3", "tft_zeus_SwitchWeapon", "Switch Weapon", {
    if (isNull curatorCamera) exitWith {};
    private _unit = curatorSelected # 0 # 0;
    private _weapons = weapons _unit;
    if !(_unit isKindOf "CAManBase") then {
        {
            {
                _weapons pushBackUnique _x;
            } forEach (_unit weaponsTurret _x);
        } forEach [[-1], [0], [0,0]];
    };

    if (count _weapons > 1) then {        
        private _action = [];
        {
            _action = [
                _x,
                getText (configFile >> "CfgWeapons" >> _x >> "displayName"),
                "",
                {
                    (_this # 6) params ["_unit", "_weapon"];
                    //_unit selectWeapon _weapon;
                    [_unit, _weapon] remoteExec ["selectWeapon", _unit];
                },
                {true},
                [_unit, _x]
            ] call zen_context_menu_fnc_createAction;
            [_action, [], 0] call zen_context_menu_fnc_addAction;
        } forEach _weapons;
        [] call zen_context_menu_fnc_open;

        // remove actions on menu close
        [{
            zen_context_menu_contextGroups isEqualTo []
        },{
            _this apply {[_x] call zen_context_menu_fnc_removeAction};
        }, _weapons, 15, {}] call CBA_fnc_waitUntilAndExecute;
    };
}, "", [DIK_K, [true, false, false]], false] call CBA_fnc_addKeybind; // Shift + K
