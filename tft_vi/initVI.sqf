if !( (getMissionConfigValue ["respawnTemplates", []] isEqualTo ["MenuPosition"]) &&
      {uiNamespace getVariable ["BIS_RscRespawnControlsMap_shown", false]}
    ) exitWith {};

_respawnDialog = (findDisplay 12) displayCtrl 88800;

{
    (_respawnDialog controlsGroupCtrl _x) ctrlShow false
} forEach [88809, 88811, 88813, 88814, 88815, 88816, 88817, 88818, 88820, 88822, 88823, 88824, 88825, 88833, 88834];

_ctrlVimButton = _respawnDialog controlsGroupCtrl 88901;
if(_ctrlVimButton isEqualTo controlNull) then {
    _pos = ctrlPosition (_respawnDialog controlsGroupCtrl 88829);
    _pos set [1, (ctrlPosition (_respawnDialog controlsGroupCtrl 88808)) select 1];
    _ctrlVimButton = (findDisplay 12) ctrlCreate ["RscButtonMenu", 88901, _respawnDialog];
    _ctrlVimButton ctrlSetPosition _pos;
    _ctrlVimButton ctrlCommit 0;
    _ctrlVimButton ctrlSetBackgroundColor [(profileNamespace getVariable ['GUI_BCG_RGB_R',0.77]),
                                           (profileNamespace getVariable ['GUI_BCG_RGB_G',0.51]),
                                           (profileNamespace getVariable ['GUI_BCG_RGB_B',0.08]),
                                           (profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])];
    _ctrlVimButton ctrlSetStructuredText parseText "<t size='0.55'>&#160;</t><br/><t size='1' align='center'>SHOW VIM</t>";
    _ctrlVimButton buttonSetAction "call tft_vim_fnc_open";
	_ctrlVimButton ctrlEnable false;
};

_ctrlGearList = _respawnDialog controlsGroupCtrl 88902;
if(_ctrlGearList isEqualTo controlNull) then {
    _pos = ctrlPosition (_respawnDialog controlsGroupCtrl 88808);
    _pos set [0, (_pos select 0) +
                 ((ctrlPosition (_respawnDialog controlsGroupCtrl 88804)) select 0) -
                 ((ctrlPosition (_respawnDialog controlsGroupCtrl 88802)) select 0)
             ];
    _ctrlGearList = (findDisplay 12) ctrlCreate ["RscListBox", 88902, _respawnDialog];
    _ctrlGearList ctrlSetPosition _pos;
    _ctrlGearList ctrlCommit 0;
    _ctrlGearList ctrlSetBackgroundColor [0, 0, 0, 0];
} else {
    lbClear _ctrlGearList;
};

_arsenals = profilenamespace getvariable ["bis_fnc_saveInventory_data",[]];
{
	_idx = _ctrlGearList lbAdd _x;
    if(_x == "[Current gear]") then {
        _ctrlGearList lbSetColor [_idx, [0.77, 0.51, 0.08, 1]];
    };
} forEach (_arsenals select {_x isEqualType ""});

lbSort _ctrlGearList;
if((lbSize _ctrlGearList) > 0) then {
    _ctrlGearList lbSetCurSel 0;
};

[{
    if(uiNamespace getVariable ["BIS_RscRespawnControlsMap_shown", false] || {!alive player}) exitWith {};

    (_this select 0) params ["_button", "_list"];
    [_this select 1] call CBA_fnc_removePerFrameHandler;

    _gear = _list lbText (lbCurSel _list);
    [player, [profileNamespace, _gear]] call BIS_fnc_loadInventory;

}, 0, [_ctrlVimButton, _ctrlGearList]] call CBA_fnc_addPerFrameHandler;

false
