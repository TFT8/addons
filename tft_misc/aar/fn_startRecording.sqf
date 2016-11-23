/*
 * Author: yourstruly
 * Start saving data for AAR. Should be ran on 1 machine only (Pref. HC).
 *
 * Arguments:
 * 0: How often to gather data <NUMBER> (min. 0.5)
 *
 * Return Value:
 * -
 *
 * Example:
 * [1] call tft_aar_fnc_startRecording;
 */
params ["_density"];

if(!isNil "tft_aar_recording" && {tft_aar_recording != -1}) exitWith { diag_log "Recording already in progress."; };

if(isNil "tft_aar_db") then { tft_aar_db = ["new", "AAR"] call OO_INIDBI; };
private _names = ["read", ["Missions", worldName, []]] call tft_aar_db;
_names pushBackUnique briefingName;
["deleteSection", briefingName] call tft_aar_db;
["write", ["Missions", worldName, _names]] call tft_aar_db;

tft_aar_buffer = [];

// --- main recording loop
tft_aar_recording = [{
    private _stamp = [];
    private _vehicles = [];
    {
        private _vehicle = vehicle _x;
        private _name = if(isPlayer _x) then {name _x} else {""};
        if(_vehicle isEqualTo _x) then {
            _stamp pushBack [_name, typeOf _x, (side group _x) call BIS_fnc_sideID, getPos _x, getDir _x];
        } else {
            if !(_vehicle in _vehicles) then {
                _vehicles pushBack _vehicle;
                _stamp pushBack [_name, typeOf _vehicle, (side group _x) call BIS_fnc_sideID, getPos _vehicle, getDir _vehicle];
            };
        };
    } forEach allUnits;
    tft_aar_buffer pushBack _stamp;
    if(count tft_aar_buffer >= 300) then {
        call tft_aar_fnc_saveBuffer;
    };
}, 0.5 max _density] call CBA_fnc_addPerFrameHandler;

publicVariable "tft_aar_recording";
