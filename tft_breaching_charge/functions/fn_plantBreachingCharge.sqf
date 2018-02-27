/*
 * Author: Ampers
 * Prepares the things to breach on explosion. 
 * Called by TFT_Breaching_Charge_Place >> EventHandlers >> Deleted
 *
 * Arguments:
 * 0: Breaching Charge <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [_breachingCharge] call TFT_fnc_plantBreachingCharge;
 *
 */

params ["_bc"];
if !(local _bc) exitWith{};

private ["_v","_h"];
_v = vectorDir _bc;
_h = createVehicle ["Land_MetalWire_F", (getPos _bc) vectorAdd [0,0,1], [], 0, "CAN_COLLIDE"]; 
_h setVectorDirAndUp [[0,0,-1], [0,0,0] vectorDiff _v];
_h addEventHandler ["Explosion",{
	
	private ["_r","_c","_p","_ts","_t","_snsplit","_an"];
	_r = 2;
	_c = (_this select 0);
	_p = getPosASL _c;
	_ts = lineIntersectsObjs [
		_p, 
		_p vectorAdd (vectorUp _c), 
		objNull, objNull, false, 48
	];
	if (_ts isEqualTo []) exitWith {
		//hint "Target list is empty!";	//testing
		deleteVehicle _c;
	};
	_t = _ts select 0;
	if (_t isKindOf "HOUSE") then {	//door
		{
			_snsplit = _x splitString "_";
			if (
				(count _snsplit == 2) &&
				((_snsplit select 0) isEqualTo "door") && 
				(0 < parseNumber (_snsplit select 1))
			) then {
				if ((_c distance (_t modelToWorld (_t selectionPosition _x))) < _r) then {
					_an = _x+"_rot";
					_t animate [_an, 1, true];	//Open
				};
			};
		} count selectionNames _t;
	} else {	//wall
		if (_t in nearestTerrainObjects [_t,["WALL","FENCE"],0.1]) then {_t setDamage 1;} else {
			if ((_t isKindOf "WALL") || (_t isKindOf "FENCE")) then {_t setDamage 1;};
		};
	};
	//clean up
	_c removeAllEventHandlers "Explosion";
	deleteVehicle _c;
}];