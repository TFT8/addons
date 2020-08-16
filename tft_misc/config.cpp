class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {
            "cba_main",
            "ace_main",
            "rhsusf_c_weapons"
        };
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
    };
};

class CfgFunctions {
    class tft_misc {
        tag = "tft";
        class functions {
            file = "\tft_misc\functions";
            class addActions;
            class moveMarker;
            class moveRespawn;
            class displayText;
            class prepPhaseInit;
            class prepPhase;
            class reduceFoliage;
        };
    };
};

#include "gcam\gcam_component.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
