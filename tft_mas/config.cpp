class CfgPatches {
    class tft_mas
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"mas_vehicleweapons_Core", "mas_vehicleweapons_FIA", "mas_apc", "mas_brdm", "mas_CH47", "mas_veh_F_35C", "mas_MI8", "mas_MI24", "mas_tanks", "mas_UH1Y", "mas_UH60M", "mas_cars_Hilux", "mas_cars_LR", "mas_cars", "mas_ural", "mas_HMMWV"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

class CfgVehicleClasses {
    class mas_ind_stat {
        displayName = "Static (MASSI)";
    };

    class mas_ind_veh {
        displayName = "Cars (MASSI)";
    };

    class mas_ind_arm {
        displayName = "Armored (MASSI)";
    };

    class mas_ind_air {
        displayName = "Air (MASSI)";
    };
};

class CfgVehicles {
    //NOTE: there was no need to configure "mas_vehicleweapons_FIA" as they inherit from "mas_vehicleweapons_Core"

    // --- mas_vehicleweapons_Core ---
    class I_mas_ZU23_base;             // External class reference
    class I_mas_DSHKM_base;            // External class reference
    class I_mas_KORD_Base;             // External class reference
    class I_mas_M2StaticMG_base;       // External class reference
    class I_mas_AGS_base;              // External class reference
    class I_mas_GMG_base;              // External class reference
    class I_mas_MK19_TriPod_base;      // External class reference
    class I_mas_Metis_Base;            // External class reference
    class I_mas_TOW_TriPod_base;       // External class reference
    class I_mas_SPG9_base;             // External class reference
    class I_mas_Igla_AA_pod_Base;      // External class reference
    class I_mas_Stinger_AA_pod_Base;   // External class reference
    class I_mas_2b14_82mm_Base;        // External class reference
    class I_mas_D30_base;              // External class reference

    class I_mas_ZU23_AAF : I_mas_ZU23_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_ZU23_AAF.jpg";
    };
    class O_mas_ZU23_AAF : I_mas_ZU23_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_ZU23_AAF.jpg";
    };
    class I_mas_DSHKM_AAF : I_mas_DSHKM_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_DSHKM_AAF.jpg";
    };
    class O_mas_DSHKM_AAF : I_mas_DSHKM_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_DSHKM_AAF.jpg";
    };
    class I_mas_DSHkM_Mini_TriPod : I_mas_DSHKM_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_DSHkM_Mini_TriPod.jpg";
    };
    class O_mas_DSHkM_Mini_TriPod : I_mas_DSHkM_Mini_TriPod {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_DSHkM_Mini_TriPod.jpg";
    };
    class I_mas_KORD_AAF : I_mas_KORD_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_KORD_AAF.jpg";
    };
    class O_mas_KORD_AAF : I_mas_KORD_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_KORD_AAF.jpg";
    };
    class I_mas_KORD_high_AAF : I_mas_KORD_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_KORD_high_AAF.jpg";
    };
    class O_mas_KORD_high_AAF : I_mas_KORD_high_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_KORD_high_AAF.jpg";
    };
    class I_mas_M2StaticMG_MiniTripod_base : I_mas_M2StaticMG_base {
        vehicleClass = "mas_ind_stat";
    };
    class I_mas_M2StaticMG_AAF : I_mas_M2StaticMG_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_M2StaticMG_AAF.jpg";
    };
    class I_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_M2StaticMG_MiniTripod_AAF.jpg";
    };
    class B_mas_M2StaticMG_AAF : I_mas_M2StaticMG_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_M2StaticMG_AAF.jpg";
    };
    class B_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_M2StaticMG_MiniTripod_AAF.jpg";
    };
    class I_mas_AGS_AAF : I_mas_AGS_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_AGS_AAF.jpg";
    };
    class O_mas_AGS_AAF : I_mas_AGS_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_AGS_AAF.jpg";
    };
    class I_mas_GMG_AAF : I_mas_GMG_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_GMG_AAF.jpg";
    };
    class B_mas_GMG_AAF : I_mas_GMG_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_GMG_AAF.jpg";
    };
    class I_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_MK19_TriPod_AAF.jpg";
    };
    class B_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_MK19_TriPod_AAF.jpg";
    };
    class I_mas_Metis_AAF : I_mas_Metis_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_Metis_AAF.jpg";
    };
    class O_mas_Metis_AAF : I_mas_Metis_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_Metis_AAF.jpg";
    };
    class I_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_TOW_TriPod_AAF.jpg";
    };
    class B_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_TOW_TriPod_AAF.jpg";
    };
    class I_mas_SPG9_AAF : I_mas_SPG9_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_SPG9_AAF.jpg";
    };
    class O_mas_SPG9_AAF : I_mas_SPG9_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_SPG9_AAF.jpg";
    };
    class I_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_Igla_AA_pod_AAF.jpg";
    };
    class O_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_Igla_AA_pod_AAF.jpg";
    };
    class I_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_Stinger_AA_pod_AAF.jpg";
    };
    class B_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_Stinger_AA_pod_AAF.jpg";
    };
    class I_mas_2b14_82mm_AAF : I_mas_2b14_82mm_Base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_2b14_82mm_AAF.jpg";
    };
    class O_mas_2b14_82mm_AAF : I_mas_2b14_82mm_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_2b14_82mm_AAF.jpg";
    };
    class I_mas_M252_base : I_mas_2b14_82mm_Base {
        vehicleClass = "mas_ind_stat";
    };
    class I_mas_M252_AAF : I_mas_M252_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_M252_AAF.jpg";
    };
    class B_mas_M252_AAF : I_mas_M252_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_M252_AAF.jpg";
    };
    class I_mas_D30_AAF : I_mas_D30_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_D30_AAF.jpg";
    };
    class O_mas_D30_AAF : I_mas_D30_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_D30_AAF.jpg";
    };
    class I_mas_D30_AT_AAF : I_mas_D30_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_D30_AT_AAF.jpg";
    };
    class O_mas_D30_AT_AAF : I_mas_D30_AT_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\O_mas_D30_AT_AAF.jpg";
    };
    class I_mas_M119_base : I_mas_D30_base {
        vehicleClass = "mas_ind_stat";
    };
    class I_mas_M119_AAF : I_mas_M119_base {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_M119_AAF.jpg";
    };
    class B_mas_M119_AAF : I_mas_M119_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_M119_AAF.jpg";
    };
    class I_mas_M119_AT_AAF : I_mas_M119_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\I_mas_M119_AT_AAF.jpg";
    };
    class B_mas_M119_AT_AAF : I_mas_M119_AT_AAF {
        vehicleClass = "mas_ind_stat";
        editorPreview = "tft_mas\UI\B_mas_M119_AT_AAF.jpg";
    };

    // --- Editor previews ---
    class B_mas_ZU23_FIA : I_mas_ZU23_AAF {
        editorPreview = "tft_mas\UI\B_mas_ZU23_FIA.jpg";
    };
    class B_mas_DSHKM_FIA : I_mas_DSHKM_AAF {
        editorPreview = "tft_mas\UI\B_mas_DSHKM_FIA.jpg";
    };
    class B_mas_DSHkM_Mini_TriPod_FIA : I_mas_DSHkM_Mini_TriPod {
        editorPreview = "tft_mas\UI\B_mas_DSHkM_Mini_TriPod_FIA.jpg";
    };
    class B_mas_M2StaticMG_FIA : I_mas_M2StaticMG_AAF {
        editorPreview = "tft_mas\UI\B_mas_M2StaticMG_FIA.jpg";
    };
    class B_mas_M2StaticMG_MiniTripod_FIA : I_mas_M2StaticMG_MiniTripod_AAF {
        editorPreview = "tft_mas\UI\B_mas_M2StaticMG_MiniTripod_FIA.jpg";
    };
    class B_mas_AGS_FIA : I_mas_AGS_AAF {
        editorPreview = "tft_mas\UI\B_mas_AGS_FIA.jpg";
    };
    class B_mas_Metis_FIA : I_mas_Metis_AAF {
        editorPreview = "tft_mas\UI\B_mas_Metis_FIA.jpg";
    };
    class B_mas_SPG9_AAF : I_mas_SPG9_AAF {
        editorPreview = "tft_mas\UI\B_mas_SPG9_AAF.jpg";
    };
    class B_mas_Stinger_AA_pod_FIA : I_mas_Stinger_AA_pod_AAF {
        editorPreview = "tft_mas\UI\B_mas_Stinger_AA_pod_FIA.jpg";
    };
    class B_mas_2b14_82mm_FIA : I_mas_2b14_82mm_AAF {
        editorPreview = "tft_mas\UI\B_mas_2b14_82mm_FIA.jpg";
    };
    class B_mas_D30_FIA : I_mas_D30_AAF {
        editorPreview = "tft_mas\UI\B_mas_D30_FIA.jpg";
    };
    class B_mas_D30_AT_FIA : I_mas_D30_AT_AAF {
        editorPreview = "tft_mas\UI\B_mas_D30_AT_FIA.jpg";
    };

    // --- mas_* ---
    //NOTE: vehicles in "mas_cars_Hilux", "mas_cars_LR", "mas_cars", "mas_ural" and "mas_HMMWV" already have correct Vehicle Class
    class Car_F;                // External class reference

    class B_mas_cars_Hilux_Base : Car_F {
        tf_isolatedAmount = 0.2;
    };

    class B_mas_HMMWV_Base : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.3;
    };

    class B_mas_cars_LR_BASE : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.1;
    };

    class I_mas_cars_UAZ_Base : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.2;
    };
    // editor previews
    class B_mas_cars_Hilux_MG : B_mas_cars_Hilux_Base {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_MG.jpg";
    };
    class B_mas_cars_Hilux_M2 : B_mas_cars_Hilux_MG {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_M2.jpg";
    };
    class B_mas_cars_Hilux_AGS30 : B_mas_cars_Hilux_Base {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_AGS30.jpg";
    };
    class B_mas_cars_Hilux_Unarmed : B_mas_cars_Hilux_Base {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_Unarmed.jpg";
    };
    class B_mas_cars_Hilux_Med : B_mas_cars_Hilux_Unarmed {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_Med.jpg";
    };
    class B_mas_cars_Hilux_SPG9 : B_mas_cars_Hilux_Base {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_SPG9.jpg";
    };
    class B_mas_cars_Hilux_RKTS : B_mas_cars_Hilux_SPG9 {
        editorPreview = "tft_mas\UI\B_mas_cars_Hilux_RKTS.jpg";
    };
    class B_mas_HMMWV_M2 : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_M2.jpg";
    };
    class B_mas_HMMWV_M134 : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_M134.jpg";
    };
    class B_mas_HMMWV_SOV : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_SOV.jpg";
    };
    class B_mas_HMMWV_SOV_M134 : B_mas_HMMWV_SOV {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_SOV_M134.jpg";
    };
    class B_mas_HMMWV_TOW : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_TOW.jpg";
    };
    class B_mas_HMMWV_Stinger : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_Stinger.jpg";
    };
    class B_mas_HMMWV_MK19 : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_MK19.jpg";
    };
    class B_mas_HMMWV_UNA : B_mas_HMMWV_Base {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_UNA.jpg";
    };
    class B_mas_HMMWV_MEV : B_mas_HMMWV_UNA {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_MEV.jpg";
    };
    class B_mas_HMMWV_M2_des : B_mas_HMMWV_M2 {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_M2_des.jpg";
    };
    class B_mas_HMMWV_M134_des : B_mas_HMMWV_M134 {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_M134_des.jpg";
    };
    class B_mas_HMMWV_SOV_des : B_mas_HMMWV_SOV {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_SOV_des.jpg";
    };
    class B_mas_HMMWV_SOV_M134_des : B_mas_HMMWV_SOV_M134 {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_SOV_M134_des.jpg";
    };
    class B_mas_HMMWV_TOW_des : B_mas_HMMWV_TOW {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_TOW_des.jpg";
    };
    class B_mas_HMMWV_Stinger_des : B_mas_HMMWV_Stinger {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_Stinger_des.jpg";
    };
    class B_mas_HMMWV_MK19_des : B_mas_HMMWV_MK19 {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_MK19_des.jpg";
    };
    class B_mas_HMMWV_UNA_des : B_mas_HMMWV_UNA {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_UNA_des.jpg";
    };
    class B_mas_HMMWV_MEV_des : B_mas_HMMWV_MEV {
        editorPreview = "tft_mas\UI\B_mas_HMMWV_MEV_des.jpg";
    };
    class B_mas_cars_LR_Unarmed : B_mas_cars_LR_BASE {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_Unarmed.jpg";
    };
    class B_mas_cars_LR_Med : B_mas_cars_LR_Unarmed {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_Med.jpg";
    };
    class B_mas_cars_LR_M2 : B_mas_cars_LR_BASE {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_M2.jpg";
    };
    class B_mas_cars_LR_Mk19 : B_mas_cars_LR_M2 {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_Mk19.jpg";
    };
    class B_mas_cars_LR_TOW : B_mas_cars_LR_M2 {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_TOW.jpg";
    };
    class B_mas_cars_LR_Stinger : B_mas_cars_LR_M2 {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_Stinger.jpg";
    };
    class B_mas_cars_LR_SPG9 : B_mas_cars_LR_TOW {
        editorPreview = "tft_mas\UI\B_mas_cars_LR_SPG9.jpg";
    };
    class I_mas_cars_LR_soft_Unarmed : B_mas_cars_LR_Unarmed {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_Unarmed.jpg";
    };
    class I_mas_cars_LR_soft_Med : B_mas_cars_LR_Med {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_Med.jpg";
    };
    class I_mas_cars_LR_soft_M2 : B_mas_cars_LR_M2 {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_M2.jpg";
    };
    class I_mas_cars_LR_soft_Mk19 : B_mas_cars_LR_Mk19 {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_Mk19.jpg";
    };
    class I_mas_cars_LR_soft_TOW : B_mas_cars_LR_TOW {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_TOW.jpg";
    };
    class I_mas_cars_LR_soft_Stinger : B_mas_cars_LR_Stinger {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_Stinger.jpg";
    };
    class I_mas_cars_LR_soft_SPG9 : B_mas_cars_LR_SPG9 {
        editorPreview = "tft_mas\UI\I_mas_cars_LR_soft_SPG9.jpg";
    };
    class I_mas_cars_UAZ_MG : I_mas_cars_UAZ_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_MG.jpg";
    };
    class O_mas_cars_UAZ_MG : I_mas_cars_UAZ_MG {
        editorPreview = "tft_mas\UI\O_mas_cars_UAZ_MG.jpg";
    };
    class I_mas_cars_UAZ_M2 : I_mas_cars_UAZ_MG {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_M2.jpg";
    };
    class I_mas_cars_UAZ_AGS30 : I_mas_cars_UAZ_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_AGS30.jpg";
    };
    class O_mas_cars_UAZ_AGS30 : I_mas_cars_UAZ_AGS30 {
        editorPreview = "tft_mas\UI\O_mas_cars_UAZ_AGS30.jpg";
    };
    class I_mas_cars_UAZ_Unarmed : I_mas_cars_UAZ_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_Unarmed.jpg";
    };
    class I_mas_cars_UAZ_Med : I_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_Med.jpg";
    };
    class O_mas_cars_UAZ_Unarmed : I_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_mas\UI\O_mas_cars_UAZ_Unarmed.jpg";
    };
    class O_mas_cars_UAZ_Med : O_mas_cars_UAZ_Unarmed {
        editorPreview = "tft_mas\UI\O_mas_cars_UAZ_Med.jpg";
    };
    class I_mas_cars_UAZ_SPG9 : I_mas_cars_UAZ_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_UAZ_SPG9.jpg";
    };
    class O_mas_cars_UAZ_SPG9 : I_mas_cars_UAZ_SPG9 {
        editorPreview = "tft_mas\UI\O_mas_cars_UAZ_SPG9.jpg";
    };

    // --- Ural (editor previews)
    class I_mas_cars_Ural_Base;         // External class reference
    class I_mas_cars_Ural_BM21_Base;    // External class reference
    class I_mas_cars_Ural_ZU23_Base;    // External class reference

    class I_mas_cars_Ural : I_mas_cars_Ural_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural.jpg";
    };
    class I_mas_cars_Ural_open : I_mas_cars_Ural {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_open.jpg";
    };
    class I_mas_cars_Ural_ammo : I_mas_cars_Ural_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_ammo.jpg";
    };
    class I_mas_cars_Ural_repair : I_mas_cars_Ural_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_repair.jpg";
    };
    class I_mas_cars_Ural_fuel : I_mas_cars_Ural_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_fuel.jpg";
    };
    class I_mas_cars_Ural_BM21 : I_mas_cars_Ural_BM21_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_BM21.jpg";
    };
    class I_mas_cars_Ural_ZU23 : I_mas_cars_Ural_ZU23_Base {
        editorPreview = "tft_mas\UI\I_mas_cars_Ural_ZU23.jpg";
    };
    class O_mas_cars_Ural : I_mas_cars_Ural {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural.jpg";
    };
    class O_mas_cars_Ural_open : I_mas_cars_Ural_open {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_open.jpg";
    };
    class O_mas_cars_Ural_ammo : I_mas_cars_Ural_ammo {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_ammo.jpg";
    };
    class O_mas_cars_Ural_repair : I_mas_cars_Ural_repair {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_repair.jpg";
    };
    class O_mas_cars_Ural_fuel : I_mas_cars_Ural_fuel {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_fuel.jpg";
    };
    class O_mas_cars_Ural_BM21 : I_mas_cars_Ural_BM21 {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_BM21.jpg";
    };
    class O_mas_cars_Ural_ZU23 : I_mas_cars_Ural_ZU23 {
        editorPreview = "tft_mas\UI\O_mas_cars_Ural_ZU23.jpg";
    };

    // --- mas_apc ---
    class Tank_F;                // External class reference

    class I_mas_BMP1_base : Tank_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.6;
    };

    class I_mas_BMP1_AAF_base : I_mas_BMP1_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP1_AAF_01 : I_mas_BMP1_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BMP1_AAF_01.jpg";
    };
    class O_mas_BMP1_OPF_01 : I_mas_BMP1_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BMP1_OPF_01.jpg";
    };
    class I_mas_BMP1P_AAF_base : I_mas_BMP1_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP1P_AAF_01 : I_mas_BMP1P_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BMP1P_AAF_01.jpg";
    };
    class O_mas_BMP1P_OPF_01 : I_mas_BMP1P_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BMP1P_OPF_01.jpg";
    };
    class I_mas_BMP2_base : I_mas_BMP1_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_AAF_base : I_mas_BMP2_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_AAF_01 : I_mas_BMP2_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BMP2_AAF_01.jpg";
    };
    class O_mas_BMP2_OPF_01 : I_mas_BMP2_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BMP2_OPF_01.jpg";
    };
    class I_mas_BMP2_HQ_Base : I_mas_BMP2_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_HQ_AAF_base : I_mas_BMP2_HQ_Base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_HQ_AAF_01 : I_mas_BMP2_HQ_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BMP2_HQ_AAF_01.jpg";
    };
    class O_mas_BMP2_HQ_OPF_01 : I_mas_BMP2_HQ_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BMP2_HQ_OPF_01.jpg";
    };
    class I_mas_BMP2_Ambul_Base : I_mas_BMP2_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_Ambul_AAF_base : I_mas_BMP2_Ambul_Base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BMP2_Ambul_01.jpg";
    };
    class O_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BMP2_Ambul_01.jpg";
    };

    // --- mas_brdm ---
    class mas_BRDM2_BASE;              // External class reference
    class mas_BTR60_Base;              // External class reference

    class I_mas_BRDM2 : mas_BRDM2_BASE {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BRDM2.jpg";
    };
    class O_mas_BRDM2 : I_mas_BRDM2 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BRDM2.jpg";
    };
    class I_mas_BTR60 : mas_BTR60_Base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_BTR60.jpg";
    };
    class O_mas_BTR60 : I_mas_BTR60 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_BTR60.jpg";
    };

    // --- mas_CH47 ---
    class Helicopter_Base_H;              // External class reference

    class B_mas_CH_47F_base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class B_mas_CH_47F : B_mas_CH_47F_base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_CH_47F.jpg";
    };

    // --- mas_veh_F_35C ---
    class Plane_Base_F;              // External class reference

    class mas_F_35C_Base : Plane_Base_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class mas_F_35C : mas_F_35C_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\mas_F_35C.jpg";
    };
    class mas_F_35C_S : mas_F_35C_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\mas_F_35C_S.jpg";
    };
    class mas_F_35C_cas : mas_F_35C {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\mas_F_35C_cas.jpg";
    };

    // --- mas_MI8 ---
    class mas_Mi8_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class I_mas_MI8 : mas_Mi8_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\I_mas_MI8.jpg";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.2, -0.5, -2}, {-1.1, -0.5, -2}};
    };
    class O_mas_MI8 : I_mas_MI8 {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\O_mas_MI8.jpg";
    };
    class I_mas_MI8MTV : mas_Mi8_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\I_mas_MI8MTV.jpg";
    };

    class O_mas_MI8MTV : I_mas_MI8MTV {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\O_mas_MI8MTV.jpg";
    };

    // --- mas_MI24 ---
    class mas_Mi24_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class I_mas_MI24V : mas_Mi24_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\I_mas_MI24V.jpg";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{0.7, 4, -2}, {-0.7, 4, -2}};
    };

    class O_mas_MI24V : I_mas_MI24V {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\O_mas_MI24V.jpg";
    };

    // --- mas_tanks ---
    class I_mas_T72_base : Tank_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.8;
    };

    class I_mas_T72_AAF_base : I_mas_T72_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_T72_AAF_01 : I_mas_T72_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T72_AAF_01.jpg";
    };
    class O_mas_T72_OPF_01 : I_mas_T72_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_T72_OPF_01.jpg";
    };
    class I_mas_T72B_Early_AAF_01 : I_mas_T72_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T72B_Early_AAF_01.jpg";
    };
    class O_mas_T72B_Early_OPF_01 : I_mas_T72B_Early_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_T72B_Early_OPF_01.jpg";
    };
    class I_mas_T72B_AAF_01 : I_mas_T72B_Early_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T72B_AAF_01.jpg";
    };
    class O_mas_T72B_OPF_01 : I_mas_T72B_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_T72B_OPF_01.jpg";
    };
    class I_mas_T72BM_AAF_01 : I_mas_T72B_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T72BM_AAF_01.jpg";
    };
    class O_mas_T72BM_OPF_01 : I_mas_T72BM_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_T72BM_OPF_01.jpg";
    };
    class I_mas_ZSU_Base : I_mas_T72_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_ZSU_AAF_base : I_mas_ZSU_Base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_ZSU_AAF_01 : I_mas_ZSU_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_ZSU_AAF_01.jpg";
    };
    class O_mas_ZSU_OPF_01 : I_mas_ZSU_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_ZSU_OPF_01.jpg";
    };
    class I_mas_T55_Base : I_mas_T72_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_T55_AAF_base : I_mas_T55_Base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_T55_AAF_01 : I_mas_T55_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T55_AAF_01.jpg";
    };
    class O_mas_T55_OPF_01 : I_mas_T55_AAF_01 {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\O_mas_T55_OPF_01.jpg";
    };
    class I_mas_T34_Base : I_mas_T72_base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_T34_AAF_base : I_mas_T34_Base {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_T34_AAF_01 : I_mas_T34_AAF_base {
        vehicleClass = "mas_ind_arm";
        editorPreview = "tft_mas\UI\I_mas_T34_AAF_01.jpg";
    };

    // --- mas_UH1Y ---
    class B_mas_UH1Y_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.5;
    };

    class B_mas_UH1Y_UNA_F : B_mas_UH1Y_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH1Y_UNA_F.jpg";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.1, -3.9, -0.1}, {-1.1, -3.9, -0.1}};
    };
    class B_mas_UH1Y_MEV_F : B_mas_UH1Y_UNA_F {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH1Y_MEV_F.jpg";
    };
    class B_mas_UH1Y_F : B_mas_UH1Y_Base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH1Y_F.jpg";
    };

    // --- mas_UH60M ---
    class B_mas_UH60_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.6;
    };

    class B_mas_UH60M_base : B_mas_UH60_Base {
        vehicleClass = "mas_ind_air";
    };
    class B_mas_UH60M_US_base : B_mas_UH60M_base {
        vehicleClass = "mas_ind_air";
    };
    class B_mas_UH60M : B_mas_UH60M_US_base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH60M.jpg";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.45, 1.8, -0.1}, {-1.25, 2.5, 0.21}};
    };
    class B_mas_UH60M_SF : B_mas_UH60M {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH60M_SF.jpg";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.45, 1.8, 0.1}, {-1.25, 2.5, 0.21}};
    };
    class B_mas_UH60M_MEV : B_mas_UH60M_US_base {
        vehicleClass = "mas_ind_air";
        editorPreview = "tft_mas\UI\B_mas_UH60M_MEV.jpg";
    };
};
