#define QUOTE(VAR)          #VAR
#define ARR_2(ARG1, ARG2)   [ARG1, ARG2]
#define GLUE(ARG1, ARG2)    ARG1##ARG2

#define AF_NO_ACTION_CONIG_ENTRY(NAME, DEFAULT)\
class NAME: None \
{\
    show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'NAME' >> 'tft_setting'));\
    tft_setting = QUOTE(profileNamespace getVariable ARR_2('GLUE(tft_no_actions_show_,NAME)', DEFAULT));\
}\

class CfgActions
{
    class None;

    AF_NO_ACTION_CONIG_ENTRY(Eject, 1);
    AF_NO_ACTION_CONIG_ENTRY(GetOut, 1);
    AF_NO_ACTION_CONIG_ENTRY(Rearm, 1);
    AF_NO_ACTION_CONIG_ENTRY(TurnIn, 1);
    AF_NO_ACTION_CONIG_ENTRY(TurnOut, 1);
    AF_NO_ACTION_CONIG_ENTRY(LightOn, 1);
    AF_NO_ACTION_CONIG_ENTRY(LightOff, 1);
};


/*
class CfgActions
{
    class None;

    class Eject: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'Eject' >> 'tft_setting'));
		tft_setting = QUOTE(profileEjectspace getVariable ARR_2(QUOTE2(tft_no_actions_show_Eject), DEFAULT));
	}
	class GetOut: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'GetOut' >> 'tft_setting'));
		tft_setting = QUOTE(profileGetOutspace getVariable ARR_2(QUOTE2(tft_no_actions_show_GetOut), DEFAULT));
	}
	class Rearm: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'Rearm' >> 'tft_setting'));
		tft_setting = QUOTE(profileRearmspace getVariable ARR_2(QUOTE2(tft_no_actions_show_Rearm), DEFAULT));
	}
	class TurnIn: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'TurnIn' >> 'tft_setting'));
		tft_setting = QUOTE(profileTurnInspace getVariable ARR_2(QUOTE2(tft_no_actions_show_TurnIn), DEFAULT));
	}
	class TurnOut: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'TurnOut' >> 'tft_setting'));
		tft_setting = QUOTE(profileTurnOutspace getVariable ARR_2(QUOTE2(tft_no_actions_show_TurnOut), DEFAULT));
	}
	class LightOn: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'LightOn' >> 'tft_setting'));
		tft_setting = QUOTE(profileLightOnspace getVariable ARR_2(QUOTE2(tft_no_actions_show_LightOn), DEFAULT));
	}
	class LightOff: None 
	{
		show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'LightOff' >> 'tft_setting'));
		tft_setting = QUOTE(profileLightOffspace getVariable ARR_2(QUOTE2(tft_no_actions_show_LightOff), DEFAULT));
	}
};
