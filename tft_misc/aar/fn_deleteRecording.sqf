/*
 * Author: yourstruly
 * Delete recording from the database.
 *
 * Arguments:
 * 0: Delete button control <CONTROL>
 *
 * Return Value:
 * -
 *
 * Example:
 * [_ctrl] call tft_aar_fnc_deleteRecording;
 */
params ["_button"];

private _list = ctrlParent _button displayCtrl 200;
private _name = _list lbText lbCurSel _list;

[_name] remoteExec ["tft_aar_fnc_deleteRecordingFromDB", 2];

_list lbDelete lbCurSel _list;
