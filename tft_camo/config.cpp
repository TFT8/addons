class CfgPatches {
    class tft_camo {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    class tft_camo {
        tag = "tft";
        class functions {
            file = "\tft_camo\functions";
            class updateCamoCoef;
        };
    };
};

#include "CfgEventHandlers.hpp"
