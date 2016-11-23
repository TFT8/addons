/*
 * Author: yourstruly
 * Delete AAR entry from DB by mission name.
 *
 * Arguments:
 * 0: Recording name <STRING>
 *
 * Return Value:
 * -
 *
 * Example:
 * ["My mission"] call tft_aar_fnc_deleteRecordingFromDB;
 */
params ["_name"];

if(isNil "tft_aar_db") then { tft_aar_db = ["new", "AAR"] call OO_INIDBI; };

private _names = ["read", ["Missions", worldName, []]] call tft_aar_db;
_names = _names - [_name];
["write", ["Missions", worldName, _names]] call tft_aar_db;

["deleteSection", _name] call tft_aar_db;
