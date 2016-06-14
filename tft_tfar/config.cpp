#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class tft_tfar
	{
		units[] =  {};
		weapons[] =  {};
		requiredVersion = 1.0;
		requiredAddons[] = { "CBA_Main", "task_force_radio_items", "task_force_radio"};
		author = "YoursTruly";
		version = 2.0.0;
		versionStr = "2.0.0";
		versionAr[] = {2,0,0};
	};
};

class CfgFunctions
{
	class TFAR
	{
		class Radio
		{
			class ServerInit {file = "tft_tfar\fn_ServerInit.sqf";};
			class ClientInit {file = "tft_tfar\fn_ClientInit.sqf";};
		};
	};
};

//Massi's Vehicles compatibility
class CfgVehicles {
    class Car_F;	            // External class reference
    class Tank_F;	            // External class reference
    class Helicopter_Base_H;	// External class reference
    class Plane_Base_F;	        // External class reference

    class B_mas_cars_Hilux_Base : Car_F {
        tf_isolatedAmount = 0.2;
    };

    class B_mas_HMMWV_Base : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.3;
    };

    class B_mas_cars_LR_BASE : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.1;
    };

    class I_mas_cars_UAZ_Base : Car_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.2;
    };

    class I_mas_BMP1_base : Tank_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.6;
    };

    class I_mas_T72_base : Tank_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.8;
    };

    class B_mas_UH1Y_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.5;
    };

    class B_mas_UH60_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.6;
    };

    class B_mas_CH_47F_base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class mas_Mi8_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class mas_Mi24_Base : Helicopter_Base_H {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };

    class mas_F_35C_Base : Plane_Base_F {
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.7;
    };
};
