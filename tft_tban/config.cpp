class CfgPatches {
	class tft_tban {
		units[] = { "O_Tban_ZU23", "O_Tban_DSHKM", "O_Tban_DSHKM_Mini", "O_Tban_KORD", "O_Tban_KORD_High", "O_Tban_AGS", "O_Tban_Metis",
                    "O_Tban_SPG9", "O_Tban_Igla", "O_Tban_82mm", "O_Tban_D30", "O_TBan_Ural", "O_TBan_Ural_Open", "O_TBan_Ural_Ammo",
                    "O_TBan_Ural_Repair", "O_TBan_Ural_Fuel", "O_TBan_Ural_BM21", "O_TBan_Ural_ZU23", "O_TBan_Hilux", "O_TBan_Hilux_MG",
                    "O_TBan_Hilux_AGS30", "O_TBan_Hilux_SPG", "O_TBan_BRDM2", "O_TBan_BTR60", "O_TBan_BMP1", "O_TBan_BMP2", "O_TBan_BMP2_HQ",
                    "O_TBan_BMP2_Ambul", "O_TBan_ZSU", "O_TBan_T34", "O_TBan_T55", "O_TBan_T72", "O_TBan_T72BM", "O_TBan_MI8", "O_TBan_MI8MTV", "O_TBan_MI24V"
                  };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Taliban_fighters", "hlcweapons_aks", "a2_rpg7", "mas_vehicleweapons_Core"};
	};
};

class SlotInfo;	    // External class reference
class PointerSlot;	// External class reference

class cfgWeapons {
    class hlc_rifle_ak12;           // External class reference
    class hlc_rifle_ak12GL;         // External class reference
    class hlc_rifle_RPK12;          // External class reference
    class srifle_DMR_06_olive_F;    // External class reference
    class LMG_Zafir_F;              // External class reference

	class hlc_rifle_ak12GL_TF: hlc_rifle_ak12GL {
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_ACO_grn_smg";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc {
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
    class hlc_rifle_ak12_TE : hlc_rifle_ak12 {
        class LinkedItems {
			class LinkedItemsAcc {
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
    class hlc_rifle_RPK12_TE : hlc_rifle_RPK12 {
        class LinkedItems {
			class LinkedItemsAcc {
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
    class srifle_DMR_06_olive_F_TE : srifle_DMR_06_olive_F {
        class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_KHS_old";
				slot = "CowsSlot";
			};
        };
    };
    class LMG_Zafir_F_TE: LMG_Zafir_F {
        class LinkedItems {
			class LinkedItemsAcc {
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
};

class CfgVehicles {
    class O_Soldier_base_F;	        // External class reference
    class B_G_Offroad_01_armed_F;   // External class reference
    class B_FieldPack_cbr;          // External class reference
    class B_Carryall_oucamo;        // External class reference

    class B_FieldPack_cbr_TE : B_FieldPack_cbr {
        class TransportMagazines {
            class _xx_150Rnd_762x54_Box {
                magazine = "150Rnd_762x54_Box";
                count = 4;
            };
        };
    };
    class B_Carryall_oucamo_TE : B_Carryall_oucamo {
        class TransportMagazines {
            class _xx_RPG7_PG7V {
                magazine = "RPG7_PG7V";
                count = 5;
            };
        };
    };

    class TBan_Fighter1 : O_Soldier_base_F {
		displayName = "Team Leader";
        icon = "iconManLeader";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put", "hlc_rifle_ak12GL_TF"};
		respawnWeapons[] = {"Throw", "Put", "hlc_rifle_ak12GL_TF"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell","SmokeShellPurple"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell","SmokeShellPurple"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","V_BandollierB_blk"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","V_BandollierB_blk"};
	};
    class TBan_Fighter2 : TBan_Fighter1 {
		displayName = "Combat Life Saver";
        icon = "iconManMedic";
        backpack = "I_Fieldpack_oli_Medic";
        picture = "pictureHeal";
        attendant = 1;
		items[] = {};
		respawnitems[] = {};
		weapons[] = {"Throw", "Put","hlc_rifle_ak12_TE"};
		respawnWeapons[] = {"Throw", "Put","hlc_rifle_ak12_TE"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                       "HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                              "HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_oli"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_oli"};
	};
    class TBan_Fighter3 : TBan_Fighter1 {
		displayName = "Autorifleman";
        icon = "iconManMG";
        backpack = "B_FieldPack_cbr_TE";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put","LMG_Zafir_F_TE"};
		respawnWeapons[] = {"Throw", "Put","LMG_Zafir_F_TE"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_brn"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_brn"};
	};
    class TBan_Fighter4 : TBan_Fighter1 {
		displayName = "Rifleman";
        icon = "iconMan";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put","hlc_rifle_ak12_TE","hgun_Rook40_F"};
		respawnWeapons[] = {"Throw", "Put","hlc_rifle_ak12_TE","hgun_Rook40_F"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                       "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                              "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_HarnessOGL_gry"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_HarnessOGL_gry"};
	};
    class TBan_Fighter5 : TBan_Fighter1 {
		displayName = "Rifleman (AT)";
        icon = "iconManAT";
        backpack = "B_Carryall_oucamo_TE";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put","hlc_rifle_ak12_TE","hgun_Rook40_F","launch_RPG7V"};
		respawnWeapons[] = {"Throw", "Put","hlc_rifle_ak12_TE","hgun_Rook40_F","launch_RPG7V"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                       "RPG7_PG7VM","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK",
                              "RPG7_PG7VM","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
	};
    class TBan_Fighter1NH : O_Soldier_base_F {
		displayName = "Rifleman (RPK)";
        icon = "iconMan";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put","hlc_rifle_RPK12_TE","hgun_Rook40_F"};
		respawnWeapons[] = {"Throw", "Put","hlc_rifle_RPK12_TE","hgun_Rook40_F"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk",
                       "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk",
                              "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk","Afghan_04Hat"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk","Afghan_04Hat"};
	};
    class TBan_Fighter6 : TBan_Fighter1 {
		displayName = "Marksman";
        icon = "iconMan";
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"Throw", "Put","srifle_DMR_06_olive_F_TE"};
		respawnWeapons[] = {"Throw", "Put","srifle_DMR_06_olive_F_TE"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag",
                       "HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag",
                              "HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
	};

