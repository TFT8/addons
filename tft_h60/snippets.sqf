tanker = (curatorSelected # 0 # 0);
tanker forceSpeed 50;
tanker flyInHeight 500;
[vehicle player, tanker] call BIS_fnc_attachToRelative
observer moveInCargo [tanker, 54];

// CUP C-130
[tanker,[[7.65,-4.9,-2.90],[-7.65,-4.9,-2.90]]] call vtx_uh60_aar_fnc_initTanker;
["ramp_bottom","ramp_top"] apply {tanker animateSource [_x, 1]};
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
