/*
 * Author: Ampers
 * Prepares the things to breach on explosion
 *
 * Arguments:
 * 0: Breaching Charge <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [_breachingCharge] call ACE_Explosives_fnc_getDetonators;
 *
 */

params ["_bc"];

private ["_wire"];
_wire = createVehicle ["Land_MetalWire_F", _bc, [], 0, "CAN_COLLIDE"]; 
_wire setDir (direction _bc);
_wire addEventHandler ["Explosion",{
	
	private [
		"_testing",
		"_report",
		"_c",	//
		"_r",	//_radius
		"_walls",
		"_wall",
		"_b",	//_building
		"_sns",	//_selectionNames
		"_sn",	//_selectionName
		"_spM",	//_selectionPositionModel
		"_spW",	//_selectionPositionWorld
		"_snsplit",	//_selectionNameSplit
		"_an"	//_animationName
	];
	_testing = true;
	_report = "---------------------------------------------------";
	_c = (_this select 0);
	_r = 2.5;
	
	//wall
	_walls = nearestTerrainObjects [_c, ["WALL", "FENCE"], _r] + (nearestObjects [_c, ["WALL", "FENCE"], _r]);

	if (count _walls > 0) then {
		_wall = _walls select 0;
	};

	if !(isNil "_wall") then {
		_wall setDamage 1;
	};
	
	//door
	_b = nearestBuilding _c;
	if _testing then {
		_report = _report + "Building: " + (typeOf _b) + "\n";
	};
	_sns = selectionNames _b;
	if _testing then {
		_report = format ["%!%2%3%4", _report, "# selection names: ", str (count _sns), "\n"];
	};
	
	{
		_sn = _x;
		_snsplit = _sn splitString "_";
		if (
			(count _snsplit == 2) &&
			((_snsplit select 0) isEqualTo "door") && 
			(0 < parseNumber (_snsplit select 1))
		) then {
			
			if _testing then {
				_report = _report + "Door: " + _sn + "\n";
			};
			_spM = _b selectionPosition _sn;
			_spW = _b modelToWorld _spM;
			if ((_c distance _spW) < _r) then {
				_an = _sn+"_rot";
				_b animate [_an, 1, true];	//Open
			} else {
				if _testing then {
					_report = _report + "too far " + "\n";
				};
			};
		};
	} count _sns;
	if _testing then {
		hint _report;
	};
	
	//clean up
	deleteVehicle _c;
}];