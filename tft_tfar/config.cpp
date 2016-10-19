class CfgPatches {
    class tft_tfar {
        units[] =  {};
        weapons[] =  {};
        requiredVersion = 1.0;
        requiredAddons[] = { "CBA_Main", "task_force_radio_items", "task_force_radio"};
        author = "YoursTruly";
        version = 2.0.0;
        versionStr = "2.0.0";
        versionAr[] = {2,0,0};
    };
};

class CfgFunctions {
    class TFAR {
        class Radio {
            class ServerInit {file = "tft_tfar\fn_ServerInit.sqf";};
            class ClientInit {file = "tft_tfar\fn_ClientInit.sqf";};
        };
    };
};
