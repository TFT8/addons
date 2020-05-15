// Add keybinds
["TFT8 S6", "tft_misc_toggleHUD", "Toggle HUD", {false}, {
    // Statement
    if (isNil "tft_showHUD") then {tft_showHUD = true};
    tft_showHUD = !tft_showHUD;
    showHUD [tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD];
    if !(isNil "STHud_UIMode") then {STHud_UIMode = [0, STHud_Settings_HUDMode] select tft_showHUD;};
    if !(isNil "STGI_Enabled") then {STGI_Enabled = tft_showHUD;};
    true
}, [24, [false, false, false]], false] call CBA_fnc_addKeybind; // O

["TFT8 S6", "tft_misc_openGCam", "GCam","", {
    [] execVM "tft_misc\gcam\gcam.sqf";
}] call CBA_fnc_addKeybind; // no default key

["TFT8 S6", "tft_misc_openSplendidCam", "Splendid Camera","", {
    ["Exit"] call BIS_fnc_camera;
}] call CBA_fnc_addKeybind; // no default key

/* PhysX anti bounce, doesn't work on planes that are not PhysX
["Air","Killed",{
    params ["_air"];
    //if (_air isKindOf "UAV_01_base_F" || _air isKindOf "UAV_06_base_F" || _air isKindOf "ParachuteBase") exitWith {};
    
    _air addEventHandler ["EpeContactEnd", { 
        params ["_air", "_obj2"]; 
        systemChat format ["%1 hit %2, vel %3", typeOf _air, _obj2, velocity _air];
        _vel = (velocity _air) vectorMultiply 0.5;
        _air setVelocity [_vel # 0, _vel # 1, 0];
        if (vectorMagnitude _vel < 1) then {
            systemChat format ["%1 stopped after hitting %2", typeOf _air, _obj2];
            _air removeEventHandler ["EpeContactEnd", _thisEventHandler];
        }
    }];
}] call CBA_fnc_addClassEventHandler;
*/
