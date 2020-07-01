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
};

class CfgWeapons {
    class Default;
    class ItemInfo: Default {
        scope = 1;
    };
};