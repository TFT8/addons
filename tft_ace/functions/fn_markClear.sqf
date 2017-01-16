/*
* Author: FitzGerald
* Create a 'clear' map marker at unit's position.
*
* Arguments:
* 0: Unit on which position to create a marker <OBJECT>
*
* Return Value:
* -
*
* Example:
* [player] call tft_ace_fnc_markClear
*/
params ["_player"];

private _num = missionNamespace getVariable ["tft_ace_markerNum", 1000];
missionNamespace setVariable ["tft_ace_markerNum", _num+1];

private _marker_name = format ["_USER_DEFINED #2/%1/%2", _num, currentChannel];
private _marker = createMarker [_marker_name, _player];
_marker setMarkerShape "ICON";
_marker setMarkerType "tft_clearMarker";
_marker setMarkerColor "ColorGreen";
