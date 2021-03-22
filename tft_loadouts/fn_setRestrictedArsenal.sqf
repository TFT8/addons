if (!isServer) exitWith {
    _this remoteExecCall ["tft_fnc_setRestrictedArsenal", 2];
};

params ["_entity"];
if (_entity getVariable ["tft_isRestrictedArsenal", false]) exitWith {};

#include "_backpacks.hpp"
#include "_items.hpp"
#include "_magazines.hpp"
#include "_weapons.hpp"

[_entity, _backpacks + _items + _magazines + _weapons, true] call ace_arsenal_fnc_initBox;
[_entity, _backpacks, true] call bis_fnc_addVirtualBackpackCargo;
[_entity, _items, true] call bis_fnc_addVirtualItemCargo;
[_entity, _magazines, true] call bis_fnc_addVirtualMagazineCargo;
[_entity, _weapons, true] call bis_fnc_addVirtualWeaponCargo;
_entity setVariable ["tft_isRestrictedArsenal", true];
