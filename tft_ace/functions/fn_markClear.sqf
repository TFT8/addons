/*
* Author: FitzGerald
* Description: creates a marker with a unique variable name
*
* Arguments:
*
* Return Value:
*
* Last Modified: 2016/12/23
*
* Example:
* [_player] call tft_fn_markClear.sqf
*
*/

    _marker_name = format ["%1 %2", profileName, time];
    _marker = createMarker [_marker_name, _player];
    _marker setMarkerShape "ICON";
    _marker setMarkerType "tft_clearMarker";
