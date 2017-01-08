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
    class tft_ace {
        class tft_ace {
            file = "tft_ace\functions";
            class scream;
            class getIn;
            class canTag;
            class tag;
            class tagClear;
            class markClear;
            class markerSize;
        };
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Tags {
                class ACE_tagWallArtistic {
                    displayName = "Go artistic";
                    condition = "[_player] call tft_ace_fnc_canTag";
                    statement = "[_player, 5] call tft_ace_fnc_tag";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\retag.paa";
                };
                class ACE_tagClear {
                    displayName = "Mark Clear";
                    condition = "[_player] call ACE_tagging_fnc_checkTaggable && {'ACE_SpraypaintGreen' in items _player}";
                    statement = "[_player,3] call tft_ace_fnc_tagClear; _player call tft_ace_fnc_markClear;";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\clearIcon_ca.paa";
                };
            };
        };
    };

    class BagFence_base_F;
    class ACE_envelope_small: BagFence_base_F {
        ace_trenches_diggingDuration = 90;
        ace_trenches_removalDuration = 50;
    };
    class ACE_envelope_big: BagFence_base_F {
        ace_trenches_diggingDuration = 110;
        ace_trenches_removalDuration = 65;
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
        icon = "\tft_ace\UI\icons\clearIcon_ca.paa";
        markerClass = "tft_markers";
        color[] = {1, 1, 1, 1};
        size = 20;
        scope = 2;
        scopeCurator = 2;
        shadow = 0;
    };
};

class Extended_PostInit_EventHandlers {
    class tft_ace {
        init = "call compile preprocessFileLineNumbers '\tft_ace\init.sqf'";
    };
};
