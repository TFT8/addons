params ["_player"];

_hasSpray = count (['ACE_SpraypaintBlack','ACE_SpraypaintRed','ACE_SpraypaintGreen','ACE_SpraypaintBlue'] arrayIntersect items _player) > 0;
_closeToTag = ((getPosWorld _player) nearestObject 'UserTexture1m_F') distance _player < 2.5;

_hasSpray && {_closeToTag}
