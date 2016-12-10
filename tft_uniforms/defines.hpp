#define QUOTE(STR) #STR
#define MERGE(VAR1,VAR2) VAR1##VAR2

#define UNIT(PATTERN) \
    class TFT_Soldier_##PATTERN : B_Soldier_base_F { \
        _generalMacro = "B_Soldier_base_F"; \
        scope = 1; \
        nakedUniform = "U_BasicBody"; \
        uniformClass = QUOTE(MERGE(TFT_Uniform_,PATTERN)); \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\uniform.paa)}; \
        linkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    }; \
    class TFT_Soldier_RS_##PATTERN : B_Soldier_base_F { \
        _generalMacro = "B_Soldier_base_F"; \
        scope = 1; \
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d"; \
        nakedUniform = "U_BasicBody"; \
        uniformClass = QUOTE(MERGE(TFT_Uniform_,PATTERN)); \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\uniform.paa)}; \
        linkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    }; \
    class TFT_Soldier_TS_##PATTERN : B_Soldier_base_F { \
        _generalMacro = "B_Soldier_base_F"; \
        scope = 1; \
        model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d"; \
        nakedUniform = "U_BasicBody"; \
        uniformClass = QUOTE(MERGE(TFT_Uniform_,PATTERN)); \
        hiddenSelections[] = {"camo", "camo2", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\uniform.paa), "tft_uniforms\Misc\rangerShirt.paa"}; \
        linkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
        respawnLinkedItems[] = {QUOTE(MERGE(TFT_Helmet_,PATTERN)), QUOTE(MERGE(TFT_Vest_,PATTERN)), "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; \
    };

#define UNIFORM(PATTERN) \
    class TFT_Uniform_##PATTERN : U_B_CombatUniform_mcam { \
        scope = 2; \
        displayName = QUOTE(PATTERN Uniform); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\uniform.paa); \
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; \
        class ItemInfo : UniformItem { \
            uniformModel = "-"; \
            uniformClass = QUOTE(MERGE(TFT_Soldier_,PATTERN)); \
            containerClass = "Supply80"; \
            mass = 70; \
        }; \
    }; \
    class TFT_Uniform_RS_##PATTERN : U_B_CombatUniform_mcam_vest { \
        scope = 2; \
        displayName = QUOTE(PATTERN Uniform (RS)); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\uniformRS.paa); \
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; \
        class ItemInfo : UniformItem { \
            uniformModel = "-"; \
            uniformClass = QUOTE(MERGE(TFT_Soldier_RS_,PATTERN)); \
            containerClass = "Supply80"; \
            mass = 70; \
        }; \
    }; \
    class TFT_Uniform_TS_##PATTERN : U_B_CombatUniform_mcam_tshirt { \
        scope = 2; \
        displayName = QUOTE(PATTERN Uniform (TS)); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\uniformTS.paa); \
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; \
        class ItemInfo : UniformItem { \
            uniformModel = "-"; \
            uniformClass = QUOTE(MERGE(TFT_Soldier_TS_,PATTERN)); \
            containerClass = "Supply60"; \
            mass = 50; \
        }; \
    };

#define VEST(PATTERN) \
    class TFT_Vest_##PATTERN : V_PlateCarrier1_rgr { \
        scope = 2; \
        displayName = QUOTE(PATTERN Carrier Rig); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\vest.paa); \
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02"; \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\vest.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02"; \
            containerClass = "Supply120"; \
            mass = 60; \
            hiddenSelections[] = {"Camo", "insignia"}; \
        }; \
    }; \
    class TFT_Vest_H_##PATTERN : V_PlateCarrierGL_rgr { \
        scope = 2; \
        displayName = QUOTE(PATTERN Carrier Rig (Heavy)); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\vestH.paa); \
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01"; \
        hiddenSelections[] = {"Camo", "insignia"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\vest.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01"; \
            containerClass = "Supply140"; \
            mass = 100; \
            hiddenSelections[] = {"Camo", "insignia"}; \
        }; \
    };

#define HELMET(PATTERN) \
    class TFT_Helmet_##PATTERN : H_HelmetSpecB { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN Enhanced Combat Helmet); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\helmet.paa); \
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\helmet.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class TFT_MICH_##PATTERN : H_HelmetIA { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN MICH); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\MICH.paa); \
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\MICH.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class TFT_Patrol_##PATTERN : H_MilCap_ocamo { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN Patrol Cap); \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\patrol.paa); \
        Model = "\A3\Characters_F\Common\cappatrol.p3d"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\patrol.paa)}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\Common\cappatrol.p3d"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    }; \
    class TFT_Boonie_##PATTERN : H_Booniehat_khk { \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\boonie.paa); \
        displayName = QUOTE(PATTERN Boonie Hat); \
        author = "TFT8"; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\boonie.paa)}; \
    };

#define PROTEC(PATTERN) \
    class TFT_Protec_##PATTERN : H_Helmet_Skate { \
        scope = 2; \
        weaponPoolAvailable = 1; \
        displayName = QUOTE(PATTERN ProTec); \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\Misc\Protec\UI\PATTERN.paa); \
        model = "\A3\Characters_F\Civil\C_Helmet_Skate_F.p3d"; \
        hiddenSelections[] = {"Camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(MERGE(tft_uniforms\Misc\Protec\protec_,PATTERN.paa))}; \
        class ItemInfo : ItemInfo { \
            uniformModel = "\A3\Characters_F\Civil\C_Helmet_Skate_F.p3d"; \
            modelSides[] = {3, 1}; \
            hiddenSelections[] = {"Camo"}; \
        }; \
    };

#define BACKPACK(PATTERN) \
    class TFT_Assault_##PATTERN: B_AssaultPack_blk { \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\assault.paa); \
        displayName = QUOTE(PATTERN Assault Pack); \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\assault.paa)}; \
    }; \
    class TFT_Kitbag_##PATTERN: B_Kitbag_cbr { \
        author = "TFT8"; \
        picture = QUOTE(\tft_uniforms\PATTERN\UI\kitbag.paa); \
        displayName = QUOTE(PATTERN Kitbag); \
        hiddenSelections[] = {"camo"}; \
        hiddenSelectionsTextures[] = {QUOTE(tft_uniforms\PATTERN\kitbag.paa)}; \
    };

#define BANDANA(PATTERN) \
    class TFT_Bandana_Beast_##PATTERN: G_Bandanna_beast { \
        displayname = QUOTE(Bandana (PATTERN) Beast); \
        author = "TFT8"; \
        picture = QUOTE(MERGE(\tft_uniforms\Misc\Bandana\UI\PATTERN,_beast.paa)); \
        hiddenSelectionsTextures[] = {QUOTE(MERGE(\tft_uniforms\Misc\Bandana\PATTERN,_beast.paa))}; \
    }; \
    class TFT_Bandana_Skull_##PATTERN: G_Bandanna_beast { \
        displayname = QUOTE(Bandana (PATTERN) Skull); \
        author = "TFT8"; \
        picture = QUOTE(MERGE(\tft_uniforms\Misc\Bandana\UI\PATTERN,_skull.paa)); \
        hiddenSelectionsTextures[] = {QUOTE(MERGE(\tft_uniforms\Misc\Bandana\PATTERN,_skull.paa))}; \
    };
