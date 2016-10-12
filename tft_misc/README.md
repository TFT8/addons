# TFT Miscellaneous

Minor scripts and features used mainly in missions.

Available functions:
- **Move Respawn Point**
  Moves respawn markers (_respawn_west_, _respawn_east_, _respawn_guerrila_, _respawn_civilian_) to position of markers created on the map, named _RESPAWN_BLU_, _RESPAWN_OPF_, _RESPAWN_IND_, _RESPAWN_CIV_. Call `TFT_fnc_moveRespawn` to do so. If a marker is a dot, it will get invisible, otherwise it will become an undeletable icon.
- **Preparation Phase**
  Prevents players from dying and dropping stuff on the ground. Call `TFT_fnc_prepPhaseInit` to begin this phase and `TFT_prepPhase = false; publicVariable "TFT_prepPhase";` to finish it.
- **Simulation Management**
  Adds possibility to freeze all units and vehicles in place. You can give someone powers to manage simulation by calling `[_unit] call TFT_fnc_simulationMgmt` and/or you can switch simulation ON and OFF with `call TFT_fnc_simulationToggle`.
- **Spectator**
  Obviously it allows you to spectate. Call `[_unit, _exitable] call TFT_fnc_spectate` to get into spectator mode. Your unit will disappear and if `_exitable` is set to false, you won't be able to go back (useful for 1-life-only missions).
