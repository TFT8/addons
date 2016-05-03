class IGUIBack;             // External class reference
class RscFrame;             // External class reference
class RscText;              // External class reference
class RscCheckbox;          // External class reference
class RscCombo;             // External class reference
class RscXSliderH;          // External class reference
class RscXListBox;            // External class reference
class RscButtonMenuCancel;  // External class reference
class RscButtonMenuOK;      // External class reference

class tft_bft_settings {
	idd = -1;
    name= "tft_bft_settings";
	movingEnable = 1;
    enableSimulation = 1;
    onLoad = "uiNamespace setVariable ['tft_bft_settings', _this select 0]; _this call tft_bft_fnc_onDialogOpen";
    onUnload = "uiNamespace setVariable ['tft_bft_settings', nil];";

	class Controls {
        // --- BACKGROUND ---
        class bftBackground: IGUIBack
        {
        	idc = 1000;
        	x = 0.335938 * safezoneW + safezoneX;
        	y = 0.2625 * safezoneH + safezoneY;
        	w = 0.320313 * safezoneW;
        	h = 0.2125 * safezoneH;
        };
        class bftBottomPane: RscText
        {
        	idc = 1001;
        	x = 0.335938 * safezoneW + safezoneX;
        	y = 0.45 * safezoneH + safezoneY;
        	w = 0.320313 * safezoneW;
        	h = 0.025 * safezoneH;
        	colorBackground[] = {0,0,0,0.5};
        };
        class bftTopPane: RscText
        {
        	idc = 1002;
        	text = "TFT BFT Settings";
        	x = 0.335938 * safezoneW + safezoneX;
        	y = 0.2625 * safezoneH + safezoneY;
        	w = 0.320313 * safezoneW;
        	h = 0.025 * safezoneH;
        	colorBackground[] = {0,0,0,0.5};
        };
        class bftGroupPane: RscFrame
        {
        	idc = 1003;
        	text = "Group markers";
        	x = 0.343751 * safezoneW + safezoneX;
        	y = 0.3 * safezoneH + safezoneY;
        	w = 0.148438 * safezoneW;
        	h = 0.1375 * safezoneH;
        	sizeEx = 0.032;
        };
        class bftUnitPane: RscFrame
        {
        	idc = 1004;
        	text = "Unit markers";
        	x = 0.5 * safezoneW + safezoneX;
        	y = 0.3 * safezoneH + safezoneY;
        	w = 0.148438 * safezoneW;
        	h = 0.1375 * safezoneH;
        	sizeEx = 0.032;
        };

        // --- GROUP ---
        class bftGroupLabel: RscText
        {
        	idc = 2000;
        	text = "Show";
        	x = 0.359375 * safezoneW + safezoneX;
        	y = 0.325 * safezoneH + safezoneY;
        	w = 0.0390625 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftGroupCombo: RscXListBox
        {
        	idc = 2010;
        	x = 0.398438 * safezoneW + safezoneX;
        	y = 0.325 * safezoneH + safezoneY;
        	w = 0.0859375 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftGroupSizeLabel: RscText
        {
            idc = 2001;
            text = "Size";
            x = 0.359375 * safezoneW + safezoneX;
            y = 0.3625 * safezoneH + safezoneY;
            w = 0.0390625 * safezoneW;
            h = 0.025 * safezoneH;
        };
        class bftGroupSizeSlider: RscXSliderH
        {
            idc = 2011;
            x = 0.398438 * safezoneW + safezoneX;
            y = 0.3625 * safezoneH + safezoneY;
            w = 0.0859375 * safezoneW;
            h = 0.025 * safezoneH;
        };
        class bftGroupNameLabel: RscText
        {
            idc = 2002;
            text = "Name";
            x = 0.359375 * safezoneW + safezoneX;
            y = 0.4 * safezoneH + safezoneY;
            w = 0.0390625 * safezoneW;
            h = 0.025 * safezoneH;
        };
        class bftGroupNameBox: RscCheckbox
        {
            idc = 2012;
            x = 0.398438 * safezoneW + safezoneX;
            y = 0.4 * safezoneH + safezoneY;
            w = 0.015625 * safezoneW;
            h = 0.025 * safezoneH;
        };

        // --- UNIT ---
        class bftUnitLabel: RscText
        {
        	idc = 3000;
        	text = "Show";
        	x = 0.515625 * safezoneW + safezoneX;
        	y = 0.325 * safezoneH + safezoneY;
        	w = 0.0390625 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftUnitCombo: RscXListBox
        {
        	idc = 3010;
        	x = 0.554688 * safezoneW + safezoneX;
        	y = 0.325 * safezoneH + safezoneY;
        	w = 0.0859375 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftUnitSizeLabel: RscText
        {
        	idc = 3001;
        	text = "Size";
        	x = 0.515625 * safezoneW + safezoneX;
        	y = 0.3625 * safezoneH + safezoneY;
        	w = 0.0390625 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftUnitSizeSlider: RscXSliderH
        {
        	idc = 3011;
        	x = 0.554688 * safezoneW + safezoneX;
        	y = 0.3625 * safezoneH + safezoneY;
        	w = 0.0859375 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftUnitNameLabel: RscText
        {
        	idc = 3002;
        	text = "Name";
        	x = 0.515625 * safezoneW + safezoneX;
        	y = 0.4 * safezoneH + safezoneY;
        	w = 0.0390625 * safezoneW;
        	h = 0.025 * safezoneH;
        };
        class bftUnitNameBox: RscCheckbox
        {
        	idc = 3012;
        	x = 0.554688 * safezoneW + safezoneX;
        	y = 0.4 * safezoneH + safezoneY;
        	w = 0.015625 * safezoneW;
        	h = 0.025 * safezoneH;
        };

        // --- BUTTONS ---
        class bftButtonCancel: RscButtonMenuCancel
        {
            class Attributes
            {
                align = "center";
            };
        	text = "X";
        	x = 0.640625 * safezoneW + safezoneX;
        	y = 0.2625 * safezoneH + safezoneY;
        	w = 0.015625 * safezoneW;
        	h = 0.025 * safezoneH;
            onButtonClick = "closeDialog 0";
        };
        class bftButtonOK: RscButtonMenuOK
        {
            class Attributes
            {
                align = "center";
            };
        	x = 0.476562 * safezoneW + safezoneX;
        	y = 0.45 * safezoneH + safezoneY;
        	w = 0.0390625 * safezoneW;
        	h = 0.025 * safezoneH;
            onButtonClick = "_this call tft_bft_fnc_onDialogClose; closeDialog 0";
        };
    };
};
