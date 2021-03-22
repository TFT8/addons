class CfgPatches {
    class tft_loadouts {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"cba_xeh","cba_xeh_a3"};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    class tft_loadouts {
        tag = "tft";
        class functions {
            file = "\tft_loadouts";
            class setRestrictedArsenal;
            class loadouts {postInit = 1;};
        };
    };
};