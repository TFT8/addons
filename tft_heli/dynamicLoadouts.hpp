			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_melb\data\loadouts\RHS_AH6M_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_MELB","RHS_HP_MELB_L","DAR","DAGR","B_SHRIEKER", "CUP_NATO_HELO_SMALL","CUP_NATO_HELO_AH6","CUP_NATO_HELO_AH6_LEFT"};
						priority			= 2;
						attachment			= "rhs_mag_M151_7";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.20};
						bay					= -1;
						turret[]			= {};
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						hardpoints[]		= {"RHS_HP_MELB_M134"};
						UIposition[]		= {0.562,0.30};
						priority			= 1;
						attachment			= "rhs_mag_m134_pylon_3000";
						turret[]			= {};
						hitpoint 			= HitPylon2;
					};
					class pylon3 : pylon2
					{
						UIposition[]		= {0.103,0.30};
						mirroredMissilePos	= 2;
						attachment			= "rhs_mag_m134_pylon_3000";
						turret[]			= {};
						hitpoint 			= HitPylon3;
					};
					class pylon4 : pylon1
					{
						hardpoints[]		= {"RHS_HP_MELB","RHS_HP_MELB_R","DAR","DAGR","B_SHRIEKER", "CUP_NATO_HELO_SMALL","CUP_NATO_HELO_AH6","CUP_NATO_HELO_AH6_RIGHT"};
						UIposition[]		= {0.04,0.20};
						mirroredMissilePos	= 1;
						turret[]			= {};
						hitpoint 			= HitPylon4;
					};
				};

				class Presets
				{
					class Light
					{
						attachment[] =
						{
							"rhs_mag_M151_7",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_m134_pylon_3000",
							"rhs_mag_M151_7"
						};
						displayname = "Light";
					};
					class Medium
					{
						attachment[] =
						{
							"rhsusf_mag_gau19_melb_left",
							"",
							"",
							"rhs_mag_M151_19"
						};
						displayname = "Medium";
					};
					class Heavy
					{
						attachment[] =
						{
							"rhsusf_mag_gau19_melb_left",
							"",
							"",
							"rhs_mag_AGM114K_2"
						};
						displayname = "Heavy";
					};
				};
			};