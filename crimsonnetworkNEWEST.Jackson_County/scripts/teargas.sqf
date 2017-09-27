playerNearGas=false;

[] spawn {
    while {true} do
    {

        if
        (
        (((nearestObject [getpos player, "SmokeShellYellow"]) distance player < 20))
        or
        (((nearestObject [getpos player, "G_40mm_SmokeYellow"]) distance player < 15))
        ) then
        {
        playerNearGas=true;
        }
        else
        {
        playerNearGas=false;
        };

    uiSleep 3;
    };
};

[] spawn {
    while {true} do
    {

         "dynamicBlur" ppEffectEnable true;
         "dynamicBlur" ppEffectAdjust [0];
         "dynamicBlur" ppEffectCommit 15;
         resetCamShake;
         20 fadeSound 1;

        waituntil {playerNearGas};


        if (headgear player != "CPE_MK50") then {antidote1 = 2583};
        if (headgear player == "CPE_MK50") then {antidote1 = 2581};

        if (antidote1 == 2583) then {
         "dynamicBlur" ppEffectEnable true;
         "dynamicBlur" ppEffectAdjust [20];
         "dynamicBlur" ppEffectCommit 3;
         enableCamShake false;
         addCamShake [10, 45, 10];
         player setFatigue 1;
         5 fadeSound 0.1;
        
		};
		
		if (antidote1 == 2581) then {
         "dynamicBlur" ppEffectEnable false;
         "dynamicBlur" ppEffectAdjust [0];
         "dynamicBlur" ppEffectCommit 3;
         enableCamShake false;
         addCamShake [0, 0, 0];
         player setFatigue 1;
         0 fadeSound 0;
        };

    uiSleep 1;
    };
};