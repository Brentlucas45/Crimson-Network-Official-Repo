/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_m9", "", 25000, -1 },
            { "RH_g19t", "", 25000, -1 },
            { "RH_g17", "", 25000, -1 },
            { "RH_gsh18", "", 25000, -1 },
            { "RH_usp", "", 25000, -1 },
            { "A3L_1911", "", 30000, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 4000 },
            { "RH_17Rnd_9x19_g17", "", 4000 },
            { "RH_17Rnd_9x19_g17", "", 4000 },
            { "RH_18Rnd_9x19_gsh", "", 4000 },
            { "RH_12Rnd_45cal_usp", "", 4000 },
            { "A3L_1911Mag", "", 5000 }
        };
        accs[] = {
            { "RH_m9qd", "", 10000 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AK12_F", "", 200000, -1 },
			{ "RH_m4", "", 200000, -1 },
			{ "RH_M4_moe_g", "", 200000, -1 },
			{ "RH_Deagleg", "", 75000, -1 },
			{ "RH_g18", "", 90000 },
			{ "hlc_smg_mp5k", "", 150000 },
			{ "RH_muzi", "", 90000 },
			{ "RH_vz61", "", 80000 },
            { "RH_compM4s", "", 8000, -1 },
			
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 20000 },
            { "RH_30Rnd_556x45_M855A1", "", 20000 },
            { "RH_30Rnd_556x45_M855A1", "", 20000 },
			{ "RH_7Rnd_50_AE", "", 7000 },
			{ "RH_19Rnd_9x19_g18", "", 7000 },
			{ "RH_33Rnd_9x19_g18", "", 15000 },
			{ "hlc_30Rnd_9x19_B_MP5", "", 15000 },
			{ "RH_30Rnd_9x19_UZI", "", 7000 },
			{ "RH_20Rnd_32cal_vz61", "", 7000 },
			
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class kingsman {
        name = "Kingsman Weapon Locker";
        side = "civ";
        license = "kingsman";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_fnp45", "", 25000, -1 },
			{ "tf_anprc152_1", "", 1000, -1 }
        };
        mags[] = {
            { "RH_15Rnd_45cal_fnp", "", 300 }
        };
        accs[] = {
            { "RH_docter", "", 300 },
            { "RH_M6X", "", 300 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
			{ "tf_anprc152_1", "", 1000 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Gear";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CSW_M26C", "", 100, 7500 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
            { "Binocular", "", 100, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 100, 65 },
            { "NVGoggles", "", 100, 980 },
			{ "optic_Holosight", "", 100 },
			{ "tf_anprc152_1", "", 100 },
			{ "Trixie_m68cco", "", 100 },
			{ "RH_barska_rds", "", 100 },
			{ "RH_LTdocter", "", 100 },
			{ "RH_compm4s", "", 100 }
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 25 },
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };
	
	class cop_cadet {
        name = "Cadet Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be an Officer Rank!" };
        items[] = {
            { "RH_m9", "", 100, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_m9", "", 100 }
        };
        accs[] = {
			{ "RH_M6X", "", 100 }
        };
    };
	
	class cop_officer {
        name = "Officer Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be an Officer Rank!" };
        items[] = {
			{ "RH_g17", "", 100, -1 },
            { "RH_g19", "", 100, -1 },
			{"RH_p226", "Senior Deputy Only!", 100, -1 },
			{ "Hlc_smg_mp5a2", "MP5 CODE RED ONLY!", 100, -1 }
        };
        mags[] = {
            { "RH_17Rnd_9x19_g17", "", 100 },
			{ "RH_15Rnd_9x19_SIG", "", 100 },
			{ "hlc_30Rnd_9x19_B_MP5", "", 100 }
        };
        accs[] = {
            { "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 }
        };
    };
	
	class cop_corporal {
        name = "Corporal Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be an Officer Rank!" };
        items[] = {
			{ "RH_cz75", "", 100, -1 },
			{ "RH_kimber_nw", "", 100, -1 },
			{ "RH_SBR9", "SBR 9 CODE RED ONLY!", 100, -1 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
			{ "RH_16Rnd_9x19_CZ", "", 100, -1 },
			{ "RH_7Rnd_45cal_m1911", "", 100, -1 },
			{ "RH_32Rnd_9mm_M822", "", 100, -1 }
        };
        accs[] = {
            { "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 }
        };
    };

    class cop_sergeant {
        name = "Sergeant Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] = {
			{ "RH_sbr9", "", 100, -1 },
			{ "RH_fn57", "", 100, -1 },
			{ "RH_uspm", "", 100, -1 },
			{ "RH_Hk416c", "HK 416 Carbine CODE RED ONLY!", 100 },
			{ "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
			{ "RH_32Rnd_9mm_M822", "", 100, -1 },
			{ "RH_20Rnd_57x28_FN", "", 100, -1 },
			{ "RH_16Rnd_40cal_usp", "", 100, -1 },
			{ "RH_30Rnd_556x45_M855A1", "", 100 }
        };
        accs[] = {
			{ "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 },
			{ "RH_t1", "", 100 },
			{ "RH_LTdocter", "", 100 },
			{ "RH_compm4s", "", 100, }
        };
    };
	
	class cop_lieutenant {
        name = "Lieutenant Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be an Lieutenant Rank!" };
        items[] = {
			{ "hlc_rifle_CQBR", "", 100 },
			{ "RH_fnp45", "", 100 },
			{ "RH_m1911", "", 100 },
			{ "hlc_rifle_RU556", "AR15 CODE RED ONLY!!", 100 },
			{ "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
			{ "hlc_30rnd_556x45_EPR", "", 100 },
			{ "RH_15Rnd_45cal_fnp", "", 100 },
			{ "RH_7Rnd_45cal_m1911", "", 100 },
			{ "hlc_30Rnd_556x45_EPR", "", 100 }
        };
        accs[] = {
            { "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 },
			{ "RH_barska_rds", "", 100 },
			{ "Trixie_m68cco", "", 100 },
			{ "RH_LTdocter", "", 100 },
			{ "RH_compm4s", "", 100, }
        };
    };
	
	class cop_captain {
        name = "Captain Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Captain Rank!" };
        items[] = {
			{ "RH_M4m", "", 100 },
			{ "RH_python", "", 100 },
			{ "RH_M4A1_Ris", "M4A1 CODE RED ONLY!", 100 },
			{ "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
			{ "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "RH_6Rnd_357_Mag", "", 100 },
			{ "RH_30Rnd_556x45_M855A1", "", 100 }
        };
        accs[] = {
            { "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 },
			{ "Trixie_m68cco", "", 100 },
			{ "RH_barska_rds", "", 100 },
			{ "RH_LTdocter", "", 100 },
			{ "RH_compm4s", "", 100 }
        };
    };
	
	class cop_chief {
        name = "Chief Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Chief Rank!" };
        items[] = {
			{ "RH_M16A6", "", 100 },
			{ "RH_bullb", "", 100 },
			{ "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
			{ "RH_30Rnd_68x43_FMJ", "", 100 },
			{ "RH_6Rnd_454_Mag", "", 100 }
        };
        accs[] = {
            { "RH_M6X", "", 100 },
			{ "acc_flashlight_pistol", "", 100 },
			{ "RH_barska_rds", "", 100 },
			{ "Trixie_m68cco", "", 100 },
			{ "RH_LTdocter", "", 100 },
			{ "RH_demz", "", 100 },
			{ "RH_compm4s", "", 100, }
        };
    };
	
	class cop_sertweapons {
        name = "SERT Weapons";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_M4_moe_b", "", 100, -1 },
			{ "prpl_benelli", "", 100, 5000 },
			{ "hlc_rifle_awmagnum_BL", "", 100, -1 },
			{ "RH_M4A6", "", 100, -1 },
			{ "CSW_FN57_Ballistic_Shield", "Shield", 100, -1 },
			{ "RH_ta648", "", 100 },
			{ "RH_compm4s", "", 300, -1 },
			{ "RH_SFM952V", "", 100 }
        };
        mags[] = {
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "prpl_8Rnd_12Gauge_Slug", "", 100 },
			{ "prpl_8Rnd_12Gauge_Pellets", "", 100 },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 100 },
			{ "RH_30Rnd_68x43_FMJ", "", 100 },
			{ "CSW_20Rnd_57x28_SS190", "", 100 }
        };
        accs[] = {
			{ "CSW_FN57_Shield_P", "", 100 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 },
			{ "Medikit", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
