class CfgPatches {
	class tft_insignia {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
        	author = "TFT8";
	};
};

class CfgUnitInsignia {
	class 160_deploy_insig {
		displayName = "[TFT8] SOAR (Deployment)";
		texture = "\tft_insignia\data\160_deploy.paa";
		author = "TFT8";
        scopeArsenal = 2;
	};
	class 160_dress_insig : 160_deploy_insig {
		displayName = "[TFT8] SOAR (Dress)";
		texture = "\tft_insignia\data\160_dress.paa";
		author = "TFT8";
	};
	class 2_75_deploy_insig : 160_deploy_insig {
		displayName = "[TFT8] 2-75th (Deployment)";
		texture = "\tft_insignia\data\2_75_deploy.paa";
		author = "TFT8";
	};
	class 2_75_dress_insig : 160_deploy_insig {
		displayName = "[TFT8] 2-75th (Dress)";
		texture = "\tft_insignia\data\2_75_dress.paa";
		author = "TFT8";
	};
};
