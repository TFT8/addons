/*
 * Author: yourstruly
 * Prepare saved recording for playback.
 *
 * Arguments:
 * 0: Playback speed <NUMBER>
 * 1: Recording timestamps <ARRAY>
 *
 * Return Value:
 * -
 *
 * Example:
 * [10, _stamps] call tft_aar_fnc_loadRecording;
 */
params ["_speed", "_buffer"];

["tft_aar", tft_aar_load] call CBA_fnc_removeEventHandler;

tft_aar_play = false;
tft_aar_speed = _speed;
tft_aar_length = count _buffer;
[_buffer select 0] call tft_aar_fnc_getIcons;

// --- map icons
tft_aar_eh = [];
tft_aar_eh pushBack (
    ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", {
        {
            (_this select 0) drawIcon _x;
        } forEach tft_aar_mapicons;
    }]
);

// --- 3D icons
tft_aar_eh pushBack (
    [{
        {
            drawIcon3D _x;
        } forEach tft_aar_icons;
    }] call CBA_fnc_addPerFrameHandler
);

("tft_aar1" call BIS_fnc_rscLayer) cutRsc ["tft_aar_controls", "PLAIN"];
("tft_aar2" call BIS_fnc_rscLayer) cutRsc ["tft_aar_controlsHelp", "PLAIN"];

// --- playback loop
tft_aar_terminated = false;
tft_aar_cursor = 0;
_buffer spawn {
    while {!tft_aar_terminated} do {
        if(tft_aar_play && {tft_aar_cursor < tft_aar_length}) then {
            [_this select tft_aar_cursor] call tft_aar_fnc_getIcons;

            tft_aar_cursor = tft_aar_cursor + 1;
            if(tft_aar_cursor == tft_aar_length) then {
                tft_aar_play = false;
                (uiNamespace getVariable "tft_aar_playCtrl") ctrlSetTextColor ([[1,1,1,1], [0.9,0.494,0.133,1]] select tft_aar_play);
            };
            (uiNamespace getVariable "tft_aar_timerCtrl") progressSetPosition (tft_aar_cursor/tft_aar_length);

            sleep (1/tft_aar_speed);
        };
    };
};
