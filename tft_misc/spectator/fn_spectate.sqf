#include "\A3\Functions_F_Exp_A\EGSpectatorCommonDefines.inc"

params ["_spectator", "_exitable"];
private ["_display", "_eh"];

// --- prevent player from dying (and disturbing)
[_spectator, true]  remoteExec ["hideObjectGlobal", 2];
_spectator allowDamage false;
_spectator setCaptive true;
[_spectator, false]  remoteExec ["enableSimulationGlobal", 2];

// --- hide player from STHUD
_spectator setVariable ["tft_spec_group", group _spectator];
_group = createGroup (side _spectator);
[_spectator] joinSilent _group;

// --- launch BI spectator UI
["Initialize", [_spectator, [], false]] call BIS_fnc_EGSpectator;

// --- wait for UI to initialize
_display = findDisplay IDD_RSCDISPLAYEGSPECTATOR;
while {_display isEqualTo displayNull} do {
    _display = findDisplay IDD_RSCDISPLAYEGSPECTATOR;
};

// --- make player unit fly with the camera
_spectator setVariable ["tft_spec_pos", getPos _spectator];
missionNamespace setVariable ["tft_spec_spectator", _spectator]; //it's the only way to pass params to mission EH
_eh = addMissionEventHandler ["EachFrame",{
    _camera = missionNamespace getVariable ["BIS_EGSpectatorCamera_camera", objNull];
    _spectator = missionNamespace getVariable ["tft_spec_spectator", objNull];
    if((!isNull _camera) && {!isNull _spectator}) then {
        _spectator setPosWorld (getPosWorld _camera);
    };
}];

_spectator setVariable ["tft_spec_teleport", _eh];
tft_spec_voiceVolume = TF_speak_volume_meters;
0 call TFAR_fnc_setVoiceVolume;
_spectator setVariable ["tf_unable_to_use_radio", true];

if(!_exitable) exitWith {};

// --- handle escape
_eh = _display displayAddEventHandler ["KeyDown",
    format["if(_this select 1 == 1) then { [_this, %1] call TFT_fnc_spectateEnd }", _spectator]
];
_spectator setVariable ["tft_spec_keydown", _eh];

// --- handle mouse button
_eh = _display displayAddEventHandler ["MouseButtonUp",
    "if(_this select 1 == 0) then { _this call TFT_fnc_assignTarget }"
];
_spectator setVariable ["tft_spec_mouse", _eh];

// --- draw map icons
_eh = (_display displayCtrl IDC_RSCDISPLAYEGSPECTATOR_MAP) ctrlAddEventHandler ["Draw", {
    _this call TFT_fnc_draw2D
}];
_spectator setVariable ["tft_spec_draw2d", _eh];

_eh = addMissionEventHandler ["Draw3D", {
    _this call TFT_fnc_draw3D
}];
_spectator setVariable ["tft_spec_draw3d", _eh];
