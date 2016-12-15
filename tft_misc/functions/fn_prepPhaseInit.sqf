/*
 * Author: yourstruly
 * Start preparation phase for players and the server.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call TFT_fnc_prepPhaseInit;
 */
if(!isNil "TFT_prepPhase") exitWith {};
TFT_prepPhase = true;

if(hasInterface) then {
    call TFT_fnc_prepPhase;
};

if(isServer) then {
    TFT_prepPhaseTime = 0;
    [{
        if(TFT_prepPhase) then {
            parseText format ["<t size='1.2' color='#f1c40f'>Preparation phase is in progress.<br/>Elapsed time: </t><t size='1.2' color='#2980b9'>%1min.</t>", TFT_prepPhaseTime] remoteExec ["hint", -2];
            TFT_prepPhaseTime = TFT_prepPhaseTime + 1;
        } else {
            [_this select 1] call CBA_fnc_removePerFrameHandler;
        };
    }, 60, nil] call CBA_fnc_addPerFrameHandler;
};
