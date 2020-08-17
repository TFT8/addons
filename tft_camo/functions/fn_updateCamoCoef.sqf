/*
 * Author: Ampers
 * Updates player's camouflageCoef based on world, uniform, and surface
 *
 * Arguments:
*  -
 *
 * Return Value:
 * camouflageCoef
 *
 * Example:
 * [] call tft_fnc_updateCamoCoef
 */

if !(TFT_camo_uniform isEqualTo uniform player) then {
    TFT_camo_uniform = uniform player;
    TFT_camo_uniformType = {
        _x params ["_uniformType", "_uniformList"];

        if (TFT_camo_uniform in _uniformList) exitWith {
            _uniformType
        };
        
        "camoType_multi"
    } forEach tft_camo_uniformTypes;
};

if (TFT_camo_uniformType isEqualTo "undefined") exitWith {};

private _isInList = (surfaceType position player select [1]) in TFT_camo_surfaceList;
TFT_camo_isPlayerOnExposedSurface = if TFT_camo_isSurfaceListExposed then {
    _isInList
} else {
    !_isInList
};

private _coef = {
    _x params ["_camoType", "_coefTypical", "_coefExposed"];

    if (TFT_camo_uniformType isEqualTo _camoType) exitWith {
        if TFT_camo_isPlayerOnExposedSurface then {
            _coefExposed
        } else {
            _coefTypical
        }
    };
    
    1
} forEach TFT_camo_uniformTypeCoefList;

if (TFT_camo_coef != _coef) then {
    player setUnitTrait ['camouflageCoef', _coef];
    TFT_camo_coef = _coef;
};

_coef