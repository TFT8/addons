/*
 * Name: drawGroupIcon
 * Create a group icon on unit's position.
 *
 * Params:
 * 1: Map control <CONTROL>
 * 2: Unit for which to draw an icon <OBJECT>
 *
 * Return:
 * -
 *
 * [_mapCtrl, player] call tft_bft_fnc_drawGroupIcon
*/
params ["_map", "_unit"];
private ["_icon", "_color", "_pos", "_name"];

_icon = getText (configFile >> "CfgGroupIcons" >> ([group _unit] call ace_common_fnc_getMarkerType) >> "icon");
_color = (side group _unit) call BIS_fnc_sideColor;
_name = if(tft_bft_groupsNames) then { groupId group _unit } else { "" };

_map drawIcon [_icon, _color, getPosWorld _unit, tft_bft_groupsSize*20, tft_bft_groupsSize*20, 0, _name, false, 0.01+0.03*tft_bft_groupsSize, 'TahomaB', 'right'];
