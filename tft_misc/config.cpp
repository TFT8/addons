class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"cba_xeh","cba_xeh_a3"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand, YoursTruly";
    };
};

class CfgFunctions {
    class tft_misc {
        tag = "tft";
        class functions {
            file = "\tft_misc\functions";
            class addActions;
            class moveMarker;
            class moveRespawn;
            class displayText;
            class prepPhaseInit;
            class prepPhase;
            class smokeMarker;
        };
    };
    class A3_Bootcamp {
        class Inventory {
            delete arsenal;
        };
        class TFT {
            file = "\tft_misc\functions";
            class arsenal;
        };
    };
};

class CfgMagazines {
	class FakeMagazine;
	class SmokeMarker : FakeMagazine {};
};

class CfgWeapons {
	class FakeWeapon;
	class SmokeMarker : FakeWeapon
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
    class Helicopter;
    class Helicopter_Base_F: Helicopter
	{
		weapons[] += {"SmokeMarker"};
		magazines[] += {"SmokeMarker"};
	};
};
