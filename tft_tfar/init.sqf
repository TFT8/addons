tf_radio_channel_name = "TFAR";

//check for plugin version to match addon version
if(!isServer) then {
    private _pluginVer = call tfar_fnc_getTeamspeakPluginVersion;

    if(_pluginVer isEqualTo TF_server_addon_version) exitWith {};
    if(_pluginVer isEqualTo "Not connected to TeamSpeak") exitWith {};

    private _text = format["Your TFAR TeamSpeak plugin and TFAR Addon have different versions (%1 vs %2)<br/><br/>Go to <a color='#0000ff' href='https://tft8.com/fix-ts'>https://tft8.com/fix-ts</a> to find out how to fix it.", _pluginVer, TF_server_addon_version];
    [{alive player}, {
        params ["_text"];
        _text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
        ["TFAR plugin version mismatch", _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
    }, [_text]] call CBA_fnc_waitUntilAndExecute;
};
