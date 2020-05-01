class CfgPatches {
    class tft_h60{
        units[] = {"tft8_MH60M", "tft8_MH60M_DAP"};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {
            "vtx_MH60M"
		};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

#define ENHANCED_DOORGUNS \
	class Turrets: Turrets { \
		class MainTurret: MainTurret { \
			initElev = 0; \
			initTurn = 0; \
			minElev = -90; \
			maxElev = 10; \
			minTurn = -10; \
			maxTurn = 190; \
			magazines[] = {"vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red"}; \
			stabilizedInAxes = 3; \
		}; \
		class RightDoorGun: MainTurret { \
			initElev = 0; \
			initTurn = 0; \
			minElev = -90; \
			maxElev = 10; \
			minTurn = -190; \
			maxTurn = 10; \
			magazines[] = {"vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red"}; \
			stabilizedInAxes = 3; \
		}; \
	}; \

class CfgVehicles {
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F :Helicopter_Base_H {
		class Turrets;
	};
    class vtx_H60_base: Heli_Transport_01_base_F {
		crew="B_helipilot_F";
		class Turrets : Turrets {
            class MainTurret;
        };
    };
	class vtx_MH60M: vtx_H60_base {
		faction="B_TFT8";
		class Components;
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};
		ENHANCED_DOORGUNS
	};
	class vtx_MH60M_DAP: vtx_MH60M {
		faction="B_TFT8";
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};	
		class Components: Components {
			class TransportPylonsComponent {
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_EWS_EDEN_CA.paa";
				class Pylons
				{
					class pylons1
					{
						attachment = "rhs_mag_M229_19";
						priority = 1;
						hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_FFAR_ARMY", "RHS_HP_Fuel_ARMY", "RHS_HP_ATAS", "DAR", "DAGR", "B_SHRIEKER", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "CUP_NATO_HELO_UH60"};
					UIposition[] = {0.555, 0.37};
					};
					class pylons2
					{
						attachment = "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M";
						mirroredMissilePos = 1;
						hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_FFAR_ARMY", "RHS_HP_Fuel_ARMY", "RHS_HP_ATAS", "DAR", "DAGR", "B_SHRIEKER", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "CUP_NATO_HELO_UH60"};
					UIposition[] = {0.11, 0.37};
						priority = 1;
					};
					class cmDispenser
					{
						hardpoints[] = {"RHSUSF_cm_M130", "RHSUSF_cm_M130_x2"};
						priority = 1;
						attachment = "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
						maxweight = 800;
						UIposition[] = {0.33, 0};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] = {"rhs_mag_M229_19", "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M", "rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
					class AT
					{
						displayName = "AT";
						attachment[] = {"PylonRack_4Rnd_ACE_Hellfire_AGM114K", "PylonRack_4Rnd_ACE_Hellfire_AGM114K", "rhsusf_M130_CMFlare_Chaff_Magazine_x2"};
					};
				};
			};
		};
	};
	class tft8_MH60M_DAP: vtx_MH60M_DAP	 {
		faction="B_TFT8";
		displayName = "MH-60M DAP (Kimi)";

		class MFD {
			class Kimi_HMD_Common
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class Units_Text_Imperial
					{
						type = "group";
						condition = "user1";
						class Units_Metric
						{
							type = "text";
							source = "static";
							text = "I";
							align = "right";
							scale = 1;
							pos[] = {{0.95, 0.1}, 1};
							right[] = {{0.98, 0.1}, 1};
							down[] = {{0.95, 0.13}, 1};
						};
					};
					class Units_Text_Metric
					{
						type = "group";
						condition = "1-user1";
						class Units_Metric
						{
							type = "text";
							source = "static";
							text = "M";
							align = "right";
							scale = 1;
							pos[] = {{0.95, 0.1}, 1};
							right[] = {{0.98, 0.1}, 1};
							down[] = {{0.95, 0.13}, 1};
						};
					};
					class Heading_Indexer
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5", "0.128 + 0.03"}, 1}, {{0.5, 0.128}, 1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0, 0};
						clipBR[] = {0.45, 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55, 0};
						clipBR[] = {1, 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45, "0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10", 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class WYPT_indexer
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_tape
						{
							type = "line";
							width = 4;
							points[] = {{"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {-0.01, 0.015}, 1}, {"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {0, 0}, 1}, {"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {0.01, 0.015}, 1}};
						};
					};
				};
			};
			class Kimi_HMD_Decluttered
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0";
					class HeadingNumber
					{
						type = "text";
						scale = 1;
						source = "heading";
						sourceScale = 1;
						sourceLength = 3;
						align = "center";
						pos[] = {{0.495, 0.045}, 1};
						right[] = {{0.555, 0.045}, 1};
						down[] = {{0.495, "0.045+ 0.06"}, 1};
					};
					class Airspeed_Number_Imperial
					{
						type = "group";
						condition = "user1";
						class Airspeed_Imperial
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "speed";
							sourceScale = 1.94384;
							pos[] = {{0.03, 0.475}, 1};
							right[] = {{0.08, 0.475}, 1};
							down[] = {{0.03, 0.525}, 1};
						};
					};
					class Airspeed_Number_Metric
					{
						type = "group";
						condition = "1-user1";
						class Airspeed_Metric
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "speed";
							sourceScale = 3.6;
							pos[] = {{0.03, 0.475}, 1};
							right[] = {{0.08, 0.475}, 1};
							down[] = {{0.03, 0.525}, 1};
						};
					};
					class AltNumber_Imperial
					{
						type = "group";
						condition = "user1";
						class Alt_Imperial
						{
							type = "text";
							scale = 1;
							align = "right";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6;
							pos[] = {{0.83, 0.475}, 1};
							right[] = {{0.88, 0.475}, 1};
							down[] = {{0.83, 0.525}, 1};
						};
					};
					class AltNumber_Metric
					{
						type = "group";
						condition = "1-user1";
						class Alt_Metric
						{
							type = "text";
							scale = 1;
							align = "right";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -2;
							pos[] = {{0.83, 0.475}, 1};
							right[] = {{0.88, 0.475}, 1};
							down[] = {{0.83, 0.525}, 1};
						};
					};
					class AC_Centerline
					{
						type = "line";
						width = 1;
						points[] = {{"ForwardVec", 1, {" -0.004 + 0.5", "0 + 0.5"}, 1}, {"ForwardVec", 1, {" 0.004 + 0.5", "0 + 0.5"}, 1}, {}, {"ForwardVec", 1, {" -0.0 + 0.5", "0.004 + 0.5"}, 1}, {"ForwardVec", 1, {" 0.0 + 0.5", "-0.004 + 0.5"}, 1}};
					};
					class FPM
					{
						type = "group";
						condition = "speed - 3.(6*1.852/3.6)+1.94384";
						class FPM_Cue
						{
							type = "line";
							width = 5;
							points[] = {{"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}, {"Velocity", 1, {"0.0099999998*0.75", "-0.01732*0.75"}, 1}, {"Velocity", 1, {"0.01732*0.75", "-0.0099999998*0.75"}, 1}, {"Velocity", 1, {"0.02*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"0.01732*0.75", "0.0099999998*0.75"}, 1}, {"Velocity", 1, {"0.0099999998*0.75", "0.01732*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "0.02*0.75"}, 1}, {"Velocity", 1, {"-0.0099999998*0.75", "0.01732*0.75"}, 1}, {"Velocity", 1, {"-0.01732*0.75", "0.0099999998*0.75"}, 1}, {"Velocity", 1, {"-0.02*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"-0.01732*0.75", "-0.0099999998*0.75"}, 1}, {"Velocity", 1, {"-0.0099999998*0.75", "-0.01732*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}, {}, {"Velocity", 1, {"0.039999999*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"0.02*0.75", "0*0.75"}, 1}, {}, {"Velocity", 1, {"-0.039999999*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"-0.02*0.75", "0*0.75"}, 1}, {}, {"Velocity", 1, {"0*0.75", "-0.039999999*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}};
						};
					};
					class WYPT_Group
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_Block
						{
							type = "group";
							class WYPT_Fly_2_Cue
							{
								type = "line";
								width = 3;
								points[] = {{"WYPT_2_VIEW", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.02 * 0.075", "0 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0 * 0.075", "0.02 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.02 * 0.075", "0 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {}, {"WYPT_2_VIEW", 1, {-0.03, 0}, 1}, {"WYPT_2_VIEW", 1, {0, -0.03}, 1}, {"WYPT_2_VIEW", 1, {0.03, 0}, 1}, {"WYPT_2_VIEW", 1, {0.018, 0.015}, 1}, {"WYPT_2_VIEW", 1, {-0.018, 0.015}, 1}, {"WYPT_2_VIEW", 1, {-0.03, 0}, 1}};
							};
						};
					};
					class Cruise_Altitude_ASL_Imperial
					{
						type = "group";
						condition = "user1";
						class Cruise_Alt_Imperial
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 3.28084;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.18}, 1};
							right[] = {{0.88, 0.18}, 1};
							down[] = {{0.83, 0.23}, 1};
						};
					};
					class Cruise_Altitude_ASL_Metric
					{
						type = "group";
						condition = "1-user1";
						class Cruise_Alt_Metric
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.18}, 1};
							right[] = {{0.88, 0.18}, 1};
							down[] = {{0.83, 0.23}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Transport
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class Slip_ball_group_NO_HAD
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018", "0.9-0.04"}, 1}, {{"0.5-0.018", "0.9-0.075"}, 1}, {}, {{"0.5+0.018", "0.9-0.04"}, 1}, {{"0.5+0.018", "0.9-0.075"}, 1}, {}, {{"0.5+0.15", "0.9-0.04"}, 1}, {{"0.5-0.15", "0.9-0.04"}, 1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Slip_Ball_X", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.75", "0 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.75", "0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.75", "0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.75", "0.02 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.75", "0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.75", "0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.75", "0 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.6", "0 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.6", "0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.6", "0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.6", "0.02 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.6", "0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.6", "0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.6", "0 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.5", "0 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.5", "0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.5", "0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.5", "0.02 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.5", "0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.5", "0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.5", "0 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.4", "0 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.4", "0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.4", "0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.4", "0.02 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.4", "0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.4", "0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.4", "0 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.30", "0 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.30", "0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.30", "0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.30", "0.02 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.30", "0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.30", "0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.30", "0 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.20", "0 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.20", "0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.20", "0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.20", "0.02 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.20", "0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.20", "0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.20", "0 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.1", "0 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.1", "0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.1", "0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.1", "0.02 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.1", "0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.1", "0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.1", "0 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1}};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.02, "0.53 + 0.055"}, 1};
							right[] = {{0.06, "0.53 + 0.055"}, 1};
							down[] = {{0.02, "0.53 + 0.095"}, 1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.02, "0.53 + 0.055 + 0.04"}, 1};
							right[] = {{0.06, "0.53 + 0.055 + 0.04"}, 1};
							down[] = {{0.02, "0.53 + 0.095 + 0.04"}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Weapons_LB
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {-1};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0";
					class Gun_Cross
					{
						condition = "mgun";
						type = "group";
						class GUN_X
						{
							type = "line";
							width = 7;
							points[] = {{"CCIP_2_VIEW", {0, -0.03}, 1}, {"CCIP_2_VIEW", {0, -0.012}, 1}, {}, {"CCIP_2_VIEW", {0, 0.012}, 1}, {"CCIP_2_VIEW", {0, 0.03}, 1}, {}, {"CCIP_2_VIEW", {-0.03, 0}, 1}, {"CCIP_2_VIEW", {-0.012, 0}, 1}, {}, {"CCIP_2_VIEW", {0.012, 0}, 1}, {"CCIP_2_VIEW", {0.03, 0}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"CCIP_2_VIEW", {-0.002, 0.035}, 1};
							right[] = {"CCIP_2_VIEW", {0.028, 0.035}, 1};
							down[] = {"CCIP_2_VIEW", {-0.002, 0.065}, 1};
						};
					};
					class Rocket_I_LLW
					{
						condition = "rocket";
						type = "group";
						class RocketSight
						{
							type = "line";
							width = 5.5;
							points[] = {{"CCIP_2_VIEW", 1, {0.022, -0.03}, 1}, {"CCIP_2_VIEW", 1, {-0.022, -0.03}, 1}, {}, {"CCIP_2_VIEW", 1, {0, -0.03}, 1}, {"CCIP_2_VIEW", 1, {0, 0.03}, 1}, {}, {"CCIP_2_VIEW", 1, {0.022, 0.03}, 1}, {"CCIP_2_VIEW", 1, {-0.022, 0.03}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"CCIP_2_VIEW", {-0.002, 0.035}, 1};
							right[] = {"CCIP_2_VIEW", {0.028, 0.035}, 1};
							down[] = {"CCIP_2_VIEW", {-0.002, 0.065}, 1};
						};
					};
					class TargetACQ
					{
						type = "group";
						condition = "1";
						class ACQgun
						{
							type = "line";
							width = 2;
							points[] = {{"Target2View", 1, "Limit0109", 1, {0, -0.06}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.055}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.05}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.045}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.04}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.035}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.03}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.025}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.02}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.015}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.01}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.005}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.06}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.055}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.05}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.045}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.04}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.035}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.03}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.025}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.02}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.015}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.01}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.005}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.06, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.055, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.05, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.045, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.04, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.035, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.025, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.02, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.015, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.01, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.005, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.06, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.055, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.05, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.045, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.04, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.035, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.025, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.02, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.015, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.01, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.005, 0}, 1}};
						};
					};
					class Weapon_Name_LB
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{"0.03+0.7", 0.86}, 1};
						right[] = {{"0.07+0.7", 0.86}, 1};
						down[] = {{"0.03+0.7", 0.9}, 1};
					};
					class Ammo_Count_LB
					{
						type = "group";
						condition = "(mgun+rocket+ATmissile+AAmissile)";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{"0.03+0.7", 0.89}, 1};
							right[] = {{"0.07+0.7", 0.89}, 1};
							down[] = {{"0.03+0.7", 0.93}, 1};
						};
					};
					class Range_Number_LB
					{
						type = "group";
						condition = "targetDist";
						class Range_Number_LB
						{
							type = "text";
							source = "targetDist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.51, 0.94}, 1};
							right[] = {{0.55, 0.94}, 1};
							down[] = {{0.51, 0.98}, 1};
						};
					};
					class Range_Text_LB
					{
						type = "group";
						condition = "targetDist";
						class Range_Text_LB
						{
							type = "text";
							source = "static";
							text = "RNG";
							align = "left";
							scale = 1;
							pos[] = {{0.49, 0.94}, 1};
							right[] = {{0.53, 0.94}, 1};
							down[] = {{0.49, 0.98}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Pilot
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {-1};
				class Draw
				{
					condition = "on*user0-user2";
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					class Aiming_X_Static
					{
						type = "group";
						condition = "(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))+(1-rocket-mgun)";
						class aim_X
						{
							type = "line";
							width = 5;
							points[] = {{{0.5, 0.48}, 1}, {{0.5, 0.45}, 1}, {}, {{0.5, 0.52}, 1}, {{0.5, 0.55}, 1}, {}, {{0.48, 0.5}, 1}, {{0.45, 0.5}, 1}, {}, {{0.52, 0.5}, 1}, {{0.55, 0.5}, 1}};
						};
					};
					class Torque_Group
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 227;
							pos[] = {{0.065, 0.175}, 1};
							right[] = {{0.115, 0.175}, 1};
							down[] = {{0.065, 0.225}, 1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07, 0.175}, 1};
							right[] = {{0.12, 0.175}, 1};
							down[] = {{0.07, 0.225}, 1};
						};
						class Torque_box
						{
							type = "group";
							condition = "rtdRotorTorque+(1-112.5/120)";
							class Torque_box_D
							{
								type = "line";
								width = 3;
								points[] = {{{"0.010 + 0.000", "0.50 - 0.025 - 0.300"}, 1}, {{"0.010 + 0.092", "0.50 - 0.025 - 0.300"}, 1}, {{"0.010 + 0.092", "0.50 + 0.025 - 0.300"}, 1}, {{"0.010 + 0.000", "0.50 + 0.025 - 0.300"}, 1}, {{"0.010 + 0.000", "0.50 - 0.025 - 0.300"}, 1}};
							};
						};
					};
					class Vspeed_Scale
					{
						type = "line";
						width = 5;
						points[] = {{{0.98, 0.2}, 1}, {{1, 0.2}, 1}, {}, {{0.93, 0.2}, 1}, {{0.95, 0.2}, 1}, {}, {{0.98, 0.35}, 1}, {{1, 0.35}, 1}, {}, {{0.93, 0.35}, 1}, {{0.95, 0.35}, 1}, {}, {{0.94, 0.38}, 1}, {{0.95, 0.38}, 1}, {}, {{0.94, 0.41}, 1}, {{0.95, 0.41}, 1}, {}, {{0.94, 0.44}, 1}, {{0.95, 0.44}, 1}, {}, {{0.94, 0.47}, 1}, {{0.95, 0.47}, 1}, {}, {{0.98, 0.5}, 1}, {{1, 0.5}, 1}, {}, {{0.93, 0.5}, 1}, {{0.95, 0.5}, 1}, {}, {{0.94, 0.53}, 1}, {{0.95, 0.53}, 1}, {}, {{0.94, 0.56}, 1}, {{0.95, 0.56}, 1}, {}, {{0.94, 0.59}, 1}, {{0.95, 0.59}, 1}, {}, {{0.94, 0.62}, 1}, {{0.95, 0.62}, 1}, {}, {{0.98, 0.65}, 1}, {{1, 0.65}, 1}, {}, {{0.93, 0.65}, 1}, {{0.95, 0.65}, 1}, {}, {{0.99, 0.68}, 1}, {{0.98, 0.68}, 1}, {}, {{0.99, 0.71}, 1}, {{0.98, 0.71}, 1}, {}, {{0.99, 0.74}, 1}, {{0.98, 0.74}, 1}, {}, {{0.99, 0.77}, 1}, {{0.98, 0.77}, 1}, {}, {{0.98, 0.8}, 1}, {{1, 0.8}, 1}, {}, {{0.93, 0.8}, 1}, {{0.95, 0.8}, 1}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0, 0.2};
						clipBR[] = {1, 0.8};
						condition = "(208/3.28084) - altitudeAGL";
						class radarbanda
						{
							type = "line";
							width = 18;
							points[] = {{"RadarAltitudeBone", {0, 0}, 1}, {"RadarAltitudeBone", {0, 0.6}, 1}};
						};
					};
					class VspeedBand
					{
						type = "polygon";
						points[] = {{{"VspeedBone", {-0.01, 0}, 1}, {"VspeedBone", {-0.025, -0.015}, 1}, {"VspeedBone", {-0.025, 0.015}, 1}, {"VspeedBone", {-0.01, 0}, 1}}};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "F";
						align = "right";
						scale = 1;
						pos[] = {{0.03, 0.89}, 1};
						right[] = {{0.07, 0.89}, 1};
						down[] = {{0.03, 0.93}, 1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.06, 0.89}, 1};
						right[] = {{0.1, 0.89}, 1};
						down[] = {{0.06, 0.93}, 1};
					};
				};
			};
			class Kimi_HMD_Modes_Pilot
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class WYPT_Group
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_Block
						{
							type = "group";
							condition = "speed - (6*1.852/3.6)+1.94384";
							class WYPT_Text
							{
								type = "text";
								source = "static";
								text = "W";
								align = "left";
								scale = 1;
								pos[] = {{0.03, 0.75}, 1};
								right[] = {{0.07, 0.75}, 1};
								down[] = {{0.03, 0.79}, 1};
							};
							class WYPT_Index
							{
								type = "text";
								source = "WPIndex";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.04, 0.75}, 1};
								right[] = {{0.08, 0.75}, 1};
								down[] = {{0.04, 0.79}, 1};
							};
							class WYPT_Distance
							{
								type = "text";
								source = "WPDist";
								sourceScale = 0.001;
								sourceprecision = 2;
								align = "right";
								scale = 1;
								pos[] = {{0.12, 0.75}, 1};
								right[] = {{0.16, 0.75}, 1};
								down[] = {{0.12, 0.79}, 1};
							};
							class WYPT_KM
							{
								type = "text";
								source = "static";
								text = "KM";
								align = "left";
								scale = 1;
								pos[] = {{0.22, 0.75}, 1};
								right[] = {{0.26, 0.75}, 1};
								down[] = {{0.22, 0.79}, 1};
							};
							class Ground_Speed_M
							{
								type = "group";
								condition = "1-user1";
								class GS_M
								{
									type = "text";
									source = "Speed";
									sourceScale = 3.6;
									align = "center";
									scale = 1;
									pos[] = {{0.03, 0.79}, 1};
									right[] = {{0.07, 0.79}, 1};
									down[] = {{0.03, 0.83}, 1};
								};
							};
							class Ground_Speed_I
							{
								type = "group";
								condition = "user1";
								class GS_I
								{
									type = "text";
									source = "Speed";
									sourceScale = 1.94384;
									align = "center";
									scale = 1;
									pos[] = {{0.03, 0.79}, 1};
									right[] = {{0.07, 0.79}, 1};
									down[] = {{0.03, 0.83}, 1};
								};
							};
							class WYPT_TTG_6
							{
								type = "group";
								condition = "(6*1.852/3.6) - speed";
								class TTG_6
								{
									type = "text";
									source = "WPDist";
									sourceScale = "1/(6*1.852/3.6)";
									align = "right";
									scale = 1;
									pos[] = {{0.13, 0.79}, 1};
									right[] = {{0.17, 0.79}, 1};
									down[] = {{0.13, 0.83}, 1};
								};
							};
							class WYPT_TTG_10
							{
								type = "group";
								condition = "speed- ((10-6)*1.852/3.6)+1";
								class TTG_10
								{
									type = "group";
									condition = "(10*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(10*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_20
							{
								type = "group";
								condition = "speed- ((20-10)*1.852/3.6)+1";
								class TTG_20
								{
									type = "group";
									condition = "(20*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(20*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_30
							{
								type = "group";
								condition = "speed- ((30-10)*1.852/3.6)+1";
								class TTG_30
								{
									type = "group";
									condition = "(30*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(30*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_40
							{
								type = "group";
								condition = "speed- ((40-10)*1.852/3.6)+1";
								class TTG_40
								{
									type = "group";
									condition = "(40*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(40*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_50
							{
								type = "group";
								condition = "speed- ((50-10)*1.852/3.6)+1";
								class TTG_50
								{
									type = "group";
									condition = "(50*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(50*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_60
							{
								type = "group";
								condition = "speed- ((60-10)*1.852/3.6)+1";
								class TTG_60
								{
									type = "group";
									condition = "(60*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(60*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_70
							{
								type = "group";
								condition = "speed- ((70-10)*1.852/3.6)+1";
								class TTG_70
								{
									type = "group";
									condition = "(70*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(70*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_80
							{
								type = "group";
								condition = "speed- ((80-10)*1.852/3.6)+1";
								class TTG_80
								{
									type = "group";
									condition = "(80*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(80*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_90
							{
								type = "group";
								condition = "speed- ((90-10)*1.852/3.6)+1";
								class TTG_90
								{
									type = "group";
									condition = "(90*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(90*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_100
							{
								type = "group";
								condition = "speed- ((100-10)*1.852/3.6)+1";
								class TTG_100
								{
									type = "group";
									condition = "(100*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(100*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_110
							{
								type = "group";
								condition = "speed- ((110-10)*1.852/3.6)+1";
								class TTG_110
								{
									type = "group";
									condition = "(110*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(110*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_120
							{
								type = "group";
								condition = "speed- ((120-10)*1.852/3.6)+1";
								class TTG_120
								{
									type = "group";
									condition = "(120*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(120*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_130
							{
								type = "group";
								condition = "speed- ((130-10)*1.852/3.6)+1";
								class TTG_130
								{
									type = "group";
									condition = "(130*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(130*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_140
							{
								type = "group";
								condition = "speed- ((140-10)*1.852/3.6)+1";
								class TTG_140
								{
									type = "group";
									condition = "(140*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(140*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_150
							{
								type = "group";
								condition = "speed- ((150-10)*1.852/3.6)+1";
								class TTG_150
								{
									type = "group";
									condition = "(150*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(150*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_160
							{
								type = "group";
								condition = "speed- ((160-10)*1.852/3.6)+1";
								class TTG_160
								{
									type = "group";
									condition = "(160*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(160*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_170
							{
								type = "group";
								condition = "speed- ((170-10)*1.852/3.6)+1";
								class TTG_170
								{
									type = "group";
									condition = "(170*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(170*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_180
							{
								type = "group";
								condition = "speed- ((180-10)*1.852/3.6)+1";
								class TTG_180
								{
									type = "group";
									condition = "(180*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(180*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_190
							{
								type = "group";
								condition = "speed- ((190-10)*1.852/3.6)+1";
								class TTG_190
								{
									type = "group";
									condition = "(190*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(190*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_200
							{
								type = "group";
								condition = "speed- ((200-10)*1.852/3.6)+1";
								class TTG_200
								{
									type = "group";
									condition = "(200*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(200*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_210
							{
								type = "group";
								condition = "speed- ((210-10)*1.852/3.6)+1";
								class TTG_210
								{
									type = "group";
									condition = "(210*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(210*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_220
							{
								type = "group";
								condition = "speed- ((220-10)*1.852/3.6)+1";
								class TTG_220
								{
									type = "group";
									condition = "(220*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(220*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_230
							{
								type = "group";
								condition = "speed- ((230-10)*1.852/3.6)+1";
								class TTG_230
								{
									type = "group";
									condition = "(230*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(230*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_240
							{
								type = "group";
								condition = "speed- ((240-10)*1.852/3.6)+1";
								class TTG_240
								{
									type = "group";
									condition = "(240*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(240*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_250
							{
								type = "group";
								condition = "speed- ((250-10)*1.852/3.6)+1";
								class TTG_250
								{
									type = "group";
									condition = "(250*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(250*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_260
							{
								type = "group";
								condition = "speed- ((260-10)*1.852/3.6)+1";
								class TTG_260
								{
									type = "group";
									condition = "(260*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(260*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_270
							{
								type = "group";
								condition = "speed- ((270-10)*1.852/3.6)+1";
								class TTG_270
								{
									type = "group";
									condition = "(270*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(270*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_280
							{
								type = "group";
								condition = "speed- ((280-10)*1.852/3.6)+1";
								class TTG_280
								{
									type = "group";
									condition = "(280*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(280*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_290
							{
								type = "group";
								condition = "speed- ((290-10)*1.852/3.6)+1";
								class TTG_290
								{
									type = "group";
									condition = "(290*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(290*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_300
							{
								type = "group";
								condition = "speed- ((300-10)*1.852/3.6)+1";
								class TTG_300
								{
									type = "group";
									condition = "(300*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(300*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
						};
					};
					class Hover_Box
					{
						type = "group";
						condition = "autohover";
						class Hover_box_box
						{
							type = "line";
							width = 3;
							points[] = {{{"0.02 + 0.00", "0.50 - 0.015"}, 1}, {{"0.02 + 0.010", "0.50 - 0.025"}, 1}, {{"0.02 + 0.065", "0.50 - 0.025"}, 1}, {{"0.02 + 0.075", "0.50 - 0.015"}, 1}, {{"0.02 + 0.075", "0.50 + 0.015"}, 1}, {{"0.02 + 0.065", "0.50 + 0.025"}, 1}, {{"0.02 + 0.010", "0.50 + 0.025"}, 1}, {{"0.02 + 0.00", "0.50 + 0.015"}, 1}, {{"0.02 + 0.00", "0.50 - 0.015"}, 1}};
						};
					};
					class Transition_Mode
					{
						type = "group";
						condition = "1-autohover";
						class Transition
						{
							type = "group";
							condition = "speed - (6*1.852/3.6)+1";
							class Transition_VV
							{
								type = "group";
								condition = "(60*1.852/3.6) - speed";
								class Velocity_Vector
								{
									type = "line";
									width = 2;
									points[] = {{{0.5, 0.5}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.02 * 0.075", "0 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "0.02 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.02 * 0.075", "0 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}};
								};
							};
							class Transition_Acceleration_ball
							{
								type = "group";
								condition = "(60*1.852/3.6) - speed";
								class Acceleration_ball
								{
									type = "line";
									width = 3;
									points[] = {{"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "-0.02 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.0099999998 * 0.50", "-0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.01732 * 0.50", "-0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.02 * 0.50", "0 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.01732 * 0.50", "0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.0099999998 * 0.50", "0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "0.02 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.0099999998 * 0.50", "0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.01732 * 0.50", "0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.02 * 0.50", "0 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.01732 * 0.50", "-0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.0099999998 * 0.50", "-0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "-0.02 * 0.50"}, 1}};
								};
							};
							class Transition_Horizon
							{
								clipTL[] = {0.15, 0.15};
								clipBR[] = {0.85, 0.85};
								type = "group";
								class Horizon
								{
									class Level0
									{
										type = "line";
										width = 4;
										points[] = {{"Level0_Transition", {"-0.05*9", 0}, 1}, {"Level0_Transition", {"-0.05*8", 0}, 1}, {}, {"Level0_Transition", {"-0.05*7", 0}, 1}, {"Level0_Transition", {"-0.05*6", 0}, 1}, {}, {"Level0_Transition", {"-0.05*5", 0}, 1}, {"Level0_Transition", {"-0.05*4", 0}, 1}, {}, {"Level0_Transition", {"-0.05*3", 0}, 1}, {"Level0_Transition", {"-0.05*2", 0}, 1}, {}, {"Level0_Transition", {"0.05*9", 0}, 1}, {"Level0_Transition", {"0.05*8", 0}, 1}, {}, {"Level0_Transition", {"0.05*7", 0}, 1}, {"Level0_Transition", {"0.05*6", 0}, 1}, {}, {"Level0_Transition", {"0.05*5", 0}, 1}, {"Level0_Transition", {"0.05*4", 0}, 1}, {}, {"Level0_Transition", {"0.05*3", 0}, 1}, {"Level0_Transition", {"0.05*2", 0}, 1}};
									};
								};
							};
							class Transition_Bank
							{
								type = "group";
								class Transition_Bank_Cue
								{
									type = "polygon";
									points[] = {{{"HorizonBankRot", {0, 0.25}, 1}, {"HorizonBankRot", {-0.01, 0.23}, 1}, {"HorizonBankRot", {0.01, 0.23}, 1}}};
								};
							};
						};
					};
					class Cruise_Mode
					{
						type = "group";
						condition = "1-autohover";
						class Cruise
						{
							type = "group";
							condition = "speed - (60*1.852/3.6)+1";
						};
					};
				};
			};
		};
	};




	class tft8_MH60M: vtx_MH60M {
		faction="B_TFT8";
		displayName = "MH-60M (Kimi)";

		class MFD {
			class Kimi_HMD_Common
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class Units_Text_Imperial
					{
						type = "group";
						condition = "user1";
						class Units_Metric
						{
							type = "text";
							source = "static";
							text = "I";
							align = "right";
							scale = 1;
							pos[] = {{0.95, 0.1}, 1};
							right[] = {{0.98, 0.1}, 1};
							down[] = {{0.95, 0.13}, 1};
						};
					};
					class Units_Text_Metric
					{
						type = "group";
						condition = "1-user1";
						class Units_Metric
						{
							type = "text";
							source = "static";
							text = "M";
							align = "right";
							scale = 1;
							pos[] = {{0.95, 0.1}, 1};
							right[] = {{0.98, 0.1}, 1};
							down[] = {{0.95, 0.13}, 1};
						};
					};
					class Heading_Indexer
					{
						type = "line";
						width = 7;
						points[] = {{{"0.5", "0.128 + 0.03"}, 1}, {{0.5, 0.128}, 1}};
					};
					class HeadingScale_LEFT
					{
						clipTL[] = {0, 0};
						clipBR[] = {0.45, 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[] = {0.55, 0};
						clipBR[] = {1, 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[] = {0.45, "0.02 + 0.085"};
						clipBR[] = {"0.45 + 0.10", 1};
						class Heading_group
						{
							type = "scale";
							horizontal = 1;
							source = "heading";
							sourceScale = 0.1;
							NeverEatSeaWeed = 1;
							width = 4;
							top = 0.2;
							center = 0.5;
							bottom = 0.8;
							lineXleft = "0.03 + 0.085";
							lineYright = "0.02 + 0.085";
							lineXleftMajor = "0.04 + 0.085";
							lineYrightMajor = "0.02 + 0.085";
							majorLineEach = 3;
							numberEach = 3;
							step = 1;
							stepSize = "0.03";
							align = "center";
							scale = 1;
							pos[] = {"0.1975 + 0.000", "0.060 + 0.000"};
							right[] = {"0.1975 + 0.040", "0.060 + 0.000"};
							down[] = {"0.1975 + 0.000", "0.060 + 0.040"};
						};
					};
					class WYPT_indexer
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_tape
						{
							type = "line";
							width = 4;
							points[] = {{"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {-0.01, 0.015}, 1}, {"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {0, 0}, 1}, {"WYPT_Tape_Bone", 1, "Tape_Limit", 1, {0.01, 0.015}, 1}};
						};
					};
				};
			};
			class Kimi_HMD_Decluttered
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0";
					class HeadingNumber
					{
						type = "text";
						scale = 1;
						source = "heading";
						sourceScale = 1;
						sourceLength = 3;
						align = "center";
						pos[] = {{0.495, 0.045}, 1};
						right[] = {{0.555, 0.045}, 1};
						down[] = {{0.495, "0.045+ 0.06"}, 1};
					};
					class Airspeed_Number_Imperial
					{
						type = "group";
						condition = "user1";
						class Airspeed_Imperial
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "speed";
							sourceScale = 1.94384;
							pos[] = {{0.03, 0.475}, 1};
							right[] = {{0.08, 0.475}, 1};
							down[] = {{0.03, 0.525}, 1};
						};
					};
					class Airspeed_Number_Metric
					{
						type = "group";
						condition = "1-user1";
						class Airspeed_Metric
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "speed";
							sourceScale = 3.6;
							pos[] = {{0.03, 0.475}, 1};
							right[] = {{0.08, 0.475}, 1};
							down[] = {{0.03, 0.525}, 1};
						};
					};
					class AltNumber_Imperial
					{
						type = "group";
						condition = "user1";
						class Alt_Imperial
						{
							type = "text";
							scale = 1;
							align = "right";
							source = "altitudeAGL";
							sourceScale = 3.28084;
							sourceOffset = -6;
							pos[] = {{0.83, 0.475}, 1};
							right[] = {{0.88, 0.475}, 1};
							down[] = {{0.83, 0.525}, 1};
						};
					};
					class AltNumber_Metric
					{
						type = "group";
						condition = "1-user1";
						class Alt_Metric
						{
							type = "text";
							scale = 1;
							align = "right";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -2;
							pos[] = {{0.83, 0.475}, 1};
							right[] = {{0.88, 0.475}, 1};
							down[] = {{0.83, 0.525}, 1};
						};
					};
					class AC_Centerline
					{
						type = "line";
						width = 1;
						points[] = {{"ForwardVec", 1, {" -0.004 + 0.5", "0 + 0.5"}, 1}, {"ForwardVec", 1, {" 0.004 + 0.5", "0 + 0.5"}, 1}, {}, {"ForwardVec", 1, {" -0.0 + 0.5", "0.004 + 0.5"}, 1}, {"ForwardVec", 1, {" 0.0 + 0.5", "-0.004 + 0.5"}, 1}};
					};
					class FPM
					{
						type = "group";
						condition = "speed - 3.(6*1.852/3.6)+1.94384";
						class FPM_Cue
						{
							type = "line";
							width = 5;
							points[] = {{"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}, {"Velocity", 1, {"0.0099999998*0.75", "-0.01732*0.75"}, 1}, {"Velocity", 1, {"0.01732*0.75", "-0.0099999998*0.75"}, 1}, {"Velocity", 1, {"0.02*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"0.01732*0.75", "0.0099999998*0.75"}, 1}, {"Velocity", 1, {"0.0099999998*0.75", "0.01732*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "0.02*0.75"}, 1}, {"Velocity", 1, {"-0.0099999998*0.75", "0.01732*0.75"}, 1}, {"Velocity", 1, {"-0.01732*0.75", "0.0099999998*0.75"}, 1}, {"Velocity", 1, {"-0.02*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"-0.01732*0.75", "-0.0099999998*0.75"}, 1}, {"Velocity", 1, {"-0.0099999998*0.75", "-0.01732*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}, {}, {"Velocity", 1, {"0.039999999*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"0.02*0.75", "0*0.75"}, 1}, {}, {"Velocity", 1, {"-0.039999999*0.75", "0*0.75"}, 1}, {"Velocity", 1, {"-0.02*0.75", "0*0.75"}, 1}, {}, {"Velocity", 1, {"0*0.75", "-0.039999999*0.75"}, 1}, {"Velocity", 1, {"0*0.75", "-0.02*0.75"}, 1}};
						};
					};
					class WYPT_Group
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_Block
						{
							type = "group";
							class WYPT_Fly_2_Cue
							{
								type = "line";
								width = 3;
								points[] = {{"WYPT_2_VIEW", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.02 * 0.075", "0 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0 * 0.075", "0.02 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.02 * 0.075", "0 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"-0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"WYPT_2_VIEW", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {}, {"WYPT_2_VIEW", 1, {-0.03, 0}, 1}, {"WYPT_2_VIEW", 1, {0, -0.03}, 1}, {"WYPT_2_VIEW", 1, {0.03, 0}, 1}, {"WYPT_2_VIEW", 1, {0.018, 0.015}, 1}, {"WYPT_2_VIEW", 1, {-0.018, 0.015}, 1}, {"WYPT_2_VIEW", 1, {-0.03, 0}, 1}};
							};
						};
					};
					class Cruise_Altitude_ASL_Imperial
					{
						type = "group";
						condition = "user1";
						class Cruise_Alt_Imperial
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 3.28084;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.18}, 1};
							right[] = {{0.88, 0.18}, 1};
							down[] = {{0.83, 0.23}, 1};
						};
					};
					class Cruise_Altitude_ASL_Metric
					{
						type = "group";
						condition = "1-user1";
						class Cruise_Alt_Metric
						{
							type = "text";
							source = "altitudeASL";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.83, 0.18}, 1};
							right[] = {{0.88, 0.18}, 1};
							down[] = {{0.83, 0.23}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Transport
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class Slip_ball_group_NO_HAD
					{
						class Slip_bars
						{
							type = "line";
							width = 4;
							points[] = {{{"0.5-0.018", "0.9-0.04"}, 1}, {{"0.5-0.018", "0.9-0.075"}, 1}, {}, {{"0.5+0.018", "0.9-0.04"}, 1}, {{"0.5+0.018", "0.9-0.075"}, 1}, {}, {{"0.5+0.15", "0.9-0.04"}, 1}, {{"0.5-0.15", "0.9-0.04"}, 1}};
						};
						class Slip_ball
						{
							type = "line";
							width = 6;
							points[] = {{"Slip_Ball_X", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.75", "0 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.75", "0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.75", "0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.75", "0.02 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.75", "0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.75", "0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.75", "0 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.6", "0 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.6", "0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.6", "0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.6", "0.02 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.6", "0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.6", "0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.6", "0 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.5", "0 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.5", "0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.5", "0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.5", "0.02 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.5", "0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.5", "0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.5", "0 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.4", "0 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.4", "0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.4", "0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.4", "0.02 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.4", "0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.4", "0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.4", "0 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.30", "0 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.30", "0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.30", "0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.30", "0.02 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.30", "0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.30", "0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.30", "0 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.20", "0 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.20", "0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.20", "0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.20", "0.02 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.20", "0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.20", "0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.20", "0 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1}, {}, {"Slip_Ball_X", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.02 * 0.1", "0 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.01732 * 0.1", "0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0.0099999998 * 0.1", "0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.1", "0.02 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.1", "0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.1", "0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.02 * 0.1", "0 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"-0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1}, {"Slip_Ball_X", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1}};
						};
					};
					class LightsGroup
					{
						type = "group";
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHTS";
							align = "right";
							scale = 1;
							pos[] = {{0.02, "0.53 + 0.055"}, 1};
							right[] = {{0.06, "0.53 + 0.055"}, 1};
							down[] = {{0.02, "0.53 + 0.095"}, 1};
						};
					};
					class CollisionLightsGroup
					{
						type = "group";
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.02, "0.53 + 0.055 + 0.04"}, 1};
							right[] = {{0.06, "0.53 + 0.055 + 0.04"}, 1};
							down[] = {{0.02, "0.53 + 0.095 + 0.04"}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Weapons_LB
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {-1};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0";
					class Gun_Cross
					{
						condition = "mgun";
						type = "group";
						class GUN_X
						{
							type = "line";
							width = 7;
							points[] = {{"CCIP_2_VIEW", {0, -0.03}, 1}, {"CCIP_2_VIEW", {0, -0.012}, 1}, {}, {"CCIP_2_VIEW", {0, 0.012}, 1}, {"CCIP_2_VIEW", {0, 0.03}, 1}, {}, {"CCIP_2_VIEW", {-0.03, 0}, 1}, {"CCIP_2_VIEW", {-0.012, 0}, 1}, {}, {"CCIP_2_VIEW", {0.012, 0}, 1}, {"CCIP_2_VIEW", {0.03, 0}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"CCIP_2_VIEW", {-0.002, 0.035}, 1};
							right[] = {"CCIP_2_VIEW", {0.028, 0.035}, 1};
							down[] = {"CCIP_2_VIEW", {-0.002, 0.065}, 1};
						};
					};
					class Rocket_I_LLW
					{
						condition = "rocket";
						type = "group";
						class RocketSight
						{
							type = "line";
							width = 5.5;
							points[] = {{"CCIP_2_VIEW", 1, {0.022, -0.03}, 1}, {"CCIP_2_VIEW", 1, {-0.022, -0.03}, 1}, {}, {"CCIP_2_VIEW", 1, {0, -0.03}, 1}, {"CCIP_2_VIEW", 1, {0, 0.03}, 1}, {}, {"CCIP_2_VIEW", 1, {0.022, 0.03}, 1}, {"CCIP_2_VIEW", 1, {-0.022, 0.03}, 1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"CCIP_2_VIEW", {-0.002, 0.035}, 1};
							right[] = {"CCIP_2_VIEW", {0.028, 0.035}, 1};
							down[] = {"CCIP_2_VIEW", {-0.002, 0.065}, 1};
						};
					};
					class TargetACQ
					{
						type = "group";
						condition = "1";
						class ACQgun
						{
							type = "line";
							width = 2;
							points[] = {{"Target2View", 1, "Limit0109", 1, {0, -0.06}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.055}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.05}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.045}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.04}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.035}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.03}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.025}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.02}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.015}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, -0.01}, 1}, {"Target2View", 1, "Limit0109", 1, {0, -0.005}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.06}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.055}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.05}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.045}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.04}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.035}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.03}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.025}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.02}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.015}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0, 0.01}, 1}, {"Target2View", 1, "Limit0109", 1, {0, 0.005}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.06, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.055, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.05, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.045, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.04, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.035, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.025, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.02, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.015, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {-0.01, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {-0.005, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.06, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.055, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.05, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.045, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.04, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.035, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.025, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.02, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.015, 0}, 1}, {}, {"Target2View", 1, "Limit0109", 1, {0.01, 0}, 1}, {"Target2View", 1, "Limit0109", 1, {0.005, 0}, 1}};
						};
					};
					class Weapon_Name_LB
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{"0.03+0.7", 0.86}, 1};
						right[] = {{"0.07+0.7", 0.86}, 1};
						down[] = {{"0.03+0.7", 0.9}, 1};
					};
					class Ammo_Count_LB
					{
						type = "group";
						condition = "(mgun+rocket+ATmissile+AAmissile)";
						class Ammo_count_GUN
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{"0.03+0.7", 0.89}, 1};
							right[] = {{"0.07+0.7", 0.89}, 1};
							down[] = {{"0.03+0.7", 0.93}, 1};
						};
					};
					class Range_Number_LB
					{
						type = "group";
						condition = "targetDist";
						class Range_Number_LB
						{
							type = "text";
							source = "targetDist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.51, 0.94}, 1};
							right[] = {{0.55, 0.94}, 1};
							down[] = {{0.51, 0.98}, 1};
						};
					};
					class Range_Text_LB
					{
						type = "group";
						condition = "targetDist";
						class Range_Text_LB
						{
							type = "text";
							source = "static";
							text = "RNG";
							align = "left";
							scale = 1;
							pos[] = {{0.49, 0.94}, 1};
							right[] = {{0.53, 0.94}, 1};
							down[] = {{0.49, 0.98}, 1};
						};
					};
				};
			};
			class Kimi_HMD_Pilot
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				turret[] = {-1};
				class Draw
				{
					condition = "on*user0-user2";
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					class Aiming_X_Static
					{
						type = "group";
						condition = "(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))+(1-rocket-mgun)";
						class aim_X
						{
							type = "line";
							width = 5;
							points[] = {{{0.5, 0.48}, 1}, {{0.5, 0.45}, 1}, {}, {{0.5, 0.52}, 1}, {{0.5, 0.55}, 1}, {}, {{0.48, 0.5}, 1}, {{0.45, 0.5}, 1}, {}, {{0.52, 0.5}, 1}, {{0.55, 0.5}, 1}};
						};
					};
					class Torque_Group
					{
						condition = "simulRTD";
						class Torque_number
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 227;
							pos[] = {{0.065, 0.175}, 1};
							right[] = {{0.115, 0.175}, 1};
							down[] = {{0.065, 0.225}, 1};
						};
						class Torquetext
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07, 0.175}, 1};
							right[] = {{0.12, 0.175}, 1};
							down[] = {{0.07, 0.225}, 1};
						};
						class Torque_box
						{
							type = "group";
							condition = "rtdRotorTorque+(1-112.5/120)";
							class Torque_box_D
							{
								type = "line";
								width = 3;
								points[] = {{{"0.010 + 0.000", "0.50 - 0.025 - 0.300"}, 1}, {{"0.010 + 0.092", "0.50 - 0.025 - 0.300"}, 1}, {{"0.010 + 0.092", "0.50 + 0.025 - 0.300"}, 1}, {{"0.010 + 0.000", "0.50 + 0.025 - 0.300"}, 1}, {{"0.010 + 0.000", "0.50 - 0.025 - 0.300"}, 1}};
							};
						};
					};
					class Vspeed_Scale
					{
						type = "line";
						width = 5;
						points[] = {{{0.98, 0.2}, 1}, {{1, 0.2}, 1}, {}, {{0.93, 0.2}, 1}, {{0.95, 0.2}, 1}, {}, {{0.98, 0.35}, 1}, {{1, 0.35}, 1}, {}, {{0.93, 0.35}, 1}, {{0.95, 0.35}, 1}, {}, {{0.94, 0.38}, 1}, {{0.95, 0.38}, 1}, {}, {{0.94, 0.41}, 1}, {{0.95, 0.41}, 1}, {}, {{0.94, 0.44}, 1}, {{0.95, 0.44}, 1}, {}, {{0.94, 0.47}, 1}, {{0.95, 0.47}, 1}, {}, {{0.98, 0.5}, 1}, {{1, 0.5}, 1}, {}, {{0.93, 0.5}, 1}, {{0.95, 0.5}, 1}, {}, {{0.94, 0.53}, 1}, {{0.95, 0.53}, 1}, {}, {{0.94, 0.56}, 1}, {{0.95, 0.56}, 1}, {}, {{0.94, 0.59}, 1}, {{0.95, 0.59}, 1}, {}, {{0.94, 0.62}, 1}, {{0.95, 0.62}, 1}, {}, {{0.98, 0.65}, 1}, {{1, 0.65}, 1}, {}, {{0.93, 0.65}, 1}, {{0.95, 0.65}, 1}, {}, {{0.99, 0.68}, 1}, {{0.98, 0.68}, 1}, {}, {{0.99, 0.71}, 1}, {{0.98, 0.71}, 1}, {}, {{0.99, 0.74}, 1}, {{0.98, 0.74}, 1}, {}, {{0.99, 0.77}, 1}, {{0.98, 0.77}, 1}, {}, {{0.98, 0.8}, 1}, {{1, 0.8}, 1}, {}, {{0.93, 0.8}, 1}, {{0.95, 0.8}, 1}};
					};
					class RadarAltitudeBand
					{
						clipTL[] = {0, 0.2};
						clipBR[] = {1, 0.8};
						condition = "(208/3.28084) - altitudeAGL";
						class radarbanda
						{
							type = "line";
							width = 18;
							points[] = {{"RadarAltitudeBone", {0, 0}, 1}, {"RadarAltitudeBone", {0, 0.6}, 1}};
						};
					};
					class VspeedBand
					{
						type = "polygon";
						points[] = {{{"VspeedBone", {-0.01, 0}, 1}, {"VspeedBone", {-0.025, -0.015}, 1}, {"VspeedBone", {-0.025, 0.015}, 1}, {"VspeedBone", {-0.01, 0}, 1}}};
					};
					class Fuel_Text
					{
						type = "text";
						source = "static";
						text = "F";
						align = "right";
						scale = 1;
						pos[] = {{0.03, 0.89}, 1};
						right[] = {{0.07, 0.89}, 1};
						down[] = {{0.03, 0.93}, 1};
					};
					class Fuel_Number
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.06, 0.89}, 1};
						right[] = {{0.1, 0.89}, 1};
						down[] = {{0.06, 0.93}, 1};
					};
				};
			};
			class Kimi_HMD_Modes_Pilot
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212, 0.769, 0.204, 0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
				class Bones
				{
					class PlaneOrientation
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class ForwardVec
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.216, 0.216};
					};
					class ForwardVec_Center
					{
						type = "vector";
						source = "forward";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class ForwardVecPNVS
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {-0.055, -0.055};
					};
					class VspeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};
					class RadarAltitudeBone
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -6;
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};
					class WYPT_Tape_Bone
					{
						type = "vector";
						source = "wppoint";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
					};
					class Tape_Limit
					{
						type = "limit";
						limits[] = {0.2, 0, 0.8, 1};
					};
					class Turret_Tape_Bone
					{
						type = "vector";
						source = "Turret";
						pos0[] = {0.5, 0.128};
						pos10[] = {"0.500 + 0.037", 0.128};
						projection = 1;
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0, -2};
						pos10[] = {0.00717, -0.01};
						projection = 0;
					};
					class Gunner_HAD_Limit
					{
						type = "limit";
						limits[] = {0.4, 0.86, 0.6, 0.94};
					};
					class Slip_Ball_X
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.843};
						pos10[] = {0.515, 0.843};
					};
					class GforceX_Slip
					{
						type = "linear";
						source = "gmeterX";
						sourceScale = 1;
						max = 0.15;
						min = -0.15;
						minPos[] = {"0.5+0.1", "0.9-0.04-0.02"};
						maxPos[] = {"0.5-0.1", "0.9-0.04-0.02"};
					};
					class WeaponAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class TurretAimToView
					{
						type = "vector";
						source = "weapontoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP
					{
						source = "impactpoint";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class CCIP_2_VIEW
					{
						source = "impactpointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class RocketAim
					{
						source = "weapon";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Target2View
					{
						source = "targetToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class WYPT_2_VIEW
					{
						source = "wppointtoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class Velocity
					{
						source = "velocityToView";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {"0.500 + 0.2165", "0.500 + 0.2165"};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Speed_X_Hover_P
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_X_Hover_N
					{
						type = "vector";
						source = "velocityToView";
						sourcescale = "1";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0.02};
					};
					class Speed_Z_Hover
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 20;
						min = -20;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class Speed_X_Transition
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0, 0};
						pos10[] = {0.02, 0};
					};
					class Speed_Z_Transition
					{
						type = "linear";
						source = "speed";
						sourcescale = "1.94384";
						max = 60;
						min = -60;
						minPos[] = {0.5, 0.25};
						maxPos[] = {0.5, 0.75};
					};
					class GforceX_Hover
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.25, 0};
						maxPos[] = {-0.25, 0};
					};
					class GforceZ_Hover
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.25};
						maxPos[] = {0, 0.25};
					};
					class GforceX_Transition
					{
						type = "linear";
						source = "gmeterX";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0.1, 0};
						maxPos[] = {-0.1, 0};
					};
					class GforceZ_Transition
					{
						type = "linear";
						source = "gmeterZ";
						Sourcescale = 1;
						max = 7;
						min = -7;
						minPos[] = {0, -0.1};
						maxPos[] = {0, 0.1};
					};
					class Level0_Transition
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
						angle = 0;
					};
					class Level0
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};
					class LevelP5
					{
						angle = 5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM5
					{
						angle = -5;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP10
					{
						angle = 10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM10
					{
						angle = -10;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP15
					{
						angle = 15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM15
					{
						angle = -15;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP20
					{
						angle = 20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM20
					{
						angle = -20;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP25
					{
						angle = 25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM25
					{
						angle = -25;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP30
					{
						angle = 30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM30
					{
						angle = -30;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP35
					{
						angle = 35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM35
					{
						angle = -35;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP40
					{
						angle = 40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM40
					{
						angle = -40;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP45
					{
						angle = 45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM45
					{
						angle = -45;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelP50
					{
						angle = 50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
					class LevelM50
					{
						angle = -50;
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
					};
				};
				class Draw
				{
					color[] = {"user3", "user4", "user5"};
					alpha = "user6";
					condition = "on*user0-user2";
					class WYPT_Group
					{
						type = "group";
						condition = "WPvalid";
						class WYPT_Block
						{
							type = "group";
							condition = "speed - (6*1.852/3.6)+1.94384";
							class WYPT_Text
							{
								type = "text";
								source = "static";
								text = "W";
								align = "left";
								scale = 1;
								pos[] = {{0.03, 0.75}, 1};
								right[] = {{0.07, 0.75}, 1};
								down[] = {{0.03, 0.79}, 1};
							};
							class WYPT_Index
							{
								type = "text";
								source = "WPIndex";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.04, 0.75}, 1};
								right[] = {{0.08, 0.75}, 1};
								down[] = {{0.04, 0.79}, 1};
							};
							class WYPT_Distance
							{
								type = "text";
								source = "WPDist";
								sourceScale = 0.001;
								sourceprecision = 2;
								align = "right";
								scale = 1;
								pos[] = {{0.12, 0.75}, 1};
								right[] = {{0.16, 0.75}, 1};
								down[] = {{0.12, 0.79}, 1};
							};
							class WYPT_KM
							{
								type = "text";
								source = "static";
								text = "KM";
								align = "left";
								scale = 1;
								pos[] = {{0.22, 0.75}, 1};
								right[] = {{0.26, 0.75}, 1};
								down[] = {{0.22, 0.79}, 1};
							};
							class Ground_Speed_M
							{
								type = "group";
								condition = "1-user1";
								class GS_M
								{
									type = "text";
									source = "Speed";
									sourceScale = 3.6;
									align = "center";
									scale = 1;
									pos[] = {{0.03, 0.79}, 1};
									right[] = {{0.07, 0.79}, 1};
									down[] = {{0.03, 0.83}, 1};
								};
							};
							class Ground_Speed_I
							{
								type = "group";
								condition = "user1";
								class GS_I
								{
									type = "text";
									source = "Speed";
									sourceScale = 1.94384;
									align = "center";
									scale = 1;
									pos[] = {{0.03, 0.79}, 1};
									right[] = {{0.07, 0.79}, 1};
									down[] = {{0.03, 0.83}, 1};
								};
							};
							class WYPT_TTG_6
							{
								type = "group";
								condition = "(6*1.852/3.6) - speed";
								class TTG_6
								{
									type = "text";
									source = "WPDist";
									sourceScale = "1/(6*1.852/3.6)";
									align = "right";
									scale = 1;
									pos[] = {{0.13, 0.79}, 1};
									right[] = {{0.17, 0.79}, 1};
									down[] = {{0.13, 0.83}, 1};
								};
							};
							class WYPT_TTG_10
							{
								type = "group";
								condition = "speed- ((10-6)*1.852/3.6)+1";
								class TTG_10
								{
									type = "group";
									condition = "(10*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(10*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_20
							{
								type = "group";
								condition = "speed- ((20-10)*1.852/3.6)+1";
								class TTG_20
								{
									type = "group";
									condition = "(20*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(20*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_30
							{
								type = "group";
								condition = "speed- ((30-10)*1.852/3.6)+1";
								class TTG_30
								{
									type = "group";
									condition = "(30*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(30*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_40
							{
								type = "group";
								condition = "speed- ((40-10)*1.852/3.6)+1";
								class TTG_40
								{
									type = "group";
									condition = "(40*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(40*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_50
							{
								type = "group";
								condition = "speed- ((50-10)*1.852/3.6)+1";
								class TTG_50
								{
									type = "group";
									condition = "(50*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(50*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_60
							{
								type = "group";
								condition = "speed- ((60-10)*1.852/3.6)+1";
								class TTG_60
								{
									type = "group";
									condition = "(60*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(60*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_70
							{
								type = "group";
								condition = "speed- ((70-10)*1.852/3.6)+1";
								class TTG_70
								{
									type = "group";
									condition = "(70*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(70*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_80
							{
								type = "group";
								condition = "speed- ((80-10)*1.852/3.6)+1";
								class TTG_80
								{
									type = "group";
									condition = "(80*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(80*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_90
							{
								type = "group";
								condition = "speed- ((90-10)*1.852/3.6)+1";
								class TTG_90
								{
									type = "group";
									condition = "(90*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(90*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_100
							{
								type = "group";
								condition = "speed- ((100-10)*1.852/3.6)+1";
								class TTG_100
								{
									type = "group";
									condition = "(100*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(100*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_110
							{
								type = "group";
								condition = "speed- ((110-10)*1.852/3.6)+1";
								class TTG_110
								{
									type = "group";
									condition = "(110*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(110*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_120
							{
								type = "group";
								condition = "speed- ((120-10)*1.852/3.6)+1";
								class TTG_120
								{
									type = "group";
									condition = "(120*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(120*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_130
							{
								type = "group";
								condition = "speed- ((130-10)*1.852/3.6)+1";
								class TTG_130
								{
									type = "group";
									condition = "(130*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(130*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_140
							{
								type = "group";
								condition = "speed- ((140-10)*1.852/3.6)+1";
								class TTG_140
								{
									type = "group";
									condition = "(140*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(140*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_150
							{
								type = "group";
								condition = "speed- ((150-10)*1.852/3.6)+1";
								class TTG_150
								{
									type = "group";
									condition = "(150*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(150*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_160
							{
								type = "group";
								condition = "speed- ((160-10)*1.852/3.6)+1";
								class TTG_160
								{
									type = "group";
									condition = "(160*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(160*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_170
							{
								type = "group";
								condition = "speed- ((170-10)*1.852/3.6)+1";
								class TTG_170
								{
									type = "group";
									condition = "(170*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(170*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_180
							{
								type = "group";
								condition = "speed- ((180-10)*1.852/3.6)+1";
								class TTG_180
								{
									type = "group";
									condition = "(180*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(180*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_190
							{
								type = "group";
								condition = "speed- ((190-10)*1.852/3.6)+1";
								class TTG_190
								{
									type = "group";
									condition = "(190*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(190*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_200
							{
								type = "group";
								condition = "speed- ((200-10)*1.852/3.6)+1";
								class TTG_200
								{
									type = "group";
									condition = "(200*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(200*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_210
							{
								type = "group";
								condition = "speed- ((210-10)*1.852/3.6)+1";
								class TTG_210
								{
									type = "group";
									condition = "(210*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(210*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_220
							{
								type = "group";
								condition = "speed- ((220-10)*1.852/3.6)+1";
								class TTG_220
								{
									type = "group";
									condition = "(220*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(220*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_230
							{
								type = "group";
								condition = "speed- ((230-10)*1.852/3.6)+1";
								class TTG_230
								{
									type = "group";
									condition = "(230*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(230*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_240
							{
								type = "group";
								condition = "speed- ((240-10)*1.852/3.6)+1";
								class TTG_240
								{
									type = "group";
									condition = "(240*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(240*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_250
							{
								type = "group";
								condition = "speed- ((250-10)*1.852/3.6)+1";
								class TTG_250
								{
									type = "group";
									condition = "(250*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(250*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_260
							{
								type = "group";
								condition = "speed- ((260-10)*1.852/3.6)+1";
								class TTG_260
								{
									type = "group";
									condition = "(260*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(260*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_270
							{
								type = "group";
								condition = "speed- ((270-10)*1.852/3.6)+1";
								class TTG_270
								{
									type = "group";
									condition = "(270*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(270*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_280
							{
								type = "group";
								condition = "speed- ((280-10)*1.852/3.6)+1";
								class TTG_280
								{
									type = "group";
									condition = "(280*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(280*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_290
							{
								type = "group";
								condition = "speed- ((290-10)*1.852/3.6)+1";
								class TTG_290
								{
									type = "group";
									condition = "(290*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(290*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
							class WYPT_TTG_300
							{
								type = "group";
								condition = "speed- ((300-10)*1.852/3.6)+1";
								class TTG_300
								{
									type = "group";
									condition = "(300*1.852/3.6) - speed";
									class TTG
									{
										type = "text";
										source = "WPDist";
										sourceScale = "1/(300*1.852/3.6)";
										align = "right";
										scale = 1;
										pos[] = {{0.13, 0.79}, 1};
										right[] = {{0.17, 0.79}, 1};
										down[] = {{0.13, 0.83}, 1};
									};
								};
							};
						};
					};
					class Hover_Box
					{
						type = "group";
						condition = "autohover";
						class Hover_box_box
						{
							type = "line";
							width = 3;
							points[] = {{{"0.02 + 0.00", "0.50 - 0.015"}, 1}, {{"0.02 + 0.010", "0.50 - 0.025"}, 1}, {{"0.02 + 0.065", "0.50 - 0.025"}, 1}, {{"0.02 + 0.075", "0.50 - 0.015"}, 1}, {{"0.02 + 0.075", "0.50 + 0.015"}, 1}, {{"0.02 + 0.065", "0.50 + 0.025"}, 1}, {{"0.02 + 0.010", "0.50 + 0.025"}, 1}, {{"0.02 + 0.00", "0.50 + 0.015"}, 1}, {{"0.02 + 0.00", "0.50 - 0.015"}, 1}};
						};
					};
					class Transition_Mode
					{
						type = "group";
						condition = "1-autohover";
						class Transition
						{
							type = "group";
							condition = "speed - (6*1.852/3.6)+1";
							class Transition_VV
							{
								type = "group";
								condition = "(60*1.852/3.6) - speed";
								class Velocity_Vector
								{
									type = "line";
									width = 2;
									points[] = {{{0.5, 0.5}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.02 * 0.075", "0 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "0.02 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.0099999998 * 0.075", "0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.01732 * 0.075", "0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.02 * 0.075", "0 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.01732 * 0.075", "-0.0099999998 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"-0.0099999998 * 0.075", "-0.01732 * 0.075"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, {"0 * 0.075", "-0.02 * 0.075"}, 1}};
								};
							};
							class Transition_Acceleration_ball
							{
								type = "group";
								condition = "(60*1.852/3.6) - speed";
								class Acceleration_ball
								{
									type = "line";
									width = 3;
									points[] = {{"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "-0.02 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.0099999998 * 0.50", "-0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.01732 * 0.50", "-0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.02 * 0.50", "0 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.01732 * 0.50", "0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0.0099999998 * 0.50", "0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "0.02 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.0099999998 * 0.50", "0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.01732 * 0.50", "0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.02 * 0.50", "0 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.01732 * 0.50", "-0.0099999998 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"-0.0099999998 * 0.50", "-0.01732 * 0.50"}, 1}, {"Speed_Z_Transition", 1, "Speed_X_Transition", 1, "GforceZ_Transition", 1, "GforceX_Transition", 1, {"0 * 0.50", "-0.02 * 0.50"}, 1}};
								};
							};
							class Transition_Horizon
							{
								clipTL[] = {0.15, 0.15};
								clipBR[] = {0.85, 0.85};
								type = "group";
								class Horizon
								{
									class Level0
									{
										type = "line";
										width = 4;
										points[] = {{"Level0_Transition", {"-0.05*9", 0}, 1}, {"Level0_Transition", {"-0.05*8", 0}, 1}, {}, {"Level0_Transition", {"-0.05*7", 0}, 1}, {"Level0_Transition", {"-0.05*6", 0}, 1}, {}, {"Level0_Transition", {"-0.05*5", 0}, 1}, {"Level0_Transition", {"-0.05*4", 0}, 1}, {}, {"Level0_Transition", {"-0.05*3", 0}, 1}, {"Level0_Transition", {"-0.05*2", 0}, 1}, {}, {"Level0_Transition", {"0.05*9", 0}, 1}, {"Level0_Transition", {"0.05*8", 0}, 1}, {}, {"Level0_Transition", {"0.05*7", 0}, 1}, {"Level0_Transition", {"0.05*6", 0}, 1}, {}, {"Level0_Transition", {"0.05*5", 0}, 1}, {"Level0_Transition", {"0.05*4", 0}, 1}, {}, {"Level0_Transition", {"0.05*3", 0}, 1}, {"Level0_Transition", {"0.05*2", 0}, 1}};
									};
								};
							};
							class Transition_Bank
							{
								type = "group";
								class Transition_Bank_Cue
								{
									type = "polygon";
									points[] = {{{"HorizonBankRot", {0, 0.25}, 1}, {"HorizonBankRot", {-0.01, 0.23}, 1}, {"HorizonBankRot", {0.01, 0.23}, 1}}};
								};
							};
						};
					};
					class Cruise_Mode
					{
						type = "group";
						condition = "1-autohover";
						class Cruise
						{
							type = "group";
							condition = "speed - (60*1.852/3.6)+1";
						};
					};
				};
			};
		};
	};
};
