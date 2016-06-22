if(hasInterface) then {
    if (!isNil "tft_lights_instance") then { deleteVehicle tft_lights_instance; };
    _moon = moonPhase date;
    tft_lights_instance = "#lightpoint" createVehicleLocal [worldSize/2,worldSize/2,25000];
    tft_lights_instance setLightDayLight false;
    tft_lights_instance setLightAttenuation [worldSize*sqrt 2,1,1e-4,0];
    tft_lights_instance setLightBrightness 1;
    tft_lights_instance setLightBrightness (0.15 + 0.1*_moon);
    tft_lights_instance setLightColor [0.4 - 0.15*_moon, 0.5 - 0.15*_moon, 1 - 0.1*_moon];
    tft_lights_instance setLightAmbient [0.02, 0.02, 0.02];
};
