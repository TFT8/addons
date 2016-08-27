if (!hasInterface) exitWith {};

["ACE3 Vehicles", "tft_ace_getin", "Get in", {
    _targets = ACE_player nearEntities [["Car", "Helicopter", "Plane", "Tank", "Ship_F", "StaticWeapon"], 10];
    if (count _targets == 0) exitWith {false};
    _target = _targets select 0;
    if(locked _target >= 2) exitWith {false};
    
    if(_target emptyPositions "Driver" > 0) exitWith { ACE_player moveInDriver _target; true };
    if(_target emptyPositions "Gunner" > 0) exitWith { ACE_player moveInGunner _target; true };
    if(_target emptyPositions "Commander" > 0) exitWith { ACE_player moveInCommander _target; true };
    if(_target emptyPositions "Cargo" > 0) exitWith { ACE_player moveInCargo _target; true };
    
    false
}, {false}] call CBA_fnc_addKeybind;

["ace_unconscious", {if((_this select 1) && {random 100 < 75}) then {(_this select 0) call ACE3_Tweaks_fnc_scream}; }] call CBA_fnc_addEventHandler;
