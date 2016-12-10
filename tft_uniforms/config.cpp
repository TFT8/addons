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
    class B_Soldier_base_F;     // External class reference
    class B_AssaultPack_blk;    // External class reference
    class B_Kitbag_cbr;         // External class reference

    UNIT(OCP)
    UNIT(UCP)
    UNIT(WNT)

    BACKPACK(OCP)
    BACKPACK(UCP)
    BACKPACK(WNT)
};

class cfgWeapons {
    class UniformItem;                      // External class reference
    class ItemCore;                         // External class reference
    class HelmetBase;                       // External class reference
    class U_B_CombatUniform_mcam;           // External class reference
    class U_B_CombatUniform_mcam_vest;      // External class reference
    class U_B_CombatUniform_mcam_tshirt;    // External class reference
    class Vest_NoCamo_Base;                 // External class reference
    class H_Booniehat_khk;                  // External class reference
    class H_Beret_02;                       // External class reference

    class H_HelmetSpecB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetB : ItemCore {
        class ItemInfo;
    };
    class H_HelmetIA : H_HelmetB {
        class ItemInfo;
    };
    class H_Helmet_Skate : H_HelmetB {
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

    class TFT_Beret_160th : H_Beret_02 {
        displayName = "160th SOAR Beret";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\UI\beret160.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\beret160th.paa"};
    };
    class TFT_Beret_75th : H_Beret_02 {
        displayName = "75th Ranger Beret";
        author = "TFT8";
        picture = "\tft_uniforms\Misc\UI\beret75.paa";
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

class CfgGlasses {
    class G_Bandanna_beast; // External class reference

    class TFT_Bandana_snow: G_Bandanna_beast {
        displayname = "Bandana (Snow)";
        picture = "\tft_uniforms\Misc\Bandana\UI\snow.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\Bandana\snow.paa"};
    };
    class TFT_Bandana_Skull_black: G_Bandanna_beast {
        displayname = "Bandana (Black) Skull";
        picture = "\tft_uniforms\Misc\Bandana\UI\black_skull.paa";
        hiddenSelectionsTextures[] = {"\tft_uniforms\Misc\Bandana\black_skull.paa"};
    };

    BANDANA(khaki)
    BANDANA(olive)
    BANDANA(tan)
    BANDANA(snow)
};
