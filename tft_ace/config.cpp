class CfgPatches {
    class tft_ace {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"ace_medical", "ace_tagging", "ace_trenches"};
        version = 2.0.0;
        versionStr = 2.0.0;
        versionAr[] = {2, 0, 0};
        author = "YoursTruly, Fitzgerald";
    };
};

class CfgFunctions {
    #include "functions\CfgFunctions.hpp"
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Tags {
                class ACE_tagWallArtistic {
                    displayName = "Go artistic";
                    condition = "[_player] call tft_ace_fnc_canTag";
                    statement = "[_player, 'artistic', 5] call tft_ace_fnc_tag";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\retag.paa";
                };
                class ACE_tagClear {
                    displayName = "Mark Clear";
                    condition = "[_player] call ACE_tagging_fnc_checkTaggable && {'ACE_SpraypaintGreen' in items _player}";
                    statement = "[_player, 'clear', 3] call tft_ace_fnc_tag; [_player] call tft_ace_fnc_markClear;";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\clearIcon.paa";
                };
            };
        };
    };
};

class CfgMarkerClasses {
    class tft_markers {
        displayName = "TFT8 Markers";
        scope = 2;
        scopeCurator = 2;
    };
};

class CfgMarkers {
    class tft_clearMarker {
        name = "Building Clear";
        icon = "\tft_ace\UI\icons\clearIcon.paa";
        markerClass = "tft_markers";
        color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
        size = 20;
        scope = 2;
        scopeCurator = 2;
        texture = "\tft_ace\UI\icons\clearIcon.paa";
        shadow = 0;
    };
};

class Extended_PostInit_EventHandlers {
    class tft_ace {
        init = "call compile preprocessFileLineNumbers '\tft_ace\init.sqf'";
    };
};
