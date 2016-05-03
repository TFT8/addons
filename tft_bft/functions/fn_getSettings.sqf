/*
 * Name: getSettings
 * Retrive settings from ACE server config.
 *
 * Params:
 * -
 *
 * Return:
 * -
 *
 * call tft_bft_fnc_getSettings
*/
tft_bft_groupsShowForce  = false;
tft_bft_groupsSizeForce  = false;
tft_bft_groupsNamesForce = false;
tft_bft_unitsShowForce   = false;
tft_bft_unitsSizeForce   = false;
tft_bft_unitsNamesForce  = false;

{
    _var = _x;
    {
        _x params ["_name", "", "", "", "", "", "_force", "_value", ""];
        if(_name == _var) then {
            missionNamespace setVariable [_var, _value];
            missionNamespace setVariable [format["%1Force", _var], _force];
        };
    } forEach ace_common_settings;
} forEach ["tft_bft_groupsShow", "tft_bft_groupsSize", "tft_bft_groupsNames", "tft_bft_unitsShow", "tft_bft_unitsSize", "tft_bft_unitsNames"];
