/*
 * Name: onDialogOpen
 * Fill the settings dialog with proper values.
 *
 * Params:
 * 1: Settings dialog display <DISPLAY>
 *
 * Return:
 * -
 *
 * [_ctrl] call tft_bft_fnc_onDialogOpen
*/
params ["_dialog"];

disableSerialization;
if(isNull _dialog) exitWith {};

// --- group
{ (_dialog displayCtrl 2010) lbAdd _x } forEach ["None", "Group", "Side"];
(_dialog displayCtrl 2010) lbSetCurSel tft_bft_groupsShow;
(_dialog displayCtrl 2010) ctrlEnable (!tft_bft_groupsShowForce);

(_dialog displayCtrl 2011) sliderSetRange [0.25, 2];
(_dialog displayCtrl 2011) sliderSetSpeed [2, 4];
(_dialog displayCtrl 2011) sliderSetPosition tft_bft_groupsSize;
(_dialog displayCtrl 2011) ctrlEnable (!tft_bft_groupsSizeForce);

(_dialog displayCtrl 2012) cbSetChecked tft_bft_groupsNames;
(_dialog displayCtrl 2012) ctrlEnable (!tft_bft_groupsNamesForce);

// -- unit
{ (_dialog displayCtrl 3010) lbAdd _x } forEach ["None", "Group", "Side"];
(_dialog displayCtrl 3010) lbSetCurSel tft_bft_unitsShow;
(_dialog displayCtrl 3010) ctrlEnable (!tft_bft_unitsShowForce);

(_dialog displayCtrl 3011) sliderSetRange [0.25, 2];
(_dialog displayCtrl 3011) sliderSetSpeed [2, 4];
(_dialog displayCtrl 3011) sliderSetPosition tft_bft_unitsSize;
(_dialog displayCtrl 3011) ctrlEnable (!tft_bft_unitsSizeForce);

(_dialog displayCtrl 3012) cbSetChecked tft_bft_unitsNames;
(_dialog displayCtrl 3012) ctrlEnable (!tft_bft_unitsNamesForce);
