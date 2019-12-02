/*
Author: Ampers
set locality of sling load cargo to pilot

* Arguments:
* NONE
*
* Return Value:
* NONE

* Example:
* [] call tft_fnc_smokeMarker
*/

if hasInterface then {
	["lsl_slingLocality", {
		params ["_heli", "_object"];
		private _heliOwner = owner _heli;
		if (_heliOwner != owner _object) then {
			_object setOwner _heliOwner;
		};
	}] call CBA_fnc_addEventHandler;

	["Helicopter", "init", {
		params ["_heli"];

		_heli addEventHandler ["RopeAttach",{
			params ["_heli", "", "_object"];
			["lsl_slingLocality", [_heli, _object]] call CBA_fnc_serverEvent;
		}];
	}, true, [], true] call CBA_fnc_addClassEventHandler;
};