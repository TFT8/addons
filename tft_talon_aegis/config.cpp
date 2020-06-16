// #include "script_component.hpp"
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
/*
class CfgIdentities
{
		class hawke_female {
		face = "B_female_bun_03";
		glasses = "CFP_Scarfbeardshades_green";
		name = "Hawke";
		nameSound = "Hawke";
		pitch = 1.0;
		speaker = "cup_d_female01_en";
	};
	
	class talon {
		face = "RussianHead_4";
		glasses = "G_Lowprofile";
		name = "Talon";
		nameSound = "Talon";
		pitch = 1.0;
		speaker = "cup_d_male03_en";
	};
	class spoons {
		face = "WhiteHead_06";
		glasses = "CUP_G_TK_RoundGlasses_blk";
		name = "Spoons";
		nameSound = "Spoons";
		pitch = 1.0;
		speaker = "male03chi";
	};
	
	class tex {
		face = "LivonianHead_3";
		glasses = "CUP_G_Grn_Scarf_Shades";
		name = "Tex";
		nameSound = "Tex";
		pitch = 1.0;
		speaker = "male11eng";
	};
	
	class vega {
		face = "WhiteHead_04";
		glasses = "rhs_googles_black";
		name = "Vega";
		nameSound = "Vega";
		pitch = 1.0;
		speaker = "male03gre";
	};
};


For tft_ta_hawke
{
	_this setIdentitiy "hawke_female";
};

For tft_ta_talon
{
	_this setIdentity "talon";
};

For tft_ta_tex
{
	_this setIdentity "tex";
};

For tft_ta_spoons
{
	_this setIdentity "spoons";
};

For tft_ta_vega
{
	_this setIdentity "vega";
};
*/