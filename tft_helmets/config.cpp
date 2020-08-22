class CfgPatches {
	class tft_helmets {
		units[] = {};
		weapons[] = {""};
		requiredAddons[] = {"rhsusf_infantry2"};
		version = "1.0.1";
		author[] = {"Shuff13", "Mik92"};
		authorUrl = "https://tft8.com/";
	};
};

#define CONCAT(arg1, arg2, arg3) arg1##arg2##arg3

#define QUOTE(x) #x

#define TEXTURE(NAME) hiddenSelectionsTextures[] = { \
		QUOTE(CONCAT(\tft_helmets\data\,NAME,_camo_co.paa)), \
		QUOTE(CONCAT(\tft_helmets\data\,NAME,_patches_co.paa)), \
};

#define HGU56P(NAME) class tft8_hgu56p_visor_mask_##NAME : rhsusf_hgu56p_visor_mask_black { \
    scope = 1; \
    displayName = QUOTE([TFT8]HGU-56/P[NAME] (Visor/Mask)); \
    picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; \
    TEXTURE(NAME) \
}; \
class tft8_hgu56p_mask_##NAME : rhsusf_hgu56p_mask_black { \
    scope = 2; \
    displayName = QUOTE([TFT8]HGU-56/P[NAME] (Mask)); \
    picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; \
    TEXTURE(NAME) \
}; \
class tft8_hgu56p_visor_##NAME : rhsusf_hgu56p_visor_black { \
    scope = 1; \
    displayName = QUOTE([TFT8]HGU-56/P[NAME] (Visor)); \
    picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; \
		TEXTURE(NAME) \
}; \
class tft8_hgu56p_##NAME : rhsusf_hgu56p_black { \
    scope = 2; \
    displayName = QUOTE([TFT8]HGU-56/P[NAME]); \
    picture = "\tft_helmets\ui\rhs_hgu56_visor_mask_blk_ca.paa"; \
    TEXTURE(NAME) \
};

class cfgWeapons {
	class rhsusf_hgu56p_visor_mask_black;
	class rhsusf_hgu56p_mask_black;
	class rhsusf_hgu56p_visor_black;
	class rhsusf_hgu56p_black;

	HGU56P(Smoke)
	HGU56P(Swiss)

};
