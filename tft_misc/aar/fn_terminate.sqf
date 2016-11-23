/*
 * Author: yourstruly
 * Terminate AAR.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call tft_aar_fnc_terminate;
 */
tft_aar_play = false;
tft_aar_terminated = true;

((findDisplay 12) displayCtrl 51) ctrlRemoveEventHandler ["Draw", tft_aar_eh select 0];
[tft_aar_eh select 1] call CBA_fnc_removePerFrameHandler;
(findDisplay 46) displayRemoveEventHandler ["KeyDown", tft_aar_eh select 2];
(findDisplay 12) displayRemoveEventHandler ["KeyDown", tft_aar_eh select 3];

("tft_aar1" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
("tft_aar2" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
