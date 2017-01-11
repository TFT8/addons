/*
* Author: YoursTruly (modified by FitzGerald)
* [Description]
*
* Arguments:
* 0: player
* 1: tag number
*
* Return Value:
* 
*
* Example:
* ["something", player] call ace_common_fnc_imanexample
*
* Public: [Yes/No]
*/

params ["_player", "_tagNum"];

_tag = 'tft_ace\UI\clearTags\' + str (floor (random _tagNum)) + '.paa';
[_player, _tag] call ace_tagging_fnc_tag;
