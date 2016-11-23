/*
 * Author: yourstruly
 * Add simulation management powers to a unit/object.
 *
 * Arguments:
 * 0: Objects to add actions to <OBJECT>
 *
 * Return Value:
 * -
 *
 * Example:
 * [player] call TFT_fnc_simulationMgmt;
 */
params ["_unit"];

if(isNil "TFT_simulation_state") then {
    TFT_simulation_state = false;
    publicVariable "TFT_simulation_state";
};

_unit addAction ["<t color='#f0a4ff'>Toggle simulation</t>", {remoteExec ["TFT_fnc_simulationToggle", 2]}, nil, -10, false, true, "", "_this == _target && !TFT_simulation_state"];
_unit addAction ["<t color='#c0c0c0'>Toggle simulation</t>", {remoteExec ["TFT_fnc_simulationToggle", 2]}, nil, -10, false, true, "", "_this == _target && TFT_simulation_state"];

hint parseText "<t size='1.1' color='#f1c40f'>You can now toggle simulation ON/OFF using your addAction (scroll menu).</t>";
