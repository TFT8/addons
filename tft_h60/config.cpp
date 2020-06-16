class CfgPatches {
    class tft_h60{
        units[] = {};
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

class SensorTemplateIR;
class SensorTemplateLaser;
class SensorTemplateNV;

class Extended_Init_EventHandlers {
    class vtx_MH60M {
        class FRIES {
            init = "if (local (_this select 0)) then {[_this select 0] call ace_fastroping_fnc_equipFRIES}";
        };
    };
};

class CfgAmmo {
  class M_Scalpel_AT;
  class ACE_Hellfire_AGM114K: M_Scalpel_AT {
    model = "vtx_uh60_weapons\fza_agm114k.p3d";
    proxyShape = "vtx_uh60_weapons\fza_agm114k.p3d";
  };
};

class CfgMagazines {
  delete VTX_4Rnd_ACE_Hellfire_AGM114K;
};

class CfgWeapons {
    delete vtx_hellfire_launcher;
};

class CfgVehicles {
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F :Helicopter_Base_H {
        class Turrets;
        class CopilotTurret;
    };
    class vtx_H60_base: Heli_Transport_01_base_F {
        crew="B_helipilot_F";

        class Components;
        class Turrets : Turrets {
              class MainTurret;
              class CopilotTurret;
          };
        driverWeaponsInfoType = "Rsc_MELB_Turret_UnitInfo";
        driverOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
        class vtx_templateFLIR
        {
            class OpticsIn
            {
              class Wide
              {
                opticsDisplayName="TRK COR";
                initAngleX=180;
                minAngleX=-360;
                maxAngleX=360;
                initAngleY=0;
                minAngleY=-15;
                maxAngleY=85;
                initFov=0.30000001;
                minFov=0.30000001;
                maxFov=0.30000001;
                visionMode[]=
                {
                  "Normal",
                  "NVG",
                  "Ti"
                };
                thermalMode[]={0};
                directionStabilized=1;
                horizontallyStabilized=1;
                gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
                opticsPPEffects[]=
                {
                  "OpticsCHAbera3",
                  "OpticsBlur3"
                };
                gunnerOpticsEffect[]=
                {
                  "TankCommanderOptics2"
                };
              };
              class WideT: Wide
              {
                initFov=0.2;
                minFov=0.2;
                maxFov=0.2;
                gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
              };
              class MediumT: WideT
              {
                initFov=0.1;
                minFov=0.1;
                maxFov=0.1;
                gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_m.p3d";
              };
              class NarrowT: WideT
              {
                initFov=0.022;
                minFov=0.022;
                maxFov=0.022;
                gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n.p3d";
              };
              class NarrowT2: WideT
              {
                initFov=0.0092000002;
                minFov=0.0092000002;
                maxFov=0.0092000002;
                gunnerOpticsModel="rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n2.p3d";
              };
            };
            stabilizedInAxes=3;
            minElev=-40;
            maxElev=180;
            initElev=0;
            minTurn=-180;
            maxTurn=180;
            initTurn=0;
            maxXRotSpeed=0.5;
            maxYRotSpeed=0.5;
        };
        gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
        turretInfoType = "Rsc_MELB_Turret_UnitInfo";
    };
    class vtx_MH60M: vtx_H60_base {
        faction="B_TFT8";
        memoryPointGun[] = {"otochlaven", "otochlaven_1"};
        
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    delete ActiveRadarSensorComponent;
                    class IRSensorComponent: SensorTemplateIR {animDirection = "FLIR_DIRECTION";};
                    class NVSensorComponent: SensorTemplateNV {animDirection = "FLIR_DIRECTION";};
                    class LaserSensorComponent: SensorTemplateLaser {
                        typeRecognitionDistance = 1500; // distance how far the target type gets recognized
                        angleRangeHorizontal 	= 360;	// sensor azimuth coverage in degrees
                        angleRangeVertical 		= 360;
                    };
                };
            };
        };
        
        receiveRemoteTargets = true;
        reportRemoteTargets = true;
        reportOwnPosition = true;
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
        class TransportBackpacks{};
        
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "B_helicrew_F";
                minElev = -90;
                maxElev = 10;
                initElev = 0;
                minTurn = -10;
                maxTurn = 190;
                initTurn = 0;
                magazines[] = {"vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red","vtx_2000Rnd_65x39_Belt_Tracer_Red"};
                stabilizedInAxes = 3;
            };
            class RightDoorGun: MainTurret {
                gunnerType = "B_helicrew_F";
                minElev = -90;
                maxElev = 10;
                initElev = 0;
                minTurn = -190;
                maxTurn = 10;
                initTurn = 0;
            };
        };

    };
    class vtx_MH60M_DAP: vtx_MH60M {
        faction="B_TFT8";
        weapons[] += {"CUP_weapon_mastersafe"};
        class TransportMagazines{};
        class TransportItems{};
        class TransportWeapons{};
        class TransportBackpacks{};    
        class Components: Components {
            class SensorsManagerComponent
            {
                class Components
                {
                    delete ActiveRadarSensorComponent;
                    class IRSensorComponent: SensorTemplateIR {};
                };
            };
            class TransportPylonsComponent {
                class Pylons
                {
                    class pylons1
                    {
                        attachment = "VTX_M230_Chaingun_L";
                        UIposition[] = {0.555, 0.37};
                    };
                    class pylons2
                    {
                        attachment = "CUP_PylonPod_19Rnd_Rocket_FFAR_M";
                        UIposition[] = {0.11, 0.37};
                    };
                };
                class Presets
                {
                    class Empty {
                        displayName = "Empty";
                        attachment[] = {};
                    };
                    class Default {
                        displayName = "Default";
                        attachment[] = {"VTX_M230_Chaingun_L", "CUP_PylonPod_19Rnd_Rocket_FFAR_M"};
                    };
                    class Rocket {
                      displayName = "Rocket";
                      attachment[] = {"CUP_PylonPod_19Rnd_Rocket_FFAR_M", "CUP_PylonPod_19Rnd_Rocket_FFAR_M"};
                    };
                    class AT {
                      displayName = "AT";
                      attachment[] = {"VTX_4Rnd_ACE_Hellfire_AGM114K", "VTX_4Rnd_ACE_Hellfire_AGM114K"};
                    };
                    class Interdiction {
                      displayName = "Interdiction";
                      attachment[] = {"VTX_M230_Chaingun_L", "VTX_4Rnd_ACE_Hellfire_AGM114K"};
                    };
                };
            };
        };
    };
};
