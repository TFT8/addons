class CfgPatches {
    class tft_ai {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {"ace_ai"};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "YoursTruly";
    };
};

/* Can't do it this way because in Arma turrets are AI :/
class CfgAISkill {
    aimingAccuracy[] = {0, 0, 1, 0.2};
    aimingShake[] = {0, 0, 1, 0.3};
    aimingSpeed[] = {0, 0, 1, 1};
    spotDistance[] = {0, 0, 1, 0.9};
    spotTime[] = {0, 0, 1, 0.6};
    commanding[] = {0, 0, 1, 0.9};
    courage[] = {0, 0, 1, 1};
    reloadSpeed[] = {0, 0, 1, 1};
    general[] = {0, 0, 1, 1};
    endurance[] = {0, 0, 1, 1};
};*/

/* Old to new value conversion:
old interpolation: f(x)=1/(0.4*x)-1.5    //x -> skill value <0,1>; y -> result skill factor
new interpolation: f(x)=-9x+10    //x -> skill value <0,1>; y -> result skill factor
conversion: f(x)=(23-5*x^(-1))/18    //x -> old skill value; y -> new skill value
*/

class Extended_Init_EventHandlers {
    class CAManBase {
        class tft_ai {
            init = "private _unit = _this select 0; \
                    if(!isPlayer _unit) then { \
                    _unit setSkill ['aimingAccuracy', 0.02]; \
                    _unit setSkill ['aimingShake', 0.4]; \
                    _unit setSkill ['aimingSpeed', 0.6]; \
                    _unit setSkill ['spotDistance', 0.9]; \
                    _unit setSkill ['spotTime', 0.8]; \
                    _unit setSkill ['commanding', 0.9]; \
                    _unit setSkill ['courage', 1]; \
                    _unit setSkill ['reloadSpeed', 1]; \
                    _unit setSkill ['general', 1]; \
                    _unit setSkill ['endurance', 1]; };";
        };
    };
};
