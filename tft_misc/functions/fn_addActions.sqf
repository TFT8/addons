/*
 * Author: yourstruly
 * Add certain actions to an object.
 *
 * Arguments:
 * 0: Object to add actions to <OBJECT>
 * 1: (Optional) Array of actions identification names <ARRAY>
 *
 * Return Value:
 * -
 *
 * Example:
 * [box, ["Arsenal"]] call TFT_fnc_addActions;
 */
params ["_object", ["_actions", []]];

private _all = (count _actions == 0);

if(_all || {"Arsenal" in _actions}) then {
    _this addAction ["<t color='#89f3ff'>Arsenal</t>", {["Open",true] spawn BIS_fnc_arsenal}, nil, 51, true, true, "", "_target distance _this < 8"];
    _this addAction ["<t color='#89f3ff'>Virtual Ammobox</t>", "VAS\open.sqf", nil, 50, true, true, "", "_target distance _this < 8"];
};
if(_all || {"Preparation" in _actions}) then {
    _this addAction ["<t color='#f0a4ff'>End preparation phase</t>", {TFT_prepPhase = false; publicVariable "TFT_prepPhase"; (_this select 0) removeAction (_this select 2)}, nil, -10, false, true, "", "_target distance _this < 8"];
};
if(_all || {"Respawns" in _actions}) then {
    _this addAction ["<t color='#f0a4ff'>Move respawn point(s)</t>", {call TFT_fnc_moveRespawn}, nil, -12, false, true, "", "_target distance _this < 8"];
};
if(_all || {"BFT" in _actions}) then {
    _this addAction ["<t color='#f0a4ff'>BFT settings</t>", {createDialog "tft_bft_settings"}, nil, -16, false, true, "", "_this distance _target < 8"];
    _this addAction ["<t color='#f0a4ff'>Change Callsign</t>", {createDialog "tft_callsign_settings"}, nil, -18, false, true, "", "_this distance _target < 8"];
};
if(_all || {"Spectator" in _actions}) then {
    _this addAction ["<t color='#83ffc6'>Spectate</t>", {[_this select 1, true] call TFT_fnc_spectate}, nil, -40, false, true, "", "_this distance _target < 10"];
};
if(_all || {"AAR" in _actions}) then {
    _this addAction ["<t color='#f0a4ff'>Start recording AAR</t>", {[1] remoteExec ["tft_aar_fnc_startRecording", HC]}, nil, -20, false, true, "", "(_this distance _target < 8) && {(missionNamespace getVariable ['HC', objNull]) in allPlayers} && {(isNil 'tft_aar_recording') || {tft_aar_recording == -1}}"];
    _this addAction ["<t color='#f0a4ff'>Stop recording AAR</t>", {remoteExec ["tft_aar_fnc_stopRecording", HC]}, nil, -20, false, true, "", "(_this distance _target < 8) && {!isNil 'tft_aar_recording'} && {tft_aar_recording != -1}"];
    _this addAction ["<t color='#f0a4ff'>Load AAR</t>", {createDialog "tft_aar_load"}, nil, -22, false, true, "", "(_this distance _target < 8) && {(isNil 'tft_aar_recording') || {tft_aar_recording == -1}}"];
};
