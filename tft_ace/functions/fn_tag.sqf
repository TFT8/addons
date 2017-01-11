/*
* Author: [Name of Author(s)]
* [Description]
*
* Arguments:
* 0: The first argument <STRING>
* 1: The second argument <OBJECT>
*
* Return Value:
* The return value <BOOL>
*
* Example:
* ["something", player] call ace_common_fnc_imanexample
*
* Public: [Yes/No]
*/

params ["_player", "_tagNum"];

_tag = 'tft_ace\UI\tags\' + str (floor (random _tagNum)) + '.paa';
[_player, _tag] call ace_tagging_fnc_tag;
