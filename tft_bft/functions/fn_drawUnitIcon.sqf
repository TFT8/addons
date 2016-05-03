/*
 * Name: drawUnitIcon
 * Create an icon for the unit.
 *
 * Params:
 * 1: Map control <CONTROL>
 * 2: Unit the icon is drawn for <OBJECT>
 *
 * Return:
 * -
 *
 * [_mapCtrl, player] call tft_bft_fnc_drawIconIcon
*/
params ["_map", "_unit"];
private ["_veh", "_icon", "_color", "_name"];

_veh = vehicle _unit;
_icon = getText (configFile >> "CfgVehicles" >> typeOf _veh >> "icon");
if(_icon == "") then { _icon == "iconThing"; };
_color = (side group _unit) call BIS_fnc_sideColor;
_name = if(tft_bft_unitsNames) then {
    if(_veh == _unit) then {
        name _unit
    } else {
        name ((crew _veh) select 0)
    }
} else { "" };

_map drawIcon [_icon, _color, getPosWorld _veh, tft_bft_unitsSize, tft_bft_unitsSize, getDir _veh, _name, false, 0.01+0.0015*tft_bft_unitsSize, 'TahomaB', 'right'];
