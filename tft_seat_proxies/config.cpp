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
    class tft_floorhatch_proxy: vurtual_seat
    {
        transportSoldier = 0;
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
        class AnimationSources
        {
        };
        displayName = "Loadmaster";
        model = "\tft_seat_proxies\data\floorhatch_proxy.p3d";
        hideWeaponsCargo = "true";
        ejectDeadCargo = 0;
        class EventHandlers
        {
            init = "_this call vurtual_seat_fnc_stretcher";
        };
        class Damage
        {
            tex[] = {};
            mat[] = {"vurtual_seat\Data\stretcher.rvmat", "vurtual_seat\Data\stretcher.rvmat", "vurtual_seat\Data\seat_destruct.rvmat"};
        };
    };
};
