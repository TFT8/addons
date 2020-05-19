class CfgPatches {
    class tft_dismount{
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[]={"Extended_Eventhandlers"};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    class tft_dismount {
        tag = "tft";
        class functions {
            file = "\tft_dismount\functions";
            class dismount;
        };
    };
};

class Extended_PostInit_EventHandlers {
    class tft_dismount_postinit_eh {   
        init = "call compile preprocessFileLineNumbers '\tft_dismount\XEH_postInit.sqf'";
    };
};
