#include "\A3\Functions_F_Exp_A\EGSpectatorCommonDefines.inc"

private ["_uiVisible", "_mapVisible", "_camera"];
_uiVisible = uiNamespace getVariable [VAR_INTERFACE_VISIBLE, false];
_mapVisible = uiNamespace getVariable [VAR_MAP_VISIBLE, false];
_camera	= missionNamespace getVariable [VAR_CAMERA, objNull];

if (_uiVisible && !_mapVisible) then
{
    {
        if(alive _x && { vehicle _x == _x || {driver vehicle _x == _x} } &&
            { simulationEnabled _x && {simulationEnabled vehicle _x} } &&
            { !isObjectHidden _x && {!isObjectHidden vehicle _x} } &&
            { !(_x in playableUnits) }
          ) then {
            private ["_position", "_color", "_icon"];

            // --- position
            _position = _x modelToWorldVisual (_x selectionPosition "Head");
            _position set [2, (_position select 2) + HEIGHT_OFFSET];

            // --- color
            _color = if(_x getVariable [VAR_HIGHLIGHT_TIME, 0] >= time) then {
                [1,1,1,0.75]
            } else {
                switch (side group _x) do {
                    case west:          { [0,0.3,0.6,0.75]   };
                    case east:          { [0.7,0.1,0.1,0.75] };
                    case independent:   { [0.1,0.6,0.1,0.75] };
                    case civilian:      { [0.6,0.1,0.6,0.75] };
                    default             { [0.1,0.1,0.1,0.75] };
                };
            };

            // --- icon
            _icon = if([_x] call ace_medical_fnc_getUnconsciousCondition) then {
                [ICON_REVIVE_BIG]
            } else {
                [getText (configFile >> 'CfgVehicles' >> typeOf vehicle _x >> 'icon')]
            };
            if(_icon select 0 == "") then {
                _icon = ["iconThing"];
            };

            // --- draw
            if((leader group _x) distance _camera > 500) then {
                if(_x == leader group _x) then {
                    _position set [2, (_position select 2) max 20];
                    drawIcon3D (["\A3\ui_f\data\map\Markers\NATO\b_unknown.paa"] + [_color] + [_position] + [0.6, 0.6, 0]);
                };
            } else {
                drawIcon3D (_icon + [_color] + [_position] + [1, 1, 0]);
            };
        };
    } foreach allUnits;
};
