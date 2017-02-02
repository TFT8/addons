class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"A3_Weapons_F","A3_Sounds_F","A3_Weapons_F_Exp","cba_xeh","cba_xeh_a3"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

class CfgFunctions {
    class tft_misc {
        tag = "tft";
        class functions {
            file = "tft_misc\functions";
            class addActions;
            class moveMarker;
            class moveRespawn;
            class displayText;
            class prepPhaseInit;
            class prepPhase;
            class simulationMgmt;
            class simulationToggle;
        };
        class spectator {
            file = "tft_misc\spectator";
            class spectate;
            class spectateEnd;
            class draw2D;
            class draw3D;
            class assignTarget;
        };
    };
};

class CfgAmmo {
    class RocketBase;   //External Reference

    class R_PG7_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        cost = 100;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        cost = 200;
    };
};
