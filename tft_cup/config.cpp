class CfgPatches {
    class tft_cup
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = { "CUP_AirVehicles_UH60", "CUP_Vehicles_ACE_compat", "CUP_AirVehicles_MH60S", "CUP_AirVehicles_AH6", "CUP_Weapons_VehicleWeapons" };
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
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
    class Helicopter;     // External class reference
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
    
    class CUP_Uh60_Base: Helicopter_Base_H {
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

    class CUP_MH60S_Base: Helicopter_Base_H {
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

    class CUP_MH60L_Dap_4x_Base: CUP_Uh60_Base {
        transportSoldier = 2;
        memoryPointGun[] = {"machinegun", "machinegun_1"};    // Show machinegun fire from both doorgun memory points
        // Can't find a way to have separate memory points for M134 minigun and M230 autocannon.
        // Ideally M230 would use one of the rocket memory points.
        
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                initElev = 0;   // Point door guns straight forward for DAPs
                initTurn = 0;
                hasGunner = 0;
            };
            class RightDoorGun: RightDoorGun {
                initElev = 0;
                initTurn = 0;
                hasGunner = 0;
            };
        };
    };
    
    class CUP_MH60L_Dap_4x_AT_Base: CUP_MH60L_Dap_4x_Base {
        weapons[] = {
            "CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M"
        };
    };
    class CUP_MH60L_Dap_4x_Escort_Base: CUP_MH60L_Dap_4x_Base {
        weapons[] = {
            "CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134",
            "CUP_Vmlauncher_FFAR_veh_19Out", 
            "CUP_Vmlauncher_FFAR_veh_19In"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
            "CUP_2Rnd_pylonblank_M", 
            "CUP_2Rnd_Hydra_Pod_19_M", 
            "CUP_2Rnd_Hydra_Pod_19_M", 
            "CUP_38Rnd_FFAR_Out_M", 
            "CUP_38Rnd_FFAR_In_M"
        };
    };
    class CUP_MH60L_Dap_4x_Multi_Base: CUP_MH60L_Dap_4x_Base {
        weapons[] = {
            "CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134",
            "CUP_Vmlauncher_FFAR_veh_19Out"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
            "CUP_38Rnd_FFAR_Out_M"
        };
    };
    class CUP_MH60L_Dap_2x_Base;    // External class reference
    class CUP_MH60L_Dap_2x_AT_Base: CUP_MH60L_Dap_2x_Base {
        weapons[] = {
            "CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M"
        };
    };
    class CUP_MH60L_Dap_2x_Escort_Base: CUP_MH60L_Dap_2x_Base {
        weapons[] = {
            "CMFlareLauncher", 
            "CUP_weapon_mastersafe", 
            "TFT_M134",
            "CUP_Vmlauncher_FFAR_veh_19In"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine", 
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
            "CUP_2Rnd_pylonblank_M", 
            "CUP_2Rnd_pylonblank_M", 
            "CUP_2Rnd_Hydra_Pod_19_M", 
            "CUP_2Rnd_pylonblank_M", 
            "CUP_38Rnd_FFAR_In_M"
        };
    };
    class CUP_MH60L_Dap_2x_Multi_Base: CUP_MH60L_Dap_2x_Base {
        weapons[] = {
            "CMFlareLauncher",
            "CUP_weapon_mastersafe", 
            "TFT_M134",
            "CUP_Vmlauncher_FFAR_veh_19Right"
        };
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine",
            "CUP_fake_weapon_mag", 
            "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
            "CUP_19Rnd_FFAR_M"
        };
    };

    // Add fast roping to MH6M
    class CUP_MH6_TRANSPORT;    // External class reference
    class CUP_B_MH6M_USA: CUP_MH6_TRANSPORT {
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };
};
