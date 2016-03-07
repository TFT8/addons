class CfgPatches {
	class tft_ai
    {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"ace_ai"};
		version = 2.0;
		versionStr = 2.0;
		versionAr[] = {2, 0};
		author[] = {"YoursTruly"};
	};
};

class CfgAISkill {
	aimingAccuracy[] = {0, 0, 1, 0.2};
	aimingShake[] = {0, 0, 1, 0.5};
	aimingSpeed[] = {0, 0, 1, 1};
	spotDistance[] = {0, 0, 1, 0.4};
	spotTime[] = {0, 0, 1, 0.35};
	courage[] = {0, 0, 1, 0.7};
	//reloadSpeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 0.8};
	endurance[] = {0, 0, 1, 0.9};
};
