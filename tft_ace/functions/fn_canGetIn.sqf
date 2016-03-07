params ["_target", "_player"];

_vehicleConfig = configFile >> "CfgVehicles" >> (typeOf _target);
_proxyOrder = getArray (_vehicleConfig >> "getInProxyOrder");
_transportSoldier = getNumber (_vehicleConfig >> "transportSoldier");
_seats = if (isArray (_vehicleConfig >> "getInProxyOrder")) then {count _proxyOrder} else {_transportSoldier};

(_seats > count fullCrew _target) && {locked _target < 2} && {alive _target}
