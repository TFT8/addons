/*
 * Author: yourstruly
 * Save buffered data to the DB.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * [_buffer] call tft_aar_fnc_saveBuffer;
 */
if(isNil "tft_aar_db") exitWith { diag_log "Cannot save buffer. Database not initialized."; };
if(isNil "tft_aar_db_frames") then { tft_aar_db_frames = []; };
if(isNil "tft_aar_db_last") then { tft_aar_db_last = 0; };

[{
    if(count (_this select 0) == 0) exitWith {
        ["write", [briefingName, "Frames", tft_aar_db_frames]] call tft_aar_db;
        [_this select 1] call CBA_fnc_removePerFrameHandler;
    };

    private _stamp = (_this select 0) deleteAt 0;
    private _frames = [];
    private _last = 0;
    while {_last < count _stamp} do {
        _chunk = _stamp select [_last, _last+79];
        _last = _last + 79;
        ["write", [briefingName, tft_aar_db_last, _chunk]] call tft_aar_db;
        _frames pushBack tft_aar_db_last;
        tft_aar_db_last = tft_aar_db_last + 1;
    };
    tft_aar_db_frames pushBack _frames;
}, 0.1, +tft_aar_buffer] call CBA_fnc_addPerFrameHandler;

tft_aar_buffer = [];
