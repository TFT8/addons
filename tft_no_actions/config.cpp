class CfgPatches {
    class tft_no_actions{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {
			"ace_interaction"
		};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

#include "CfgActions.hpp"
#include "CfgEventHandlers.hpp"