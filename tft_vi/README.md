# TFT Virtual Inventory

Addon changes the _MenuPosition_ respawn template to include TFT Virtual Inventory Manager and Arsenal saved loadouts.<br/>
This feature is disabled by default. To enable it, **description.ext** needs to have:
```python
respawnTemplates[] = {"MenuPosition"};
onRespawnMenu = "tft_vi\open.sqf";
```
