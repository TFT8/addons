class CfgPatches {
    class tft_ai {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"uh60"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

#define ENHANCED_DOORGUNS \
	class Turrets: Turrets {\
		class MainTurret: MainTurret {\
			minElev = -90;\
			maxElev = 60;\
			minTurn = -10;\
			maxTurn = 185;\
		};\
		class RightDoorGun: MainTurret {\
			minElev = -90;\
			maxElev = 60;\
			minTurn = -185;\
			maxTurn = 10;\
		};\
	};\
	
class CfgVehicles {
    class Helicopter;       // External class reference
    class Helicopter_Base_F: Helicopter {
        class Turrets;
        class UserActions;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class UserActions;
        class Turrets : Turrets
        {
            class MainTurret;
        };
    };
	class Heli_Transport_01_base_F: Helicopter_Base_H {
        class Turrets : Turrets 
        {
            class MainTurret;
        };
    }; 
    class B_UH60L_base_F: Heli_Transport_01_base_F {
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{-1.2,2,0.0},{1.25,2.22,0.0}};
		ENHANCED_DOORGUNS
    };
	class B_MH60L_F: B_UH60L_base_F {
		ENHANCED_DOORGUNS
    };
    class B_MH60L_gray_F: B_MH60L_F {
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {{-1.2,2,0.0},{1.25,2.22,0.0}};
		ENHANCED_DOORGUNS
    };
	class B_HH60A_gray_F: B_MH60L_gray_F {
		ENHANCED_DOORGUNS
    };
	class B_HH60A_gray_doors_F: B_HH60A_gray_F {
		ENHANCED_DOORGUNS
    };
};