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

class RscText;
class ctrlStatic;
class RscPicture;
class RscListbox;
class RscProgress;
class RscButtonMenuOK;
class RscStructuredText;
class RscButtonMenuCancel;

#include "\tft_misc\aar\UI\loadDialog.hpp"

class RscTitles
{
    #include "\tft_misc\aar\UI\controlsDialog.hpp"
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
    class tft_aar {
        tag = "tft_aar";
        class aar {
            file = "tft_misc\aar";
            class deleteRecording;
            class getIcons;
            class initControlsDialog;
            class initLoadDialog;
            class loadRecording;
            class startRecording;
            class stopRecording;
            class saveBuffer;
            class terminate;
            class getRecordingFromDB;
            class deleteRecordingFromDB;
        };
    };
};
