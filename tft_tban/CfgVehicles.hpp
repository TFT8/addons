class O_Soldier_base_F;            // External class reference
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
        class _xx_RPG7_F {
            magazine = "RPG7_F";
            count = 7;
        };
    };
};

// --- hide useless units
class TBan_Fighter1 : O_Soldier_base_F {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter1NH : O_Soldier_base_F {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter2 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter2NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter3 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter3NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter4 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter5 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter6 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Fighter6NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Warlord : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class Haji_Matin : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit1NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit2 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit2NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit3 : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class TBan_Recruit3NH : TBan_Fighter1 {
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
class TBan_Recruit6NH : TBan_Fighter1 {
    scope = 1;
    scopeCurator = 0;
};
class Tban_O_Offroad_01_F : B_G_Offroad_01_armed_F {
    scope = 0;
    scopeCurator = 0;
};

class Afghan_civilian1 : TBan_Fighter1 {
    scope = 2;
    scopeCurator = 2;
    editorPreview = "tft_tban\UI\Afghan_civilian1.jpg";
};
class Afghan_civilian1NH : TBan_Fighter1 {
    scope = 2;
    scopeCurator = 2;
    editorPreview = "tft_tban\UI\Afghan_civilian1NH.jpg";
};
class Afghan_Civilian2 : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_Civilian2.jpg";
};
class Afghan_Civilian2NH : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_Civilian2NH.jpg";
};
class Afghan_civilian3 : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_civilian3.jpg";
};
class Afghan_civilian3NH : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_civilian3NH.jpg";
};
class Afghan_Civilian4 : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_civilian4.jpg";
};
class Afghan_Civilian5 : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_Civilian5.jpg";
};
class Afghan_Civilian6 : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_Civilian6.jpg";
};
class Afghan_Civilian6NH : Afghan_civilian1 {
    editorPreview = "tft_tban\UI\Afghan_Civilian6NH.jpg";
};

