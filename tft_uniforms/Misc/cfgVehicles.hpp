class OCP_Soldier_TS : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    scope = 1;
    model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "OCP_Soldier_TS";
    hiddenSelections[] = {"camo", "camo2", "insignia"};
    hiddenSelectionsTextures[] = {"\tft_uniforms\OCP\uniform.paa", "\tft_uniforms\Misc\TS_Black_75.paa"};
    linkedItems[] = {"OCP_Patrol", "OCP_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"OCP_Patrol", "OCP_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};
class UCP_Soldier_TS : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    scope = 1;
    model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "UCP_Soldier_TS";
    hiddenSelections[] = {"camo", "camo2", "insignia"};
    hiddenSelectionsTextures[] = {"\tft_uniforms\UCP\uniform.paa", "\tft_uniforms\Misc\TS_Black_75.paa"};
    linkedItems[] = {"UCP_Patrol", "UCP_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"UCP_Patrol", "UCP_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};
class WNT_Soldier_TS : B_Soldier_base_F {
    _generalMacro = "B_Soldier_base_F";
    scope = 1;
    model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
    nakedUniform = "U_BasicBody";
    uniformClass = "WNT_Soldier_TS";
    hiddenSelections[] = {"camo", "camo2", "insignia"};
    hiddenSelectionsTextures[] = {"\tft_uniforms\WNT\uniform.paa", "\tft_uniforms\Misc\TS_Black_75.paa"};
    linkedItems[] = {"WNT_Patrol", "WNT_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"WNT_Patrol", "WNT_Vest", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};
