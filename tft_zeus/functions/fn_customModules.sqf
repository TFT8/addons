/*
* Author: Ampers
* 
*
* Arguments:
* 0: Curator <OBJECT>
*
* Return Value:
* -
*
* Example:
* [_curator] call tft_zeus_fnc_customModules
*/

if !hasInterface exitWith {};

// add line of sight Zeus ACE Actions
_statement = {
	[] call tft_zeus_fnc_toggleDoor
};
_action = ["ToggleDoor","Toggle Door","",_statement,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

_statement = {
	[] call tft_zeus_fnc_toggleLight
};
_action = ["ToggleLight","Toggle Light","",_statement,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

// custom Zeus Modules
private _customZeusModules = [
	["Respawn", "Change Respawn Position", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
	
		private _position0 = positionCameraToWorld [0, 0, 0];
		private _intersections = lineIntersectsSurfaces [AGLToASL _position0, AGLToASL _position, cameraOn, objNull, true, 1, "GEOM"];

		private _targetPos = _position;
		if !(_intersections isEqualTo []) then {
			_targetPos = ASLToAGL (_intersections # 0 # 0);
			//systemChat str _targetPos;
		};

		"respawn_west" setMarkerPos _targetPos;
		[objNull, format ["Marker respawn_west moved to: %1", _position]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["Objects", "Draw Bounding Box Marker", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		[_objectUnderCursor] call tft_zeus_fnc_drawBoundingMarker;
	}],
	["AI Systems", "ACEX HC Blacklist Group", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		group _objectUnderCursor setVariable ["acex_headless_blacklist", true, true];
		[objNull, format ["Group Blacklisted: %1", group _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Systems", "ACEX HC Unblacklist Group", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		group _objectUnderCursor setVariable ["acex_headless_blacklist", false, true];
		[objNull, format ["Group Unblacklisted: %1", group _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Systems", "Vcom Disable for Group", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		group _objectUnderCursor setVariable ["Vcm_Disable", true, true];
		[objNull, format ["Group Vcom Disabled: %1", group _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Systems", "Vcom Enable for Group", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		group _objectUnderCursor setVariable ["Vcm_Disable", false, true];
		[objNull, format ["Group Vcom Enabled: %1", group _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Behaviour", "Look Here", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
							
			private _position0 = positionCameraToWorld [0, 0, 0];
			private _intersections = lineIntersectsSurfaces [AGLToASL _position0, _mousePosASL, cameraOn, objNull, true, 1, "GEOM"];

			private _targetPos = _mousePosASL;
			if !(_intersections isEqualTo []) then {
				_targetPos = _intersections # 0 # 0;
				//systemChat str _targetPos;
			};

			[_unit, ASLToAGL _targetPos] remoteExec ["doWatch", owner _unit]
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["AI Behaviour", "Move Here", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
							
			private _position0 = positionCameraToWorld [0, 0, 0];
			private _intersections = lineIntersectsSurfaces [AGLToASL _position0, _mousePosASL, cameraOn, objNull, true, 1, "GEOM"];

			private _targetPos = _mousePosASL;
			if !(_intersections isEqualTo []) then {
				_targetPos = _intersections # 0 # 0;
				//systemChat str _targetPos;
			};

			[_unit, _targetPos] remoteExec ["doMove", owner _unit]
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["AI Behaviour", "Disable AI: Path", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, "Path"] remoteExec ["DisableAI", owner _objectUnderCursor];
		[objNull, format ["Path AI Disabled: %1", _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Behaviour", "Enable AI: Path", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, "Path"] remoteExec ["EnableAI", owner _objectUnderCursor];
		[objNull, format ["Path AI Enabled: %1", _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["AI Behaviour", "Unpack Static Weapon", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		private _g = group _objectUnderCursor;
		_g allowFleeing 0;
		[_g, getPos _objectUnderCursor, _objectUnderCursor getPos [500, getDir _objectUnderCursor]] call BIS_fnc_unpackStaticWeapon;
		private _xs = [];
		[objNull, format ["Unpacking Static: %1", _g]] call bis_fnc_showCuratorFeedbackMessage;
		
		[_g] spawn {
			params ["_g"];
			private _time = diag_tickTime;
			private _xs = units _g select {assignedVehicleRole _x isEqualTo ["Turret", [0]]} apply {vehicle _x};
			private _newTurrets = [];
			waitUntil {
				sleep 0.1;
				((diag_tickTime - _time) > 10) ||
				{
					_newTurrets = units _g select {assignedVehicleRole _x isEqualTo ["Turret", [0]]} apply {vehicle _x};
					!(_xs isEqualTo _newTurrets)
				}
				
			};
			_newTurrets = _newTurrets - _xs;
			_newTurrets apply {
				//systemChat format ["Righting Turret %1", _x setVectorUp surfaceNormal getPos _x];
				getPos _x params ["_posX", "_posY", "_posZ"];
				_x setPos [_posX, _posY, 0.05];
				_x setVectorUp surfaceNormal getPos _x;
			};
		};
	}],
	["Projectiles", "Toggle Throw Trajectory", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		private _throwFlatTrajectory = profileNamespace getVariable ["amp_projectiles_throwFlatTrajectory", 1];
		_throwFlatTrajectory = abs (_throwFlatTrajectory - 1);
		profileNamespace setVariable ["amp_projectiles_throwFlatTrajectory", _throwFlatTrajectory];
		[objNull, format ["Throw Trajectory: %1", ["High", "Flat"] # _throwFlatTrajectory]] call bis_fnc_showCuratorFeedbackMessage;
	}],
	["Projectiles", "Throw Frag", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
			private _magazine = "HandGrenade";
			private _muzzle = "HandGrenadeMuzzle";
			private _firemode = "HandGrenadeMuzzle";
			[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["Projectiles", "Throw Mini", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
			private _magazine = "MiniGrenade";
			private _muzzle = "MiniGrenadeMuzzle";
			private _firemode = "MiniGrenadeMuzzle";
			[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["Projectiles", "Throw Smoke", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
			private _magazine = "SmokeShell";
			private _muzzle = "SmokeShellMuzzle";
			private _firemode = "SmokeShellMuzzle";
			[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["Projectiles", "Throw Stone", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
			private _magazine = "HandGrenade_Stone";
			private _muzzle = "HandGrenade_Stone";
			private _firemode = "HandGrenade_Stone";
			[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["Projectiles", "GL Frag", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		private _weapons = weapons _objectUnderCursor;
		private _glMuzzles = [];
		{
			private _weapon = _x;
			{
				private _muzzle = _x;
				if (configName inheritsFrom (configFile >> "CfgWeapons" >> _weapon >> _muzzle) isEqualTo "UGL_F") then {
					_glMuzzles pushBack [_weapon, _muzzle];
				};
			} forEach getArray(configFile >> "cfgWeapons" >> _weapon >> "muzzles");
		} forEach _weapons;
		
		if (_glMuzzles isEqualTo []) exitWith {
			[objNull, format ["Unit has no GL: %1", _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
		};
		[_objectUnderCursor, {
			params ["_successful", "_unit", "_mousePosASL"];
			private _weapons = weapons _unit;
			private _glMuzzles = [];
			{
				private _weapon = _x;
				{
					private _muzzle = _x;
					if (configName inheritsFrom (configFile >> "CfgWeapons" >> _weapon >> _muzzle) isEqualTo "UGL_F") then {
						_glMuzzles pushBack [_weapon, _muzzle];
					};
				} forEach getArray(configFile >> "cfgWeapons" >> _weapon >> "muzzles");
			} forEach _weapons;
			
			if (_glMuzzles isEqualTo []) exitWith {
				[objNull, format ["Unit has no GL: %1", _unit]] call bis_fnc_showCuratorFeedbackMessage;
			};
			
			private _magazine = "1Rnd_HE_Grenade_shell";
			private _muzzle = _glMuzzles # 0 # 1;
			//systemChat str _glMuzzles;
			private _firemode = "Single";
			[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
		}] call ace_zeus_fnc_getModuleDestination;
	}],
	["Projectiles", "Fire Launcher", {
		params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];
		if (_objectUnderCursor isEqualTo objNull) exitWith {[objNull, format ["Place module on unit!"]] call bis_fnc_showCuratorFeedbackMessage;};
		private _launcher = secondaryWeapon _objectUnderCursor;
		if (_launcher isEqualTo "") then {
			[objNull, format ["Unit has no launcher: %1", _objectUnderCursor]] call bis_fnc_showCuratorFeedbackMessage;
		} else {
			[_objectUnderCursor, {
				params ["_successful", "_unit", "_mousePosASL"];
				private _weapon = secondaryWeapon _unit;
				
				private _magazine = getArray (configFile >> "CfgWeapons" >> _weapon >> "Magazines") # 0;
				private _muzzle = _weapon;
				//systemChat str _glMuzzles;
				private _firemode = "Single";
				[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call tft_zeus_fnc_zeusProjectile;
			}] call ace_zeus_fnc_getModuleDestination;
		};
	}]
];

//Achilles
if isClass (configfile >> "CfgPatches" >> "achilles_ui_f") then {
	_customZeusModules apply {_x call Ares_fnc_RegisterCustomModule};
};

//Zeus Enhanced
if isClass (configfile >> "CfgPatches" >> "zen_main") then {
	_customZeusModules apply {_x call zen_custom_modules_fnc_register};
};
