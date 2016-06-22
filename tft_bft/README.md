# TFT BluForce Tracking

Very customizable BluForce Tracking system, or I should actually say: Side Tracking system - as it works for all sides.<br/>
System shows group and/or unit icons on the in-game map.

Configuration allows to:
- Enable/disable unit icons
- Enable/disable group icons
- Enable/disable names for both types of icons
- Change size of each icon type individually
- Show unit/group icons for whole side or own group only
- ...and more

Changes can be made through in-game dialog control by calling `createDialog "tft_bft_settings"`, or via _ACE Settings_:<br/>
```cpp
class tft_bft_groupsShow {
    value = 2;  //0 - disabled, 1 - group only, 2 - side
    typeName = "SCALAR";
    force = 1;
};
class tft_bft_groupsSize {
    value = 28; //reasonable values are between 14 and 36
    typeName = "SCALAR";
    force = 0;
};
class tft_bft_groupsNames {
    value = 1;  //0 - disabled, 1 - enabled
    typeName = "BOOL";
    force = 0;
};
class tft_bft_unitsShow {
    value = 1;  //0 - disabled, 1 - group only, 2 - side
    typeName = "SCALAR";
    force = 1;
};
class tft_bft_unitsSize {
    value = 20; //reasonable values are between 14 and 36
    typeName = "SCALAR";
    force = 0;
};
class tft_bft_unitsNames {
    value = 0;  //0 - disabled, 1 - enabled
    typeName = "BOOL";
    force = 0;
};
class tft_bft_drawDistance {
	value = 500;
    typeName = "SCALAR";
    force = 1;
};
class tft_bft_items {
	value = {"B_UavTerminal", "B_UavTerminal", "B_UavTerminal", "ItemGPS", "TFT_Terminal"};
    typeName = "STRING";
    force = 1;
};
```
Mission makers can adjust BFT by setting proper variables with values. This functionality works also on the fly.<br/>
e.g. `tft_bft_groupsShow = 0` or `tft_bft_unitsSize = 15`


Last, but not least functionality is a dialog for changing group callsign. You can open it through command:<br/>
`createDialog "tft_callsign_settings"`

