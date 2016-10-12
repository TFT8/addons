(_this select 0) params ["_display", "_key", "", "", ""];

switch(_key) do {
    case 1: {[_this select 1] call TFT_fnc_spectateEnd; true};
    default { hintSilent str _key; false };
}
