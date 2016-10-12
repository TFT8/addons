/*
 * Author: yourstruly
 * Move marker to the location of another marker.
 * Change it's icon, color and type to match the destination marker.
 * If it's a dot - make it invisible.
 *
 * Arguments:
 * 0: Marker to move <MARKER>
 * 1: Destination marker <MARKER>
 *
 * Return Value:
 * -
 *
 * Example:
 * [_marker, _pos] call TFT_fnc_moveMarker;
 */
params ["_from", "_to"];

_from setMarkerPos (getMarkerPos _to);

if(markerType _to != "hd_dot") then
{
    _from setMarkerColor (markerColor _to);
    _from setMarkerDir (markerDir _to);
    _from setMarkerType (markerType _to);
} else {
    _from setMarkerType "Empty";
};

deleteMarker _to;
