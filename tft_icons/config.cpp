class CfgPatches {
    class tft_icons {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"mas_vehicleweapons_Core", "mas_apc", "mas_brdm", "mas_CH47", "mas_veh_F_35C", "mas_vehicleweapons_FIA", "mas_cars_Hilux", "mas_HMMWV", "mas_cars_LR", "mas_MI8", "mas_MI24", "mas_tanks", "mas_cars", "mas_UH1Y", "mas_UH60M", "mas_ural", "tf47_launchers", "Tracked_Raid", "MELB", "Taliban_fighters", "tft_tban", "UK3CB_BAF_Vehicles_Apache", "UK3CB_BAF_Vehicles_Weapons"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly, Fitzgerald";
    };
};

class CfgVehicles {
    class I_mas_ZU23_base;              // External class reference
    class I_mas_DSHKM_base;             // External class reference
    class I_mas_KORD_Base;              // External class reference
    class I_mas_M2StaticMG_base;        // External class reference
    class I_mas_M2StaticMG_MiniTripod_base; // External class reference
    class I_mas_AGS_base;               // External class reference
    class I_mas_GMG_base;               // External class reference
    class I_mas_MK19_TriPod_base;       // External class reference
    class I_mas_Metis_Base;             // External class reference
    class I_mas_TOW_TriPod_base;        // External class reference
    class I_mas_SPG9_base;              // External class reference
    class I_mas_Igla_AA_pod_Base;       // External class reference
    class I_mas_Stinger_AA_pod_Base;    // External class reference
    class I_mas_2b14_82mm_Base;         // External class reference
    class I_mas_M252_base;              // External class reference
    class I_mas_D30_base;               // External class reference
    class I_mas_M119_base;              // External class reference
    class I_mas_BMP1_AAF_base;          // External class reference
    class I_mas_BMP1P_AAF_base;         // External class reference
    class I_mas_BMP2_AAF_base;          // External class reference
    class I_mas_BMP2_HQ_AAF_base;       // External class reference
    class I_mas_BMP2_Ambul_AAF_base;    // External class reference
    class mas_BRDM2_BASE;               // External class reference
    class mas_BTR60_Base;               // External class reference
    class B_mas_CH_47F_base;            // External class reference
    class mas_F_35C_Base;               // External class reference
    class B_mas_cars_Hilux_Base;        // External class reference
    class B_mas_HMMWV_Base;             // External class reference
    class B_mas_cars_LR_BASE;           // External class reference
    class mas_Mi8_Base;                 // External class reference
    class mas_Mi24_Base;                // External class reference
    class I_mas_T72_AAF_base;           // External class reference
    class I_mas_ZSU_AAF_base;           // External class reference
    class I_mas_T55_AAF_base;           // External class reference
    class I_mas_T34_AAF_base;           // External class reference
    class I_mas_cars_UAZ_Base;          // External class reference
    class B_mas_UH1Y_Base;              // External class reference
    class B_mas_UH60M_US_base;          // External class reference
    class I_mas_cars_Ural_Base;         // External class reference
    class I_mas_cars_Ural_BM21_Base;    // External class reference
    class I_mas_cars_Ural_ZU23_Base;    // External class reference

    class B_Soldier_base_F;             // External class reference
    class FlagCarrier_Asym;             // External class reference
    class NATO_Box_Base;                // External class reference

    class Tank;                         // External class reference

    class MELB_base;                    // External class reference

    class TBan_Fighter1;                // External class reference
    class TBan_Fighter1NH;              // External class reference

    class UK3CB_BAF_Apache_base;        // External class reference
    class UK3CB_BAF_Box_Ammo_Base;      // External class reference
    class UK3CB_BAF_Box_Grenades_Base;  // External class reference
    class UK3CB_BAF_Vehicles_Servicing_Point_Base;  // External class reference
    class UK3CB_BAF_HeliPilot_base;     // External class reference