class TBan_TL : TBan_Fighter1 {
    scope = 2;
    scopeCurator = 2;
    editorPreview = "tft_tban\UI\TBan_TL.jpg";
    displayName = "Team Leader";
    icon = "iconManLeader";
    items[] = {"FirstAidKit"};
    respawnitems[] = {"FirstAidKit"};
    weapons[] = {"Throw", "Put", "arifle_AK12_GL_F_TE"};
    respawnWeapons[] = {"Throw", "Put", "arifle_AK12_GL_F_TE"};
    magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellPurple"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellPurple"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","V_BandollierB_blk"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","V_BandollierB_blk"};
};
class TBan_CLS : TBan_TL {
    editorPreview = "tft_tban\UI\TBan_CLS.jpg";
    displayName = "Combat Life Saver";
    icon = "iconManMedic";
    backpack = "I_Fieldpack_oli_Medic";
    picture = "pictureHeal";
    attendant = 1;
    items[] = {};
    respawnitems[] = {};
    weapons[] = {"Throw", "Put","arifle_AK12_F_TE"};
    respawnWeapons[] = {"Throw", "Put","arifle_AK12_F_TE"};
    magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                   "HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                          "HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_oli"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_oli"};
};
class TBan_AR : TBan_TL {
    editorPreview = "tft_tban\UI\TBan_AR.jpg";
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
class TBan_Rifleman : TBan_TL {
    editorPreview = "tft_tban\UI\TBan_Rifleman.jpg";
    displayName = "Rifleman";
    icon = "iconMan";
    items[] = {"FirstAidKit"};
    respawnitems[] = {"FirstAidKit"};
    weapons[] = {"Throw", "Put","arifle_AK12_F_TE","hgun_Rook40_F"};
    respawnWeapons[] = {"Throw", "Put","arifle_AK12_F_TE","hgun_Rook40_F"};
    magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                   "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                          "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_HarnessOGL_gry"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_HarnessOGL_gry"};
};
class TBan_AT : TBan_TL {
    editorPreview = "tft_tban\UI\TBan_AT.jpg";
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    backpack = "B_Carryall_oucamo_TE";
    items[] = {"FirstAidKit"};
    respawnitems[] = {"FirstAidKit"};
    weapons[] = {"Throw", "Put","arifle_AK12_F_TE","hgun_Rook40_F","launch_RPG7_F"};
    respawnWeapons[] = {"Throw", "Put","arifle_AK12_F_TE","hgun_Rook40_F","launch_RPG7_F"};
    magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                   "RPG7_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                          "RPG7_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk"};
};
class TBan_Rifleman2 : TBan_Fighter1NH {
    scope = 2;
    scopeCurator = 2;
    editorPreview = "tft_tban\UI\TBan_Rifleman2.jpg";
    displayName = "Rifleman (AKM)";
    icon = "iconMan";
    items[] = {"FirstAidKit"};
    respawnitems[] = {"FirstAidKit"};
    weapons[] = {"Throw", "Put","arifle_AKM_FL_F","hgun_Rook40_F"};
    respawnWeapons[] = {"Throw", "Put","arifle_AKM_FL_F","hgun_Rook40_F"};
    magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                   "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F",
                          "16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk","Afghan_04Hat"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_TacVest_blk","Afghan_04Hat"};
};
class TBan_DMR : TBan_TL {
    editorPreview = "tft_tban\UI\TBan_DMR.jpg";
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
    editorPreview = "tft_tban\UI\O_Tban_ZU23.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_Tban_DSHKM : O_mas_DSHKM_AAF {
    editorPreview = "tft_tban\UI\O_Tban_DSHKM.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_Tban_DSHKM_Mini : O_mas_DSHkM_Mini_TriPod {
    editorPreview = "tft_tban\UI\O_Tban_DSHKM_Mini.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

class O_Tban_KORD : O_mas_KORD_AAF {
    editorPreview = "tft_tban\UI\O_Tban_KORD.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_Tban_KORD_High : O_mas_KORD_high_AAF {
    editorPreview = "tft_tban\UI\O_Tban_KORD_High.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_AR";
    typicalCargo[] = {"TBan_AR"};
};

class O_Tban_AGS : O_mas_AGS_AAF {
    editorPreview = "tft_tban\UI\O_Tban_AGS.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_Tban_Metis : O_mas_Metis_AAF {
    editorPreview = "tft_tban\UI\O_Tban_Metis.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_AR";
    typicalCargo[] = {"TBan_AR"};
};

class O_Tban_SPG9 : O_mas_SPG9_AAF {
    editorPreview = "tft_tban\UI\O_Tban_SPG9.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

class O_Tban_Igla : O_mas_Igla_AA_pod_AAF {
    editorPreview = "tft_tban\UI\O_Tban_Igla.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
};

class O_Tban_82mm : O_mas_2b14_82mm_AAF {
    editorPreview = "tft_tban\UI\O_Tban_82mm.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_Tban_D30 : O_mas_D30_AT_AAF {
    editorPreview = "tft_tban\UI\O_Tban_D30.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
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
    editorPreview = "tft_tban\UI\O_TBan_Ural.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_Ural_Open : O_mas_cars_Ural_open {
    editorPreview = "tft_tban\UI\O_TBan_Ural_Open.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
};

class O_TBan_Ural_Ammo : O_mas_cars_Ural_ammo {
    editorPreview = "tft_tban\UI\O_TBan_Ural_Ammo.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

class O_TBan_Ural_Repair : O_mas_cars_Ural_repair {
    editorPreview = "tft_tban\UI\O_TBan_Ural_Repair.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

class O_TBan_Ural_Fuel : O_mas_cars_Ural_fuel {
    editorPreview = "tft_tban\UI\O_TBan_Ural_Fuel.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_Ural_BM21 : O_mas_cars_Ural_BM21 {
    editorPreview = "tft_tban\UI\O_TBan_Ural_BM21.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_TBan_Ural_ZU23 : O_mas_cars_Ural_ZU23 {
    editorPreview = "tft_tban\UI\O_TBan_Ural_ZU23.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_Hilux : B_mas_cars_Hilux_Unarmed {
    editorPreview = "tft_tban\UI\O_TBan_Hilux.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
    side = 0;
};

class O_TBan_Hilux_MG : B_mas_cars_Hilux_MG {
    editorPreview = "tft_tban\UI\O_TBan_Hilux_MG.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
    side = 0;
};

class O_TBan_Hilux_AGS30 : B_mas_cars_Hilux_AGS30 {
    editorPreview = "tft_tban\UI\O_TBan_Hilux_AGS30.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
    side = 0;
};

class O_TBan_Hilux_SPG : B_mas_cars_Hilux_SPG9 {
    editorPreview = "tft_tban\UI\O_TBan_Hilux_SPG.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
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
    editorPreview = "tft_tban\UI\O_TBan_BRDM2.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
};

class O_TBan_BTR60 : O_mas_BTR60 {
    editorPreview = "tft_tban\UI\O_TBan_BTR60.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
    supplyRadius = 5;
};

class O_TBan_BMP1 : O_mas_BMP1_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_BMP1.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_BMP2 : O_mas_BMP2_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_BMP2.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
};

class O_TBan_BMP2_HQ : O_mas_BMP2_HQ_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_BMP2_HQ.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_TBan_BMP2_Ambul : O_mas_BMP2_Ambul_01 {
    editorPreview = "tft_tban\UI\O_TBan_BMP2_Ambul.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

// --------------------------------------------

class O_mas_ZSU_OPF_01;     // External class reference
class I_mas_T34_AAF_01;     // External class reference
class O_mas_T55_OPF_01;     // External class reference
class O_mas_T72_OPF_01;     // External class reference
class O_mas_T72BM_OPF_01;   // External class reference

class O_TBan_ZSU : O_mas_ZSU_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_ZSU.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_T34 : I_mas_T34_AAF_01 {
    editorPreview = "tft_tban\UI\O_TBan_T34.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
    side = 0;
};

class O_TBan_T55 : O_mas_T55_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_T55.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_TBan_T72 : O_mas_T72_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_T72.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_TBan_T72BM : O_mas_T72BM_OPF_01 {
    editorPreview = "tft_tban\UI\O_TBan_T72BM.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_TL";
    typicalCargo[] = {"TBan_TL"};
};

// --------------------------------------------

class O_mas_MI8;        // External class reference
class O_mas_MI8MTV;     // External class reference
class O_mas_MI24V;      // External class reference

class O_TBan_MI8 : O_mas_MI8 {
    editorPreview = "tft_tban\UI\O_TBan_MI8.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman";
    typicalCargo[] = {"TBan_Rifleman"};
};

class O_TBan_MI8MTV : O_mas_MI8MTV {
    editorPreview = "tft_tban\UI\O_TBan_MI8MTV.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_CLS";
    typicalCargo[] = {"TBan_CLS"};
};

class O_TBan_MI24V : O_mas_MI24V {
    editorPreview = "tft_tban\UI\O_TBan_MI24V.jpg";
    faction = "TBan";
    scopeCurator = 2;
    scope = 2;
    crew = "TBan_Rifleman2";
    typicalCargo[] = {"TBan_Rifleman2"};
};
