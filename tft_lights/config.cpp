class CfgPatches {
    class tft_lights {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"A3_Weapons_F"};
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
        intensity = 80000;
        brightness = 50;
        timeToLive = 40;
        size = 0.8;
    };

    class F_40mm_Green : F_40mm_White {
        lightColor[] = {0.5, 0.75, 0.5, 0.25};
        intensity = 70000;
        size = 1.2;
    };

    class F_40mm_Yellow : F_40mm_White {
        lightColor[] = {0.75, 0.75, 0.5, 0.25};
        intensity = 70000;
        size = 1.2;
    };

    class F_40mm_Red : F_40mm_White {
        lightColor[] = {0.75, 0.5, 0.5, 0.25};
        intensity = 70000;
        size = 1.2;
    };

};