    class I_mas_ZU23_AAF : I_mas_ZU23_base {
        editorPreview = "tft_icons\UI\I_mas_ZU23_AAF.jpg";
    };
    class O_mas_ZU23_AAF : I_mas_ZU23_AAF {
        editorPreview = "tft_icons\UI\O_mas_ZU23_AAF.jpg";
    };
    class I_mas_DSHKM_AAF : I_mas_DSHKM_base {
        editorPreview = "tft_icons\UI\I_mas_DSHKM_AAF.jpg";
    };
    class O_mas_DSHKM_AAF : I_mas_DSHKM_AAF {
        editorPreview = "tft_icons\UI\O_mas_DSHKM_AAF.jpg";
    };
    class I_mas_DSHkM_Mini_TriPod : I_mas_DSHKM_base {
        editorPreview = "tft_icons\UI\I_mas_DSHkM_Mini_TriPod.jpg";
    };
    class O_mas_DSHkM_Mini_TriPod : I_mas_DSHkM_Mini_TriPod {
        editorPreview = "tft_icons\UI\O_mas_DSHkM_Mini_TriPod.jpg";
    };
    class I_mas_KORD_AAF : I_mas_KORD_Base {
        editorPreview = "tft_icons\UI\I_mas_KORD_AAF.jpg";
    };
    class O_mas_KORD_AAF : I_mas_KORD_AAF {
        editorPreview = "tft_icons\UI\O_mas_KORD_AAF.jpg";
    };
    class I_mas_KORD_high_AAF : I_mas_KORD_Base {
        editorPreview = "tft_icons\UI\I_mas_KORD_high_AAF.jpg";
    };
    class O_mas_KORD_high_AAF : I_mas_KORD_high_AAF {
        editorPreview = "tft_icons\UI\O_mas_KORD_high_AAF.jpg";
    };
    class I_mas_M2StaticMG_AAF : I_mas_M2StaticMG_base {
        editorPreview = "tft_icons\UI\I_mas_M2StaticMG_AAF.jpg";
    };
    class I_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_base {
        editorPreview = "tft_icons\UI\I_mas_M2StaticMG_MiniTripod_AAF.jpg";
    };
    class B_mas_M2StaticMG_AAF : I_mas_M2StaticMG_AAF {
        editorPreview = "tft_icons\UI\B_mas_M2StaticMG_AAF.jpg";
    };
    class B_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_AAF {
        editorPreview = "tft_icons\UI\B_mas_M2StaticMG_MiniTripod_AAF.jpg";
    };
    class I_mas_AGS_AAF : I_mas_AGS_base {
        editorPreview = "tft_icons\UI\I_mas_AGS_AAF.jpg";
    };
    class O_mas_AGS_AAF : I_mas_AGS_AAF {
        editorPreview = "tft_icons\UI\O_mas_AGS_AAF.jpg";
    };
    class I_mas_GMG_AAF : I_mas_GMG_base {
        editorPreview = "tft_icons\UI\I_mas_GMG_AAF.jpg";
    };
    class B_mas_GMG_AAF : I_mas_GMG_AAF {
        editorPreview = "tft_icons\UI\B_mas_GMG_AAF.jpg";
    };
    class I_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_base {
        editorPreview = "tft_icons\UI\I_mas_MK19_TriPod_AAF.jpg";
    };
    class B_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_AAF {
        editorPreview = "tft_icons\UI\B_mas_MK19_TriPod_AAF.jpg";
    };
    class I_mas_Metis_AAF : I_mas_Metis_Base {
        editorPreview = "tft_icons\UI\I_mas_Metis_AAF.jpg";
    };
    class O_mas_Metis_AAF : I_mas_Metis_AAF {
        editorPreview = "tft_icons\UI\O_mas_Metis_AAF.jpg";
    };
    class I_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_base {
        editorPreview = "tft_icons\UI\I_mas_TOW_TriPod_AAF.jpg";
    };
    class B_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_AAF {
        editorPreview = "tft_icons\UI\B_mas_TOW_TriPod_AAF.jpg";
    };
    class I_mas_SPG9_AAF : I_mas_SPG9_base {
        editorPreview = "tft_icons\UI\I_mas_SPG9_AAF.jpg";
    };
    class O_mas_SPG9_AAF : I_mas_SPG9_AAF {
        editorPreview = "tft_icons\UI\O_mas_SPG9_AAF.jpg";
    };
    class I_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_Base {
        editorPreview = "tft_icons\UI\I_mas_Igla_AA_pod_AAF.jpg";
    };
    class O_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_AAF {
        editorPreview = "tft_icons\UI\O_mas_Igla_AA_pod_AAF.jpg";
    };
    class I_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_Base {
        editorPreview = "tft_icons\UI\I_mas_Stinger_AA_pod_AAF.jpg";
    };
    class B_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_AAF {
        editorPreview = "tft_icons\UI\B_mas_Stinger_AA_pod_AAF.jpg";
    };
    class I_mas_2b14_82mm_AAF : I_mas_2b14_82mm_Base {
        editorPreview = "tft_icons\UI\I_mas_2b14_82mm_AAF.jpg";
    };
    class O_mas_2b14_82mm_AAF : I_mas_2b14_82mm_AAF {
        editorPreview = "tft_icons\UI\O_mas_2b14_82mm_AAF.jpg";
    };
    class I_mas_M252_AAF : I_mas_M252_base {
        editorPreview = "tft_icons\UI\I_mas_M252_AAF.jpg";
    };
    class B_mas_M252_AAF : I_mas_M252_AAF {
        editorPreview = "tft_icons\UI\B_mas_M252_AAF.jpg";
    };
    class I_mas_D30_AAF : I_mas_D30_base {
        editorPreview = "tft_icons\UI\I_mas_D30_AAF.jpg";
    };
    class O_mas_D30_AAF : I_mas_D30_AAF {
        editorPreview = "tft_icons\UI\O_mas_D30_AAF.jpg";
    };
    class I_mas_D30_AT_AAF : I_mas_D30_AAF {
        editorPreview = "tft_icons\UI\I_mas_D30_AT_AAF.jpg";
    };
    class O_mas_D30_AT_AAF : I_mas_D30_AT_AAF {
        editorPreview = "tft_icons\UI\O_mas_D30_AT_AAF.jpg";
    };
    class I_mas_M119_AAF : I_mas_M119_base {
        editorPreview = "tft_icons\UI\I_mas_M119_AAF.jpg";
    };
    class B_mas_M119_AAF : I_mas_M119_AAF {
        editorPreview = "tft_icons\UI\B_mas_M119_AAF.jpg";
    };
    class I_mas_M119_AT_AAF : I_mas_M119_AAF {
        editorPreview = "tft_icons\UI\I_mas_M119_AT_AAF.jpg";
    };
    class B_mas_M119_AT_AAF : I_mas_M119_AT_AAF {
        editorPreview = "tft_icons\UI\B_mas_M119_AT_AAF.jpg";
    };
    class I_mas_BMP1_AAF_01 : I_mas_BMP1_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_BMP1_AAF_01.jpg";
    };
    class O_mas_BMP1_OPF_01 : I_mas_BMP1_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_BMP1_OPF_01.jpg";
    };
    class I_mas_BMP1P_AAF_01 : I_mas_BMP1P_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_BMP1P_AAF_01.jpg";
    };
    class O_mas_BMP1P_OPF_01 : I_mas_BMP1P_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_BMP1P_OPF_01.jpg";
    };
    class I_mas_BMP2_AAF_01 : I_mas_BMP2_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_BMP2_AAF_01.jpg";
    };
    class O_mas_BMP2_OPF_01 : I_mas_BMP2_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_BMP2_OPF_01.jpg";
    };
    class I_mas_BMP2_HQ_AAF_01 : I_mas_BMP2_HQ_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_BMP2_HQ_AAF_01.jpg";
    };
    class O_mas_BMP2_HQ_OPF_01 : I_mas_BMP2_HQ_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_BMP2_HQ_OPF_01.jpg";
    };
    class I_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_BMP2_Ambul_01.jpg";
    };
    class O_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_01 {
        editorPreview = "tft_icons\UI\O_mas_BMP2_Ambul_01.jpg";
    };
    class I_mas_BRDM2 : mas_BRDM2_BASE {
        editorPreview = "tft_icons\UI\I_mas_BRDM2.jpg";
    };
    class O_mas_BRDM2 : I_mas_BRDM2 {
        editorPreview = "tft_icons\UI\O_mas_BRDM2.jpg";
    };
    class I_mas_BTR60 : mas_BTR60_Base {
        editorPreview = "tft_icons\UI\I_mas_BTR60.jpg";
    };
    class O_mas_BTR60 : I_mas_BTR60 {
        editorPreview = "tft_icons\UI\O_mas_BTR60.jpg";
    };
    class B_mas_CH_47F : B_mas_CH_47F_base {
        editorPreview = "tft_icons\UI\B_mas_CH_47F.jpg";
    };
    class mas_F_35C : mas_F_35C_Base {
        editorPreview = "tft_icons\UI\mas_F_35C.jpg";
    };
    class mas_F_35C_S : mas_F_35C_Base {
        editorPreview = "tft_icons\UI\mas_F_35C_S.jpg";
    };
    class mas_F_35C_cas : mas_F_35C {
        editorPreview = "tft_icons\UI\mas_F_35C_cas.jpg";
    };
    class B_mas_ZU23_FIA : I_mas_ZU23_AAF {
        editorPreview = "tft_icons\UI\B_mas_ZU23_FIA.jpg";
    };
    class B_mas_DSHKM_FIA : I_mas_DSHKM_AAF {
        editorPreview = "tft_icons\UI\B_mas_DSHKM_FIA.jpg";
    };
    class B_mas_DSHkM_Mini_TriPod_FIA : I_mas_DSHkM_Mini_TriPod {
        editorPreview = "tft_icons\UI\B_mas_DSHkM_Mini_TriPod_FIA.jpg";
    };
    class B_mas_M2StaticMG_FIA : I_mas_M2StaticMG_AAF {
        editorPreview = "tft_icons\UI\B_mas_M2StaticMG_FIA.jpg";
    };
    class B_mas_M2StaticMG_MiniTripod_FIA : I_mas_M2StaticMG_MiniTripod_AAF {
        editorPreview = "tft_icons\UI\B_mas_M2StaticMG_MiniTripod_FIA.jpg";
    };
    class B_mas_AGS_FIA : I_mas_AGS_AAF {
        editorPreview = "tft_icons\UI\B_mas_AGS_FIA.jpg";
    };
    class B_mas_Metis_FIA : I_mas_Metis_AAF {
        editorPreview = "tft_icons\UI\B_mas_Metis_FIA.jpg";
    };
    class B_mas_SPG9_AAF : I_mas_SPG9_AAF {
        editorPreview = "tft_icons\UI\B_mas_SPG9_AAF.jpg";
    };
    class B_mas_Stinger_AA_pod_FIA : I_mas_Stinger_AA_pod_AAF {
        editorPreview = "tft_icons\UI\B_mas_Stinger_AA_pod_FIA.jpg";
    };
    class B_mas_2b14_82mm_FIA : I_mas_2b14_82mm_AAF {
        editorPreview = "tft_icons\UI\B_mas_2b14_82mm_FIA.jpg";
    };
    class B_mas_D30_FIA : I_mas_D30_AAF {
        editorPreview = "tft_icons\UI\B_mas_D30_FIA.jpg";
    };
    class B_mas_D30_AT_FIA : I_mas_D30_AT_AAF {
        editorPreview = "tft_icons\UI\B_mas_D30_AT_FIA.jpg";
    };
    class B_mas_cars_Hilux_MG : B_mas_cars_Hilux_Base {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_MG.jpg";
    };
    class B_mas_cars_Hilux_M2 : B_mas_cars_Hilux_MG {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_M2.jpg";
    };
    class B_mas_cars_Hilux_AGS30 : B_mas_cars_Hilux_Base {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_AGS30.jpg";
    };
    class B_mas_cars_Hilux_Unarmed : B_mas_cars_Hilux_Base {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_Unarmed.jpg";
    };
    class B_mas_cars_Hilux_Med : B_mas_cars_Hilux_Unarmed {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_Med.jpg";
    };
    class B_mas_cars_Hilux_SPG9 : B_mas_cars_Hilux_Base {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_SPG9.jpg";
    };
    class B_mas_cars_Hilux_RKTS : B_mas_cars_Hilux_SPG9 {
        editorPreview = "tft_icons\UI\B_mas_cars_Hilux_RKTS.jpg";
    };
    class B_mas_HMMWV_M2 : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_M2.jpg";
    };
    class B_mas_HMMWV_M134 : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_M134.jpg";
    };
    class B_mas_HMMWV_SOV : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_SOV.jpg";
    };
    class B_mas_HMMWV_SOV_M134 : B_mas_HMMWV_SOV {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_SOV_M134.jpg";
    };
    class B_mas_HMMWV_TOW : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_TOW.jpg";
    };
    class B_mas_HMMWV_Stinger : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_Stinger.jpg";
    };
    class B_mas_HMMWV_MK19 : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_MK19.jpg";
    };
    class B_mas_HMMWV_UNA : B_mas_HMMWV_Base {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_UNA.jpg";
    };
    class B_mas_HMMWV_MEV : B_mas_HMMWV_UNA {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_MEV.jpg";
    };
    class B_mas_HMMWV_M2_des : B_mas_HMMWV_M2 {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_M2_des.jpg";
    };
    class B_mas_HMMWV_M134_des : B_mas_HMMWV_M134 {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_M134_des.jpg";
    };
    class B_mas_HMMWV_SOV_des : B_mas_HMMWV_SOV {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_SOV_des.jpg";
    };
    class B_mas_HMMWV_SOV_M134_des : B_mas_HMMWV_SOV_M134 {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_SOV_M134_des.jpg";
    };
    class B_mas_HMMWV_TOW_des : B_mas_HMMWV_TOW {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_TOW_des.jpg";
    };
    class B_mas_HMMWV_Stinger_des : B_mas_HMMWV_Stinger {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_Stinger_des.jpg";
    };
    class B_mas_HMMWV_MK19_des : B_mas_HMMWV_MK19 {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_MK19_des.jpg";
    };
    class B_mas_HMMWV_UNA_des : B_mas_HMMWV_UNA {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_UNA_des.jpg";
    };
    class B_mas_HMMWV_MEV_des : B_mas_HMMWV_MEV {
        editorPreview = "tft_icons\UI\B_mas_HMMWV_MEV_des.jpg";
    };
    class B_mas_cars_LR_Unarmed : B_mas_cars_LR_BASE {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_Unarmed.jpg";
    };
    class B_mas_cars_LR_Med : B_mas_cars_LR_Unarmed {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_Med.jpg";
    };
    class B_mas_cars_LR_M2 : B_mas_cars_LR_BASE {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_M2.jpg";
    };
    class B_mas_cars_LR_Mk19 : B_mas_cars_LR_M2 {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_Mk19.jpg";
    };
    class B_mas_cars_LR_TOW : B_mas_cars_LR_M2 {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_TOW.jpg";
    };
    class B_mas_cars_LR_Stinger : B_mas_cars_LR_M2 {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_Stinger.jpg";
    };
    class B_mas_cars_LR_SPG9 : B_mas_cars_LR_TOW {
        editorPreview = "tft_icons\UI\B_mas_cars_LR_SPG9.jpg";
    };
    class I_mas_cars_LR_soft_Unarmed : B_mas_cars_LR_Unarmed {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_Unarmed.jpg";
    };
    class I_mas_cars_LR_soft_Med : B_mas_cars_LR_Med {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_Med.jpg";
    };
    class I_mas_cars_LR_soft_M2 : B_mas_cars_LR_M2 {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_M2.jpg";
    };
    class I_mas_cars_LR_soft_Mk19 : B_mas_cars_LR_Mk19 {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_Mk19.jpg";
    };
    class I_mas_cars_LR_soft_TOW : B_mas_cars_LR_TOW {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_TOW.jpg";
    };
    class I_mas_cars_LR_soft_Stinger : B_mas_cars_LR_Stinger {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_Stinger.jpg";
    };
    class I_mas_cars_LR_soft_SPG9 : B_mas_cars_LR_SPG9 {
        editorPreview = "tft_icons\UI\I_mas_cars_LR_soft_SPG9.jpg";
    };
    class I_mas_MI8 : mas_Mi8_Base {
        editorPreview = "tft_icons\UI\I_mas_MI8.jpg";
    };
    class O_mas_MI8 : I_mas_MI8 {
        editorPreview = "tft_icons\UI\O_mas_MI8.jpg";
    };
    class I_mas_MI8MTV : mas_Mi8_Base {
        editorPreview = "tft_icons\UI\I_mas_MI8MTV.jpg";
    };
    class O_mas_MI8MTV : I_mas_MI8MTV {
        editorPreview = "tft_icons\UI\O_mas_MI8MTV.jpg";
    };
    class I_mas_MI24V : mas_Mi24_Base {
        editorPreview = "tft_icons\UI\I_mas_MI24V.jpg";
    };
    class O_mas_MI24V : I_mas_MI24V {
        editorPreview = "tft_icons\UI\O_mas_MI24V.jpg";
    };
    class I_mas_T72_AAF_01 : I_mas_T72_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_T72_AAF_01.jpg";
    };
    class O_mas_T72_OPF_01 : I_mas_T72_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_T72_OPF_01.jpg";
    };
    class I_mas_T72B_Early_AAF_01 : I_mas_T72_AAF_01 {
        editorPreview = "tft_icons\UI\I_mas_T72B_Early_AAF_01.jpg";
    };
    class O_mas_T72B_Early_OPF_01 : I_mas_T72B_Early_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_T72B_Early_OPF_01.jpg";
    };
    class I_mas_T72B_AAF_01 : I_mas_T72B_Early_AAF_01 {
        editorPreview = "tft_icons\UI\I_mas_T72B_AAF_01.jpg";
    };
    class O_mas_T72B_OPF_01 : I_mas_T72B_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_T72B_OPF_01.jpg";
    };
    class I_mas_T72BM_AAF_01 : I_mas_T72B_AAF_01 {
        editorPreview = "tft_icons\UI\I_mas_T72BM_AAF_01.jpg";
    };
    class O_mas_T72BM_OPF_01 : I_mas_T72BM_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_T72BM_OPF_01.jpg";
    };
    class I_mas_ZSU_AAF_01 : I_mas_ZSU_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_ZSU_AAF_01.jpg";
    };
    class O_mas_ZSU_OPF_01 : I_mas_ZSU_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_ZSU_OPF_01.jpg";
    };
    class I_mas_T55_AAF_01 : I_mas_T55_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_T55_AAF_01.jpg";
    };
    class O_mas_T55_OPF_01 : I_mas_T55_AAF_01 {
        editorPreview = "tft_icons\UI\O_mas_T55_OPF_01.jpg";
    };
    class I_mas_T34_AAF_01 : I_mas_T34_AAF_base {
        editorPreview = "tft_icons\UI\I_mas_T34_AAF_01.jpg";
    };
    class I_mas_cars_UAZ_MG : I_mas_cars_UAZ_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_MG.jpg";
    };
    class O_mas_cars_UAZ_MG : I_mas_cars_UAZ_MG {
        editorPreview = "tft_icons\UI\O_mas_cars_UAZ_MG.jpg";
    };
    class I_mas_cars_UAZ_M2 : I_mas_cars_UAZ_MG {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_M2.jpg";
    };
    class I_mas_cars_UAZ_AGS30 : I_mas_cars_UAZ_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_AGS30.jpg";
    };
    class O_mas_cars_UAZ_AGS30 : I_mas_cars_UAZ_AGS30 {
        editorPreview = "tft_icons\UI\O_mas_cars_UAZ_AGS30.jpg";
    };
    class I_mas_cars_UAZ_Unarmed : I_mas_cars_UAZ_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_Unarmed.jpg";
    };
    class I_mas_cars_UAZ_Med : I_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_Med.jpg";
    };
    class O_mas_cars_UAZ_Unarmed : I_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_icons\UI\O_mas_cars_UAZ_Unarmed.jpg";
    };
    class O_mas_cars_UAZ_Med : O_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_icons\UI\O_mas_cars_UAZ_Med.jpg";
    };
    class I_mas_cars_UAZ_SPG9 : I_mas_cars_UAZ_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_UAZ_SPG9.jpg";
    };
    class O_mas_cars_UAZ_SPG9 : I_mas_cars_UAZ_SPG9 {
        editorPreview = "tft_icons\UI\O_mas_cars_UAZ_SPG9.jpg";
    };
    class B_mas_UH1Y_UNA_F : B_mas_UH1Y_Base {
        editorPreview = "tft_icons\UI\B_mas_UH1Y_UNA_F.jpg";
    };
    class B_mas_UH1Y_MEV_F : B_mas_UH1Y_UNA_F {
        editorPreview = "tft_icons\UI\B_mas_UH1Y_MEV_F.jpg";
    };
    class B_mas_UH1Y_F : B_mas_UH1Y_Base {
        editorPreview = "tft_icons\UI\B_mas_UH1Y_F.jpg";
    };
    class B_mas_UH60M : B_mas_UH60M_US_base {
        editorPreview = "tft_icons\UI\B_mas_UH60M.jpg";
    };
    class B_mas_UH60M_SF : B_mas_UH60M {
        editorPreview = "tft_icons\UI\B_mas_UH60M_SF.jpg";
    };
    class B_mas_UH60M_MEV : B_mas_UH60M_US_base {
        editorPreview = "tft_icons\UI\B_mas_UH60M_MEV.jpg";
    };
    class I_mas_cars_Ural : I_mas_cars_Ural_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural.jpg";
    };
    class I_mas_cars_Ural_open : I_mas_cars_Ural {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_open.jpg";
    };
    class I_mas_cars_Ural_ammo : I_mas_cars_Ural_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_ammo.jpg";
    };
    class I_mas_cars_Ural_repair : I_mas_cars_Ural_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_repair.jpg";
    };
    class I_mas_cars_Ural_fuel : I_mas_cars_Ural_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_fuel.jpg";
    };
    class I_mas_cars_Ural_BM21 : I_mas_cars_Ural_BM21_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_BM21.jpg";
    };
    class I_mas_cars_Ural_ZU23 : I_mas_cars_Ural_ZU23_Base {
        editorPreview = "tft_icons\UI\I_mas_cars_Ural_ZU23.jpg";
    };
    class O_mas_cars_Ural : I_mas_cars_Ural {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural.jpg";
    };
    class O_mas_cars_Ural_open : I_mas_cars_Ural_open {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_open.jpg";
    };
    class O_mas_cars_Ural_ammo : I_mas_cars_Ural_ammo {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_ammo.jpg";
    };
    class O_mas_cars_Ural_repair : I_mas_cars_Ural_repair {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_repair.jpg";
    };
    class O_mas_cars_Ural_fuel : I_mas_cars_Ural_fuel {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_fuel.jpg";
    };
    class O_mas_cars_Ural_BM21 : I_mas_cars_Ural_BM21 {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_BM21.jpg";
    };
    class O_mas_cars_Ural_ZU23 : I_mas_cars_Ural_ZU23 {
        editorPreview = "tft_icons\UI\O_mas_cars_Ural_ZU23.jpg";
    };
    
    
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
    
    
    class MELB_H6M : MELB_base {
        editorPreview = "tft_icons\UI\MELB_H6M.jpg";
    };
    class MELB_AH6M_M : MELB_base {
        editorPreview = "tft_icons\UI\MELB_AH6M_M.jpg";
    };
    class MELB_AH6M_L : MELB_base {
        editorPreview = "tft_icons\UI\MELB_AH6M_L.jpg";
    };
    class MELB_AH6M_H : MELB_base {
        editorPreview = "tft_icons\UI\MELB_AH6M_H.jpg";
    };
    class MELB_MH6M : MELB_base {
        editorPreview = "tft_icons\UI\MELB_MH6M.jpg";
    };
    
    
    class Afghan_civilian1 : TBan_Fighter1 {
        editorPreview = "tft_icons\UI\Afghan_civilian1.jpg";
    };
    class Afghan_civilian1NH : TBan_Fighter1 {
        editorPreview = "tft_icons\UI\Afghan_civilian1NH.jpg";
    };
    class Afghan_Civilian2 : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_Civilian2.jpg";
    };
    class Afghan_Civilian2NH : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_Civilian2NH.jpg";
    };
    class Afghan_civilian3 : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_civilian3.jpg";
    };
    class Afghan_civilian3NH : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_civilian3NH.jpg";
    };
    class Afghan_Civilian4 : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_civilian4.jpg";
    };
    class Afghan_Civilian5 : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_Civilian5.jpg";
    };
    class Afghan_Civilian6 : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_Civilian6.jpg";
    };
    class Afghan_Civilian6NH : Afghan_civilian1 {
        editorPreview = "tft_icons\UI\Afghan_Civilian6NH.jpg";
    };
    class TBan_TL : TBan_Fighter1 {
        editorPreview = "tft_icons\UI\TBan_TL.jpg";
    };
    class TBan_CLS : TBan_TL {
        editorPreview = "tft_icons\UI\TBan_CLS.jpg";
    };
    class TBan_AR : TBan_TL {
        editorPreview = "tft_icons\UI\TBan_AR.jpg";
    };
    class TBan_Rifleman : TBan_TL {
        editorPreview = "tft_icons\UI\TBan_Rifleman.jpg";
    };
    class TBan_AT : TBan_TL {
        editorPreview = "tft_icons\UI\TBan_AT.jpg";
    };
    class TBan_Rifleman2 : TBan_Fighter1NH {
        editorPreview = "tft_icons\UI\TBan_Rifleman2.jpg";
    };
    class TBan_DMR : TBan_TL {
        editorPreview = "tft_icons\UI\TBan_DMR.jpg";
    };
    class O_Tban_82mm : O_mas_2b14_82mm_AAF{
        editorPreview = "tft_icons\UI\O_Tban_82mm.jpg";
    };
    class O_Tban_AGS : O_mas_AGS_AAF {
        editorPreview = "tft_icons\UI\O_Tban_AGS.jpg";
    };
    class O_TBan_BMP1 : O_mas_BMP1_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_BMP1.jpg";
    };
    class O_TBan_BMP2 : O_mas_BMP2_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_BMP2.jpg";
    };
    class O_TBan_BMP2_Ambul : O_mas_BMP2_Ambul_01 {
        editorPreview = "tft_icons\UI\O_TBan_BMP2_Ambul.jpg";
    };
    class O_TBan_BMP2_HQ : O_mas_BMP2_HQ_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_BMP2_HQ.jpg";
    };
    class O_TBan_BRDM2 : O_mas_BRDM2 {
        editorPreview = "tft_icons\UI\O_TBan_BRDM2.jpg";
    };
    class O_TBan_BTR60 : O_mas_BTR60 {
        editorPreview = "tft_icons\UI\O_TBan_BTR60.jpg";
    };
    class O_Tban_D30 : O_mas_D30_AT_AAF {
        editorPreview = "tft_icons\UI\O_Tban_D30.jpg";
    };
    class O_Tban_DSHKM : O_mas_DSHKM_AAF {
        editorPreview = "tft_icons\UI\O_Tban_DSHKM.jpg";
    };
    class O_Tban_DSHKM_Mini : O_mas_DSHkM_Mini_TriPod {
        editorPreview = "tft_icons\UI\O_Tban_DSHKM_Mini.jpg";
    };
    class O_TBan_Hilux : B_mas_cars_Hilux_Unarmed {
        editorPreview = "tft_icons\UI\O_TBan_Hilux.jpg";
    };
    class O_TBan_Hilux_AGS30 : B_mas_cars_Hilux_AGS30 {
        editorPreview = "tft_icons\UI\O_TBan_Hilux_AGS30.jpg";
    };
    class O_TBan_Hilux_MG : B_mas_cars_Hilux_MG {
        editorPreview = "tft_icons\UI\O_TBan_Hilux_MG.jpg";
    };
    class O_TBan_Hilux_SPG : B_mas_cars_Hilux_SPG9 {
        editorPreview = "tft_icons\UI\O_TBan_Hilux_SPG.jpg";
    };
    class O_Tban_Igla : O_mas_Igla_AA_pod_AAF {
        editorPreview = "tft_icons\UI\O_Tban_Igla.jpg";
    };
    class O_Tban_KORD : O_mas_KORD_AAF {
        editorPreview = "tft_icons\UI\O_Tban_KORD.jpg";
    };
    class O_Tban_KORD_High : O_mas_KORD_high_AAF {
        editorPreview = "tft_icons\UI\O_Tban_KORD_High.jpg";
    };
    class O_Tban_Metis : O_mas_Metis_AAF {
        editorPreview = "tft_icons\UI\O_Tban_Metis.jpg";
    };
    class O_TBan_MI8 : O_mas_MI8 {
        editorPreview = "tft_icons\UI\O_TBan_MI8.jpg";
    };
    class O_TBan_MI8MTV : O_mas_MI8MTV {
        editorPreview = "tft_icons\UI\O_TBan_MI8MTV.jpg";
    };
    class O_TBan_MI24V : O_mas_MI24V {
        editorPreview = "tft_icons\UI\O_TBan_MI24V.jpg";
    };
    class O_Tban_SPG9 : O_mas_SPG9_AAF {
        editorPreview = "tft_icons\UI\O_Tban_SPG9.jpg";
    };
    class O_TBan_T34 : I_mas_T34_AAF_01 {
        editorPreview = "tft_icons\UI\O_TBan_T34.jpg";
    };
    class O_TBan_T55 : O_mas_T55_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_T55.jpg";
    };
    class O_TBan_T72 : O_mas_T72_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_T72.jpg";
    };
    class O_TBan_T72BM : O_mas_T72BM_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_T72BM.jpg";
    };
    class O_TBan_Ural : O_mas_cars_Ural {
        editorPreview = "tft_icons\UI\O_TBan_Ural.jpg";
    };
    class O_TBan_Ural_Ammo : O_mas_cars_Ural_ammo {
        editorPreview = "tft_icons\UI\O_TBan_Ural_Ammo.jpg";
    };
    class O_TBan_Ural_BM21 : O_mas_cars_Ural_BM21 {
        editorPreview = "tft_icons\UI\O_TBan_Ural_BM21.jpg";
    };
    class O_TBan_Ural_Fuel : O_mas_cars_Ural_fuel {
        editorPreview = "tft_icons\UI\O_TBan_Ural_Fuel.jpg";
    };
    class O_TBan_Ural_Open : O_mas_cars_Ural_open {
        editorPreview = "tft_icons\UI\O_TBan_Ural_Open.jpg";
    };
    class O_TBan_Ural_Repair : O_mas_cars_Ural_repair {
        editorPreview = "tft_icons\UI\O_TBan_Ural_Repair.jpg";
    };
    class O_TBan_Ural_ZU23 : O_mas_cars_Ural_ZU23 {
        editorPreview = "tft_icons\UI\O_TBan_Ural_ZU23.jpg";
    };
    class O_TBan_ZSU : O_mas_ZSU_OPF_01 {
        editorPreview = "tft_icons\UI\O_TBan_ZSU.jpg";
    };
    class O_Tban_ZU23 : O_mas_ZU23_AAF {
        editorPreview = "tft_icons\UI\O_Tban_ZU23.jpg";
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
