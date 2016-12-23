_marker_name = format ["clearMarker_%1", _marker_id_sequence];
    _marker_id_sequence = _marker_id_sequence + 1;

_marker = createMarker [_marker_name, _player];
    _marker setMarkerShape "ICON";
    _marker_name setMarkerType "tft_clearMarker";
