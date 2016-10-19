class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"cba_xeh","cba_xeh_a3"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

class CfgFunctions {
    class tft_misc {
        tag = "TFT";
        class functions {
            file = "tft_misc\functions";
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
