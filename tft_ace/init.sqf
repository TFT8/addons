if (!hasInterface) exitWith {};

["ace_unconscious", {if((_this select 1) && {random 100 < 75}) then {(_this select 0) call tft_ace_fnc_scream}; }] call CBA_fnc_addEventHandler;

_nil = 0 spawn tft_ace_fnc_markerSize;

// prevent ACE advanced fatigue force walk
_handle = [{
	if (ace_advanced_fatigue_anreserve < 100) then { ace_advanced_fatigue_anreserve = 100; };
}, 1,[]] call CBA_fnc_addPerFrameHandler;
