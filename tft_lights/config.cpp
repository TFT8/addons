class CfgPatches {
    class tft_lights {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"cba_events", "cba_xeh", "A3_Weapons_F", "ace_grenades"};
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1, 0};
        author = "YoursTruly";
    };
};

class CfgAmmo {
    class FlareBase;

    class F_40mm_White : FlareBase {
        lightColor[] = {0.75, 0.75, 0.75, 0.5};
        coefGravity = 0.25;
        intensity = 95000;
        brightness = 500;
        timeToLive = 50;
        size = 0.8;
    };

    class F_40mm_Green : F_40mm_White {
        lightColor[] = {0.25, 0.75, 0.25, 0.25};
        size = 1.2;
    };

    class F_40mm_Yellow : F_40mm_White {
        lightColor[] = {0.75, 0.75, 0.5, 0.25};
        size = 1.2;
    };

    class F_40mm_Red : F_40mm_White {
        lightColor[] = {0.75, 0.25, 0.25, 0.25};
        size = 1.2;
    };
};

class Extended_PostInit_EventHandlers {
    class tft_lights {
        init = "\
            tft_lights_instance = '#lightpoint' createVehicleLocal [worldSize/2,worldSize/2,25000]; \
            tft_lights_instance setLightDayLight false; \
            tft_lights_instance setLightAttenuation [worldSize*sqrt 2,1,1e-4,0]; \
            tft_lights_instance setLightBrightness 0.12; \
            tft_lights_instance setLightColor [0.3, 0.4, 0.8]; \
            tft_lights_instance setLightAmbient [0.02, 0.02, 0.02]; \
        ";
    };
};
