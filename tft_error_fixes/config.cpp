class CfgPatches {
    class tft_error_fixes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"cba_common"};
        author = "Ampers";
    };
};

class CfgVehicles {
    class Land_CraneRail_01_F;
    class Land_A_crane_rails: Land_CraneRail_01_F {};
    class Land_Misc_Cargo1a: Land_CraneRail_01_F {};
    
    class rhsusf_M1238A1_socom_d;
    class rhsusf_M1238A1_socom_w: rhsusf_M1238A1_socom_d {};
    class rhsusf_M1238A1_M2_socom_d;
    class rhsusf_M1238A1_M2_socom_w: rhsusf_M1238A1_M2_socom_d {};
    class rhsusf_M1238A1_Mk19_socom_d;
    class rhsusf_M1238A1_Mk19_socom_w: rhsusf_M1238A1_Mk19_socom_d {};
    class rhsusf_M1239_socom_d;
    class rhsusf_M1239_socom_w: rhsusf_M1239_socom_d {};
    class rhsusf_M1239_M2_Deploy_socom_d;
    class rhsusf_M1239_M2_Deploy_socom_w: rhsusf_M1239_M2_Deploy_socom_d {};
    class rhsusf_M1239_Mk19_Deploy_socom_d;
    class rhsusf_M1239_Mk19_Deploy_socom_w: rhsusf_M1239_Mk19_Deploy_socom_d {};
    class rhsusf_stryker_m1126_m2_d;
    class rhsusf_stryker_m1126_m2_w: rhsusf_stryker_m1126_m2_d {};
};

class CfgWeapons {
    class Default;
    class ItemInfo: Default {
        scope = 1;
    };
};