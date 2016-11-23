class tft_aar_controls {
    idd = -1;
    onLoad = "[_this select 0] call tft_aar_fnc_initControlsDialog";
    duration = 86400;
    fadein = 0;
    fadeout = 0;

    class controls {
        class aarBack: ctrlStatic {
            idc = 100;
            x = 0.56625 * safezoneW + safezoneX;
            y = 0.94 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.04 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.87};
        };
        class aarSpeed: RscText {
            idc = 200;
            x = 0.96625 * safezoneW + safezoneX;
            y = 0.94 * safezoneH + safezoneY;
            w = 0.0225 * safezoneW;
            h = 0.04 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.87};
        };
        class aarPlay: RscPicture {
            idc = 300;
            style = "0x30 + 0x800";
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.56625 * safezoneW + safezoneX;
            y = 0.945 * safezoneH + safezoneY;
            w = 0.025 * safezoneW;
            h = 0.03 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.87};
        };
        class aarTimer: RscProgress {
            idc = 400;
            x = 0.5975 * safezoneW + safezoneX;
            y = 0.95 * safezoneH + safezoneY;
            w = 0.3625 * safezoneW;
            h = 0.02 * safezoneH;
            texture = "";
            colorBar[] = {1, 1, 1, 1};
            colorFrame[] = {0.5,0.5,0.5,0.87};
        };
    };
};

class tft_aar_controlsHelp {
    idd = -1;
    onLoad = "((_this select 0) displayCtrl 500) ctrlSetStructuredText parseText \
'<t color=""#e67e22"">SPACE</t> - Play/Pause<br/>\
<t color=""#e67e22"">UP</t> - Increase speed<br/>\
<t color=""#e67e22"">DOWN</t> - Decrease speed<br/>\
<t color=""#e67e22"">RIGHT</t> - Skip 10 frames forward<br/>\
<t color=""#e67e22"">LEFT</t> - Skip 10 frames backward<br/>\
<t color=""#e67e22"">ESC</t> - Terminate AAR'";
    duration = 86400;
    fadein = 0;
    fadeout = 0;

    class controls {
        class aarHelp: RscStructuredText {
            idc = 500;
            style = "0x04";
            x = 0.01875 * safezoneW + safezoneX;
            y = 0.83 * safezoneH + safezoneY;
            w = 0.2 * safezoneW;
            h = 0.2 * safezoneH;
            class Attributes {
                valign = "bottom";
            };
        };
    };
};
