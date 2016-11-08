#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

class CfgPatches {
    class tft_ace {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"ace_medical", "ace_tagging", "ace_trenches"};
        version = 2.0.0;
        versionStr = 2.0.0;
        versionAr[] = {2, 0, 0};
        author = "YoursTruly";
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
        };
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ACE_tagWallArtistic {
                    displayName = "Go artistic";
                    condition = "[ACE_player] call tft_ace_fnc_canTag";
                    statement = "[ACE_player, 5] call tft_ace_fnc_tag";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\retag.paa";
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

class Extended_PostInit_EventHandlers {
    class tft_ace {
        init = "call compile preprocessFileLineNumbers '\tft_ace\init.sqf'";
    };
};
