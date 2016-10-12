/*
 * Author: yourstruly
 * Same behavior as BIS_fnc_titleText but without delay.
 *
 * Arguments:
 * 0: Structured text to show <STRING>
 *
 * Return Value:
 * true
 *
 * Example:
 * "<t size='2'>I'm big</t>" call TFT_fnc_titleText; // -> true
 */
[_this,-1,1,1,0,0] spawn BIS_fnc_dynamicText;
