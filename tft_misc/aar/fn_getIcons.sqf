/*
 * Author: yourstruly
 * Get 2D and 3D icons from recorded data.
 *
 * Arguments:
 * 0: Timestamp data <ARRAY>
 *
 * Return Value:
 * 3D icons and 2D icons are saved in tft_aar_* variables.
 *
 * Example:
 * [_stamp] call tft_aar_fnc_getIcons;
 */
params ["_stamp"];
private ["_name_map", "_size"];

private _icons2D = [];
private _icons = [];
{
    _x params ["_name", "_type", "_side", "_pos", "_dir"];

    private _icon = getText (configFile >> 'CfgVehicles' >> _type >> 'icon');
    if(_icon == "") then { _icon == "iconThing"; };
    private _color = _side call BIS_fnc_sideColor;
    private _alt = _pos select 2;
    if(_alt > 1) then {
        _name_map = format["%1(%2m)", _name, floor _alt];
        _size = 20 + (10 * log _alt);
    } else {
        _name_map = _name;
        _size = 20;
    };

    _icons pushBack [_icon, _color, _pos, 1, 1, 0, _name];
    _icons2D pushBack [_icon, _color, _pos, _size, _size, _dir, _name_map, false, 0.03, 'TahomaB', 'right'];
} forEach _stamp;

tft_aar_icons = _icons;
tft_aar_mapicons = _icons2D;