    // --- hide useless units
    class TBan_Fighter2NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Fighter3NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Fighter6NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit1NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit2NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit3NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit6NH : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit2 : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit3 : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit4 : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit5 : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Recruit6 : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class Haji_Matin : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class TBan_Warlord : TBan_Fighter1 {
        scope = 1;
        scopeCurator = 0;
    };
    class Tban_O_Offroad_01_F : B_G_Offroad_01_armed_F {
        scope = 0;
        scopeCurator = 0;
    };

    // --------------------------------------------

    class O_mas_ZU23_AAF;           // External class reference
    class O_mas_DSHKM_AAF;          // External class reference
    class O_mas_DSHkM_Mini_TriPod;  // External class reference
    class O_mas_KORD_AAF;           // External class reference
    class O_mas_KORD_high_AAF;      // External class reference
    class O_mas_AGS_AAF;            // External class reference
    class O_mas_Metis_AAF;          // External class reference
    class O_mas_SPG9_AAF;           // External class reference
    class O_mas_Igla_AA_pod_AAF;    // External class reference
    class O_mas_2b14_82mm_AAF;      // External class reference
    class O_mas_D30_AT_AAF;         // External class reference

    class O_Tban_ZU23 : O_mas_ZU23_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_Tban_DSHKM : O_mas_DSHKM_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_Tban_DSHKM_Mini : O_mas_DSHkM_Mini_TriPod {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1";
        typicalCargo[] = {"TBan_Fighter1"};
    };

    class O_Tban_KORD : O_mas_KORD_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_Tban_KORD_High : O_mas_KORD_high_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter3";
        typicalCargo[] = {"TBan_Fighter3"};
    };

    class O_Tban_AGS : O_mas_AGS_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_Tban_Metis : O_mas_Metis_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter3";
        typicalCargo[] = {"TBan_Fighter3"};
    };

    class O_Tban_SPG9 : O_mas_SPG9_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1";
        typicalCargo[] = {"TBan_Fighter1"};
    };

    class O_Tban_Igla : O_mas_Igla_AA_pod_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

    class O_Tban_82mm : O_mas_2b14_82mm_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_Tban_D30 : O_mas_D30_AT_AAF {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

    // --------------------------------------------

    class O_mas_cars_Ural;          // External class reference
    class O_mas_cars_Ural_open;     // External class reference
    class O_mas_cars_Ural_ammo;     // External class reference
    class O_mas_cars_Ural_repair;   // External class reference
    class O_mas_cars_Ural_fuel;     // External class reference
    class O_mas_cars_Ural_BM21;     // External class reference
    class O_mas_cars_Ural_ZU23;     // External class reference
    class B_mas_cars_Hilux_Unarmed; // External class reference
    class B_mas_cars_Hilux_MG;      // External class reference
    class B_mas_cars_Hilux_AGS30;   // External class reference
    class B_mas_cars_Hilux_SPG9;    // External class reference

    class O_TBan_Ural : O_mas_cars_Ural {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_TBan_Ural_Open : O_mas_cars_Ural_open {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

    class O_TBan_Ural_Ammo : O_mas_cars_Ural_ammo {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1";
        typicalCargo[] = {"TBan_Fighter1"};
    };

    class O_TBan_Ural_Repair : O_mas_cars_Ural_repair {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1";
        typicalCargo[] = {"TBan_Fighter1"};
    };

    class O_TBan_Ural_Fuel : O_mas_cars_Ural_fuel {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_TBan_Ural_BM21 : O_mas_cars_Ural_BM21 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_TBan_Ural_ZU23 : O_mas_cars_Ural_ZU23 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_TBan_Hilux : B_mas_cars_Hilux_Unarmed {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
        side = 0;
    };

