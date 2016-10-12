#include "\A3\Functions_F_Exp_A\EGSpectatorCommonDefines.inc"

private _map = _this select 0;

if (!isNull _map) then
{
	// Draw icon for all units in game
	private _entities = allUnits;
	private _vehicles = [];
	private _entitiesInVehicle = [];

	// Grab all vehicles
	{ if (vehicle _x != _x) then {_vehicles pushBackUnique vehicle _x; _entitiesInVehicle pushBackUnique _x;}; } forEach _entities;

	{
		if (alive _x && { simulationEnabled _x } && { !isObjectHidden _x }) then
		{
			// Read following values only once and store them
			private ["_highlightedObject", "_vehicleTexture", "_sideColor", "_text"];
			_highlightedObject = uiNamespace getVariable [VAR_MAP_HIGHLIGHTED_OBJECT, objNull];
			_vehicleTexture = "";
			_sideColor = [1,1,1,1];
			_text = "";

			if (!isNil { _x getVariable VAR_VEHICLE_TEXTURE }) then
			{
				_vehicleTexture = _x getVariable VAR_VEHICLE_TEXTURE;
			}
			else
			{
				_vehicleTexture = [getText (configfile >> "CfgVehicles" >> typeOf _x >> "icon")] call BIS_fnc_textureVehicleIcon;
				[] call BIS_fnc_error;
				_x setVariable [VAR_VEHICLE_TEXTURE, _vehicleTexture];
			};

			if (!isNil { _x getVariable VAR_SIDE_COLOR }) then
			{
				_sideColor = _x getVariable VAR_SIDE_COLOR;
			}
			else
			{
				_sideColor = [side group _x] call BIS_fnc_sideColor;
				_x setVariable [VAR_SIDE_COLOR, _sideColor];
			};

			if (_highlightedObject == _x || {_highlightedObject in _x}) then
			{
				private _name = [_highlightedObject, nil, NAME_MAX_CHARACTERS] call BIS_fnc_getName;
				_sideColor = [0.8,0.8,0.5,1];
				_text = if (isPlayer _highlightedObject) then { _name } else { "" };
			};

			private ["_isIncapacitated", "_texture", "_color", "_unitColor"];
			_isIncapacitated	= [_x] call ace_medical_fnc_getUnconsciousCondition;
			_texture		= if (_isIncapacitated) then { ICON_REVIVE_BIG } else { _vehicleTexture };
			_color			= if (_isIncapacitated) then { [0.5,0,0,1] } else { _sideColor };
			_unitColor 		= if (time <= _x getVariable [VAR_HIGHLIGHT_TIME, 0]) then { [1,1,1,1]; } else { _color; };

			_map drawIcon [_texture, _unitColor, getPosASLVisual _x, 24.0, 24.0, getDirVisual _x, _text, 1, 0.04, "TahomaB", "right"];
		};
	} forEach _entities + _vehicles - _entitiesInVehicle;
};
