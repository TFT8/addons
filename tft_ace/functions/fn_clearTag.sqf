params ["_player", "_tagNum"];

_tag = 'tft_ace\ui\clearTags\' + str (floor (random _tagNum)) + '.paa';
[_player, _tag] call ace_tagging_fnc_tag;
