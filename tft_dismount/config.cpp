class CfgPatches {
    class tft_dismount{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[]={"Extended_Eventhandlers"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
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

class Extended_PostInit_EventHandlers {
    class tft_dismount_post_init_eh {        
        init = "[] call tft_fnc_addDismountAction";
    };
};

class Extended_Init_EventHandlers {
    class Man {
		class tft_dismount_init_eh {
			onRespawn = true;                    
			init = "if (_this select 0 == player) then {_this call tft_fnc_addDismountAction}";
		};
	};
};
