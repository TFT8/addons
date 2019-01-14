class CfgPatches {
    class tft_cup
    {
        units[] = {"TFT_B_Medical"};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = { "CUP_AirVehicles_UH60", "CUP_Vehicles_ACE_compat", "CUP_AirVehicles_MH60S", "CUP_AirVehicles_AH6", "CUP_Weapons_VehicleWeapons", "A3_Weapons_F", "CUP_Weapons_Ammunition", "ace_frag", "ace_cookoff", "CUP_Weapons_Backpacks"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
    };
};

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    whistleDist = 32;

#define ENHANCED_DAP \
	memoryPointGun[] = {"machinegun", "machinegun_1"}; \
	weapons[] += { \
		"CUP_weapon_mastersafe",  \
		"TFT_M134" \
	}; \
	magazines[] += { \
		"CUP_fake_weapon_mag",  \
		"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M" \
	}; \
	 \
	class Turrets: Turrets { \
		class MainTurret: MainTurret { \
			initElev = 0; \
			initTurn = 0; \
			hasGunner = 0; \
		}; \
		class RightDoorGun: RightDoorGun { \
			initElev = 0; \
			initTurn = 0; \
			hasGunner = 0; \
		}; \
	}; \
	
class CfgAmmo {
    class RocketBase;   // External Class Reference
    class ShellCore;    // External Class Reference

    class ShellBase : ShellCore {
        soundFly[] = {"a3\sounds_f\vehicles\soft\tires\int-tires-sand2.wss",170,2,1000};
        //A3\Sounds_F\weapons\Rockets\rocket_fly_1, 8, 1.2
        //a3\sounds_f_epc\Device\device_disassembled_loop.wss, 30, 1.6
        //A3\Sounds_F\weapons\smokeshell\smoke_loop2, 6, 1.3
        
    };
    class ace_explosion_reflection_base: ShellBase {
        soundFly[] = {"",0.0316228,4};
    };
    class ace_ammoExplosion: ShellBase {
        soundFly[] = {"",0.0316228,4};
    };

    class R_PG32V_F: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class R_TBG32V_F: R_PG32V_F {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_PG7V_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_PG7VL_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_PG7VR_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_OG7_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_PG9_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_OG9_HE: CUP_R_PG9_AT {
        ENHANCED_LAUNCHER
        cost = 15;
    };
    class CUP_R_SMAW_HEDP: RocketBase {
        ENHANCED_LAUNCHER
        cost = 20;
    };
    class CUP_R_SMAW_HEAA: CUP_R_SMAW_HEDP {
        ENHANCED_LAUNCHER
        cost = 100;
    };
    class CUP_R_M136_AT: RocketBase {
        ENHANCED_LAUNCHER
    };
    class CUP_R_MEEWS_HEDP: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP {
        ENHANCED_LAUNCHER
        cost = 100;
    };
    class CUP_R_RPG18_AT: RocketBase {
        ENHANCED_LAUNCHER
        cost = 25;
    };
    class CUP_R_SMAW_HEDP_N: RocketBase {
        ENHANCED_LAUNCHER
    };
    class CUP_R_SMAW_HEAA_N: CUP_R_SMAW_HEDP_N {
        ENHANCED_LAUNCHER
        cost = 100;
    };
};

class CfgWeapons {
    class CUP_Vlmg_M134_veh;        // External class reference

    // Making new weapons with fewer fire modes to not affect weapons used elsewhere
    class TFT_M134: CUP_Vlmg_M134_veh {
        modes[] = {"HighROF", "close", "short", "medium", "far"};
    };
};

class CfgVehicles {
    class Helicopter;       // External class reference
    class Helicopter_Base_F: Helicopter {
        class Turrets;
        class UserActions;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class UserActions;
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class CUP_AH6_BASE: Helicopter_Base_F {
        // Increase copilot camera range of motion
        class Turrets: Turrets {
			class MainTurret;
            class CopilotTurret: MainTurret {
				minTurn = -135;
				maxTurn = 135;
            };
        };
        class UserActions {
            class CopilotStowMonitor    { showWindow = 0; };
            class CopilotUnStowMonitor  { showWindow = 0; };
            class PilotStowMonitor      { showWindow = 0; };
            class PilotUnStowMonitor    { showWindow = 0; };
        };
    };
    class CUP_AH6_ARMED_BASE: CUP_AH6_BASE {
        class UserActions {
            class CopilotStowMonitor    { showWindow = 0; };
            class CopilotUnStowMonitor  { showWindow = 0; };
            class PilotStowMonitor      { showWindow = 0; };
            class PilotUnStowMonitor    { showWindow = 0; };
        };
    };

    class CUP_Uh60_Base: Helicopter_Base_H {
		weapons[] += {
			"CMFlareLauncher"
        };
        magazines[] += {
            "168Rnd_CMFlare_Chaff_Magazine"
        };
        class UserActions: UserActions {
            class OpenDoors {
                available = 1;    // Making sure you can open/close doors in all these choppers
                showWindow = 0;   // Prevent action from popping up in middle of screen
            };
            class CloseDoors: OpenDoors {
                available = 1;
                showWindow = 0;
            };
        };
        
        // Increase door gun range of motion
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -85;
                maxElev = 60;
                minTurn = -5;
                maxTurn = 180;
            };
            class RightDoorGun: MainTurret {
                minElev = -85;
                maxElev = 60;
                minTurn = -180;
                maxTurn = 5;
            };
        };
    };

    class CUP_Uh60s_Base: CUP_Uh60_Base {
        class UserActions {
            class OpenDoors {
                available = 1;
                showWindow = 0;
            };
            class CloseDoors: OpenDoors {
                available = 1;
                showWindow = 0;
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -85;
                maxElev = 60;
                minTurn = -5;
                maxTurn = 180;
            };
            class RightDoorGun: MainTurret {
                minElev = -85;
                maxElev = 60;
                minTurn = -180;
                maxTurn = 5;
            };
        };
    };

	class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60_Base {
		ENHANCED_DAP
	};
	class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60_Base {
		ENHANCED_DAP
	};
	class CUP_UH60S_Dap_2x_Dynamic_Base: CUP_Uh60S_Base {
		ENHANCED_DAP
	};
	class CUP_UH60S_Dap_4x_Dynamic_Base: CUP_Uh60S_Base {
		ENHANCED_DAP
	};
/*
    class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60_Base {
        //transportSoldier = 2;
        memoryPointGun[] = {"machinegun", "machinegun_1"};    // Show machinegun fire from both doorgun memory points
        // Can't find a way to have separate memory points for M134 minigun and M230 autocannon.
        // Ideally M230 would use one of the rocket memory points.
        weapons[] += {
            //"CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134"
        };
        magazines[] += {
            //"168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M"
        };
        
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                initElev = 0;   // Point door guns straight forward for DAPs
                initTurn = 0;
                //hasGunner = 0;
            };
            class RightDoorGun: RightDoorGun {
                initElev = 0;
                initTurn = 0;
                //hasGunner = 0;
            };
        };
    };
*/

    // Add fast roping to MH6M
    class CUP_MH6_TRANSPORT;    // External class reference
    class CUP_B_MH6M_USA: CUP_MH6_TRANSPORT {
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };
	
	// Add medical backpack
	class CUP_B_TK_Medic_Desert;
	class TFT_B_Medical: CUP_B_TK_Medic_Desert{
		author = "TFT8";
		_generalMacro = "TFT_B_Medical";
		displayName = "Medical Bag [TFT8]";
		//dlc = "TFT8";
		hiddenSelectionsTextures[] = {"tft_cup\data\medicalpack_tft8_co.paa"};
		maximumLoad = 240;
		mass = 40;
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
            //ACE medical
            class _xx_ACE_fieldDressing {
                name = "ACE_fieldDressing";
                count = 20;
            };
            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
                count = 20;
            };
            class _xx_ACE_quikclot {
                name = "ACE_quikclot";
                count = 20;
            };
            class _xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 20;
            };
            class _xx_ACE_morphine {
                name = "ACE_morphine";
                count = 20;
            };
            class _xx_ACE_tourniquet {
                name = "ACE_tourniquet";
                count = 20;
            };
            class _xx_ACE_bloodIV_500 {
                name = "ACE_bloodIV_500";
                count = 5;
            };
            class _xx_ACE_plasmaIV_500 {
                name = "ACE_plasmaIV_500";
                count = 5;
            };
            class _xx_ACE_salineIV_500 {
                name = "ACE_salineIV_500";
                count = 10;
            };
            class _xx_ACE_surgicalKit {
                name = "ACE_surgicalKit";
                count = 3;
            };
            class _xx_ACE_CableTie {
                name = "ACE_CableTie";
                count = 5;
            };
            class _xx_ACE_epinephrine {
                name = "ACE_epinephrine";
                count = 5;
            };
            class _xx_ACE_bodyBag {
                name = "ACE_bodyBag";
                count = 2;
            };
        };
	};
	
};
