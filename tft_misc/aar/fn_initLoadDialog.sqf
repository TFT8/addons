/*
 * Author: yourstruly
 * Get saved AAR mission names.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * List of mission names <ARRAY>
 *
 * Example:
 * call tft_aar_fnc_initLoadDialog;
 */
if(isNil "tft_aar_db") then { tft_aar_db = ["new", "AAR"] call OO_INIDBI; };
tft_aar_recordings = ["read", ["Missions", worldName, []]] call tft_aar_db;
publicVariable "tft_aar_recordings";
