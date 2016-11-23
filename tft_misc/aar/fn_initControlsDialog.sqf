/*
 * Author: yourstruly
 * Prepare playback controls.
 *
 * Arguments:
 * 0: Controls display <DISPLAY>
 *
 * Return Value:
 * -
 *
 * Example:
 * [_ctrl] call tft_aar_fnc_initControlsDialog;
 */
params ["_dialog"];

if(isNil "tft_aar_length") exitWith { systemChat "Recording not initialized."; };

uiNamespace setVariable ["tft_aar_speedCtrl", _dialog displayCtrl 200];
uiNamespace setVariable ["tft_aar_playCtrl" , _dialog displayCtrl 300];
uiNamespace setVariable ["tft_aar_timerCtrl", _dialog displayCtrl 400];

(uiNamespace getVariable "tft_aar_playCtrl")  ctrlSetText "\tft_misc\aar\data\play.paa";
(uiNamespace getVariable "tft_aar_playCtrl")  ctrlSetTextColor ([[1,1,1,1], [0.9,0.494,0.133,1]] select tft_aar_play);
(uiNamespace getVariable "tft_aar_speedCtrl") ctrlSetText format ["%1x", tft_aar_speed];
(uiNamespace getVariable "tft_aar_timerCtrl") progressSetPosition 0;

private _eh = {
    private _speeds = [2, 5, 10, 20, 30, 60];

    switch (_this select 1) do {
        case 1: {   //ESC
            call tft_aar_fnc_terminate;
            true
        };
        case 57: {  //SPACE
            tft_aar_play = !tft_aar_play;
            (uiNamespace getVariable "tft_aar_playCtrl") ctrlSetTextColor ([[1,1,1,1], [0.9,0.494,0.133,1]] select tft_aar_play);
            true
        };
        case 200: { //UP
            tft_aar_speed = _speeds select ((count _speeds - 1) min ((_speeds find tft_aar_speed) + 1));
            (uiNamespace getVariable "tft_aar_speedCtrl") ctrlSetText format ["%1x", tft_aar_speed];
            true
        };
        case 208: { //DOWN
            tft_aar_speed = _speeds select (0 max ((_speeds find tft_aar_speed) - 1));
            (uiNamespace getVariable "tft_aar_speedCtrl") ctrlSetText format ["%1x", tft_aar_speed];
            true
        };
        case 205: { //RIGHT
            tft_aar_cursor = tft_aar_length min (tft_aar_cursor + 10);
            (uiNamespace getVariable "tft_aar_timerCtrl") progressSetPosition (tft_aar_cursor/tft_aar_length);
            true
        };
        case 203: { //LEFT
            tft_aar_cursor = 0 max (tft_aar_cursor - 10);
            (uiNamespace getVariable "tft_aar_timerCtrl") progressSetPosition (tft_aar_cursor/tft_aar_length);
            true
        };
        default {
            false
        };
    }
};

tft_aar_eh pushBack ((findDisplay 46) displayAddEventHandler ["KeyDown", _eh]);
tft_aar_eh pushBack ((findDisplay 12) displayAddEventHandler ["KeyDown", _eh]);
