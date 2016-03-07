params ["_player", "_target"];

(!isNil "ACE_Tweaks_legs") &&
{ACE_Tweaks_legs} &&
{_target getHit "legs" >= 0.50} && 
{_target call ace_medical_fnc_isInStableCondition} && 
{[_player] call ace_medical_fnc_isMedic}
