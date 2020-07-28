if(!hasInterface || isServer)then{
	
	_csys_map = toLower worldName;
	
	_csys_wworlds = ['enoch','tanoa','chernarus','chernarus_summer','woodland_acr','bootcamp_acr','sara','sara_dbe1','saralite','cain','namalsk'];
	_csys_aworlds = ['altis','stratis','malden','chernarus_winter','provinggrounds_pmc','porto','intro'];
	_csys_dworlds = ['takistan','zargabad','shapur_baf','desert_e','desert_island'];
	_csys_sandasurf = ['sand','GdtBeach','GdtDead','GdtDesert','GdtStratisBeach','Beton','runway_beton','concrete','concrete_out','road','surf_roadconcrete','SurfRoadConcrete','GdtConcrete','GdtStratisConcrete'];
	_csys_sandwsurf = ['sand','SandDesert','SandBeach','SandGeneral','SandBuilding','Beton','runway_beton','concrete','concrete_out','road','surf_roadconcrete','SurfRoadConcrete','UTConcrete','CRConcrete','GdtVolcano','GdtRedDirt','GdtKlField','cainsand_Surface'];
	_csys_oasissurf = ['TKPole','TKPlevel','TKTrava','TKForest','ZRPole','ZRPlevel','ZRTrava','DBTrava','D2Grass'];
	
	_csys_ccloths = [
	'U_BasicBody',
	'U_AntigonaBody',
	'U_AttisBody',
	'U_B_GEN_Commander_F',
	'U_B_GEN_Soldier_F',
	'U_B_Protagonist_VR',
	'U_B_Soldier_VR',
	'U_C_CBRN_Suit_01_White_F',
	'U_C_Commoner_shorts',
	'U_C_Commoner1_1',
	'U_C_Commoner1_2',
	'U_C_Commoner1_3',
	'U_C_Commoner2_1',
	'U_C_Commoner2_2',
	'U_C_Commoner2_3',
	'U_C_ConstructionCoverall_Black_F',
	'U_C_ConstructionCoverall_Blue_F',
	'U_C_ConstructionCoverall_Red_F',
	'U_C_ConstructionCoverall_Vrana_F',
	'U_C_Driver_1',
	'U_C_Driver_1_black',
	'U_C_Driver_1_blue',
	'U_C_Driver_1_green',
	'U_C_Driver_1_orange',
	'U_C_Driver_1_red',
	'U_C_Driver_1_white',
	'U_C_Driver_1_yellow',
	'U_C_Driver_2',
	'U_C_Driver_3',
	'U_C_Driver_4',
	'U_C_E_LooterJacket_01_F',
	'U_C_Farmer',
	'U_C_Fisherman',
	'U_C_FishermanOveralls',
	'U_C_IDAP_Man_cargo_F',
	'U_C_IDAP_Man_casual_F',
	'U_C_IDAP_Man_Jeans_F',
	'U_C_IDAP_Man_shorts_F',
	'U_C_IDAP_Man_Tee_F',
	'U_C_IDAP_Man_TeeShorts_F',
	'U_C_Man_casual_1_F',
	'U_C_Man_casual_1_sick_F',
	'U_C_Man_casual_2_F',
	'U_C_Man_casual_2_sick_F',
	'U_C_Man_casual_3_F',
	'U_C_Man_casual_3_sick_F',
	'U_C_Man_casual_4_F',
	'U_C_Man_casual_4_sick_F',
	'U_C_Man_casual_5_F',
	'U_C_Man_casual_5_sick_F',
	'U_C_Man_casual_6_F',
	'U_C_Man_casual_6_sick_F',
	'U_C_man_sport_1_F',
	'U_C_man_sport_2_F',
	'U_C_man_sport_2_sick_F',
	'U_C_man_sport_3_F',
	'U_C_Mechanic_01_F',
	'U_C_Novak',
	'U_C_Paramedic_01_F',
	'U_C_Poloshirt_blue',
	'U_C_Poloshirt_blue_sick',
	'U_C_Poloshirt_burgundy',
	'U_C_Poloshirt_burgundy_sick',
	'U_C_Poloshirt_redwhite',
	'U_C_Poloshirt_redwhite_sick',
	'U_C_Poloshirt_salmon',
	'U_C_Poloshirt_stripped',
	'U_C_Poloshirt_stripped_sick',
	'U_C_Poloshirt_tricolour',
	'U_C_Poor_1',
	'U_C_Poor_2',
	'U_C_Poor_2_sick',
	'U_C_Poor_shorts_1',
	'U_C_Poor_shorts_2',
	'U_C_PriestBody',
	'U_C_Protagonist_VR',
	'U_C_Scavenger_1',
	'U_C_Scavenger_2',
	'U_C_Scientist',
	'U_C_ShirtSurfer_shorts',
	'U_C_Soldier_VR',
	'U_C_TeeSurfer_shorts_1',
	'U_C_TeeSurfer_shorts_2',
	'U_C_Uniform_Farmer_01_F',
	'U_C_Uniform_Scientist_01_F',
	'U_C_Uniform_Scientist_01_formal_F',
	'U_C_Uniform_Scientist_02_F',
	'U_C_Uniform_Scientist_02_formal_F',
	'U_C_WorkerOveralls',
	'U_Competitor',
	'U_I_C_Soldier_Bandit_1_F',
	'U_I_C_Soldier_Bandit_2_F',
	'U_I_C_Soldier_Bandit_3_F',
	'U_I_C_Soldier_Bandit_4_F',
	'U_I_C_Soldier_Bandit_5_F',
	'U_I_L_Uniform_01_tshirt_sport_F',
	'U_I_Protagonist_VR',
	'U_I_Soldier_VR',
	'U_Marshal',
	'U_NikosAgedBody',
	'U_NikosBody',
	'U_O_GEN_Commander_F',
	'U_O_GEN_Soldier_F',
	'U_O_Protagonist_VR',
	'U_O_Soldier_VR',
	'U_OI_Scientist',
	'U_OrestesBody',
	'U_Rangemaster',
	'U_VirtualMan_F',
	
	'rhs_uniform_df15',
	
	'rds_uniform_citizen4',
	'rds_uniform_Worker1',
	'rds_uniform_Worker2',
	'rds_uniform_Worker3',
	'rds_uniform_Worker4',
	'rds_uniform_Profiteer1',
	'rds_uniform_Profiteer2',
	'rds_uniform_Profiteer3',
	'rds_uniform_Profiteer4',
	'rds_uniform_Villager1',
	'rds_uniform_Villager2',
	'rds_uniform_Villager3',
	'rds_uniform_Villager4',
	'rds_uniform_Functionary1',
	'rds_uniform_Functionary2',
	'rds_uniform_Policeman',
	'rds_uniform_priest',
	'rds_uniform_doctor',
	'rds_uniform_schoolteacher',
	'rds_uniform_assistant'
	];
	
	_csys_unicamo = [
	'U_B_CBRN_Suit_01_MTP_F',
	'U_B_CombatUniform_mcam',
	'U_B_CombatUniform_mcam_tshirt',
	'U_B_CombatUniform_mcam_vest',
	'U_B_CombatUniform_mcam_worn',
	'U_B_CombatUniform_sgg',
	'U_B_CombatUniform_sgg_tshirt',
	'U_B_CombatUniform_sgg_vest',
	'U_B_CTRG_Soldier_urb_1_F',
	'U_B_CTRG_Soldier_urb_2_F',
	'U_B_CTRG_Soldier_urb_3_F',
	'U_B_HeliPilotCoveralls',
	'U_B_PilotCoveralls',
	'U_B_SpecopsUniform_sgg',
	'U_B_survival_uniform',
	'U_B_Wetsuit',
	'U_BG_Guerilla1_1',
	'U_BG_Guerilla2_2',
	'U_BG_Guerilla3_1',
	'U_BG_Guerilla3_2',
	'U_BG_Guerrilla_6_1',
	'U_BG_leader',
	'U_C_CBRN_Suit_01_Blue_F',
	'U_C_WorkerCoveralls',
	'U_I_G_resistanceLeader_F',
	'U_I_G_Story_Protagonist_F',
	'U_I_L_Uniform_01_camo_F',
	'U_I_L_Uniform_01_deserter_F',
	'U_I_L_Uniform_01_tshirt_black_F',
	'U_I_L_Uniform_01_tshirt_skull_F',
	'U_IG_Guerilla1_1',
	'U_IG_Guerilla2_2',
	'U_IG_Guerilla3_1',
	'U_IG_Guerilla3_2',
	'U_IG_Guerrilla_6_1',
	'U_IG_leader',
	'U_IG_Menelaos',
	'U_KerryBody',
	'U_MillerBody',
	'U_O_CombatUniform_ocamo',
	'U_O_CombatUniform_oucamo',
	'U_O_officer_noInsignia_hex_F',
	'U_O_OfficerUniform_ocamo',
	'U_O_PilotCoveralls',
	'U_O_R_Gorka_01_black_F',
	'U_O_R_Gorka_01_brown_F',
	'U_O_SpecopsUniform_blk',
	'U_O_SpecopsUniform_ocamo',
	'U_O_V_Soldier_Viper_hex_F',
	'U_O_Wetsuit',
	'U_OG_Guerilla1_1',
	'U_OG_Guerilla2_2',
	'U_OG_Guerilla3_1',
	'U_OG_Guerilla3_2',
	'U_OG_Guerrilla_6_1',
	'U_OG_leader',
	
	'rhs_uniform_g3_mc',
	'rhs_uniform_cu_ucp',
	'rhs_uniform_cu_ucp_1stcav',
	'rhs_uniform_cu_ucp_82nd',
	'rhs_uniform_cu_ucp_101st',
	'rhs_uniform_cu_ucp_10th',
	'rhs_uniform_cu_ucp_patchless',
	'rhs_uniform_acu_ucp',
	'rhs_uniform_acu_oefcp',
	'rhs_uniform_acu_ocp',
	'rhs_uniform_abu',
	
	'rhs_uniform_vdv_mflora',
	'rhs_uniform_mflora_patchless',
	'rhs_uniform_gorka_r_y',
	
	'rednr_uniform_skwo',
	'rednr_uniform_skwo_rolled',
	'rednr_uniform_gorka',
	'rednr_uniform_gorka_rolled',
	'reukr_uniform_mcam',
	'reukr_uniform_mcam_rolled'
	];
	
	_csys_descamo = [
	'U_I_pilotCoveralls',
	'U_I_HeliPilotCoveralls',
	
	'U_BG_Guerilla2_1',
	'U_IG_Guerilla2_1',
	'U_OG_Guerilla2_1',
	'U_C_HunterBody_grn',
	'U_C_Journalist',
	
	'rhs_uniform_g3_tan',
	'rhs_uniform_cu_ocp',
	'rhs_uniform_cu_ocp_1stcav',
	'rhs_uniform_cu_ocp_82nd',
	'rhs_uniform_cu_ocp_101st',
	'rhs_uniform_cu_ocp_10th',
	'rhs_uniform_cu_ocp_patchless',
	'rhs_uniform_FROG01_d',
	'rhs_uniform_acu_ucpd',
	
	'rhs_uniform_df15_tan',
	'rhs_uniform_vdv_emr_des',
	'rhs_uniform_emr_des_patchless',
	'rhs_uniform_m88_patchless',
	'rhs_uniform_gorka_1_a',
	
	'reukr_uniform_mm14',
	'reukr_uniform_mm14_rolled'
	];
	
	_csys_wdcamo = [
	'U_B_CBRN_Suit_01_Tropic_F',
	'U_B_CBRN_Suit_01_Wdl_F',
	'U_B_CombatUniform_mcam_wdl_f',
	'U_B_CombatUniform_tshirt_mcam_wdL_f',
	'U_B_CombatUniform_vest_mcam_wdl_f',
	'U_B_CombatUniform_wdl',
	'U_B_CombatUniform_wdl_tshirt',
	'U_B_CombatUniform_wdl_vest',
	'U_B_CTRG_1',
	'U_B_CTRG_2',
	'U_B_CTRG_3',
	'U_B_CTRG_Soldier_2_F',
	'U_B_CTRG_Soldier_3_F',
	'U_B_CTRG_Soldier_F',
	'U_B_G_Captain_Ivan_F',
	'U_B_T_Soldier_AR_F',
	'U_B_T_Soldier_F',
	'U_B_T_Soldier_SL_F',
	'U_BG_Guerilla1_2_F',
	'U_BG_Guerilla2_3',
	'U_C_HunterBody_brn',
	'U_I_C_Soldier_Camo_F',
	'U_I_C_Soldier_Para_1_F',
	'U_I_C_Soldier_Para_2_F',
	'U_I_C_Soldier_Para_3_F',
	'U_I_C_Soldier_Para_4_F',
	'U_I_C_Soldier_Para_5_F',
	'U_I_CBRN_Suit_01_AAF_F',
	'U_I_CombatUniform',
	'U_I_CombatUniform_shortsleeve',
	'U_I_CombatUniform_tshirt',
	'U_I_E_CBRN_Suit_01_EAF_F',
	'U_I_E_Uniform_01_coveralls_F',
	'U_I_E_Uniform_01_F',
	'U_I_E_Uniform_01_officer_F',
	'U_I_E_Uniform_01_shortsleeve_F',
	'U_I_E_Uniform_01_sweater_F',
	'U_I_E_Uniform_01_tanktop_F',
	'U_I_L_Uniform_01_tshirt_olive_F',
	'U_I_OfficerUniform',
	'U_I_Wetsuit',
	'U_IG_Guerilla2_3',
	'U_O_R_Gorka_01_camo_F',
	'U_O_R_Gorka_01_F',
	'U_O_T_Officer_F',
	'U_O_T_Soldier_F',
	'U_O_V_Soldier_Viper_F',
	'U_OG_Guerilla2_3',
	'U_Tank_green_F',
	
	'rhs_uniform_g3_m81',
	'rhs_uniform_g3_aor2',
	'rhs_uniform_g3_rgr',
	'rhs_uniform_g3_blk',
	'rhs_uniform_FROG01_wd',
	'rhs_uniform_FROG01_m81',
	'rhs_uniform_bdu_erdl',
	
	'rhs_uniform_flora',
	'rhs_uniform_msv_emr',
	'rhs_uniform_mvd_izlom',
	'rhs_uniform_vdv_emr',
	'rhs_uniform_vdv_flora',
	'rhs_uniform_vmf_flora',
	'rhs_uniform_vmf_flora_subdued',
	'rhs_uniform_rva_flora',
	'rhs_uniform_flora_patchless',
	'rhs_uniform_flora_patchless_alt',
	'rhs_uniform_emr_patchless',
	'rhs_uniform_gorka_r_g',
	'rhs_uniform_gorka_1_b',
	
	'rhs_chdkz_uniform_1',
	'rhs_chdkz_uniform_2',
	'rhs_chdkz_uniform_3',
	'rhs_chdkz_uniform_4',
	'rhs_chdkz_uniform_5',
	'rhs_insurgent_uniform_1',
	'rhs_insurgent_uniform_2',
	'rhs_insurgent_uniform_3',
	'rhs_insurgent_uniform_4',
	'rhs_insurgent_uniform_5',
	
	'rds_uniform_Woodlander1',
	'rds_uniform_Woodlander2',
	'rds_uniform_Woodlander3',
	'rds_uniform_Woodlander4',
	
	'rednr_uniform_uadigi',
	'rednr_uniform_uadigi_rolled',
	'reukr_uniform_wd81',
	'reukr_uniform_wd81_rolled',
	'retka_uniform_syrian',
	'retka_uniform_syrian_rolled'
	];
	
	_csys_gsuitd = [
	'U_B_GhillieSuit',
	'U_O_GhillieSuit'
	];
	
	_csys_gsuitw = [
	'U_B_T_Sniper_F',
	'U_I_GhillieSuit',
	'U_O_T_Sniper_F'
	];
	
	_csys_fullghillie = [
	'U_B_FullGhillie_ard',
	'U_B_FullGhillie_lsh',
	'U_B_FullGhillie_sard',
	'U_B_T_FullGhillie_tna_F',
	'U_I_FullGhillie_ard',
	'U_I_FullGhillie_lsh',
	'U_I_FullGhillie_sard',
	'U_O_FullGhillie_ard',
	'U_O_FullGhillie_lsh',
	'U_O_FullGhillie_sard',
	'U_O_T_FullGhillie_tna_F'
	];

	if ( _csys_map in _csys_wworlds) then {

		while {true} do {
		{
			_csys_uuniform = uniform _x;
			_csys_usurf = surfaceType position _x;
			_csys_ustance = stance _x;
			_csys_stancei = 0.4;
			if ( _csys_ustance == 'STAND') then {  _csys_stancei = 0.4};
			if ( _csys_ustance == 'CROUCH') then {  _csys_stancei = 0.1};
			if ( _csys_ustance == 'PRONE') then {  _csys_stancei = 0.01};
			
			if !( _csys_usurf in _csys_sandwsurf) then {
				
				if ( _csys_uuniform in _csys_wdcamo) then {
					
					_x setUnitTrait ['camouflageCoef',0.8];
				};
				
				if ( _csys_uuniform in _csys_unicamo) then {
				
					_x setUnitTrait ['camouflageCoef',1.6];
				};
				
				if ( _csys_uuniform in _csys_descamo) then {
					
					_x setUnitTrait ['camouflageCoef',2.0];
				};
				
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',1.0];
				};
				
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',0.6];
				};
				
				if ( _csys_uuniform in _csys_fullghillie) then {
					
					_x setUnitTrait ['camouflageCoef',(1 + (speed _x)) * _csys_stancei];
				};
			};
			
			if ( _csys_usurf in _csys_sandwsurf) then {
				
				if ( _csys_uuniform in _csys_wdcamo) then {
				
					_x setUnitTrait ['camouflageCoef',1.8];
				};
			
				if ( _csys_uuniform in _csys_unicamo) then {
			
					_x setUnitTrait ['camouflageCoef',1.4];
				};
				
				if ( _csys_uuniform in _csys_descamo) then {
				
					_x setUnitTrait ['camouflageCoef',1.2];
				};
				
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',0.8];
				};
				
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',1.0];
				};
				
				if ( _csys_uuniform in _csys_fullghillie) then {
					
					_x setUnitTrait ['camouflageCoef',0.6];
				};
			};
		}
		forEach allUnits;
		sleep 0.2;
		};
	};
	
	if ( _csys_map in _csys_dworlds) then {
	
		while {true} do {
		{
			_csys_uuniform = uniform _x;
			_csys_usurf = surfaceType position _x;
			_csys_ustance = stance _x;
			_csys_stancei = 0.4;
			if ( _csys_ustance == 'STAND') then {  _csys_stancei = 0.4};
			if ( _csys_ustance == 'CROUCH') then {  _csys_stancei = 0.1};
			if ( _csys_ustance == 'PRONE') then {  _csys_stancei = 0.01};
			
			if !( _csys_usurf in _csys_oasissurf) then {
				
				if ( _csys_uuniform in _csys_descamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.2];
				};
				
				if ( _csys_uuniform in _csys_unicamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.6];
				};
	
				if ( _csys_uuniform in _csys_wdcamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.8];
				};
	
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',0.6];
				};
				
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',0.8];
				};
	
				if ( _csys_uuniform in _csys_fullghillie) then {
					
					_x setUnitTrait ['camouflageCoef',0.6];
				};
			};
			
			if ( _csys_usurf in _csys_oasissurf) then {
			
				if ( _csys_uuniform in _csys_descamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.6];
				};
				
				if ( _csys_uuniform in _csys_unicamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.4];
				};
	
				if ( _csys_uuniform in _csys_wdcamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.2];
				};
	
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',0.7];
				};
				
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',0.6];
				};
	
				if ( _csys_uuniform in _csys_fullghillie) then {
					
					_x setUnitTrait ['camouflageCoef',(1 + (speed _x)) * _csys_stancei];
				};
			};
		}
		forEach allUnits;
		sleep 0.2;
		};
	};
	
	if ( _csys_map in _csys_aworlds) then {
	
		while {true} do {
		{
			_csys_uuniform = uniform _x;
			_csys_usurf = surfaceType position _x;
			_csys_ustance = stance _x;
			_csys_stancei = 0.4;
			if ( _csys_ustance == 'STAND') then {  _csys_stancei = 0.4};
			if ( _csys_ustance == 'CROUCH') then {  _csys_stancei = 0.1};
			if ( _csys_ustance == 'PRONE') then {  _csys_stancei = 0.01};
			
			if !( _csys_usurf in _csys_sandasurf) then {
			
				if ( _csys_uuniform in _csys_unicamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.2];
				};
	
				if ( _csys_uuniform in _csys_wdcamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.6];
				};

				if ( _csys_uuniform in _csys_descamo) then {
	
					_x setUnitTrait ['camouflageCoef',1.6];
				};
	
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',0.6];
				};
			
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',0.8];
				};
	
				if ( _csys_uuniform in _csys_fullghillie) then {
			
					_x setUnitTrait ['camouflageCoef',(1 + (speed _x)) * _csys_stancei];
				};
			};
			
			if ( _csys_usurf in _csys_sandasurf) then {
			
				if ( _csys_uuniform in _csys_unicamo) then {
			
					_x setUnitTrait ['camouflageCoef',1.6];
				};
				
				if ( _csys_uuniform in _csys_wdcamo) then {
				
					_x setUnitTrait ['camouflageCoef',1.8];
				};
				
				if ( _csys_uuniform in _csys_descamo) then {
				
					_x setUnitTrait ['camouflageCoef',1.2];
				};
				
				if ( _csys_uuniform in _csys_gsuitd) then {
		
					_x setUnitTrait ['camouflageCoef',0.7];
				};
				
				if ( _csys_uuniform in _csys_gsuitw) then {
		
					_x setUnitTrait ['camouflageCoef',1.0];
				};
				
				if ( _csys_uuniform in _csys_fullghillie) then {
					
					_x setUnitTrait ['camouflageCoef',0.6];
				};
				
				if ( _csys_uuniform in _csys_ccloths) then {
		
					_x setUnitTrait ['camouflageCoef',2.5];
				};
			};
		}
		forEach allUnits;
		sleep 0.5;
		};
	};
};