class CfgPatches {
	class tft_vi
    {
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

class Extended_Killed_EventHandlers {
    class CAManBase {
        class tft_vi {
            killed = "if(isPlayer (_this select 0) && getMissionConfigValue ['respawnTemplates', []] isEqualTo ['MenuPosition']) then { \
                        [_this select 0, [profileNamespace, '[Current gear]']] call BIS_fnc_saveInventory; \
                      };";
        };
    };
};
