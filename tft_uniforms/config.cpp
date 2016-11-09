#include "defines.hpp"

class CfgPatches {
    class tft_uniforms {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F_BLUFOR"};
        version = 1.0;
        author = "YoursTruly, Fitzgerald";
    };
};

class cfgVehicles {
    class B_Soldier_base_F;    // External class reference
    class B_AssaultPack_blk; // External class reference
    class B_Kitbag_cbr; // External class reference

    UNIT(OCP)
    UNIT(UCP)
    UNIT(WNT)

    BACKPACK(OCP)
    BACKPACK(UCP)
    BACKPACK(WNT)
};

class cfgWeapons {
    class UniformItem; // External class reference
    class ItemCore; // External class reference
    class HelmetBase; // External class reference
    class U_B_CombatUniform_mcam; // External class reference
    class U_B_CombatUniform_mcam_vest; // External class reference
    class Vest_NoCamo_Base; // External class reference
    class H_Booniehat_khk; // External class reference
    class H_Beret_02; // External class reference
    
    class H_HelmetSpecB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetIA : H_HelmetB {
        class ItemInfo;
    };
    class H_MilCap_ocamo : HelmetBase {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr : Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrierGL_rgr : Vest_NoCamo_Base {
        class ItemInfo;
    };
    
    class Beret_160th : H_Beret_02 {
        displayName = "160th SOAR Beret";
        author = "TFT8";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\beret160th.paa"};
    };

    class Beret_75th : H_Beret_02 {
        displayName = "75th Ranger Beret";
        author = "TFT8";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\beret75th.paa"};
    };

    UNIFORM(OCP)
    UNIFORM(UCP)
    UNIFORM(WNT)

    VEST(OCP)
    VEST(UCP)
    VEST(WNT)

    HELMET(OCP)
    HELMET(UCP)
    HELMET(WNT)

    PROTEC(Black)
    PROTEC(Tan)
};