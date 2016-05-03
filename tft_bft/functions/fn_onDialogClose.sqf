/*
 * Name: onDialogClose
 * Apply new settings.
 *
 * Params:
 * 1: Settings OK button <CONTROL>
 *
 * Return:
 * -
 *
 * [_ctrlButtonOK] call tft_bft_fnc_onDialogClose
*/
private ["_dialog", "_drawModeOld"];

disableSerialization;
_dialog = uiNamespace getVariable ['tft_bft_settings', displayNull];
if(isNull _dialog) exitWith {};

// --- group
tft_bft_groupsShow  = lbCurSel (_dialog displayCtrl 2010);
tft_bft_groupsSize  = sliderPosition (_dialog displayCtrl 2011);
tft_bft_groupsNames = cbChecked (_dialog displayCtrl 2012);

// -- unit
tft_bft_unitsShow  = lbCurSel (_dialog displayCtrl 3010);
tft_bft_unitsSize  = sliderPosition (_dialog displayCtrl 3011);
tft_bft_unitsNames = cbChecked (_dialog displayCtrl 3012);

hint parseText "<t size='1.1' color='#3498db'>New settings saved</t>";
