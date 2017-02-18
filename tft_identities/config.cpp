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

class CfgFaces {
    class Default;      // External class reference

    class Man_A3 : Default {
        class tft_face_truly {
            author = "TFT8";
            displayname = "TFT Truly";
            texture = "\tft_identities\faces\truly.paa";
            disabled = 0;
            head = "Miller";
            identityTypes[] = {"Miller"};
            material = "\A3\Characters_F\Heads\Data\m_Miller.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
            materialWounded2 = "A3\Characters_F\Heads\Data\m_Miller_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
        };
        class tft_face_bushman {
            author = "TFT8";
            displayname = "TFT Bushmann";
            texture = "\tft_identities\faces\bushman.paa";
            disabled = 0;
            head = "DefaultHead_A3";
            identityTypes[] = {};
            material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
            materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
        };
        class tft_face_eversmann {
            author = "TFT8";
            displayname = "TFT Eversmann";
            texture = "\tft_identities\faces\eversmann.paa";
            disabled = 0;
            head = "DefaultHead_A3";
            identityTypes[] = {};
            material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
            materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
            materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
        };
    };
};
