class CfgAmmo {
    #define GL_SMOKE_BOUNCE_LESS \
        simulation = "shotSmoke"; \
        deflectionSlowDown = 0.28;
        
    class SmokeShell;
    class SmokeShellGreen;
    class SmokeShellRed;
    class SmokeShellYellow;
    class G_40mm_Smoke: SmokeShell { GL_SMOKE_BOUNCE_LESS };
    
	class rhs_40mm_smoke_white: SmokeShell { GL_SMOKE_BOUNCE_LESS };
	class rhs_40mm_smoke_green: SmokeShellGreen { GL_SMOKE_BOUNCE_LESS };
	class rhs_40mm_smoke_red: SmokeShellRed { GL_SMOKE_BOUNCE_LESS };
	class rhs_40mm_smoke_yellow: SmokeShellYellow { GL_SMOKE_BOUNCE_LESS };
};
