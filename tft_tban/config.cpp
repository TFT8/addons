class CfgPatches {
    class tft_tban {
        units[] = { "TBan_TL", "TBan_CLS", "TBan_AR", "TBan_Rifleman", "TBan_AT", "TBan_Rifleman2", "TBan_DMR",
                    "O_Tban_ZU23", "O_Tban_DSHKM", "O_Tban_DSHKM_Mini", "O_Tban_KORD", "O_Tban_KORD_High", "O_Tban_AGS", "O_Tban_Metis",
                    "O_Tban_SPG9", "O_Tban_Igla", "O_Tban_82mm", "O_Tban_D30", "O_TBan_Ural", "O_TBan_Ural_Open", "O_TBan_Ural_Ammo",
                    "O_TBan_Ural_Repair", "O_TBan_Ural_Fuel", "O_TBan_Ural_BM21", "O_TBan_Ural_ZU23", "O_TBan_Hilux", "O_TBan_Hilux_MG",
                    "O_TBan_Hilux_AGS30", "O_TBan_Hilux_SPG", "O_TBan_BRDM2", "O_TBan_BTR60", "O_TBan_BMP1", "O_TBan_BMP2", "O_TBan_BMP2_HQ",
                    "O_TBan_BMP2_Ambul", "O_TBan_ZSU", "O_TBan_T34", "O_TBan_T55", "O_TBan_T72", "O_TBan_T72BM", "O_TBan_MI8", "O_TBan_MI8MTV", "O_TBan_MI24V"
                  };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"Taliban_fighters", "mas_vehicleweapons_Core"};
    };
};

class SlotInfo;        // External class reference
class PointerSlot;    // External class reference

class CfgAmmo {
    class RocketBase;   // External class reference

    class R_PG7_F: RocketBase {
        airLock = 1;
    };
};

#include CfgWeapons.hpp
#include CfgVehicles.hpp
#include CfgGroups.hpp
