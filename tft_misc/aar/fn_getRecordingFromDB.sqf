/*
 * Author: yourstruly
 * Get timestamps from DB by mission name.
 *
 * Arguments:
 * 0: Recording name <STRING>
 *
 * Return Value:
 * List of timestamps <ARRAY>
 *
 * Example:
 * ["My mission"] call tft_aar_fnc_getRecordingFromDB;
 */
params ["_name"];

if(isNil "tft_aar_db") then { tft_aar_db = ["new", "AAR"] call OO_INIDBI; };
private _frames = ["read", [_name, "Frames", []]] call tft_aar_db;
private _buffer = [];

{
    private _stamps = [];
    {
        _stamps = _stamps + (["read", [_name, _x, []]] call tft_aar_db);
    } forEach _x;
    _buffer pushBack _stamps;
} forEach _frames;

["tft_aar", _buffer] call CBA_fnc_remoteEvent;
