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
    class vurtual_seat;
    class tft_proxy_base: vurtual_seat {
        class CargoTurret;
        class Turrets;
    };
    
    class tft_proxy_floorhatch: tft_proxy_base {
        displayName = "Loadmaster";
        model = "\tft_seat_proxies\data\floorhatch.p3d";
        
        class Turrets: Turrets {
            class MainTurret: CargoTurret {
                gunnerName = "Crew Chief";
                gunnerAction = "commander_apcwheeled1_out";
                gunnerInAction = "commander_apcwheeled1_out";
                proxyIndex = 1;
                isPersonTurret = 1;
                forceHideGunner = 0;
                stabilizedInAxes = 3;
                primaryGunner = 1;
                dontCreateAI = 0;
                ejectDeadGunner = 0;
                hideWeaponsGunner = 0;
            };
        };
        
        class AnimationSources {};
    };
};
