/*
 * Name: addMapEH
 * Add handler that draws icons on the map.
 *
 * Params:
 * -
 *
 * Return:
 * -
 *
 * call tft_bft_fnc_addMapEH
*/
disableSerialization;
tft_bft_eh = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", {
    {
        if( (tft_bft_groupsShow == 1 && {group _x == group player}) ||
            {tft_bft_groupsShow == 2 && {side _x  == side player }} ) then
        {
            [_this select 0, _x] call tft_bft_fnc_drawUnitIcon;
        };
        if(leader group _x == _x) then {
            if( (tft_bft_unitsShow == 1 && {group _x == group player}) ||
                {tft_bft_unitsShow == 2 && {side _x  == side player }} ) then
            {
                [_this select 0, _x] call tft_bft_fnc_drawGroupIcon;
            };
        };
    } forEach allPlayers;
}];
