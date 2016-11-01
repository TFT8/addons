class CfgPatches {
    class tft_icons {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"tf47_launchers", "Tracked_Raid", "UK3CB_BAF_Vehicles_Apache", "UK3CB_BAF_Vehicles_Weapons"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly, Fitzgerald";
    };
};

class CfgVehicles {
    class B_Soldier_base_F;             // External class reference
    class FlagCarrier_Asym;             // External class reference
    class NATO_Box_Base;                // External class reference

    class Tank;                         // External class reference

    class UK3CB_BAF_Apache_base;        // External class reference
    class UK3CB_BAF_Box_Ammo_Base;      // External class reference
    class UK3CB_BAF_Box_Grenades_Base;  // External class reference
    class UK3CB_BAF_Vehicles_Servicing_Point_Base;  // External class reference
    class UK3CB_BAF_HeliPilot_base;     // External class reference

    class TF47_B_soldier_AT4HEAT : B_Soldier_base_F {
        editorPreview = "tft_icons\UI\TF47_B_soldier_AT4HEAT.jpg";
    };
    class TF47_B_soldier_AT4HEDP : B_Soldier_base_F {
        editorPreview = "tft_icons\UI\TF47_B_soldier_AT4HEDP.jpg";
    };
    class TF47_B_soldier_AT4HP : B_Soldier_base_F {
        editorPreview = "tft_icons\UI\TF47_B_soldier_AT4HP.jpg";
    };
    class TF47_B_soldier_M3MAAWS : B_Soldier_base_F {
        editorPreview = "tft_icons\UI\TF47_B_soldier_M3MAAWS.jpg";
    };
    class TF47_B_soldier_SMAW : B_Soldier_base_F {
        editorPreview = "tft_icons\UI\TF47_B_soldier_SMAW.jpg";
    };
    class TF47_flag : FlagCarrier_Asym {
        editorPreview = "tft_icons\UI\TF47_flag.jpg";
    };
    class tf47_launcherbox : NATO_Box_Base {
        editorPreview = "tft_icons\UI\tf47_launcherbox.jpg";
    };

    class M1A1_Raid : Tank {
        editorPreview = "tft_icons\UI\M1A1_Raid.jpg";
    };
    class M1A2_TUSK_Raid : M1A1_Raid {
        editorPreview = "tft_icons\UI\M1A2_TUSK_Raid.jpg";
    };
    class Nato_Abrams_Tan_Raid : M1A1_Raid {
        editorPreview = "tft_icons\UI\Nato_Abrams_Tan_Raid.jpg";
    };
    class M1A2_TUSK_Tan_Raid : M1A2_TUSK_Raid {
        editorPreview = "tft_icons\UI\M1A2_TUSK_Tan_Raid.jpg";
    };
    class M1A2_TUSK_2035_Raid : M1A2_TUSK_Raid {
        editorPreview = "tft_icons\UI\M1A2_TUSK_2035_Raid.jpg";
    };

    class UK3CB_BAF_Apache_AH1 : UK3CB_BAF_Apache_base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Apache_AH1.jpg";
    };
    class UK3CB_BAF_Apache_AH1_AT : UK3CB_BAF_Apache_AH1 {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Apache_AH1_AT.jpg";
    };
    class UK3CB_BAF_Apache_AH1_CAS : UK3CB_BAF_Apache_AH1 {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Apache_AH1_CAS.jpg";
    };
    class UK3CB_BAF_Apache_AH1_JS : UK3CB_BAF_Apache_AH1 {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Apache_AH1_JS.jpg";
    };
    class UK3CB_BAF_Box_L7A2_Ammo : UK3CB_BAF_Box_Ammo_Base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Box_L7A2_Ammo.jpg";
    };
    class UK3CB_BAF_Box_L111A1_Ammo : UK3CB_BAF_Box_Ammo_Base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Box_L111A1_Ammo.jpg";
    };
    class UK3CB_BAF_Box_L134A1_Ammo : UK3CB_BAF_Box_Grenades_Base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Box_L134A1_Ammo.jpg";
    };
    class UK3CB_BAF_Vehicles_Servicing_Aircraft_Point : UK3CB_BAF_Vehicles_Servicing_Point_Base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Vehicles_Servicing_Aircraft_Point.jpg";
    };
    class UK3CB_BAF_HeliPilot_RAF : UK3CB_BAF_HeliPilot_base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_HeliPilot_RAF.jpg";
    };
    class UK3CB_BAF_HeliPilot_RN : UK3CB_BAF_HeliPilot_base {
        editorPreview = "tft_icons\UI\UK3CB_BAF_HeliPilot_RN.jpg";
    };
    class UK3CB_BAF_Pilot_Army : UK3CB_BAF_HeliPilot_RAF {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Pilot_Army.jpg";
    };
    class UK3CB_BAF_Pilot_RAF : UK3CB_BAF_HeliPilot_RAF {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Pilot_RAF.jpg";
    };
    class UK3CB_BAF_Pilot_RN : UK3CB_BAF_HeliPilot_RN {
        editorPreview = "tft_icons\UI\UK3CB_BAF_Pilot_RN.jpg";
    };
};
