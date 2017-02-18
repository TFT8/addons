class CfgPatches {
    class tft_tfar {
        units[] =  { "tf_rt1523g_ucp", "tf_rt1523g_ocp", "tf_rt1523g_wnt", "tf_rt1523g_ucp_big", "tf_rt1523g_ocp_big", "tf_rt1523g_wnt_big" };
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
    class TFAR_Bag_Base;

//----------------------------------------- TFT8 Radios
    class tf_rt1523g_ucp: tf_rt1523g {
        author = "S4 @ TFT8 / Fitzgerald, Truly";
        displayName = "RT-1523G (ASIP) TFT8 [UCP]";
        descriptionShort = "RT-1523G (ASIP) UCP long range radio 20km";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ucp.paa"};
    };
    class tf_rt1523g_ocp: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) TFT8 [OCP]";
        descriptionShort = "RT-1523G (ASIP) OCP long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ocp.paa"};
    };
    class tf_rt1523g_wnt: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) TFT8 [WNT]";
        descriptionShort = "RT-1523G (ASIP) WNT long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\wnt.paa"};
    };
    class tf_rt1523g_ucp_big: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) Big TFT8 [UCP]";
        descriptionShort = "RT-1523G (ASIP) UCP (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ucp_big.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };
    class tf_rt1523g_ocp_big: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) Big TFT8 [OCP]";
        descriptionShort = "RT-1523G (ASIP) OCP (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ocp_big.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };
    class tf_rt1523g_wnt_big: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) Big TFT8 [WNT]";
        descriptionShort = "RT-1523G (ASIP) WNT (Big) long range radio 20km";
        maximumLoad = 160;
        mass = 160;
        hiddenSelectionsTextures[] = {"\tft_tfar\data\wnt_big.paa"};
        model="\task_force_radio_items\models\clf_nicecomm2";
    };

//------------------------------------------ Arsenal Clean Up
    class tf_rt1523g_rhs: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_big_rhs: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_big_bwmod: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_big_bwmod_tropen: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_bwmod: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_fabric: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_green: tf_rt1523g {
        scope = 1;
    };
    class tf_rt1523g_sage: tf_rt1523g {
        scope = 1;
    };
    class tf_anprc155: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_mr3000: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_mr3000_bwmod: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_mr3000_bwmod_tropen: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_anarc210: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_anarc164: TFAR_Bag_Base {
        scope = 1;
    };
    class tf_mr6000l: TFAR_Bag_Base {
        scope = 1;
    };
};

class CfgWeapons {
    class ItemRadio;
//--------------------------------- Arsenal Cleanup
    class tf_anprc154: ItemRadio {
        scope = 1;
    };
    class tf_pnr1000a: ItemRadio {
        scope = 1;
    };
};
