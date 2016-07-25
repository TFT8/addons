#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#define MACRO_GETIN \
    class ACE_Actions { \
        class ACE_MainActions { \
            class ACE_Tweaks_GetIn { \
                displayName = "Get in"; \
                condition = QUOTE(_this call tft_ace_fnc_canGetIn); \
                statement = QUOTE(_this call tft_ace_fnc_getIn); \
                exceptions[] = {}; \
                showDisabled = 0; \
                priority = 5; \
                icon = ""; \
                distance = 5; \
            }; \
        }; \
    };

class CfgPatches {
	class tft_ace {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"ace_medical", "ace_tagging"};
		version = 2.0.0;
		versionStr = 2.0.0;
		versionAr[] = {2, 0, 0};
		author = "YoursTruly";
	};
};

class CfgFunctions {
	class tft_ace {
		class tft_ace {
			file = "tft_ace\functions";
			class scream;
            class canGetIn;
            class getIn;
            class canTag;
            class tag;
		};
	};
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class ACE_tagWallArtistic {
                    displayName = "Go artistic";
                    condition = "[ACE_player] call tft_ace_fnc_canTag";
                    statement = "[ACE_player, 5] call tft_ace_fnc_tag";
                    showDisabled = 0;
                    priority = 3;
                    icon = "\tft_ace\UI\icons\retag.paa";
                };
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        MACRO_GETIN
    };

    class Tank: LandVehicle {
        MACRO_GETIN
    };

    class Air;
    class Helicopter: Air {
        MACRO_GETIN
    };

    class Plane: Air {
        MACRO_GETIN
    };

    class Ship;
    class Ship_F: Ship {
        MACRO_GETIN
    };
};

class Extended_PostInit_EventHandlers {
	class tft_ace {
		init = "call compile preprocessFileLineNumbers '\tft_ace\init.sqf'";
	};
};
