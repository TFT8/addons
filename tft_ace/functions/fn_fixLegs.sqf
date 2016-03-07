params ["_player", "_target"];

if(alive _target && alive _player) then {
    legs_fixed = false;
    patched_up = false;
    
    _target spawn {
        while {!patched_up} do { sleep 0.1; };
    
        if(legs_fixed) then {
            _hitpoints = _this getvariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0]];
            _hitpoints set[4, 0];
            _hitpoints set[5, 0];
            _this setvariable ["ace_medical_bodyPartStatus", _hitpoints, true];
            _this setHitPointDamage ["hitLegs",  0.0];
        };
    };
    
    [_player, "AinvPknlMstpSlayWrflDnon_medic", 0] call ACE_Common_fnc_doAnimation;

    [6, [!alive _player || !alive _target, true],
     { legs_fixed = true; patched_up = true; },
     { patched_up = false; if(alive ACE_Player) then { [ACE_Player, "AmovPknlMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 2] call ACE_Common_fnc_doAnimation; }; },
     "Fixing legs"
    ] call ACE_Common_fnc_progressBar;
    
    
};  

true;
