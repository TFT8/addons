class CfgPatches {
    class tft_server {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"cba_xeh","cba_xeh_a3"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class Extended_PostInit_EventHandlers {
    class tft_server {
        init = "call compile preprocessFileLineNumbers '\tft_server\tft_opslog.sqf'";
    };
};
