/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
		  //Présenter le Passeport  
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Present Passport</t>",life_fnc_civPasseport,"",1,false,true,"",' playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];  
		life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
  };
	
	case west: {
		life_actions pushBack (player addAction["Seize Objects",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
	};
	
	case independent: {
		life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
	};
};
