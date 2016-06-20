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

[{
    if(isNull (findDisplay 12)) exitWith {};

    [_this select 1] call CBA_fnc_removePerFrameHandler;

    tft_bft_eh = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", {
        {
            if(player distance2d _x < tft_bft_drawDistance) then {
                if( (tft_bft_unitsShow == 1 && {group _x == group player}) ||
                    {tft_bft_unitsShow == 2 && {side _x  == side player }} ) then
                {
                    [_this select 0, _x] call tft_bft_fnc_drawUnitIcon;
                };
            };

            if(leader _x == _x) then {
                if( (tft_bft_groupsShow == 1 && {group _x == group player}) ||
                    {tft_bft_groupsShow == 2 && {side _x  == side player }} ) then
                {
                    [_this select 0, _x] call tft_bft_fnc_drawGroupIcon;
                };
            };
        } forEach allPlayers;
    }];

}, 0, nil] call CBA_fnc_addPerFrameHandler;
