
class Extended_PostInit_EventHandlers {
    class tft_heli {
        init = "call compile preprocessFileLineNumbers 'tft_heli\XEH_postInit.sqf'";
    };
};

//disable ACEX HC for UAVs
#define DISABLE(UAV_AI)\
    class UAV_AI {\
        class TFT_UAV_AI {\
            init = "(_this # 0) setVariable ['acex_headless_blacklist', true];";\
        };\
    };

class Extended_Init_EventHandlers {
	DISABLE(B_UAV_AI)
	DISABLE(O_UAV_AI)
	DISABLE(I_UAV_AI)
	DISABLE(B_UAV_AI_F)
	DISABLE(O_UAV_AI_F)
	DISABLE(I_UAV_AI_F)
};
