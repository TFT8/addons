if (!hasInterface) exitWith {};

["ACE3 Vehicles", "tft_ace_getin", "Get in", {
    if (!dialog) then {
        [] call tft_ace_fnc_getIn;
    };
    false
}, {false}] call CBA_fnc_addKeybind;

["ace_unconscious", {if((_this select 1) && {random 100 < 75}) then {(_this select 0) call tft_ace_fnc_scream}; }] call CBA_fnc_addEventHandler;
