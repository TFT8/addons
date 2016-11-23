class tft_aar_load {
    idd = -1;
    name= "tft_aar_load";
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "[_this select 0] remoteExec ['tft_aar_fnc_initLoadDialog', 2]; \
              [{!isNil 'tft_aar_recordings'}, {\
                private _list = _this displayCtrl 200; \
                { _list lbAdd _x; } forEach tft_aar_recordings; \
                tft_aar_recordings = nil; \
              }, _this select 0] call CBA_fnc_waitUntilAndExecute;";

    class Controls {
        class AarBackground: ctrlStatic {
            idc = 100;
            x = 0.425 * safezoneW + safezoneX;
            y = 0.36 * safezoneH + safezoneY;
            w = 0.14375 * safezoneW;
            h = 0.33 * safezoneH;
            colorBackground[] = {0.2,0.2,0.2,0.87};
        };
        class AarBackgroundButtons: ctrlStatic {
            idc = 101;
            x = 0.4375 * safezoneW + safezoneX;
            y = 0.65 * safezoneH + safezoneY;
            w = 0.06875 * safezoneW;
            h = 0.03 * safezoneH;
            colorBackground[] = {0.2,0.2,0.2,0.87};
        };
        class AarList: RscListbox {
            idc = 200;
            x = 0.43125 * safezoneW + safezoneX;
            y = 0.37 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.28 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {1,1,1,0.25};
        };
        class AarButtonOK: RscButtonMenuOK {
            x = 0.50625 * safezoneW + safezoneX;
            y = 0.65 * safezoneH + safezoneY;
            w = 0.05625 * safezoneW;
            h = 0.03 * safezoneH;
            onButtonClick = "private _list = ctrlParent (_this select 0) displayCtrl 200; private _selection = lbCurSel _list; \
                             if(_selection != -1) then { \
                                tft_aar_load = ['tft_aar', { [2, _this] call tft_aar_fnc_loadRecording }] call CBA_fnc_addEventHandler; \
                                [_list lbText _selection] remoteExec ['tft_aar_fnc_getRecordingFromDB', 2]; \
                             } else { hint 'No scenario selected.'; }; closeDialog 1;";
        };
        class AarButtonDelete: RscButtonMenuCancel {
            idc = 2400;
            text = "DELETE";
            x = 0.43125 * safezoneW + safezoneX;
            y = 0.65 * safezoneH + safezoneY;
            w = 0.0625 * safezoneW;
            h = 0.03 * safezoneH;
            onButtonClick = "_this call tft_aar_fnc_deleteRecording";
        };
    };
};
