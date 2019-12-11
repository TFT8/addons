class CfgPatches {
    class tft_zeus {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"ace_common"};
        version = 2.0.0;
        versionStr = 2.0.0;
        versionAr[] = {2, 0, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    #include "functions\CfgFunctions.hpp"
};

class Extended_Init_EventHandlers {
    class ModuleCurator_F {
        class tft_zeus_init_eh {
            clientInit  = "_this call tft_zeus_fnc_ehCuratorObjectPlaced";
        };
    };
};

class Extended_PostInit_EventHandlers {
    class tft_zeus {
        init = "call tft_zeus_fnc_customModules";
    };
};
