params ["_player", "_tagNum"];

_player playActionNow "PutDown";
playSound3D ["\z\ace\addons\tagging\sounds\spray.ogg", _player, false, (eyePos _player), 10, 1, 15];

_obj = (getPosWorld _player) nearestObject 'UserTexture1m_F';

if(!isNull _obj) then {
    _obj setObjectTextureGlobal [0, 'tft_ace\ui\tags\' + str (floor (random _tagNum)) + '.paa'];
    [_obj,[0,0,1]] remoteExec ["setVectorUp"];
};
