//tanker = createVehicle ["VTX_KV44", [0,0,500], [], 0, "FLY"];
tanker = createVehicle ["CUP_B_C130J_USMC", [0,0,500], [], 0, "FLY"];
createVehicleCrew tanker;
tanker forceSpeed 50;
tanker flyInHeight 500;
group tanker addWaypoint [[0, worldSize, 500],0];
_wp = group tanker addWaypoint [[0, 0, 500],0];
_wp setWaypointType "CYCLE";
publicVariable "tanker";
vehicle master attachTo [tanker , [-10, -60,-10]];

[vehicle player, tanker] call BIS_fnc_attachToRelative
observer moveInCargo [tanker, 54];
vehicle player addAction ["Detach", {detach vehicle player}, nil, 2, false, true, "", "isNull attachedTo vehicle player"];
vehicle player addAction ["Attach", {
vehicle player attachTo [tanker , [-10, -45,-10]];}, nil, 2, false, true, "", "isNull attachedTo vehicle player"];

// CUP C-130
tanker = createVehicle ["CUP_B_C130J_USMC", [0,0,500], [], 0, "FLY"];
createVehicleCrew tanker;
tanker forceSpeed 50;
tanker flyInHeight 500;
group tanker addWaypoint [[0, worldSize, 500],0];
_wp = group tanker addWaypoint [[0, 0, 500],0];
_wp setWaypointType "CYCLE";
publicVariable "tanker";
tanker setVariable ["acex_headless_blacklist", true, true];
[tanker,[[7.65,-4.9,-2.90],[-7.65,-4.9,-2.90]]] call vtx_uh60_aar_fnc_initTanker;
["ramp_bottom","ramp_top"] apply {tanker animateSource [_x, 1]};
["Door_1_source"] apply {tanker animateSource [_x, 1]};
// easy catchup
vehicle player attachTo [tanker , [-10, -45,-10]];



