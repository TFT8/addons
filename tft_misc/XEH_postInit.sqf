// Add keybinds
["TFT Misc", "tft_misc_toggleHUD", "Toggle HUD", {false}, {
	// Statement
    if (isNil "tft_showHUD") then {tft_showHUD = true};
	tft_showHUD = !tft_showHUD;
    showHUD [tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD,tft_showHUD];
	if !(isNil "STHud_UIMode") then {STHud_UIMode = [0, STHud_Settings_HUDMode] select tft_showHUD;};
    true
}, [24, [false, false, false]], false] call CBA_fnc_addKeybind; // O
