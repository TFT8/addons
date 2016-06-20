/*
 * Name: initClient
 * Initialize TFT BFT.
 *
 * Params:
 * -
 *
 * Return:
 * -
 *
 * call tft_bft_fnc_initClient
*/
if(!hasInterface) exitWith {};

// --------------- settings ---------------
// NOTE: you can change this settings in-game by calling: createDialog "tft_bft_settings"
tft_bft_groupsShow  = 1;    //0 - disabled, 1 - group, 2 - side
tft_bft_groupsScale = 1;
tft_bft_groupsNames = true;

tft_bft_unitsShow  = 1;     //0 - disabled, 1 - group, 2 - side
tft_bft_unitsScale = 1;
tft_bft_unitsNames = false;

tft_bft_items = ["B_UavTerminal", "B_UavTerminal", "B_UavTerminal", "ItemGPS"];  //items that enable BFT on the map
tft_bft_drawDistance = 500; //unit icons draw distance
// ----------------------------------------

tft_bft_groupsShowForce     = false;
tft_bft_groupsScaleForce    = false;
tft_bft_groupsNamesForce    = false;
tft_bft_unitsShowForce      = false;
tft_bft_unitsScaleForce     = false;
tft_bft_unitsNamesForce     = false;
tft_bft_itemsForce          = false;
tft_bft_drawDistanceForce   = false;

{
    _var = _x;
    {
        _x params ["_name", "", "", "", "", "", "_force", "_value", ""];
        if(_name == _var) then {
            missionNamespace setVariable [_var, _value];
            missionNamespace setVariable [format["%1Force", _var], _force];
        };
    } forEach ace_common_settings;
} forEach ["tft_bft_groupsShow", "tft_bft_groupsSize", "tft_bft_groupsNames", "tft_bft_unitsShow", "tft_bft_unitsSize", "tft_bft_unitsNames", "tft_bft_items", "tft_bft_drawDistance"];

call tft_bft_fnc_addMapEH;
