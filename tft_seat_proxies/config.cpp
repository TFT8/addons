class CfgPatches {
    class tft_seat_proxies {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {
            "vurtual_seat"
        };
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Ampersand";
    };
};

class CfgVehicles {
    class Tank_F;
    class vurtual_seat: Tank_F {
        class CargoTurret;
    };
    class tft_proxy_base: vurtual_seat {
        class CargoTurret: CargoTurret {};
        transportSoldier = 0;
    };
    
    class tft_proxy_floorhatch: tft_proxy_base
    {
        //cargoAction[] = {"commander_apcwheeled1_out"};
        
        class Turrets
        {
            class MainTurret: CargoTurret
            {
                gunnerAction = "commander_apcwheeled1_out";
                gunnerInAction = "commander_apcwheeled1_out";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "floorhatch";
                gunnerCompartments = "Compartment1";
                proxyIndex = 1;
                isPersonTurret = 0;
                forceHideGunner = 1;
                /*
                maxElev = 45;
                minElev = -180;
                maxTurn = 95;
                minTurn = -95;
                */
                stabilizedInAxes = 3;
                primaryGunner = 1;
                dontCreateAI = 0;
                ejectDeadGunner = 0;
            };
        };
        class AnimationSources {};
        displayName = "Loadmaster";
        model = "\tft_seat_proxies\data\floorhatch.p3d";
        hideWeaponsCargo = "false";
        ejectDeadCargo = 0;
    };
    class tft_proxy_stand: tft_proxy_base
    {
        class AnimationSources {};
        displayName = "Stand";
        model = "\tft_seat_proxies\data\floorhatch.p3d";
        hideWeaponsDriver = "false";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass = "";	// Type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit	= 40;				// Minimal height above terrain when parachute is used.
                canBeTransported = 1;				// 0 (false) / 1 (true)
                dimensions[] = { "BBox_1_1_pos", "BBox_1_2_pos" }; // Memory-point-based override of automatic bounding box
            };
        };
    };
};
