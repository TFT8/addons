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

class CfgVehicles {
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F :Helicopter_Base_H {
        class Components;
    };
    class vtx_H60_base: Heli_Transport_01_base_F {
        faction="B_TFT8";
        crew="B_helipilot_F";
        class Components: Components
        {
            class SensorsManagerComponent;
        };
    };
    class vtx_MH60M: vtx_H60_base {
        faction="B_TFT8";
        memoryPointGun[] = {"otochlaven", "otochlaven_1"};
        
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        class Components: Components
        {
            class SensorsManagerComponent: SensorsManagerComponent
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
    };
};
