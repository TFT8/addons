class CfgPatches {
    class tft_cup
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = { "CUP_AirVehicles_UH60", "CUP_Vehicles_ACE_compat", "CUP_AirVehicles_MH60S", "CUP_Weapons_VehicleWeapons" };
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
    };
};

class CfgWeapons {
    class MGunCore;       // External class reference
    class CannonCore;     // External class reference

    class CUP_Vlmg_M134_veh: MGunCore {
        modes[] = {"HighROF", "close", "short", "medium", "far"};
    };
    class CUP_Vacannon_M230_veh: CannonCore {
        modes[] = {"close", "short", "medium", "far", "manual"};
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
                available = 1;
            };
            class CloseDoors: OpenDoors {
                available = 1;
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

    class CUP_MH60S_Base: Helicopter_Base_H {
        class UserActions {
            class OpenDoors {
                available = 1;
            };
            class CloseDoors: OpenDoors {
                available = 1;
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

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                hasGunner = 0;
            };
            class RightDoorGun: RightDoorGun {
                hasGunner = 0;
            };
        };
    };
};
