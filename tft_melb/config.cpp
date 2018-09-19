class CfgPatches {
    class tft_cup
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = { "MELB"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    #include "functions\CfgFunctions.hpp"
};

class CfgMagazines {
	class FakeMagazine;
	class SmokeMarker: FakeMagazine
	{
		ammo = "FakeAmmo";
		count = 20;
	};
};

class CfgWeapons {
	
	class FakeWeapon;
	class SmokeMarker: FakeWeapon
	{
		scope = 1;
		displayName = "Smoke Marker";
		magazines[] = {"SmokeMarker"};
		sounds[] = {};
		class EventHandlers
		{
			fired = "_this call tft_melb_fnc_smokeMarker;";
		};
	};
};

class CfgVehicles {
    class MELB_base;
    class MELB_MH6M: MELB_base
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};

		weapons[] += {"SmokeMarker"};
		magazines[] += {"SmokeMarker"};
	};
};