// watch speedDiff and ropeLength
onEachFrame {
	[ 
	   vehicle player, 
	   vtx_uh60_aar_basket getVariable "vtx_aar_tanker", 
	   vtx_uh60_aar_basket,  
	   vtx_uh60_aar_basket getVariable "vtx_aar_rope" 
	  ] params ["_vehicle", "_tanker", "_basket", "_rope"]; 
	private _probePosModel = (_vehicle getVariable ["vtx_aar_probePos",[0,0,0]]); 
	private _ropePosModel = (_basket getVariable ["vtx_aar_ropeOrigin",[0,0,0]]); 
	private _probePos = _vehicle modelToWorldVisualWorld _probePosModel; 
	private _speedDiff = (vectorMagnitude velocity _vehicle) - (vectorMagnitude velocity _tanker); 
	private _ropeLength = ropeLength _rope;
	private _ropeNeeded = (_tanker modelToWorldVisualWorld _ropePosModel) distance _probePos; 
	
	private _connected = false;
	private _probePosModel = (_vehicle getVariable ["vtx_aar_probePos",[0,0,0]]);
	private _ropePosModel = (_basket getVariable ["vtx_aar_ropeOrigin",[0,0,0]]);
	private _probePos = _vehicle modelToWorldVisualWorld _probePosModel;
	private _ropeEndPos = AGLtoASL ((ropeEndPosition _rope) # 1);
	private _diff = (getPosASLVisual _tanker) vectordiff (getPosASL _tanker);
	private _ropeEndPosPhysx = _ropeEndPos vectorAdd _diff;
	private _vectDiff = acos ((vectorDir _vehicle) vectorDotProduct (vectorDir _tanker));
	private _speedDiff = (vectorMagnitude velocity _vehicle) - (vectorMagnitude velocity _tanker);
	private _distance = _ropeEndPosPhysx distance _probePos;
	private _vectDiffToProbe = acos ((vectorDir _tanker) vectorDotProduct (_probePos vectorFromTo _ropeEndPosPhysx));

	private _modelSpaceDiff = _probePosModel vectordiff (_vehicle worldToModelVisual _ropeEndPosPhysx);
	private _forwardDist = -(_modelSpaceDiff # 1);


	if (_vectDiffToProbe < 45 && _speedDiff > 0 && _distance < vtx_uh60_aar_basketSize) then { vtx_uh60_aar_enteredBasket = true; };
	if (_distance > vtx_uh60_aar_basketSize) then { vtx_uh60_aar_enteredBasket = false; };
	
	hintSilent str [_speedDiff,_ropeLength, _ropeNeeded, _forwardDist, vtx_uh60_aar_enteredBasket];
};


// safe detach, ropes fly back for some reason
vehicle player attachTo [tanker , [-10, -60,-10]];
detach vehicle player;

// manual connect
[
	vehicle player,
	vtx_uh60_aar_basket getVariable "vtx_aar_tanker",
	vtx_uh60_aar_basket, 
	vtx_uh60_aar_basket getVariable "vtx_aar_rope"
] call vtx_uh60_aar_fnc_attachToHelo;

// manually set rope length
(tanker getVariable "vtx_aar_baskets") apply {
	_rope = _x getVariable "vtx_aar_rope";
	ropeUnwind [_rope, 10, 15];
};

// watch all relevant variables
onEachFrame {
	hintSilent str (
		([
			vehicle player,
			vtx_uh60_aar_basket getVariable "vtx_aar_tanker",
			vtx_uh60_aar_basket, 
			vtx_uh60_aar_basket getVariable "vtx_aar_rope"
		] apply {typeOf _x}) joinString (toString [13,10])
	)
};

// auto start legit
[vehicle player] spawn {
	params ["_heli"]; 
	[_heli, ["startup", "b_gen1"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_gen2"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_batt1"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_batt2"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "fuelPump"], "APU BOOST"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "apucont"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_apugen"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_stbyinst"], "ARM"] call vxf_interaction_fnc_scriptedInteract; 

	[_heli, ["startup", "b_ignition"], "ON"] call vxf_interaction_fnc_scriptedInteract; 
	sleep 1; 
	[_heli, ["startup", "b_airsce"], "APU"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_fuelsys1"], "DIR"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_fuelsys2"], "DIR"] call vxf_interaction_fnc_scriptedInteract; 
	sleep 1; 
	[_heli, ["startup", "b_starter1"]] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "powerContRTD", "b_engpowercont1"], "FLY"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_starter2"]] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "powerContRTD", "b_engpowercont2"], "FLY"] call vxf_interaction_fnc_scriptedInteract; 

	sleep 1; 
	[_heli, ["startup", "apucont"], "OFF"] call vxf_interaction_fnc_scriptedInteract;
	[_heli, ["startup", "fuelPump"], "OFF"] call vxf_interaction_fnc_scriptedInteract; 
	[_heli, ["startup", "b_airsce"], "OFF"] call vxf_interaction_fnc_scriptedInteract; 
};

// pilot on server
_group = createGroup [west, true];
p = _group createUnit ["B_Helipilot_F", position master, [], 0, "NONE"];
p moveInDriver vehicle master;

// hoist
_heli = h;
_heli animateSource ["hoist_hook_hide", 1];
_hoistPos = [1.405, 2.03, 0.45];
_dummy = "ace_fastroping_helper" createVehicle [0, 0, 0]; //local to pilot for reliability
_dummy attachTo [_heli, [1.405, 2.031, 0.49]];
_dummy allowDamage false;
_hook = "vtx_hook" createVehicle [0, 0, 0];
_hookSP = _hook selectionPosition "sling_point";
_hook attachTo [_dummy, _hookSP vectorMultiply -1];
detach _dummy;
_rope = ropeCreate [_heli, _hoistPos, _dummy, [0,0,0], 0.5];
_heli setVariable ["vtx_uh60_hoist_vars", [_rope, _dummy, _hook], true];
_hook setVariable ["vtx_uh60_hoist_heli", _heli, true];
ropeUnwind [_rope, 3, getPos _hook # 2];

heli = _heli;
hoistPos = [1.405, 2.03, 0.45];
rope = _rope;
dummy = _dummy;
hook = _hook;

_hoistPos = [1.405, 2.03, 0.45];
ropeUnwind [rope, 1.5, 0.5];
[heli, hoistPos, dummy, rope] params ["_heli", "_hoistPos", "_dummy", "_rope"];
[{
	params ["_heli", "_hoistPos", "_dummy", "_rope"];
	private _dummyPos = getPos _dummy;
	private _vectorDir = (_dummyPos vectorFromTo _hoistPos) vectorAdd ([_hoistPos # 0, _hoistPos # 1, _dummyPos # 2]);
	if !((_dummyPos distance _hoistPos) < (ropeLength _rope)) then {
		_dummy setVelocity _vectorDir;
	};
	((_dummyPos distance _hoistPos) < 1.2) || {(ropeLength _rope < 0.5) || (ropeUnwound _rope)}
}, {
	//params ["_heli", "_hoistPos", "_dummy", "_rope"];
	//_dummy attachTo [_heli, _hoistPos vectorAdd [0,0,-1]];
}, [_heli, _hoistPos, _dummy, _rope]] call CBA_fnc_waitUntilAndExecute;


// get
hook attachedTo //dummy
ropeAttachedTo attachedTo hook //hoist
attachedTo ropeAttachedTo attachedTo hook //heli

ropeAttachedObjects (attachedObjects heli select {typeOf _x isEqualTo "vtx_hook_helper"} select 0) //dummy
attachedObjects (ropeAttachedObjects (attachedObjects heli select {typeOf _x isEqualTo "vtx_hook_helper"} select 0) select 0) select 0 //hook

[heli, hoistPos, dummy, rope] params ["_heli", "_hoistPos", "_dummy", "_rope"];
_heli animateSource ["hoist_dummy_hide", 0];
deleteVehicle _hook;
deleteVehicle _dummy;
ropeDestroy  _rope;


// live test

heli = vehicle player;
private _hoist_vars = _heli getVariable ["vtx_uh60_hoist_vars", []];
_hoist_vars params ["_rope", "_dummy", "_hook"];
hoistPos = [1.405, 2.03, 0.45];
rope = _rope;
dummy = _dummy;
hook = _hook;


h = createVehicle ["vtx_uh60m", (getPos player) vectorAdd [0,0,20], [], 0, "FLY"];
createVehicleCrew h;
publicVariable "h";
h flyInHeight 20;

(group h) setGroupOwner 2;
h disableAI "PATH";

 
[h] params ["_heli"]; 
_hoist_vars = _heli getVariable ["vtx_uh60_hoist_vars", []]; 
_hoist_vars params ["_rope", "_dummy", "_hook"];
removeAllActions _hook;
_hook addAction ["Hook On Person", {
    params ["_target", "_caller", "_actionId", "_arguments"];
    private _dragged = _caller getVariable "ace_dragging_draggedObject";
    [_caller, _dragged] call ace_dragging_fnc_dropObject;
    _dragged moveInCargo _target;
}, nil, 1, true, true, "", "private _dragged = _this getVariable 'ace_dragging_draggedObject'; crew _target isEqualTo [] && {!isNil '_dragged' && _dragged isKindOf 'Man'}", 10, false, "", "sling_point"];


[h] call vtx_uh60_hoist_fnc_deployHook
[player] call vtx_uh60_hoist_fnc_moveHeliToHook
[h] call vtx_uh60_hoist_fnc_lowerHookToGround
[h] call vtx_uh60_hoist_fnc_raiseHookToHeli
[h] call vtx_uh60_hoist_fnc_pullIntoHeli
[player] call vtx_uh60_hoist_fnc_moveHookToHeli
[h] call vtx_uh60_hoist_fnc_secureHook


[h] params ["_heli"];
_hoist_vars = _heli getVariable ["vtx_uh60_hoist_vars", []];
_hoist_vars params ["_rope", "_dummy", "_hook"];


ropeUnwind [_rope, 1.5, -1];


/////////////////////////////////////////////////////////////////////////////////////
//testing =D
if hasInterface then {
    vtx_uh60_doorguns_fnc_prepareAIGunners = {
      private _heli = vehicle player;
      {
        private _u = _heli turretUnit _x;
        if (isNull _u) then {
          _u = group player createUnit ["vtx_uh60_doorgunner", [0,0,0], [], 0, "NONE"];
          _u moveInTurret [_heli, _x];
        };
        _u setSkill 1;
        if !("vtx_wpn_m134" in (_heli weaponsTurret _x)) then {
          _heli addWeaponTurret ["vtx_wpn_m134", _x];
        };
      } forEach [[1], [2]];
    };
    [] call vtx_uh60_doorguns_fnc_prepareAIGunners;
    
    vtx_uh60_doorguns_fnc_forceAIGunnerFire = {
      private _heli = vehicle player;
      private _laserTargets = (entities "laserTarget") select {local _x};
      if (_laserTargets isEqualTo []) exitWith {};
      private _targetPos = getPosASL (_laserTargets # 0);
      {
        ([_heli, _x] call ace_common_fnc_getTurretDirection) params ["_gunPos", "_gunDir"];
        private _los = _gunPos vectorFromTo _targetPos;
        //_gunDir = [_gunDir # 0, _gunDir # 1, 0];
        //_los = [_los # 0, _los # 1, 0];
        private _aim = _gunDir vectorDotProduct _los;
        //systemChat str [_x,_gunDir,_los,_aim];
        systemChat str [_x,_aim];
        if (_aim > 0.997) then {
          (_heli turretUnit _x) forceWeaponFire ["vtx_wpn_m134", "far"];
        };
      } forEach [[1], [2]];
    };

    [
      "UH-60M Blackhawk","vtx_uh60_doorguns_forceAIGunnerFire","AI Gunner Fire",
      {call vtx_uh60_doorguns_fnc_forceAIGunnerFire}, {},
      [240,[false,true,false]]
    ] call CBA_fnc_addKeybind;
};
/////////////////////////////////////////////////////////////////////////////////////

diag_mergeConfigFile ["E:\Documents\GitHub\hatchet\vtx_MH60M\config\cfgVehicles.hpp"];
deleteVehicle h;
h = "vtx_mh60m" createVehicle getPos player;
player moveInDriver h;


// animationNames
["switch_lights_collision","switch_lights_position","switch_lights_cockpit","switch_minigun_safe_r","pylonleft","pylonright","pylonleftforward","pylonrightforward","fuelprobe","hh60flares","skis","landinglight_show","positionlights_show","cockpitlight_show","fuelprobe_extend","lasspylons","lasscovers","essspylons","essscovers","radar_hide","flir_hide","flir_back","flir_direction","flir_elevation","gau21_l_hide","gau21l_dir","gau21l_gunner","gau21l_gunner_legs","gau21l_elev","gau21_r_hide","gau21r_dir","gau21r_gunner","gau21r_gunner_legs","gau21r_elev","minigunl_dir","minigunl_elev","minigunl_barrel","minigunl__flash","minigunl_gunner","minigunl_gunner_legs","minigunr_dir","minigunr_elev","minigunr_barrel","minigunr__flash","minigunr_gunner","minigunr_gunner_legs","cabindoor_l","cabindoor_r","cabinseats_hide","hoist_hook_hide","cockpitdoors_hide","stabilator_rotate_user","stabilator_rotate","comm1_rot","comm2_rot","comm3_rot","comm4_rot","comm1r_rot","comm2r_rot","comm3r_rot","comm4r_rot","mvol_rot","mvolr_rot","tx_rot","txr_rot","fd_1_rot","fd_2_rot","fd_3_rot","fd_4_rot","fd_5_rot","fdr_1_rot","fdr_2_rot","fdr_3_rot","fdr_4_rot","fdr_5_rot","rotorbrakegauge","gauge_temp_left","gauge_temp_right","cyclic_right_x","cyclic_right_y","cyclic_left_x","cyclic_left_y","collective_right_anim","collective_left_anim","collective_right_anim_rtd","collective_left_anim_rtd","leftpedalpilot_rtd","rightpedalpilot_rtd","leftpedalcopilot_rtd","rightpedalcopilot_rtd","knob_lightupperconsole","knob_lightlowerconsole","knob_lightinstpanel","lever_engpower1z_off","lever_engpower1z_idle1","lever_engpower1z_idle2","lever_engpower1z_fly","lever_engpower2z_off","lever_engpower2z_idle1","lever_engpower2z_idle2","lever_engpower2z_fly","lever_fuelsys1","lever_fuelsys2","lever_engpower1","lever_engpower2","lever_rotorbrake","mfd1_hide","mfd2_hide","mfd3_hide","mfd4_hide","esis_hide","poweronoff","generatorsonoff","acclow","apufail","apuon","battgood","battlow","emerrlse","oilhot","testlte","cautioneng1out","cautioneng2out","cautionfire","cautionmastercaution","cautionlowrpm","switch_minigun_safe_cover_l","switch_minigun_safe_l","switch_minigun_safe_cover_r","switch_fuelboostpump1","switch_fuelboostpump2","switch_batt1","switch_batt2","switch_stbyinst","switch_airsce","switch_ignition","switch_fuelpump","switch_apucont","switch_apugen","switch_gen1","switch_gen2","handle_wheelbrake","headingball","bankangle1","bankangle2","bankangle3","bankangle4","damper_left","damper_right","damper_rear","wheel_l","wheel_r","wheel_rear","turbinefan_l","turbinefan_r","wheel_rear_rudder_afm","rotortilt","hrotor","vrotor"]

// selectionNames
["window_1_2","exterrior_hull","glass","exterrior_tail","exterrior_misc","cockpit_misc","gauge_temp_left","window_2_2","window_2_1","window_1_1","gauge_temp_right","headingball","cockpit_cargo","cabin_seats","zasleh","proxy:\ca\temp\proxies\m113\cargo02.001","mountingtexture","proxy:\ca\temp\proxies\m113\cargo02.002","proxy:\ca\temp\proxies\m113\cargo03.003","proxy:\ca\temp\proxies\uh60m\gunner.013","proxy:\ca\temp\proxies\uh60m\gunner.001","proxy:\ca\temp\proxies\uh60m\pilot.001","otochlaven","trup","gatling_1","proxy:\a3\data_f\proxies\muzzle_flash\mf_machinegun_m134minigun.001","m134dtexture","gatling_2","minigun_base_elev_r","minigun_base_dir_r","minigun_base_elev_l","proxy:vtx_uh60\data\cargoseats\cargoseat.012","proxy:\ca\temp\proxies\m113\cargo02.004","proxy:\ca\temp\proxies\m113\cargo03.009","proxy:\ca\temp\proxies\m113\cargo02.010","proxy:\ca\temp\proxies\m113\cargo02.005","proxy:\ca\temp\proxies\m113\cargo02.006","proxy:\ca\temp\proxies\m113\cargo03.007","proxy:\ca\temp\proxies\m113\cargo03.008","proxy:\ca\temp\proxies\uh60m\gunner.002","velka vrtule","mala vrtule","wheel_1_1","wheel_1_2","wheel_2_1","wheel_1_1_damper","wheel_1_2_damper","wheel_2_1_damper","wheel_2_1_steering","collective_left","collective_right","cyclic_left","cyclic_right","pedal_left_cp","pedal_left_p","pedal_right_cp","pedal_right_p","cockpit_seatcontrols","bankball1","bankball2","bankball3","bankball4","cockpit_frontdash","cockpit_frontdash_tube_balls","cockpit_frontdash_tubes","cockpit_screens","cockpit_pedestal","turbinefan_r","turbinefan_l","hoist_hook","cockpit_doors","cabindoor_l","cabindoor_r","stabilator","proxy:vtx_uh60\data\cargoseats\cargoseat.013","rotorblurred","rotorblades","vrotorblurred","vrotorblades","minigun_base_dir_l","zasleh_1","proxy:\a3\data_f\proxies\muzzle_flash\mf_machinegun_m134minigun.002","otochlaven_1","proxy:\a3\data_f\proxies\muzzle_flash\mf_machinegun_m134minigun.003","proxy:\a3\data_f\proxies\muzzle_flash\mf_machinegun_m134minigun.004","proxy:\a3\weapons_f\acc\acco_dcl_120_f.001","proxy:\a3\weapons_f\acc\acco_dcl_120_f.002","proxy:vtx_uh60\esss2x.001","damagehide","esss","gau21_dir_l","gau21_elev_l","gau21_l","proxy:\ca\temp\proxies\uh60m\gunner.003","gau21_gunnerl","gau21_dir_r","gau21_elev_r","gau21_r","proxy:\ca\temp\proxies\uh60m\gunner.004","gau21_gunnerr","gau21_l_base","gau21_r_base","proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.002","pylonleft","flir_dir","flir_elev","proxy:\vtx_uh60\lass.001","lass","pylonright","proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.001","plane","flirpod","zasleh_12","mitas","mitaswindow","proxy:vtx_uh60\data\cargoseats\cargoseat.001","proxy:vtx_uh60\data\cargoseats\cargoseat.002","proxy:vtx_uh60\data\cargoseats\cargoseat.003","proxy:vtx_uh60\data\cargoseats\cargoseat.004","proxy:vtx_uh60\data\cargoseats\cargoseat.005","proxy:vtx_uh60\data\cargoseats\cargoseat.006","proxy:vtx_uh60\data\cargoseats\cargoseat.007","proxy:vtx_uh60\data\cargoseats\cargoseat.008","proxy:vtx_uh60\data\cargoseats\cargoseat.009","proxy:vtx_uh60\data\cargoseats\cargoseat.010","proxy:vtx_uh60\data\cargoseats\cargoseat.011","rotordive","proxy:\vtx_uh60\data\fuelprobe\fuel_probe.001","fuel_probe","markings","right_num_2","right_num_1","left_num_2","left_num_1","essscovers","new selection","proxy:\a3\weapons_f\acc\acco_dcl_120_f.003","cargo1","cargo2","cargo3","cargo4","cargo5","cargo6","cargo7","cargo8","proxy:\vtx_uh60\data\fuelprobe\fuel_probe_extending.001","probe_extend","m134gunner_l","m134gunner_r","proxy:\ca\temp\proxies\m113\cargo03.011","minigun_safe_r","minigun_safe_cover_r","minigun_safe_l","minigun_safe_cover_l","proxy:\ca\temp\proxies\m113\cargo03.012","proxy:\ca\temp\proxies\m113\cargo03.013","proxy:\ca\temp\proxies\m113\cargo03.014","proxy:\ca\temp\proxies\m113\cargo03.015","proxy:\ca\temp\proxies\m113\cargo03.016","proxy:\ca\temp\proxies\m113\cargo03.017","proxy:\ca\temp\proxies\m113\cargo03.018","proxy:\ca\temp\proxies\m113\cargo03.019","proxy:\ca\temp\proxies\m113\cargo03.020","proxy:\ca\temp\proxies\m113\cargo03.021","proxy:\ca\temp\proxies\m113\cargo03.025","proxy:\ca\temp\proxies\m113\cargo03.024","hh60flares","window_r_1","window_r_2","window_l_1","window_l_2","proxy:vtx_uh60_misc\data\skis\vtx_skis.001","skis"]






gsl_fnc_attachCargo = {call compile preprocessFileLineNumbers "gsl_fnc_attachCargo.sqf"};
gsl_fnc_canAttachCargo = {call compile preprocessFileLineNumbers "gsl_fnc_canAttachCargo.sqf"};
gsl_fnc_canRigCargo = {call compile preprocessFileLineNumbers "gsl_fnc_canRigCargo.sqf"};
gsl_fnc_canRigCargoManual = {call compile preprocessFileLineNumbers "gsl_fnc_canRigCargoManual.sqf"};
gsl_fnc_getCargoLiftPoints = {call compile preprocessFileLineNumbers "gsl_fnc_getCargoLiftPoints.sqf"};
gsl_fnc_rigCargo = {call compile preprocessFileLineNumbers "gsl_fnc_rigCargo.sqf"};
gsl_fnc_rigCargoManual = {call compile preprocessFileLineNumbers "gsl_fnc_rigCargoManual.sqf"};

private _displayName = "Attach Cargo";
private _icon = "\a3\ui_f\data\igui\cfg\vehicletoggles\slingloadropeiconon2_ca.paa";
private _statement = gsl_fnc_attachCargo;
private _condition = gsl_fnc_canAttachCargo;
private _position = "slingload0";
_action = ["gsl_attachCargo", _displayName, _icon, _statement, _condition, {}, [], _position, 100] call ace_interact_menu_fnc_createAction;
["Helicopter", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

// chinnok forward cargo hook
_statement = {[_target, _player, [0, 2.7, -3.10134]] call gsl_fnc_attachCargo};
_position = [0, 2.7, -3.10134];
_action = ["gsl_attachCargoForward", _displayName, _icon, _statement, _condition, {}, [], _position, 100] call ace_interact_menu_fnc_createAction;
// chinnok aft cargo hook
_position = [0, -3.7, -3.10134];
_statement = {[_target, _player, [0, -3.7, -3.10134]] call gsl_fnc_attachCargo};
private _actionAft = ["gsl_attachCargoAft", _displayName, _icon, _statement, _condition, {}, [], _position, 100] call ace_interact_menu_fnc_createAction;
if (isClass (configFile >> "CfgVehicles" >> "RHS_CH_47F_base")) then {
    ["RHS_CH_47F_base", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;
    ["RHS_CH_47F_base", 0, [], _actionAft, true] call ace_interact_menu_fnc_addActionToClass;
};
if (isClass (configFile >> "CfgVehicles" >> "CUP_CH47F_base")) then {
    ["CUP_CH47F_base", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;
    ["CUP_CH47F_base", 0, [], _actionAft, true] call ace_interact_menu_fnc_addActionToClass;
};

_displayName = "Rig For Sling Load";
_condition = gsl_fnc_canRigCargo;
_statement = gsl_fnc_rigCargo;
_action = ["gsl_rigCargo", _displayName, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_displayName = "Manual Rig";
_icon = "\a3\ui_f\data\igui\rscingameui\rscunitinfoairrtdfull\ico_insp_hand_ca.paa";
_statement = gsl_fnc_rigCargoManual;
_condition = gsl_fnc_canRigCargoManual;
_action = ["gsl_rigCargoManual", _displayName, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
["All", 0, ["ACE_MainActions","gsl_rigCargo"], _action, true] call ace_interact_menu_fnc_addActionToClass;



