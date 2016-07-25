class CfgPatches {
	class tft_lights
    {
		units[] = {"TFT_I_Heli_light_03_unarmed_F"};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"A3_Air_F"};
		version = 1.0;
		versionStr = 1.0;
		versionAr[] = {1, 0};
		author = "YoursTruly";
	};
};

class CfgVehicles
{
    class Helicopter_Base_F; // External class reference
    class Heli_light_03_base_F : Helicopter_Base_F {
        class Turrets {
			class MainTurret;	// External class reference
		};
    }
    class Heli_light_03_unarmed_base_F : Heli_light_03_base_F {
        class Turrets : Turrets {
            class MainTurret;   // External class reference
        };
    };
    class I_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F {
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Reflectors; // External class reference
            };
        };
    };

	class TFT_I_Heli_light_03_unarmed_F : I_Heli_light_03_unarmed_F {
        displayName="WY-55 Hellcat (Searchlight)";
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Reflectors : Reflectors {
                    class Right {
                        ambient[]={100,100,100,0};
                        color[]={7000,7500,10000};
                        coneFadeCoef=10;
                        dayLight=0;
                        direction="commanderview";
                        FlareSize=3;
                        hitpoint="glass11";
                        innerAngle=10;
                        intensity=70;
                        outerAngle=65;
                        position="laserstart";
                        selection="glass11";
                        size=1;
                        useFlare=1;
                        class Attenuation
                        {
                            constant=0;
                            hardLimitEnd = 600;
                            hardLimitStart = 400;
                            linear=1;
                            quadratic=0;
                            start=0;
                        };
                    };
                };
            };
        };
	};
};

class CfgAmmo {
    class FlareBase;

	class F_40mm_White : FlareBase {
        lightColor[] = {0.75, 0.75, 0.75, 0.5};
        intensity = 20000;
		brightness = 20;
		size = 1;
	};

    class F_40mm_Green : F_40mm_White {
		lightColor[] = {0.5, 0.75, 0.5, 0.25};
        intensity = 19000;
	};

	class F_40mm_Red : F_40mm_White {
		lightColor[] = {0.75, 0.5, 0.5, 0.25};
        intensity = 19000;
	};

	class F_40mm_Yellow : F_40mm_White {
		lightColor[] = {0.75, 0.75, 0.5, 0.25};
		intensity = 19000;
	};
};
