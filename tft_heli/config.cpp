class CfgPatches {
    class tft_heli{
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {
			"ace_interaction",
			"CUP_AirVehicles_AH64",
			"CUP_AirVehicles_CH47",
			"CUP_AirVehicles_UH60",
			"RHS_US_A2_AirImport",
			"rhsusf_c_melb",
			"uh60"
		};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class CfgFunctions {
    class tft_heli {
        tag = "tft";
        class functions {
            file = "\tft_heli\functions";
            class smokeMarker;
            class armDoorGun;
        };
    };
};

#define SLINGLOAD_CAMERA \
		memoryPointDriverOptics = "slingLoad0"; \
		class pilotCamera \
		{ \
			class OpticsIn \
			{ \
				class Wide \
				{ \
					opticsDisplayName = "W"; \
					initAngleX = 0; \
					minAngleX = 0; \
					maxAngleX = 0; \
					initAngleY = -90; \
					minAngleY = -90; \
					maxAngleY = -90; \
					initFov = 0.5; \
					minFov = 0.5; \
					maxFov = 0.5; \
					directionStabilized = 1; \
					visionMode[] = {"Normal", "NVG"}; \
					thermalMode[] = {0, 1}; \
					gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d"; \
				}; \
				showMiniMapInOptics = 0; \
				showUAVViewpInOptics = 0; \
				showSlingLoadManagerInOptics = 1; \
			}; \
			minTurn = 0; \
			maxTurn = 0; \
			initTurn = 0; \
			minElev = 80; \
			maxElev = 80; \
			initElev = 80; \
			maxXRotSpeed = 0.5; \
			maxYRotSpeed = 0.5; \
			pilotOpticsShowCursor = 1; \
			controllable = 0; \
		}; \

	//memoryPointDriverOptics = "gunnerview";
#define ENHANCED_PILOTCAMERA \
	driverOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";\
	driverWeaponsInfoType = "Rsc_MELB_Turret_UnitInfo";\
	class pilotCamera\
	{\
		class OpticsIn\
		{\
			class Wide\
			{\
				opticsDisplayName = "W";\
				initAngleX = 0;\
				minAngleX = -370;\
				maxAngleX = 370;\
				initAngleY = 0;\
				minAngleY = -350;\
				maxAngleY = 350;\
				initFov = 0.5;\
				minFov = 0.5;\
				maxFov = 0.5;\
				directionStabilized = 1;\
				visionMode[] = {"Normal", "NVG", "Ti"};\
				thermalMode[] = {0, 1};\
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";\
			};\
			class Medium: Wide\
			{\
				opticsDisplayName = "M";\
				initFov = 0.1;\
				minFov = 0.1;\
				maxFov = 0.1;\
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w.p3d";\
			};\
			class Narrow: Wide\
			{\
				opticsDisplayName = "N";\
				initFov = 0.05;\
				minFov = 0.05;\
				maxFov = 0.05;\
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";\
			};\
			class UNarrow: Wide\
			{\
				opticsDisplayName = "U";\
				initFov = 0.01;\
				minFov = 0.01;\
				maxFov = 0.01;\
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n.p3d";\
			};\
			class SNarrow: Wide\
			{\
				opticsDisplayName = "S";\
				initFov = 0.005;\
				minFov = 0.005;\
				maxFov = 0.005;\
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n2.p3d";\
			};\
		};\
		gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";\
		turretInfoType = "Rsc_MELB_Turret_UnitInfo";\
		controllable = 1;\
		initElev = 0;\
		initTurn = 0;\
		maxElev = 90;\
		minElev = -90;\
		maxTurn = 360;\
		minTurn = -360;\
		pilotOpticsShowCursor = 1;\
		maxXRotSpeed = 1;\
		maxYRotSpeed = 1;\
		usePiP = 1;\
	};\

#define COUNTERMEASURES \
	weapons[] += {"CMFlareLauncher"}; \
	magazines[] += {"168Rnd_CMFlare_Chaff_Magazine"}; \
	
#define ENHANCED_DOORGUNS \
	class Turrets: Turrets { \
		class MainTurret: MainTurret { \
			initElev = 0; \
			initTurn = 0; \
			minElev = -90;\
			maxElev = 60;\
			minTurn = -10;\
			maxTurn = 190;\
		}; \
		class RightDoorGun: MainTurret { \
			initElev = 0; \
			initTurn = 0; \
			minElev = -90;\
			maxElev = 60;\
			minTurn = -195;\
			maxTurn = 10;\
		}; \
	}; \

class CfgVehicles {
    class Air;
    class Helicopter: Air {
		class ACE_SelfActions {
			class TFT_DropSmoke {
				displayName = "Drop Smoke";
				condition = "alive _target";
				statement = "[_target] call tft_fnc_smokeMarker";
			};
			class TFT_ArmDoorGun {
				displayName = "Arm Door Gun";
				condition = "(alive _target) && !(_target weaponsTurret [1] isEqualTo [])";
				statement = "[_target] call tft_fnc_armDoorGun";
			};
		};
    };
    
    class Helicopter_Base_F: Helicopter {
        class Turrets;
        class UserActions;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
		memoryPointGun[] = {"machinegun", "machinegun_1"};
        class UserActions;
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class CUP_AH6_BASE: Helicopter_Base_F {
        // Increase copilot camera range of motion
        class Turrets: Turrets {
			class MainTurret;
            class CopilotTurret: MainTurret {
				minTurn = -135;
				maxTurn = 135;
            };
        };
        class UserActions {
            class CopilotStowMonitor    { showWindow = 0; };
            class CopilotUnStowMonitor  { showWindow = 0; };
            class PilotStowMonitor      { showWindow = 0; };
            class PilotUnStowMonitor    { showWindow = 0; };
        };
    };
    class CUP_AH6_ARMED_BASE: CUP_AH6_BASE {
        class UserActions {
            class CopilotStowMonitor    { showWindow = 0; };
            class CopilotUnStowMonitor  { showWindow = 0; };
            class PilotStowMonitor      { showWindow = 0; };
            class PilotUnStowMonitor    { showWindow = 0; };
        };
    };

    class CUP_Uh60_Base: Helicopter_Base_H {
        class UserActions: UserActions {
            class OpenDoors {
                available = 1;    // Making sure you can open/close doors in all these choppers
                showWindow = 0;   // Prevent action from popping up in middle of screen
            };
            class CloseDoors: OpenDoors {
                available = 1;
                showWindow = 0;
            };
        };
        
        ENHANCED_DOORGUNS
		memoryPointDriverOptics = "gunnerview_flir";
		ENHANCED_PILOTCAMERA
    };

    class CUP_Uh60s_Base: CUP_Uh60_Base {
        class UserActions {
            class OpenDoors {
                available = 1;
                showWindow = 0;
            };
            class CloseDoors: OpenDoors {
                available = 1;
                showWindow = 0;
            };
        };
		ENHANCED_DOORGUNS
    };

	class CUP_MH60L_Dap_4x_Dynamic_Base: CUP_Uh60_Base {
		//ENHANCED_DOORGUNS
	};
	class CUP_MH60L_Dap_2x_Dynamic_Base: CUP_Uh60_Base {
		//ENHANCED_DOORGUNS
	};
	class CUP_UH60S_Dap_2x_Dynamic_Base: CUP_Uh60S_Base {
		//ENHANCED_DOORGUNS
	};
	class CUP_UH60S_Dap_4x_Dynamic_Base: CUP_Uh60S_Base {
		//ENHANCED_DOORGUNS
	};

    // Add fast roping to MH6M
    class CUP_MH6_TRANSPORT;    // External class reference
    class CUP_B_MH6M_USA: CUP_MH6_TRANSPORT {
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
    };
    
    class RHS_MELB_base : Helicopter_Base_H {
		memoryPointDriverOptics = "commanderview";
		ENHANCED_PILOTCAMERA
    };
    
    class CUP_AH64_base: Helicopter_Base_H {
		memoryPointDriverOptics = "gunnerview";
		ENHANCED_PILOTCAMERA
    };
    
    class Heli_Attack_01_base_F;
    class RHS_AH64_base: Heli_Attack_01_base_F {
		memoryPointDriverOptics = "gunnerview";
		ENHANCED_PILOTCAMERA
    };
    
    class Heli_Transport_02_base_F : Helicopter_Base_H {
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    
    class CUP_CH47F_base: Helicopter_Base_H {
		memoryPointGun[] = {"machinegun", "machinegun_2"};
		ENHANCED_DOORGUNS
    };

	class CUP_CH47F_base_OCimport_02;
    class CFP_B_GBARMY_Chinook_HC_4_WDL_01: CUP_CH47F_base_OCimport_02 {
		memoryPointGun[] = {"machinegun", "machinegun_2"};
		//ENHANCED_DOORGUNS
    };

    class RHS_CH_47F_base : Heli_Transport_02_base_F {
		memoryPointGun[] = {"machinegun", "machinegun_2"};
		//ENHANCED_DOORGUNS
		SLINGLOAD_CAMERA
    };

	class Heli_Transport_01_base_F;
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		SLINGLOAD_CAMERA
	};
};