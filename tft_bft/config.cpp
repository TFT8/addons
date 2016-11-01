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

class IGUIBack;             // External class reference
class RscFrame;             // External class reference
class RscEdit;              // External class reference
class RscText;              // External class reference
class RscCheckbox;          // External class reference
class RscCombo;             // External class reference
class RscXSliderH;          // External class reference
class RscXListBox;          // External class reference
class RscButtonMenuCancel;  // External class reference
class RscButtonMenuOK;      // External class reference

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
