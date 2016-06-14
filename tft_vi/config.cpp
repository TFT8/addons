class CfgPatches {
	class tft_vi
    {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"A3_3DEN", "cba_xeh"};
		version = 2.0;
		versionStr = 2.0;
		versionAr[] = {2, 0};
		author = "YoursTruly";
	};
};

class Extended_PostInit_EventHandlers {
    class tft_vi {
        killed = "[_this select 0, [profileNamespace, '[Current gear]']] call BIS_fnc_saveInventory";
    };
};
