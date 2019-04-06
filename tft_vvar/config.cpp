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
			initElev = 0; \
			initTurn = 0; \
			minElev = -90;\
			maxElev = 60;\
			minTurn = -10;\
			maxTurn = 185;\
		};\
		class RightDoorGun: RightDoorGun {\
			initElev = 0; \
			initTurn = 0; \
			minElev = -90;\
			maxElev = 60;\
			minTurn = -185;\
			maxTurn = 10;\
		};\
	};\


#define FASTROPING \
	ace_fastroping_enabled = 1; \
	ace_fastroping_ropeOrigins[] = {{-1.2,2,-0.1},{1.25,2.22,-0.1}}; \
	
class CfgVehicles {

/*
Heli_Transport_01_base_F
	B_UH60L_base_F
		B_MH60L_F
			B_MH60L_noprobe_F
				B_MH60L_noprobe_vvar
			B_MH60L_gray_F
				B_HH60A_gray_F
					B_HH60A_gray_doors_F
		B_UH60L_F
			B_UH60L_med_F
				B_UH60L_med_vvar
*/
	class Helicopter_Base_H;
	class Heli_Transport_01_base_F: Helicopter_Base_H {
        class Turrets
        {
            class MainTurret;
            class RightDoorGun;
        };
    }; 

    class B_UH60L_base_F: Heli_Transport_01_base_F {
		memoryPointGun[] = {"machinegun"};
		weapons[] = {"hh60safe", "rhsusf_weap_CMFlareLauncher", "rhsusf_weap_ANALQ144"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM"};
		ENHANCED_DOORGUNS
    };
	class B_MH60L_F: B_UH60L_base_F {
		FASTROPING
		weapons[] += {"LMG_Minigun_Transport"};
		magazines[] += {"2000Rnd_762x51_Belt_T_Red"};
		ENHANCED_DOORGUNS
    };
    class B_MH60L_gray_F: B_MH60L_F {
		FASTROPING
		ENHANCED_DOORGUNS
		weapons[] += {"26thSTS_GAU21"};
		magazines[] += {"rhsusf_mag_gau19_melb_left", "rhsusf_mag_gau19_melb_left", "rhsusf_mag_gau19_melb_left", "rhsusf_mag_gau19_melb_left"};
    };
	class B_HH60A_gray_F: B_MH60L_gray_F {
		ENHANCED_DOORGUNS
    };
	class B_HH60A_gray_doors_F: B_HH60A_gray_F {
		ace_fastroping_enabled = 2;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
		ENHANCED_DOORGUNS
    };

    class B_UH60L_F: B_UH60L_base_F {
		ace_fastroping_friesAttachmentPoint[] = {0.065,2.2,0};
		weapons[] = {"hh60safe", "rhsusf_weap_CMFlareLauncher", "rhsusf_weap_ANALQ144", "LMG_M240_UH60"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "rhsusf_mag_DIRCM", "200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow"};
		ENHANCED_DOORGUNS
	};
};

class CfgFactionClasses
{
	class vvarmachine
	{
		displayName = "VVarMachine";
		priority = 2;
		side = 1;
	};
};