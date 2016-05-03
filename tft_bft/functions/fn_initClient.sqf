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
tft_bft_groupsShow = 1;        //0 - disabled, 1 - group, 2 - side
tft_bft_groupsSize  = 18;
tft_bft_groupsNames = true;

tft_bft_unitsShow = 1;       //0 - disabled, 1 - group, 2 - side
tft_bft_unitsSize  = 16;
tft_bft_unitsNames = false;
// ----------------------------------------

call tft_bft_getSettings;

disableSerialization;

[{
    if(isNull (findDisplay 12)) exitWith {};

    [_this select 1] call CBA_fnc_removePerFrameHandler;
    call tft_bft_fnc_addMapEH;
}, 0, nil] call CBA_fnc_addPerFrameHandler;
