/*
 * Author: yourstruly
 * Make sure that during this phase unit doesn't get hurt.
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * call TFT_fnc_prepPhase;
 */

player allowDamage false;
_id = player addEventHandler ["Put", {
    _container = _this select 1;
    if(_container isKindOf "groundWeaponHolder") then {
        deleteVehicle _container;
    };
}];

[{
    if(!TFT_prepPhase) then {
        [_this select 1] call CBA_fnc_removePerFrameHandler;
        player allowDamage true;
        player removeEventHandler ["Put", _this select 0];
        "<t size='0.85' color='#aaff55'>Preparation phase ended" call TFT_fnc_displayText;
    } else {
        "<t size='0.7' color='#ffaa55'>Preparation phase in progress" call TFT_fnc_displayText;
    };
}, 1, _id] call CBA_fnc_addPerFrameHandler;
