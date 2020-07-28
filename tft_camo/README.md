# TFT Miscellaneous

Minor scripts and features used mainly in missions. It also makes vanilla RPG-7 to be used against infantry and air.

Available functions:
- **Move Respawn Point**
  Moves respawn markers (_respawn_west_, _respawn_east_, _respawn_guerrila_, _respawn_civilian_) to position of markers created on the map, named _RESPAWN_BLU_, _RESPAWN_OPF_, _RESPAWN_IND_, _RESPAWN_CIV_. Call `TFT_fnc_moveRespawn` to do so. If a marker is a dot, it will get invisible, otherwise it will become an undeletable icon.
- **Preparation Phase**
  Prevents players from dying and dropping stuff on the ground. Call `TFT_fnc_prepPhaseInit` to begin this phase and `TFT_prepPhase = false; publicVariable "TFT_prepPhase";` to finish it.
- **Add Actions**
  Adds certain addactions to the object. Call `[_object, _actions] call TFT_fnc_addActions;`, where _actions_ is a list with action names to add. If left empty, all actions will be added. Available options are:
    + **"Arsenal"** - adds Arsenal and VAS menu
    + **"Preparation"** - adds option to end preparation phase (NOTE:it still needs to be initialized in the _init.sqf_)
    + **"Respawns"** - adds _move respawn points_ action
    + **"Spectator"** - adds option for moving into spectator view

Add keybind to toggle HUD including STHUD and STGI, default O for Oscar
Add anti-bounce for base game and RHS GL smoke shells
Add keybind to launch GCam
