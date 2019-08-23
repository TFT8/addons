[
    'tft_dismount_setting_priority',
    "SLIDER",
    [
        "Priority",
        "Priority value of the action. Actions will be arranged in descending order according to this value. Every game action has a preset priority value. Value can be negative or decimal fraction. Actions with same values will be arranged in order which they were made, newest at the bottom. The bigger the number the higher the action will be positioned on the menu. Typical range is 0 (low priority. Eg: 'Get out') to 6 (high priority. Eg: 'Auto-hover on')"
    ],
    "TFT Dismount",
    [-99,99,7,0],
	nil,
	{
        params ["_priority"];
		[player, _priority] call tft_fnc_addDismountAction
	}
] call CBA_fnc_addSetting;
[
    'tft_dismount_setting_override',
    "CHECKBOX",
    [
        "Override Get Out Action",
        "Hides the Get Out entry from the action menu. Requires a game restart."
    ],
    "TFT Dismount",
    true,
	nil,
	{
        profileNamespace setVariable ['tft_dismount_setting_override', parseNumber !_this];
        saveProfileNamespace;
	}
] call CBA_fnc_addSetting;