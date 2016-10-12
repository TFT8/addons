/*
 * Author: yourstruly
 * Move respawn points to markers named RESPAWN_BLU, RESPAWN_OPF, RESPAWN_IND, RESPAWN_CIV.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call TFT_fnc_moveRespawn;
 */
private ["_moved"];
_moved = false;

{
    switch(toUpper (markerText _x)) do
    {
        case "RESPAWN_BLU": { _moved = true; ["respawn_west", _x] call TFT_fnc_moveMarker; };
        case "RESPAWN_OPF": { _moved = true; ["respawn_east", _x] call TFT_fnc_moveMarker; };
        case "RESPAWN_IND": { _moved = true; ["respawn_guerrila", _x] call TFT_fnc_moveMarker; };
        case "RESPAWN_CIV": { _moved = true; ["respawn_civilian", _x] call TFT_fnc_moveMarker; };
        default {};
    };
} forEach allMapMarkers;

if(_moved) then {
    hintSilent parseText("<t color='#00ff00' size='1.1'>Respawn point(s) moved.</t>");
} else {
    hintSilent parseText("<t color='#ff0000' size='1.1'>No RESPAWN_* markers found.</t>");
};
