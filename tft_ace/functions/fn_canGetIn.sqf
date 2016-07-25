params ["_target", "_player"];

(!isNull _target) && {alive _target} && {locked _target < 2} && {(_target emptyPositions "Driver" + _target emptyPositions "Gunner" + _target emptyPositions "Commander" + _target emptyPositions "Cargo") > 0}
