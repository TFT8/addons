class CfgPatches {
    class tft_misc {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"cba_xeh","cba_xeh_a3","ace_main"};
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

class CfgFactionClasses {
    class B_TFT8 {
        displayName = "Task Force Tempor 8";
        side = 1;
        flag = "\tft_misc\TFT8_flag.paa";
        icon = "\tft_misc\TFT8_flag.paa";
        priority = 0;
    };
};
class CfgVehicles {
	class FlagCarrier;
	class Flag_TFT8_F: FlagCarrier
	{
		author = "TFT8";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"flag", 0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\tft_misc\Flag_TFT8_F.jpg";
		_generalMacro = "Flag_TFT8_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (TFT8)";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\tft_misc\TFT8_flag.paa'";
		};
		class ACE_Actions
		{
		};
	};

};
