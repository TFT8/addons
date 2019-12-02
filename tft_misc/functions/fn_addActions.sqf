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

params [["_object", _this], ["_actions", []]];

private _all = (count _actions == 0);

if(_all || {"Arsenal" in _actions}) then {
    _object addAction ["<t color='#89f3ff'>Arsenal</t>", {[player, player, true] call ace_arsenal_fnc_openBox}, nil, 51, true, true, "", "_target distance _this < 8"];
};
if(_all || {"Spectator" in _actions}) then {
    _object addAction ["<t color='#83ffc6'>Spectate</t>", {[true, false] call ace_spectator_fnc_setSpectator}, nil, -8, false, true, "", "_this distance _target < 10"];
};
if(_all || {"Preparation" in _actions}) then {
    _object addAction ["<t color='#f0a4ff'>End preparation phase</t>", {TFT_prepPhase = false; publicVariable "TFT_prepPhase"; (_this select 0) removeAction (_this select 2)}, nil, -10, false, true, "", "_target distance _this < 8"];
};
if(_all || {"Respawns" in _actions}) then {
    _object addAction ["<t color='#f0a4ff'>Move respawn point(s)</t>", {call TFT_fnc_moveRespawn}, nil, -12, false, true, "", "_target distance _this < 8"];
};
