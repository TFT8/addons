class CfgPatches
{
    class tft8_faction
    {
        author="Ferris";
        units[]=
        {
            /// Units ///
            "tft8_rifleman",
            /// Vehicles ///
            "tft8_MH60M", 
            "tft8_MH60M_DAP", 
			"tft8_polaris_razor",
			"tft8_asv",
			"tft8_asv_m2crows",
			"tft8_asv_mk19crows",
			"tft8_auv",
			"tft8_auv_m2_logi",
			"tft8_auv_mk19_logi",
			"tft8_stryker",
			"tft8_littlebird_scout",
			"tft8_littlebird_transport",
			"tft8_littlebird_attack",
			"tft8_apache",
			"tft8_chinook",
			"tft8_hercules",
			"tft8_pbr",
			"tft8_rhib",
			"tft8_zodiac",
            /// Backpacks ///
            "tft8_onebag_mk6",
            "tft8_onebag_m2low",
            "tft8_onebag_m2high",
            "tft8_onebag_mk19",
            "tft8_onebag_tow",
            /// Statics ///
			"tft8_m2_highmount",
			"tft8_m2_lowmount",
			"tft8_mk19_lowmount",
			"tft8_tow_tripod",
			"tft8_mk6_mortar"
        };
        weapons[]=
        {
            
        };
        requiredAddons[]=
        {
            "the_ocp_project",
            "rhsusf_c_statics"
        };
    };
};

class CfgFactionClasses {
    class B_TFT8 {
        displayName = "_Task Force Tempor 8";
        side = 1;
        flag = "\tft_faction\TFT8_flag.paa";
        icon = "\tft_faction\TFT8_flag.paa";
        priority = 1;
    };
};

