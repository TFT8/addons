class arifle_AKM_FL_F;          // External class reference
class arifle_AK12_F;            // External class reference
class arifle_AK12_GL_F;         // External class reference
class srifle_DMR_06_olive_F;    // External class reference
class LMG_Zafir_F;              // External class reference

class arifle_AK12_GL_F_TE : arifle_AK12_GL_F {
    class LinkedItems {
        class LinkedItemsOptic {
            item = "optic_ACO_grn_smg";
            slot = "CowsSlot";
        };
        class LinkedItemsAcc {
            item = "acc_flashlight";
            slot = "PointerSlot";
        };
    };
};
class arifle_AK12_F_TE : arifle_AK12_F {
    class LinkedItems {
        class LinkedItemsAcc {
            item = "acc_flashlight";
            slot = "PointerSlot";
        };
    };
};
class srifle_DMR_06_olive_F_TE : srifle_DMR_06_olive_F {
    class LinkedItems {
        class LinkedItemsOptic {
            item = "optic_KHS_old";
            slot = "CowsSlot";
        };
    };
};
class LMG_Zafir_F_TE : LMG_Zafir_F {
    class LinkedItems {
        class LinkedItemsAcc {
            item = "acc_flashlight";
            slot = "PointerSlot";
        };
    };
};
