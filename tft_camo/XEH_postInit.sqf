if (!hasInterface) exitWith {};

private _worldName = toLower worldName;

TFT_camo_worldType = {
    _x params ["_worldType", "_worldList"];

    if (_worldName in _worldList) exitWith {
        _worldType
    };
    
    "undefined"
} forEach [
    // World Types
    ["worldType_arid", ["altis", "stratis", "malden", "provinggrounds_pmc", "porto", "intro"]],
    ["worldType_desert", ["takistan", "zargabad", "shapur_baf", "desert_e", "desert_island"]],
    ["worldType_woodland", ["enoch", "tanoa", "chernarus", "chernarus_summer", "woodland_acr", "bootcamp_acr", "sara", "sara_dbe1", "saralite", "cain", "namalsk"]],
    ["worldType_snow", ["chernarus_winter"]]
];

if (TFT_camo_worldType isEqualTo "undefined") exitWith {};

#include "worldSurfaceCamo.sqf"

TFT_camo_uniform = "";
TFT_camo_uniformType = "";
#include "uniformCamoTypes.sqf"

TFT_camo_coef = 1;

TFT_camo_PFHID = [tft_fnc_updateCamoCoef, 1] call CBA_fnc_addPerFrameHandler;
