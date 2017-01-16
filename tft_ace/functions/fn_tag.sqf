/*
* Author: YoursTruly
* Create a tag choosing one of the random tags.
*
* Arguments:
* 0: Unit placing a tag <OBJECT>
* 1: Prefix for a tag name <STRING>
* 2: Number of tags with given prefixes to choose from <NUMBER>
*
* Return Value:
* -
*
* Example:
* [player, "tag_", 4] call tft_ace_fnc_tag
*/

params ["_player", "_tagPrefix", "_tagNum"];

private _tag = "tft_ace\UI\tags\" + _tagPrefix + str (floor (random _tagNum)) + ".paa";
[_player, _tag] call ace_tagging_fnc_tag;
