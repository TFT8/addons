class CfgPatches
{
	class tft8_helmets
	{
		units[]={};
		weapons[]={""};
		requiredAddons[]={"rhsusf_infantry2"};
		version="1.0.1";
		author[]={"Shuff13","Mik92"};
		authorUrl="https://tft8.com/";
	};
};

class cfgWeapons
{
	class rhsusf_hgu56p_visor_mask_black;
	class rhsusf_hgu56p_mask_black;
	class rhsusf_hgu56p_visor_black;
	class rhsusf_hgu56p_black;
	
	
	class tft8_hgu56p_visor_mask_smoke: rhsusf_hgu56p_visor_mask_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Smoke/Visor/Mask)"; 
		author="Shuffl3";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\smoke_camo_co.paa",
			"\tft_helmets\data\smoke_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_mask_smoke: rhsusf_hgu56p_mask_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Smoke/Mask)"; 
		author="Shuffl3";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\smoke_camo_co.paa",
			"\tft_helmets\data\smoke_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_visor_smoke: rhsusf_hgu56p_visor_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Smoke/Visor)"; 
		author="Shuffl3";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\smoke_camo_co.paa",
			"\tft_helmets\data\smoke_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_smoke: rhsusf_hgu56p_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Smoke)"; 
		author="Shuffl3";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\smoke_camo_co.paa",
			"\tft_helmets\data\smoke_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
    class tft8_hgu56p_visor_mask_swiss: rhsusf_hgu56p_visor_mask_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Swiss/Visor/Mask)"; 
		author="Mik92";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\swiss_camo_co.paa",
			"\tft_helmets\data\swiss_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_mask_swiss: rhsusf_hgu56p_mask_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Swiss/Mask)"; 
		author="Mik92";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\swiss_camo_co.paa",
			"\tft_helmets\data\swiss_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_visor_swiss: rhsusf_hgu56p_visor_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Swiss/Visor)"; 
		author="Mik92";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\swiss_camo_co.paa",
			"\tft_helmets\data\swiss_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
	
	class tft8_hgu56p_swiss: rhsusf_hgu56p_black
    { 
        scope = 2; 
        displayName = "[TFT8] HGU-56/P (Swiss)"; 
		author="Mik92";
        picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; //Thanks RHS TEAM!
		hiddenSelections[] = {"camo","patches"};
		hiddenSelectionsTextures[] =
		{
			"\tft_helmets\data\swiss_camo_co.paa",
			"\tft_helmets\data\swiss_patches_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
		};
	};
};