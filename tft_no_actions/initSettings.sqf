#define AF_NO_ACTION_SETTING(NAME, DEFAULT)\
[\
    'tft_no_action_setting_##NAME',\
    "CHECKBOX",\
    [\
        localize 'STR_tft_no_action_##NAME',\
        localize 'STR_tft_no_action_##NAME##_desc'\
    ],\
    "TFT - No Actions",\
    DEFAULT,\
    2,\
    {\
        profileNamespace setVariable ['tft_no_actions_show_##NAME', parseNumber !_this];\
        saveProfileNamespace;\
    },\
    true\
] call CBA_settings_fnc_init


AF_NO_ACTION_SETTING(eject, false);
AF_NO_ACTION_SETTING(getout, false);
// Rearm at containers
AF_NO_ACTION_SETTING(rearm, false);
// Vehicle turn in
AF_NO_ACTION_SETTING(turnin, false);
// Vehicle turn out
AF_NO_ACTION_SETTING(turnout, false);
// Lighs on
AF_NO_ACTION_SETTING(lighton, false);
//
AF_NO_ACTION_SETTING(lightoff, false);
