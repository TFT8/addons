#include "\A3\Functions_F_Exp_A\EGSpectatorCommonDefines.inc"

disableSerialization;
(_this select 0) params ["_display", "_key", "", "", ""];
private _spectator = _this select 1;

_display displayRemoveEventHandler ["KeyDown", _spectator getVariable ["tft_spec_keydown", -1]];
_display displayRemoveEventHandler ["MouseButtonUp", _spectator getVariable ["tft_spec_mouse", -1]];
(_display displayCtrl IDC_RSCDISPLAYEGSPECTATOR_MAP) ctrlRemoveEventHandler ["Draw", _spectator getVariable ["tft_spec_draw2d", -1]];
removeMissionEventHandler ["Draw3D", _spectator getVariable ["tft_spec_draw3d", -1]];

_spectator setVariable ["tft_spec_draw2d", nil];
_spectator setVariable ["tft_spec_draw3d", nil];
_spectator setVariable ["tft_spec_keydown", nil];
_spectator setVariable ["tft_spec_mouse", nil];

["Terminate"] call BIS_fnc_EGSpectator;

_spectator setVariable ["tf_unable_to_use_radio", false];
tft_spec_voiceVolume call TFAR_fnc_setVoiceVolume;

removeMissionEventHandler ["EachFrame", _spectator getVariable ["tft_spec_teleport", 0]];
_spectator setPos (_spectator getVariable ["tft_spec_pos", [0,0,0]]);

[_spectator, true]  remoteExec ["enableSimulationGlobal", 2];
_spectator setCaptive false;
_spectator allowDamage true;
[_spectator, false]  remoteExec ["hideObjectGlobal", 2];

[_spectator] joinSilent (_spectator getVariable ["tft_spec_group", group _spectator]);
_spectator setVariable ["tft_spec_group", nil];

true
