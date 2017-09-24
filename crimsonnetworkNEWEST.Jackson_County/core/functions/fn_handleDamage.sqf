params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentMagazine _source in ["CSW_Taser_Probe_Mag"] && _projectile in ["CSW_Taser_Ammo"]) then { //attention I changed it to mag and projectile!!
            if (side _source isEqualTo west || (side _source isEqualTo civilian) && (playerSide isEqualTo civilian) || (playerSide isEqualTo west)) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 100;
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west || (side _source isEqualTo civilian) && (playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };

		//Rubberbullets
		if (currentMagazine _source in ["CSW_Taser_Probe_Mag"] && _projectile in ["CSW_Taser_Ammo"]) then { //attention I changed it to mag and projectile!!
            if (side _source isEqualTo west && playerSide isEqualTo civilian) then {
                _damage = 0;
                if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                    private ["_distance"];
                    _distance = 300;
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazedRubber; //change this too
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazedRubber; // here too
                        };
                    };
                };
            };

            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = 0;
            };
        };
    };
};