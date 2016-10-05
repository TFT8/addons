class CfgPatches {
    class tft_bft {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"ace_common"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

#include "UI\dialog.hpp"
#include "UI\changeCallsignDialog.hpp"

class CfgFunctions {
    class tft_bft {
        class tft_bft {
            file = "tft_bft\functions";
            class initClient { postInit=1; };
            class assignCallsigns { preInit=1; };
            class addMapEH;
            class drawGroupIcon;
            class drawUnitIcon;
            class onDialogOpen;
            class onDialogClose;
        };
    };
};
