class CfgPatches {
    class fallujah_tft {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"fallujah_hou"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

class CfgVehicles {
    class Building;
    class NonStrategic : Building {
        class DestructionEffects;
    };
    class HouseBase : NonStrategic {};
    class House : HouseBase {
        animated = 0;
        displayName = "House";
        model = "";
        simulation = "house";
        accuracy = 0.2;
        cost = 0;
        ladders[] = {};
        armor = 300;
        class DestructionEffects : DestructionEffects {
            class Smoke1 {
                simulation = "particles";
                type = "HouseDestructionSmoke1";
                position = "destructionEffect1";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke2 : Smoke1 {
                type = "HouseDestructionSmoke2";
            };
            class Smoke3 : Smoke1 {
                type = "HouseDestructionSmoke3";
            };
            class Smoke4 : Smoke1 {
                type = "HouseDestructionSmoke4";
            };
            class Smoke5 : Smoke1 {
                type = "HouseDestrSmokeLong";
            };
        };
    };
};