    class O_TBan_Hilux_MG : B_mas_cars_Hilux_MG {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
        side = 0;
    };

    class O_TBan_Hilux_AGS30 : B_mas_cars_Hilux_AGS30 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
        side = 0;
    };

    class O_TBan_Hilux_SPG : B_mas_cars_Hilux_SPG9 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
        side = 0;
    };

    // --------------------------------------------

    class O_mas_BRDM2;          // External class reference
    class O_mas_BTR60;          // External class reference
    class O_mas_BMP1_OPF_01;    // External class reference
    class O_mas_BMP2_OPF_01;    // External class reference
    class O_mas_BMP2_HQ_OPF_01; // External class reference
    class O_mas_BMP2_Ambul_01;  // External class reference

    class O_TBan_BRDM2 : O_mas_BRDM2 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

    class O_TBan_BTR60 : O_mas_BTR60 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
        supplyRadius = 5;
    };

    class O_TBan_BMP1 : O_mas_BMP1_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_TBan_BMP2 : O_mas_BMP2_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

    class O_TBan_BMP2_HQ : O_mas_BMP2_HQ_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_TBan_BMP2_Ambul : O_mas_BMP2_Ambul_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1";
        typicalCargo[] = {"TBan_Fighter1"};
    };

    // --------------------------------------------

    class O_mas_ZSU_OPF_01;     // External class reference
    class I_mas_T34_AAF_01;     // External class reference
    class O_mas_T55_OPF_01;     // External class reference
    class O_mas_T72_OPF_01;     // External class reference
    class O_mas_T72BM_OPF_01;   // External class reference

    class O_TBan_ZSU : O_mas_ZSU_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
    };

    class O_TBan_T34 : I_mas_T34_AAF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter4";
        typicalCargo[] = {"TBan_Fighter4"};
        side = 0;
    };

    class O_TBan_T55 : O_mas_T55_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_TBan_T72 : O_mas_T72_OPF_01 {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_TBan_T72BM : O_mas_T72BM_OPF_01 {
		faction = TBan;
        scopeCurator = 2;
		crew = "TBan_Fighter1";
		typicalCargo[] = {"TBan_Fighter1"};
	};

    // --------------------------------------------

    class O_mas_MI8;        // External class reference
    class O_mas_MI8MTV;     // External class reference
    class O_mas_MI24V;      // External class reference

	class O_TBan_MI8 : O_mas_MI8 {
		faction = TBan;
        scopeCurator = 2;
		crew = "TBan_Fighter4";
		typicalCargo[] = {"TBan_Fighter4"};
	};

    class O_TBan_MI8MTV : O_mas_MI8MTV {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter2";
        typicalCargo[] = {"TBan_Fighter2"};
    };

    class O_TBan_MI24V : O_mas_MI24V {
        faction = TBan;
        scopeCurator = 2;
        crew = "TBan_Fighter1NH";
        typicalCargo[] = {"TBan_Fighter1NH"};
    };

};

class CfgGroups {
    class East {
        class tft_tban {
            name = "Taliban";
            class Infantry {
                name = "Infantry";

                class Sentry {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Sentry";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter1NH"; //R RPK
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                };
                class Snipers {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Sniper Team";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter6"; //M
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter6"; //M
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                };
                class Patrol {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Patrol";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter1NH"; //R RPK
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "TBan_Fighter2"; //CLS
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                };
                class ATteam {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "AT Team";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter5"; //AT
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "TBan_Fighter5"; //AT
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                };
                class Fireteam1 {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Grunt Team";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter1"; //TL
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "TBan_Fighter1NH"; //R RPK
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "TBan_Fighter1NH"; //R RPK
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                };
                class Fireteam2 {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Fire Team";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter1"; //TL
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter3"; //AR
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "TBan_Fighter2"; //CLS
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "TBan_Fighter5"; //AT
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "TBan_Fighter4"; //R
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                };
                class Fireteam3 {
                    side = 0;
                    faction = "Tban";
                    icon = "\Taliban_Fighters\data\cfgfactionclasses_Tban.paa";
                    name = "Heavy Team";
                    class Unit0 {
                        side = 0;
                        vehicle = "TBan_Fighter1"; //TL
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1 {
                        side = 0;
                        vehicle = "TBan_Fighter3"; //AR
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2 {
                        side = 0;
                        vehicle = "TBan_Fighter3"; //AR
                        rank = "PRIVATE";
                        position[] = {-5, -5, 0};
                    };
                    class Unit3 {
                        side = 0;
                        vehicle = "TBan_Fighter5"; //AT
                        rank = "PRIVATE";
                        position[] = {10, -10, 0};
                    };
                    class Unit4 {
                        side = 0;
                        vehicle = "TBan_Fighter6"; //M
                        rank = "PRIVATE";
                        position[] = {-10, -10, 0};
                    };
                    class Unit5 {
                        side = 0;
                        vehicle = "TBan_Fighter2"; //CLS
                        rank = "PRIVATE";
                        position[] = {15, -15, 0};
                    };
                };
            };
        };
    };
};
