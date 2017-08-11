class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"A3_Weapons_F","A3_Sounds_F","A3_Weapons_F_Exp","A3_Weapons_F_Ammoboxes","ace_cargo","cba_xeh","cba_xeh_a3"};
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

class CfgVehicles {
    class C_supplyCrate_F;    // External class reference

    class TFT_supplyCrate_F: C_supplyCrate_F {
        scope = 2;
        scopeCurator = 2;
        author = "TFT8";
        displayName = "[TFT8] Supply Box";

        class TransportWeapons {
            class _xx_SMA_Mk16QCB {
                weapon = "SMA_Mk16QCB";
                count = 1;
            };
            class _xx_CUP_launch_M72A6 {
                weapon = "CUP_launch_M72A6";
                count = 3;
            };
        };

        class TransportMagazines {
            // Pistol mags
            class _xx_16Rnd_9x21_Mag {
                magazine = "16Rnd_9x21_Mag";
                count = 10;
            };
            // Weapon mags
            class _xx_30Rnd_556x45_Stanag_Tracer_Green {
                magazine = "30Rnd_556x45_Stanag_Tracer_Green";
                count = 20;
            };
            class _xx_SMA_30Rnd_556x45_M855A1_Tracer {
                magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
                count = 30;
            };
            class _xx_CUP_20Rnd_762x51_B_M110 {
                magazine = "CUP_20Rnd_762x51_B_M110";
                count = 15;
            };
            // MG mags
            class _xx_150Rnd_556x45_Drum_Mag_Tracer_F {
                magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
                count = 10;
            };
            class _xx_200Rnd_556x45_Box_Tracer_Red_F {
                magazine = "200Rnd_556x45_Box_Tracer_Red_F";
                count = 10;
            };
            // AT rockets
            class _xx_CUP_MAAWS_HEAT_M {
                magazine = "CUP_MAAWS_HEAT_M";
                count = 2;
            };
            class _xx_CUP_MAAWS_HEDP_M {
                magazine = "CUP_MAAWS_HEDP_M";
                count = 2;
            };
            class _xx_Titan_AP {
                magazine = "Titan_AP";
                count = 2;
            };
            class _xx_Titan_AT {
                magazine = "Titan_AT";
                count = 2;
            };
            // Grenades
            class _xx_SmokeShellGreen {
                magazine = "SmokeShellGreen";
                count = 5;
            };
            class _xx_SmokeShellPurple {
                magazine = "SmokeShellPurple";
                count = 5;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 15;
            };
            class _xx_ACE_M84 {
                magazine = "ACE_M84";
                count = 5;
            };
            class _xx_CUP_HandGrenade_M67 {
                magazine = "CUP_HandGrenade_M67";
                count = 10;
            };
            class _xx_MiniGrenade {
                magazine = "MiniGrenade";
                count = 5;
            };
            // Other
            class _xx_1Rnd_HE_Grenade_shell {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 10;
            };
            class _xx_UGL_FlareRed_F {
                magazine = "UGL_FlareRed_F";
                count = 5;
            };
            class _xx_1Rnd_Smoke_Grenade_shell {
                magazine = "1Rnd_Smoke_Grenade_shell";
                count = 5;
            };
        };

        class TransportItems {
            //ACE medical
            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
                count = 30;
            };
            class _xx_ACE_quikclot {
                name = "ACE_quikclot";
                count = 30;
            };
            class _xx_ACE_packingBandage {
                name = "ACE_packingBandage";
                count = 30;
            };
            class _xx_ACE_epinephrine {
                name = "ACE_epinephrine";
                count = 20;
            };
            class _xx_ACE_morphine {
                name = "ACE_morphine";
                count = 25;
            };
            class _xx_ACE_bloodIV_500 {
                name = "ACE_bloodIV_500";
                count = 10;
            };
            class _xx_ACE_plasmaIV_500 {
                name = "ACE_plasmaIV_500";
                count = 10;
            };
            class _xx_ACE_salineIV_500 {
                name = "ACE_salineIV_500";
                count = 15;
            };
            class _xx_ACE_surgicalKit {
                name = "ACE_surgicalKit";
                count = 10;
            };
            class _xx_ACE_tourniquet {
                name = "ACE_tourniquet";
                count = 10;
            };
            // Other
            class _xx_ACE_CableTie {
                name = "ACE_CableTie";
                count = 5;
            };
        };
    };


    class TFT_supplyCrate_Adv_F: C_supplyCrate_F {
        scope = 2;
        scopeCurator = 2;
        author = "TFT8";
        displayName = "[TFT8] Supply Box (Advanced)";
        
        class TransportWeapons {
            class _xx_ACE_VMH3 {
                weapon = "ACE_VMH3";
                count = 2;
            };
        };

        class TransportMagazines {
            class _xx_Laserbatteries {
                magazine = "Laserbatteries";
                count = 5;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine = "DemoCharge_Remote_Mag";
                count = 5;
            };
            class _xx_SatchelCharge_Remote_Mag {
                magazine = "SatchelCharge_Remote_Mag";
                count = 5;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine = "SLAMDirectionalMine_Wire_Mag";
                count = 5;
            };
        };

        class TransportItems {
            class _xx_Laserdesignator_03 {
                name = "Laserdesignator_03";
                count = 2;
            };
            class _xx_ACE_bodyBag {
                name = "ACE_bodyBag";
                count = 20;
            };
            class _xx_ACE_DefusalKit {
                name = "ACE_DefusalKit";
                count = 4;
            };
            class _xx_ACE_EarPlugs {
                name = "ACE_EarPlugs";
                count = 4;
            };
            class _xx_ACE_EntrenchingTool {
                name = "ACE_EntrenchingTool";
                count = 5;
            };
            class _xx_ItemGPS {
                name = "ItemGPS";
                count = 4;
            };
            class _xx_ACE_M26_Clacker {
                name = "ACE_M26_Clacker";
                count = 2;
            };
            class _xx_ACE_SpottingScope {
                name = "ACE_SpottingScope";
                count = 1;
            };
            class _xx_ACE_Tripod {
                name = "ACE_Tripod";
                count = 1;
            };
            class _xx_ACE_wirecutter {
                name = "ACE_wirecutter";
                count = 4;
            };
        };
        
        class TransportBackpacks {
            class _xx_TFT_Kitbag_OCP {
                backpack = "TFT_Kitbag_OCP";
                count = 2;
            };
            class _xx_TFT_Kitbag_UCP {
                backpack = "TFT_Kitbag_UCP";
                count = 2;
            };
            class _xx_TFT_Kitbag_WNT {
                backpack = "TFT_Kitbag_WNT";
                count = 2;
            };
        };
    };
};
