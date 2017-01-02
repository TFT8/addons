if ("ACE_SpraypaintGreen" in items player) then {
    _marker_name = format ["%1 %2", profileName, time];
    _marker = createMarker [_marker_name, _player];
    _marker setMarkerShape "ICON";
    _marker setMarkerType "tft_clearMarker";
};
