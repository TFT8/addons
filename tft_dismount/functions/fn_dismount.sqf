/*
Author: Ampers
Moves player out at get-in memory point closest to where they are looking.

* Arguments:
* -
*
* Return Value:
* Exit position (vehicle model space <ARRAY>

* Example:
* [] call tft_fnc_dismount
*/


#define TO_COMPARTMENT_STRING(var) if !(var isEqualType "") then {var = format ["Compartment%1",var]}

scopeName "main";

private _vehicle = vehicle player;

player action ["getOut", _vehicle];

private _vehicleConfig = configFile >> "CfgVehicles" >> typeOf _vehicle;
private _isInVehicle = player in _vehicle;
private _fullCrew = fullCrew [_vehicle, "", true];

private ["_driverCompartments", "_isDriverIsolated", "_cargoCompartments", "_cargoCompartmentsLast", "_compartment", "_currentTurret"];

if (_isInVehicle) then {
    _driverCompartments = (_vehicleConfig >> "driverCompartments") call BIS_fnc_getCfgData;
    // Air class by default has driverCompartments=0 and cargoCompartments[]={0}, so we have to disable them
    _isDriverIsolated = _driverCompartments isEqualTo 0 && {_vehicle isKindOf "Air"};
	TO_COMPARTMENT_STRING(_driverCompartments);

    _cargoCompartments = getArray (_vehicleConfig >> "cargoCompartments");
    {
        if !(_x isEqualType "") then {
            _cargoCompartments set [_forEachIndex, format ["Compartment%1", _x]];
        };
    } forEach _cargoCompartments;
    _cargoCompartmentsLast = count _cargoCompartments - 1;

    // find current compartment
    (
        _fullCrew select (_fullCrew findIf {player == _x select 0})
    ) params ["", "_role", "_cargoIndex", "_turretPath"];

    _currentTurret = _turretPath;

    switch (_role) do {
        case "driver": {
            if (_isDriverIsolated) then {
                [] breakOut "main";
            };
            _compartment = _driverCompartments;
        };
        case "cargo": {
            private _cargoNumber = fullCrew [_vehicle, "cargo", true] findIf {player == _x select 0};
            _compartment = _cargoCompartments select (_cargoNumber min _cargoCompartmentsLast);
        };
        default {
            private _turretConfig = [_vehicleConfig, _turretPath] call CBA_fnc_getTurret;
            _compartment = (_turretConfig >> "gunnerCompartments") call BIS_fnc_getCfgData;
            TO_COMPARTMENT_STRING(_compartment);
        };
    };
};

// find same-compartment exits

private _selections = [];
private _cargoNumber = -1;
{
    scopeName "crewLoop";
    _x params ["_unit", "_role", "_cargoIndex", "_turretPath", "_isPersonTurret"];
	private _selection = "";
	switch (toLower _role) do {
		case "driver": {
			if (_isInVehicle) then {
				if (_compartment != _driverCompartments || {_isDriverIsolated}) then {breakTo "crewLoop"};
				_selection = getText(_vehicleConfig >> "memoryPointsGetInCoDriver");
				_selections pushBackUnique _selection;
				_selection = getText(_vehicleConfig >> "memoryPointsGetInDriver");
			};
		};
		case "cargo": {
			_cargoNumber = _cargoNumber + 1;
			if (_isInVehicle) then {
				if (_compartment != (_cargoCompartments select (_cargoNumber min _cargoCompartmentsLast))) then {breakTo "crewLoop"};
				_selection = getText(_vehicleConfig >> "memoryPointsGetInCargo");
			};
		};
		default { // all turrets including FFV
			if (_role == "gunner" && {unitIsUAV _vehicle}) then {breakTo "crewLoop"};
			private _turretConfig = [_vehicleConfig, _turretPath] call CBA_fnc_getTurret;
			if (_isInVehicle) then {
				private _gunnerCompartments = (_turretConfig >> "gunnerCompartments") call BIS_fnc_getCfgData;
				TO_COMPARTMENT_STRING(_gunnerCompartments);
				if (_compartment != _gunnerCompartments) then {breakTo "crewLoop"};
				// due to arma bug the unit is stuck in wrong anim when move in turret with configured enabledByAnimationSource
				private _enabledByAnimationSource = getText (_turretConfig >> "enabledByAnimationSource");
				if (
					!("" isEqualTo _enabledByAnimationSource)
					&& {1 > _vehicle doorPhase _enabledByAnimationSource}
				) then {breakTo "crewLoop"};
				_selection = getText (_turretConfig >> "memoryPointsGetInGunner");
			};
		};
	};
	if !(_selection isEqualTo "") then {_selections pushBackUnique _selection};
} forEach _fullCrew;

private _selectionPositions = _selections apply {_vehicle selectionPosition _x};

//hint format ["%1\n%2\n%3", _compartment, _selections,_selectionPositions];

// mirror cargo
if ("pos cargo" in _selections) then {
	private _spCargo = _vehicle selectionPosition "pos cargo";
	_selectionPositions pushBackUnique [-1 * (_spCargo # 0), _spCargo # 1, _spCargo # 2];
};

//_selectionPositions apply {_wl = createVehicle ["Sign_Arrow_Direction_Cyan_F", _vehicle modelToWorld _x, [], 0, "CAN_COLLIDE"];};

private _lookPos = positionCameraToWorld [0,0,20] vectorDiff positionCameraToWorld [0,0,0];
private _exitPos = [0,0,0];
{
	if (_x vectorDistance _lookPos < _exitPos vectorDistance _lookPos) then {
		_exitPos = _x;
	};
} forEach _selectionPositions;

if (_exitPos isEqualTo [0,0,0]) exitWith {_exitPos};
private _vehicleHandle = [_vehicle, _exitPos] spawn {
	params ["_vehicle", "_exitPos"];
	waitUntil {vehicle player == player};
	player attachTo [_vehicle, _exitPos];
	detach player;
	player setVectorDir (_vehicle vectorModelToWorld _exitPos); 
	player setVelocity velocity _vehicle;
};
_exitPos











