/*
Author: Ampers
Drop a smoke marker grenade out of a helicopter

* Arguments:
* 0: helicopter
*
* Return Value:
* -

* Example:
* [_heli] call tft_fnc_armDoorGun
*/

params ["_heli"];

if !(_heli isKindOf "Helicopter") exitWith {"Not Helicopter"};
if (_heli weaponsTurret [1] isEqualTo []) exitWith {"No door gun turret"};

//check if pilot already has weapon
private _doorGunWeapons = _heli weaponsTurret [1];
private _pilotWeapons = _heli weaponsTurret [-1];
if (_pilotWeapons arrayIntersect _doorGunWeapons isEqualTo []) then
{
	_doorGunWeapons apply {_heli addWeaponTurret [_x, [-1]];};
};

//check if pilot already has magazine
private _pilotMagazines = _heli magazinesTurret [-1];
private _doorGunMagazines = _heli magazinesTurret [1];
if (_pilotMagazines arrayIntersect _doorGunMagazines isEqualTo []) then
{
	{
		_heli addMagazineTurret [_x, [-1]];
	} forEach _doorGunMagazines;
};