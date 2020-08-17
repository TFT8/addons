/*
    World Types
        worldType_arid
        worldType_desert
        worldType_woodland
        worldType_snow
    
    Surface Types
        typical
        exposed
    
    Camo Types
        camoType_multi
        camoType_civilian
        camoType_desert
        camoType_woodland
        camoType_ghillie
        camoType_black
        camoType_snow
    
    For each combination of world, surface, and camo, there should be a camouflageCoef multiplier.
    camouflageCoef - A lower value means the unit is harder to spot
    https://community.bistudio.com/wiki/setUnitTrait
*/
#define COEF 1

// Surface types - units on surfaces that are "exposed" are easier to see and have higher camouflageCoef
switch (TFT_camo_worldType) do {
    case "worldType_arid": {
        TFT_camo_isSurfaceListExposed = true;
        TFT_camo_surfaceList = ["sand", "GdtBeach", "GdtDead", "GdtDesert", "GdtStratisBeach", "Beton", "runway_beton", "concrete", "concrete_out", "road", "surf_roadconcrete", "SurfRoadConcrete", "GdtConcrete", "GdtStratisConcrete"];
        TFT_camo_uniformTypeCoefList = [
            // ["camoType_name", typical, exposed]
            ["camoType_multi", COEF * 1, COEF * 1.5],
            ["camoType_civilian", COEF * 1, COEF * 1.5],
            ["camoType_desert", COEF * 1, COEF * 1.5],
            ["camoType_woodland", COEF * 1, COEF * 1.5],
            ["camoType_ghillie", COEF * 1, COEF * 1.5],
            ["camoType_black", COEF * 1, COEF * 1.5],
            ["camoType_snow", COEF * 1, COEF * 1.5]
        ];
    };
    case "worldType_desert": {
        TFT_camo_isSurfaceListExposed = false;
        TFT_camo_surfaceList = ["TKPole", "TKPlevel", "TKTrava", "TKForest", "ZRPole", "ZRPlevel", "ZRTrava", "DBTrava", "D2Grass"];
        TFT_camo_uniformTypeCoefList = [
            // ["camoType_name", 1, 1.5]
            ["camoType_multi", COEF * 1, COEF * 1.5],
            ["camoType_civilian", COEF * 1, COEF * 1.5],
            ["camoType_desert", COEF * 1, COEF * 1.5],
            ["camoType_woodland", COEF * 1, COEF * 1.5],
            ["camoType_ghillie", COEF * 1, COEF * 1.5],
            ["camoType_black", COEF * 1, COEF * 1.5],
            ["camoType_snow", COEF * 1, COEF * 1.5]
        ];
    };
    case "worldType_woodland": {
        TFT_camo_isSurfaceListExposed = true;
        TFT_camo_surfaceList = ["sand", "SandDesert", "SandBeach", "SandGeneral", "SandBuilding", "Beton", "runway_beton", "concrete", "concrete_out", "road", "surf_roadconcrete", "SurfRoadConcrete", "UTConcrete", "CRConcrete", "GdtVolcano", "GdtRedDirt", "GdtKlField", "cainsand_Surface"];
        TFT_camo_uniformTypeCoefList = [
            // ["camoType_name", 1, 1.5]
            ["camoType_multi", COEF * 1, COEF * 1.5],
            ["camoType_civilian", COEF * 1, COEF * 1.5],
            ["camoType_desert", COEF * 1, COEF * 1.5],
            ["camoType_woodland", COEF * 1, COEF * 1.5],
            ["camoType_ghillie", COEF * 1, COEF * 1.5],
            ["camoType_black", COEF * 1, COEF * 1.5],
            ["camoType_snow", COEF * 1, COEF * 1.5]
        ];
    };
    case "worldType_snow": {
        TFT_camo_isSurfaceListExposed = true;
        TFT_camo_surfaceList = [];
        TFT_camo_uniformTypeCoefList = [
            // ["camoType_name", 1, 1.5]
            ["camoType_multi", COEF * 1, COEF * 1.5],
            ["camoType_civilian", COEF * 1, COEF * 1.5],
            ["camoType_desert", COEF * 1, COEF * 1.5],
            ["camoType_woodland", COEF * 1, COEF * 1.5],
            ["camoType_ghillie", COEF * 1, COEF * 1.5],
            ["camoType_black", COEF * 1, COEF * 1.5],
            ["camoType_snow", COEF * 1, COEF * 1.5]
        ];
    };
};