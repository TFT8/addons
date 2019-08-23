class CfgPatches {
    class tft_dismount{
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[]={"Extended_Eventhandlers"};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    class tft_dismount {
        tag = "tft";
        class functions {
            file = "\tft_dismount\functions";
            class addDismountAction;
            class dismount;
        };
    };
};

class Extended_PreInit_EventHandlers {
    class tft_dismount_preinit_eh {
        init = "call compile preprocessFileLineNumbers '\tft_dismount\initSettings.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class tft_dismount_postinit_eh {        
        init = "[player, tft_dismount_setting_priority] call tft_fnc_addDismountAction";
    };
};

class Extended_Init_EventHandlers {
    class Man {
		class tft_dismount_init_eh {
			onRespawn = true;                    
			init = "if (_this select 0 == player) then {[player, tft_dismount_setting_priority] call tft_fnc_addDismountAction}";
		};
	};
};


#include "CfgActions.hpp"