class IGUIBack;             // External class reference
class RscText;              // External class reference
class RscEdit;              // External class reference
class RscButtonMenuCancel;  // External class reference
class RscButtonMenuOK;      // External class reference

class tft_callsign_settings {
    idd = -1;
    name= "tft_callsign_settings";
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "((_this select 0) displayCtrl 1100) ctrlSetText (groupId group player)";

    class Controls {
        class tftcBackground : IGUIBack {
            idc = 2100;
            x = 0.419643 * safezoneW + safezoneX;
            y = 0.457143 * safezoneH + safezoneY;
            w = 0.142857 * safezoneW;
            h = 0.0757143 * safezoneH;
        };
        class tftcTitle : RscText {
            idc = 2101;
            text = "Change callsign";
            x = 0.419643 * safezoneW + safezoneX;
            y = 0.457143 * safezoneH + safezoneY;
            w = 0.125 * safezoneW;
            h = 0.0285714 * safezoneH;
            colorBackground[] = {0,0,0,0.5};
        };
        class tftcEdit : RscEdit {
            idc = 1100;
            x = 0.428571 * safezoneW + safezoneX;
            y = 0.5 * safezoneH + safezoneY;
            w = 0.0803571 * safezoneW;
            h = 0.0248678 * safezoneH;
            colorText[] = {0,0,0,0.75};
            colorBackground[] = {1,1,1,0.75};
        };
        class tftcButtonOK : RscButtonMenuOK {
            class Attributes {
                align = "right";
            };
            x = 0.508408 * safezoneW + safezoneX;
            y = 0.499074 * safezoneH + safezoneY;
            w = 0.0451637 * safezoneW;
            h = 0.0257937 * safezoneH;
            onButtonClick = "(group player) setGroupIdGlobal [ctrlText ((ctrlParent (_this select 0)) displayCtrl 1100)]; closeDialog 0";
        };
        class tftcButtonCancel : RscButtonMenuCancel {
            class Attributes {
                align = "center";
            };
            text = "X";
            x = 0.544643 * safezoneW + safezoneX;
            y = 0.457143 * safezoneH + safezoneY;
            w = 0.0178571 * safezoneW;
            h = 0.0285714 * safezoneH;
            onButtonClick = "closeDialog 0";
        };
    };
};
