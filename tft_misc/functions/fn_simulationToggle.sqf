/*
 * Author: yourstruly
 * Enable/disable simulation. (Function should be called on the server only).
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call TFT_fnc_simulationToggle;
 */
TFT_simulation_state = !TFT_simulation_state;
publicVariable "TFT_simulation_state";

{
    if(!isPlayer _x) then {
        (vehicle _x) enableSimulationGlobal (!TFT_simulation_state)
    };
} forEach allUnits;
