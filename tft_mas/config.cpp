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
		author[] = {"YoursTruly"};
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
    //NOTE: vehicles in "mas_cars_Hilux", "mas_cars_LR", "mas_cars", "mas_ural" and "mas_HMMWV" already have correct Vehicle Class

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
	};
	class O_mas_ZU23_AAF : I_mas_ZU23_AAF {
        vehicleClass = "mas_ind_stat";
	};
	class I_mas_DSHKM_AAF : I_mas_DSHKM_base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_DSHKM_AAF : I_mas_DSHKM_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_DSHkM_Mini_TriPod : I_mas_DSHKM_base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_DSHkM_Mini_TriPod : I_mas_DSHkM_Mini_TriPod {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_KORD_AAF : I_mas_KORD_Base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_KORD_AAF : I_mas_KORD_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_KORD_high_AAF : I_mas_KORD_Base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_KORD_high_AAF : I_mas_KORD_high_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M2StaticMG_MiniTripod_base : I_mas_M2StaticMG_base {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M2StaticMG_AAF : I_mas_M2StaticMG_base {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_M2StaticMG_AAF : I_mas_M2StaticMG_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_M2StaticMG_MiniTripod_AAF : I_mas_M2StaticMG_MiniTripod_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_AGS_AAF : I_mas_AGS_base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_AGS_AAF : I_mas_AGS_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_GMG_AAF : I_mas_GMG_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_GMG_AAF : I_mas_GMG_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_MK19_TriPod_AAF : I_mas_MK19_TriPod_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_Metis_AAF : I_mas_Metis_Base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_Metis_AAF : I_mas_Metis_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_TOW_TriPod_AAF : I_mas_TOW_TriPod_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_SPG9_AAF : I_mas_SPG9_base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_SPG9_AAF : I_mas_SPG9_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_Base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_Igla_AA_pod_AAF : I_mas_Igla_AA_pod_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_Base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_Stinger_AA_pod_AAF : I_mas_Stinger_AA_pod_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_2b14_82mm_AAF : I_mas_2b14_82mm_Base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_2b14_82mm_AAF : I_mas_2b14_82mm_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M252_base : I_mas_2b14_82mm_Base {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M252_AAF : I_mas_M252_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_M252_AAF : I_mas_M252_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_D30_AAF : I_mas_D30_base {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_D30_AAF : I_mas_D30_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_D30_AT_AAF : I_mas_D30_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class O_mas_D30_AT_AAF : I_mas_D30_AT_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M119_base : I_mas_D30_base {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M119_AAF : I_mas_M119_base {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_M119_AAF : I_mas_M119_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class I_mas_M119_AT_AAF : I_mas_M119_AAF {
		vehicleClass = "mas_ind_stat";
	};
	class B_mas_M119_AT_AAF : I_mas_M119_AT_AAF {
		vehicleClass = "mas_ind_stat";
	};

    // --- mas_apc ---
	class I_mas_BMP1_base;                // External class reference

	class I_mas_BMP1_AAF_base : I_mas_BMP1_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP1_AAF_01 : I_mas_BMP1_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_BMP1_OPF_01 : I_mas_BMP1_AAF_01 {
        vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP1P_AAF_base : I_mas_BMP1_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP1P_AAF_01 : I_mas_BMP1P_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_BMP1P_OPF_01 : I_mas_BMP1P_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_base : I_mas_BMP1_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_AAF_base : I_mas_BMP2_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_AAF_01 : I_mas_BMP2_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_BMP2_OPF_01 : I_mas_BMP2_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_HQ_Base : I_mas_BMP2_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_HQ_AAF_base : I_mas_BMP2_HQ_Base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_HQ_AAF_01 : I_mas_BMP2_HQ_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_BMP2_HQ_OPF_01 : I_mas_BMP2_HQ_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_Ambul_Base : I_mas_BMP2_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_Ambul_AAF_base : I_mas_BMP2_Ambul_Base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_BMP2_Ambul_01 : I_mas_BMP2_Ambul_01 {
		vehicleClass = "mas_ind_arm";
	};

    // --- mas_brdm ---
    class mas_BRDM2_BASE;              // External class reference
    class mas_BTR60_Base;              // External class reference

    class I_mas_BRDM2 : mas_BRDM2_BASE {
        vehicleClass = "mas_ind_arm";
    };
    class O_mas_BRDM2 : I_mas_BRDM2 {
        vehicleClass = "mas_ind_arm";
    };
    class I_mas_BTR60 : mas_BTR60_Base {
        vehicleClass = "mas_ind_arm";
    };
    class O_mas_BTR60 : I_mas_BTR60 {
        vehicleClass = "mas_ind_arm";
    };

    // --- mas_CH47 ---
    class B_mas_CH_47F_base;           // External class reference

    class B_mas_CH_47F : B_mas_CH_47F_base {
        vehicleClass = "mas_ind_air";
    };

    // --- mas_veh_F_35C ---
    class mas_F_35C_Base;              // External class reference

	class mas_F_35C : mas_F_35C_Base {
		vehicleClass = "mas_ind_air";
	};
	class mas_F_35C_S : mas_F_35C_Base {
		vehicleClass = "mas_ind_air";
	};
    class mas_F_35C_cas : mas_F_35C {
		vehicleClass = "mas_ind_air";
	};

    // --- mas_MI8 ---
    class mas_Mi8_Base;                // External class reference

	class I_mas_MI8 : mas_Mi8_Base {
		vehicleClass = "mas_ind_air";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.2, -0.5, -2}, {-1.1, -0.5, -2}};
	};
	class O_mas_MI8 : I_mas_MI8 {
        vehicleClass = "mas_ind_air";
	};
	class I_mas_MI8MTV : mas_Mi8_Base {
        vehicleClass = "mas_ind_air";
	};

	class O_mas_MI8MTV : I_mas_MI8MTV {
		vehicleClass = "mas_ind_air";
	};

    // --- mas_MI24 ---
    class mas_Mi24_Base;               // External class reference

	class I_mas_MI24V : mas_Mi24_Base {
        vehicleClass = "mas_ind_air";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{0.7, 4, -2}, {-0.7, 4, -2}};
	};

	class O_mas_MI24V : I_mas_MI24V {
		vehicleClass = "mas_ind_air";
	};

    // --- mas_tanks ---
    class I_mas_T72_base;              // External class reference

	class I_mas_T72_AAF_base : I_mas_T72_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T72_AAF_01 : I_mas_T72_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_T72_OPF_01 : I_mas_T72_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T72B_Early_AAF_01 : I_mas_T72_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_T72B_Early_OPF_01 : I_mas_T72B_Early_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T72B_AAF_01 : I_mas_T72B_Early_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_T72B_OPF_01 : I_mas_T72B_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T72BM_AAF_01 : I_mas_T72B_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_T72BM_OPF_01 : I_mas_T72BM_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_ZSU_Base : I_mas_T72_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_ZSU_AAF_base : I_mas_ZSU_Base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_ZSU_AAF_01 : I_mas_ZSU_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_ZSU_OPF_01 : I_mas_ZSU_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T55_Base : I_mas_T72_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T55_AAF_base : I_mas_T55_Base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T55_AAF_01 : I_mas_T55_AAF_base {
		vehicleClass = "mas_ind_arm";
	};
	class O_mas_T55_OPF_01 : I_mas_T55_AAF_01 {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T34_Base : I_mas_T72_base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T34_AAF_base : I_mas_T34_Base {
		vehicleClass = "mas_ind_arm";
	};
	class I_mas_T34_AAF_01 : I_mas_T34_AAF_base {
		vehicleClass = "mas_ind_arm";
	};

    // --- mas_UH1Y ---
    class B_mas_UH1Y_Base;             // External class reference

	class B_mas_UH1Y_UNA_F : B_mas_UH1Y_Base {
		vehicleClass = "mas_ind_air";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.1, -3.9, -0.1}, {-1.1, -3.9, -0.1}};
	};
	class B_mas_UH1Y_MEV_F : B_mas_UH1Y_UNA_F {
		vehicleClass = "mas_ind_air";
	};
	class B_mas_UH1Y_F : B_mas_UH1Y_Base {
		vehicleClass = "mas_ind_air";
	};

    // --- mas_UH60M ---
	class B_mas_UH60_Base;                // External class reference

	class B_mas_UH60M_base : B_mas_UH60_Base {
		vehicleClass = "mas_ind_air";
	};
	class B_mas_UH60M_US_base : B_mas_UH60M_base {
		vehicleClass = "mas_ind_air";
	};
	class B_mas_UH60M : B_mas_UH60M_US_base {
		vehicleClass = "mas_ind_air";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.45, 1.8, -0.1}, {-1.25, 2.5, 0.21}};
	};
	class B_mas_UH60M_SF : B_mas_UH60M {
        vehicleClass = "mas_ind_air";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {{1.45, 1.8, 0.1}, {-1.25, 2.5, 0.21}};
	};
	class B_mas_UH60M_MEV : B_mas_UH60M_US_base {
		vehicleClass = "mas_ind_air";
	};
};
