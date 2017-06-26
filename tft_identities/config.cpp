class CfgPatches {
    class tft_identities {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Characters_F"};
        author = "TFT8";
    };
};

class CfgUnitInsignia {
    class tft_160_dress {
        displayName = "[TFT8] SOAR (Dress)";
        texture = "\tft_identities\data\tft_160_dress.paa";
        scopeArsenal = 2;
    };
    class tft_160_ocp : tft_160_dress {
        displayName = "[TFT8] SOAR (OCP)";
        texture = "\tft_identities\data\tft_160_ocp.paa";
    };
    class tft_160_ucp : tft_160_dress {
        displayName = "[TFT8] SOAR (UCP)";
        texture = "\tft_identities\data\tft_160_ucp.paa";
    };
    class tft_75_dress : tft_160_dress {
        displayName = "[TFT8] 2-75th (Dress)";
        texture = "\tft_identities\data\tft_75_dress.paa";
    };
    class tft_75_ocp : tft_160_dress {
        displayName = "[TFT8] 2-75th (OCP)";
        texture = "\tft_identities\data\tft_75_ocp.paa";
    };
    class tft_75_ucp : tft_160_dress {
        displayName = "[TFT8] 2-75th (UCP)";
        texture = "\tft_identities\data\tft_75_ucp.paa";
    };
};
