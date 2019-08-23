#define QUOTE(VAR)          #VAR
#define ARR_2(ARG1, ARG2)   [ARG1, ARG2]
#define GLUE(ARG1, ARG2)    ARG1##ARG2

#define TFT_HIDE_ACTION(NAME, DEFAULT)\
class NAME: None \
{\
    show = QUOTE(call compile getText (configFile >> 'CfgActions' >> 'NAME' >> 'tft_setting'));\
    tft_setting = QUOTE(profileNamespace getVariable ARR_2('GLUE(tft_no_actions_show_,NAME)', DEFAULT));\
}\

class CfgActions
{
    class None;

    TFT_HIDE_ACTION(GetOut, 1);
};