class CfgVehicles
{	//********************************************************************************************************************************************************************************************
    //*****           RHS Vehicles             ***************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class rhsusf_mrzr4_d;
	class tft8_polaris_razor: rhsusf_mrzr4_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="Polaris RZR[75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1238A1_socom_d;
	class tft8_asv: rhsusf_M1238A1_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1238[ASV][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1238A1_M2_socom_d;
	class tft8_asv_m2crows: rhsusf_M1238A1_M2_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1238(M2|CROWS)[ASV][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1238A1_Mk19_socom_d;
	class tft8_asv_mk19crows: rhsusf_M1238A1_Mk19_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1238(Mk19|CROWS)[ASV][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1239_socom_d;
	class tft8_auv: rhsusf_M1239_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1239[AUV][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1239_M2_Deploy_socom_d;
	class tft8_auv_M2_logi: rhsusf_M1239_M2_Deploy_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1239(M2|CROWS)[AUV|LOGI][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_M1239_Mk19_Deploy_socom_d;
	class tft8_auv_Mk19_logi: rhsusf_M1239_Mk19_Deploy_socom_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1239(Mk19|CROWS)[AUV|LOGI][75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class rhsusf_stryker_m1126_m2_d;
	class tft8_stryker: rhsusf_stryker_m1126_m2_d
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="M1126(M2|CROWS)[75th]"
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	/// Air Vehicles ///
	class RHS_MELB_H6M;
	class tft8_littlebird_scout: RHS_MELB_H6M
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="OH-6M[160th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class RHS_MELB_MH6M;
	class tft8_littlebird_transport: RHS_MELB_MH6M
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="MH-6M[160th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class RHS_MELB_AH6M;
	class tft8_littlebird_attack: RHS_MELB_AH6M
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="AH-6M[160th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class RHS_AH64D;
	class tft8_apache: RHS_AH64D
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="AH-64D(BlockII)[160th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class RHS_CH_47F;
	class tft8_chinook: RHS_CH_47F
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="CH-47F[160th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class RHS_C130J;
	class tft8_hercules: RHS_C130J
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="C-130J[37th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	/// Boats ///
	class rhsusf_mkvsoc;
	class tft8_pbr: rhsusf_mkvsoc
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="MkVSOC[75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class I_C_Boat_Transport_02_F;
	class tft8_rhib: I_C_Boat_Transport_02_F
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="RHIB[75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
	class B_Boat_Transport_01_F;
	class tft8_zodiac: B_Boat_Transport_01_F
	{
		side=1;
		scope=2;
		crew="tft8_rifleman";
		faction="B_TFT8";
		displayName="Zodiac[75th]";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
	};
    //********************************************************************************************************************************************************************************************
    //*****            Custom Units              *************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class B_Soldier_F;
    class US_Soldier_full: B_Soldier_F {};
    class tft8_rifleman: US_Soldier_full
	{
		author="TFT8";
		scope=2;
		faction="B_TFT8";
		uniformClass="US_uniform_rifleman";
		model="\TheACUProject\uniform_jacket\US_uniform_02.p3d";
		Items[]=
        {
            "tft8_patrolcap_field",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_EarPlugs",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_MapTools",
			"ACE_IR_Strobe_Item",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_epineprhine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ItemTabHCam",
			"ACE_EntrenchingTool",
			"ACE_salineIV_500",
			"ACE_SpraypaintGreen",
			"SMA_SFFL_BLK",
            "ACE_NVG_Gen4"
        };
        RespawnItems[]=
        {
            "tft8_patrolcap_field",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_EarPlugs",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_MapTools",
			"ACE_IR_Strobe_Item",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_fieldDrerssing",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_epineprhine",
			"ACE_epinephrine",
			"ACE_morphine",
			"ACE_morphine",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ItemTabHCam",
			"ACE_EntrenchingTool",
			"ACE_salineIV_500",
			"ACE_SpraypaintGreen",
			"SMA_SFFL_BLK",
            "ACE_NVG_Gen4"
        };
		linkedItems[]=
        {
            "tft8_ach_helmet_ocp",
            "tft8_ciras_ocp_556",
			"rhsusf_oakley_goggles_clr",
            "ItemMap",
			"ItemAndroid",
            "ItemCompass",
            "ItemWatch",
            "TFAR_anprc152"
        };
		respawnLinkedItems[]=
        {
            "tft8_ach_helmet_ocp",
            "tft8_ciras_ocp_556",
			"rhsusf_oakley_goggles_clr",
            "ItemMap",
			"ItemAndroid",
            "ItemCompass",
            "ItemWatch",
            "TFAR_anprc152"
        };
		weapons[]=
        {
            "tft8_m4a1_standard",
            "rhsusf_weap_m9",
            "rhsusf_bino_m24",
            "Throw",
            "Put"
        };
		respawnWeapons[]=
        {
            "tft8_m4a1_standard",
            "rhsusf_weap_m9",
            "rhsusf_bino_m24",
            "Throw",
            "Put"
        };
		magazines[]=
        {
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhsusf_mag_15Rnd_9x19_JHP",
            "rhsusf_mag_15Rnd_9x19_JHP",
            "rhsusf_mag_15Rnd_9x19_JHP",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen"
        };
		respawnMagazines[]=
        {
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhs_mag_30Rnd_556x45_M855A1_PMAG",
            "rhsusf_mag_15Rnd_9x19_JHP",
            "rhsusf_mag_15Rnd_9x19_JHP",
            "rhsusf_mag_15Rnd_9x19_JHP",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen"
        };
	};
    //********************************************************************************************************************************************************************************************
    //*****            ZULU Bags              ****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class Weapon_Bag_Base;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base
	{
		class assembleinfo;
	};
    class B_Kitbag_Base;
    class B_Kitbag_cbr: B_Kitbag_Base{};
    class tft8_kitbag_ocp: B_Kitbag_cbr{};
	class tft8_onebag_mk6: tft8_kitbag_ocp
	{
        side=1;
		scope=2;
		displayName="[TFT8]ZuluBag[Mk6 Mortar]";
		maximumLoad=0;
		mass=200;
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="tft8_mk6_mortar";
			displayName="[TFT8]Mk6 Mortar";
			dissasembleTo[]={};
		};
	};
	class tft8_onebag_m2low: tft8_kitbag_ocp
	{
        side=1;
		scope=2;
		displayName="[TFT8]ZuluBag[M2HB(M3)]";
		maximumLoad=0;
		mass=200;
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="tft8_m2_lowmount";
			displayName="[TFT8]M2HB(M3)";
			dissasembleTo[]={};
		};
	};
	class tft8_onebag_m2high: tft8_kitbag_ocp
	{
        side=1;
		scope=2;
		displayName="[TFT8]ZuluBag[M2HB(M3|AA)]";
		maximumLoad=0;
		mass=200;
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="tft8_m2_highmount";
			displayName="[TFT8]M2HB(M3|AA)";
			dissasembleTo[]={};
		};
	};
	class tft8_onebag_mk19: tft8_kitbag_ocp
	{
        side=1;
		scope=2;
		displayName="[TFT8]ZuluBag[Mk19(M3)]";
		maximumLoad=0;
		mass=200;
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="tft8_mk19_lowmount";
			displayName="[TFT8]Mk19(M3)";
			dissasembleTo[]={};
		};
	};
	class tft8_onebag_tow: tft8_kitbag_ocp
	{
        side=1;
		scope=2;
		displayName="[TFT8]ZuluBag[TOW|Tripod]";
		maximumLoad=0;
		mass=200;
		class assembleinfo
		{
			primary=1;
			base="";
			assembleTo="tft8_tow_tripod";
			displayName="[TFT8]TOW|Tripod";
			dissasembleTo[]={};
		};
	};
	//********************************************************************************************************************************************************************************************
    //*****            ZULU Statics              *************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class ViewOptics;
		class EventHandlers;
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class StaticATWeapon: StaticWeapon
	{
	};
	class StaticAAWeapon: StaticWeapon
	{
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class rhs_m2staticmg_base: StaticMGWeapon
	{
		class Damage{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
		class assembleInfo{};
	};
	class RHS_M2StaticMG_WD: rhs_m2staticmg_base{};
	class tft8_m2_highmount: RHS_M2StaticMG_WD
	{
        side=1;
		scope=2;
		displayName="[TFT8]M2HB(M3|AA)";
		faction="B_TFT8";
		crew="tft8_rifleman";
		typicalCargo[]={"tft8_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"tft8_onebag_m2high"
			};
			displayName="";
		};
	};
	class RHS_M2StaticMG_MiniTripod_base: rhs_m2staticmg_base
	{
		class assembleInfo{};
	};
	class RHS_M2StaticMG_MiniTripod_WD: RHS_M2StaticMG_MiniTripod_base{};
	class tft8_m2_lowmount: RHS_M2StaticMG_MiniTripod_WD
	{
        side=1;
		scope=2;
		displayName="[TFT8]M2HB(M3)";
		faction="B_TFT8";
		crew="tft8_rifleman";
		typicalCargo[]={"tft8_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"tft8_onebag_m2low"
			};
			displayName="";
		};
	};
	class RHS_MK19_TriPod_base: StaticGrenadeLauncher
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
	};
	class RHS_MK19_TriPod_WD: RHS_MK19_TriPod_base {};
	class tft8_mk19_lowmount: RHS_MK19_TriPod_WD
	{
        side=1;
		scope=2;
		displayName="[TFT8]Mk19(M3)";
		faction="B_TFT8";
		crew="tft8_rifleman";
		typicalCargo[]={"tft8_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19",
					"RHS_48Rnd_40mm_MK19"	
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"tft8_onebag_mk19"
			};
			displayName="";
		};
	};
	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		class Damage{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
		class assembleInfo {};
	};
	class RHS_TOW_TriPod_WD: RHS_TOW_TriPod_base{};
	class tft8_tow_tripod: RHS_TOW_TriPod_WD
	{
        side=1;
		scope=2;
		displayName="[TFT8]TOW|Tripod";
		faction="B_TFT8";
		crew="tft8_rifleman";
		typicalCargo[]={"tft8_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2A",
					"rhs_mag_TOW2bb"
				};
			};
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"tft8_onebag_tow"
			};
			displayName="";
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turret: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
			};
		};
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turret: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics {};
			};
		};
	};
	class tft8_mk6_mortar: B_Mortar_01_F
	{
        side=1;
		scope=2;
		displayName="[TFT8]Mk6 Mortar";
		faction="B_TFT8";
		crew="tft8_rifleman";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"tft8_onebag_mk6"
			};
			displayName="";
		};
	};
	class FlagCarrier;
	class Flag_TFT8_F: FlagCarrier
	{
		author = "TFT8";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"flag", 0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\tft_faction\Flag_TFT8_F.jpg";
		_generalMacro = "Flag_TFT8_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (TFT8)";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\tft_faction\TFT8_flag.paa'";
		};
		class ACE_Actions
		{
		};
	};

	class FlagPole_F: FlagCarrier {};
	class tft8_flag: FlagPole_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\FlagPole_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="[TFT8]Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'tft_faction\TFT8_flag.paa'";
		};
	};
	class tft8_ranger_flag: FlagPole_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\FlagPole_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="[TFT8]Flag|Ranger";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'tft_faction\UI\rangerflag.paa'";
		};
	};
};
class CfgWeapons
{
	class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    };
	class US_uniform_full: Uniform_Base{};
    class US_uniform_rifleman: US_uniform_full
    {
        scope =2;
        picture="\TheACUProject\UI\icon_tft8_ocp_ui.paa"; 
        author="TFT8";
	    displayName="[TFT8]ACU[RCT/PVT]";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem 
		{
            uniformClass = "tft8_rifleman";
            containerClass = "Supply60";
            mass = 10;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000002;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000002;
				};
			};
        };
    };
    class rhs_weap_m4_base;
    class rhs_weap_m4a1: rhs_weap_m4_base {};
    class rhs_weap_m4a1_carryhandle: rhs_weap_m4a1
    {
        class LinkedItems
        {
            class LinkedItemsOptic {};
            class LinkedItemsAcc {};
            class LinkedItemsUnder {};
            class LinkedItemsMuzzle {};
        };
    };
    class tft8_m4a1_standard: rhs_weap_m4a1_carryhandle
    {
        scope=2;
        author="TFT8";
        displayName="[TFT8]M4A1(Carryhandle)[Standard]";
        class LinkedItems: LinkedItems
        {
            class LinkedItemsOptic
            {
                slot="CowsSlot";
                item="rhsusf_acc_compm4";
            };
            class LinkedItemsAcc
            {
                slot="PointerSlot";
                item="rhsusf_acc_anpeq15side_bk";
            };
            class LinktedItemsUnder
            {
                slot="UnderBarrelSlot";
                item="rhsusf_acc_grip1";
            };
            class LinkedItemsMuzzle
            {
                slot="MuzzleSlot";
                item="rhsusf_acc_SF3P556";
            };
        };
    };
};