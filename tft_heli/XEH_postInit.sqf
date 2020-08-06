// ACE actions for RHS CH-47 floor hatch
private _displayName = "Move To Hatch";
private _icon = "\a3\ui_f\data\GUI\Cfg\Hints\BasicLook_ca.paa";
private _statement = tft_fnc_moveToHatch;
private _condition = tft_fnc_canMoveToHatch;
private _action = ["tft_heli_moveToHatch", _displayName, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
["RHS_CH_47F_base", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_displayName = "Move From Hatch";
_icon = "\a3\ui_f\data\GUI\Cfg\Hints\BasicLook_ca.paa";
_statement = tft_fnc_moveFromHatch;
_condition = {true};
_action = ["tft_heli_moveFromHatch", _displayName, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
["tft_proxy_floorhatch", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
