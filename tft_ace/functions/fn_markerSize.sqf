/*
* Author: KillZone Kid
*   Adaption by FitzGerald
*
* Description:
* adjust marker size to stay relevant to size of map
*
* Arguments:
* 
* Return Value:
* 
* Example:
* _nil = 0 spawn tft_ace_fnc_markerSize
*
* Public: [Yes/No]
*/

waitUntil {!isNull findDisplay 12};
findDisplay 12 displayCtrl 51 ctrlAddEventHandler ["Draw", {
    if (visibleMap) then {
        _scale = 0.05 / ctrlMapScale (_this select 0);
        {
            _m = "#markerSize_" + _x;
            if (markerType _x == "tft_clearMarker") then {
                if (isNil {missionNamespace getVariable _m}) then {
                    missionNamespace setVariable [_m, markerSize _x];
                };
                _x setMarkerSizeLocal [
                    ((missionNamespace getVariable _m) select 0) * _scale,
                    ((missionNamespace getVariable _m) select 1) * _scale
                ];
            };              
        } forEach allMapMarkers;
    };
}];
