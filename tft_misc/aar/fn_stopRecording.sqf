/*
 * Author: yourstruly
 * Stop saving data for AAR.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call tft_aar_fnc_stopRecording;
 */
if(isNil "tft_aar_recording" || {tft_aar_recording == -1}) exitWith { diag_log "Recording not in progress."; };

[tft_aar_recording] call CBA_fnc_removePerFrameHandler;
tft_aar_recording = -1;
publicVariable "tft_aar_recording";

call tft_aar_fnc_saveBuffer;

