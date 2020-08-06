#define ALLOW(AMMO) class AMMO: RocketBase { \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    allowAgainstInfantry = 1; \
    cost = 40; \
};

class CfgAmmo {
    class RocketBase;
    ALLOW(CUP_R_M136_AT)
    ALLOW(CUP_R_M72A6_AT)
    ALLOW(CUP_R_MEEWS_HEDP)
    ALLOW(CUP_R_PG7V_AT)
    ALLOW(CUP_R_PG7VL_AT)
    ALLOW(CUP_R_PG7VM_AT)
    ALLOW(CUP_R_PG7VR_AT)
    ALLOW(CUP_R_RPG18_AT)
    ALLOW(CUP_R_SMAW_HEAA)
    ALLOW(CUP_R_SMAW_HEAA_N)
    ALLOW(CUP_R_SMAW_HEDP)
    ALLOW(CUP_R_SMAW_HEDP_N)
    ALLOW(CUP_R_SMAW_NE)
    ALLOW(CUP_R_TBG7V_AT)
};
