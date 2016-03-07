if (!hasInterface) exitWith {};
["medical_onUnconscious", {if((_this select 1) && {random 100 < 75}) then {(_this select 0) call ACE3_Tweaks_fnc_scream}; }] call ace_common_fnc_addEventhandler;

//add option to fix legs for medics
_fixWalking = ["fixWalkingAction",
               "Fix legs",
               "",
               {_target setHit ["legs", 0]},
               {(_target getHit "legs" >= 0.50) && {_target call ace_medical_fnc_isInStableCondition} && {[_player] call ace_medical_fnc_isMedic}}
] call ace_interact_menu_fnc_createAction;
[_unit, 0, ["Medical"],_fixWalking] call ace_interact_menu_fnc_addActionToObject;
