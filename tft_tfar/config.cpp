class CfgPatches {
    class tft_tfar {
        units[] =  {};
        weapons[] =  {};
        requiredVersion = 1.0;
        requiredAddons[] = { "CBA_Main", "task_force_radio_items", "task_force_radio"};
        author = "S4 @ TFT8, YoursTruly, Fitzgerald";
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

class CfgVehicles {

class tf_rt1523g;

    class rt1523g_tft_ucp: tf_rt1523g {
        author = "S4 @ TFT8 / Fitzgerald, Truly";
        displayName = "UCP RT-1523G (ASIP)";
        descriptionShort = "RT-1523G (ASIP) UCP long range radio 20km";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\rt1523g_tft_ucp_co.paa"};
    };
    class rt1523g_tft_ocp: rt1523g_tft_ucp {
        displayName = "OCP RT-1523G (ASIP)";
        descriptionShort = "RT-1523G (ASIP) OCP long range radio 20km";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\rt1523g_tft_ocp_co.paa"};
    };
    class rt1523g_tft_ucp_big: rt1523g_tft_ucp {
        displayName = "UCP RT-1523G (ASIP) Big";
        descriptionShort = "RT-1523G (ASIP) UCP (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\rt1523g_tft_ucp_big_co.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };
    class rt1523g_tft_ocp_big: rt1523g_tft_ucp {
        displayName = "OCP RT-1523G (ASIP) Big";
        descriptionShort = "RT-1523G (ASIP) OCP (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\rt1523g_tft_ocp_big_co.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };
    class rt1523g_tft_wnt_big_tft: rt1523g_tft_ucp {
        displayName = "WNT RT-1523G (ASIP) Big";
        descriptionShort = "RT-1523G (ASIP) Winter (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\rt1523g_tft_wnt_big_co.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };
};