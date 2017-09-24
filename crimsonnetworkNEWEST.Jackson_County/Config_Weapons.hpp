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
            { "RH_m9", "", 9850, -1 },
            { "RH_g19t", "", 9850, -1 },
            { "RH_g17", "", 9850, -1 },
            { "RH_gsh18", "", 9850, -1 },
            { "RH_kimber", "", 9850, -1 },
            { "RH_usp", "", 9850, -1 },
            { "A3L_1911", "", 9850, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 75 },
            { "RH_17Rnd_9x19_g17", "", 75 },
            { "RH_17Rnd_9x19_g17", "", 75 },
            { "RH_18Rnd_9x19_gsh", "", 75 },
            { "RH_7Rnd_45cal_m1911", "", 75 },
            { "RH_12Rnd_45cal_usp", "", 75 },
            { "A3L_1911Mag", "", 75 }
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
            { "arifle_AK12_F", "", 40000, -1 },
			{ "RH_m4", "", 30000, -1 },
			{ "RH_M4_moe_g", "", 30000, -1 },
			{ "RH_eotech553", "", 300, -1 },
            { "RH_compM2", "", 300, -1 },
            { "optic_AMS", "", 300, -1 },
			{ "RH_eothhs1", "", 300, -1 }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 300 },
            { "RH_30Rnd_556x45_M855A1", "", 275 },
            { "RH_30Rnd_556x45_M855A1", "", 500 },
            { "RH_30Rnd_556x45_M855A1", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
	class ghosts {
        name = "Ghosts Weapon Shop";
        side = "civ";
        license = "ghosts";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_M27IAR", "", 25000, -1 },
            { "RH_tec9", "", 20000, -1 },
			{ "tf_anprc152_1", "", 1000, -1 }
        };
        mags[] = {
            { "RH_60Rnd_556x45_M855A1", "", 300 },
            { "RH_32Rnd_9x19_tec", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
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
            { "Taser_26", "", 100, 7500 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
            { "Binocular", "", 100, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 100, 65 },
            { "NVGoggles", "", 100, 980 },
			{ "muzzle_snds_L", "", 100 },
			{ "optic_Arco", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 },
			{ "tf_anprc152_1", "", 100 }
        };
        mags[] = {
            { "26_cartridge", "", 25 },
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
            { "A3L_Glock17", "", 100, -1 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
            { "A3L_Glock17mag", "", 100 },
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
        };
    }
	
	class cop_officer {
        name = "Officer Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be an Officer Rank!" };
        items[] = {
            { "A3L_Glock17", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, 5000 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "A3L_Glock17mag", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
        };
    };

    class cop_sergeant {
        name = "Sergeant Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "RH_M27IAR", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, -1 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "RH_60Rnd_556x45_M855A1", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 } 
        };
    };
	
	class cop_lieutenant {
        name = "Lieutenant Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be an Lieutenant Rank!" };
        items[] = {
            { "RH_M27IAR", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, 5000 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "RH_M16A4", "", 100, 5000 },
			
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "RH_60Rnd_556x45_M855A1", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
        };
    };
	
	class cop_captain {
        name = "Captain Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Captain Rank!" };
        items[] = {
            { "RH_M27IAR", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, 5000 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "RH_M16A4", "", 100, 5000 },
			{ "RH_SAMR", "", 100, 5000 },
			{ "RH_SR25EC", "", 100, 5000 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "RH_60Rnd_556x45_M855A1", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "RH_20Rnd_762x51_M80A1", "", 100 },
			{ "RH_30Rnd_556x45_Mk262", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
        };
    };
	
	class cop_chief {
        name = "Chief Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Chief Rank!" };
        items[] = {
            { "RH_M27IAR", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, -1 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "RH_M16A4", "", 100, -1 },
			{ "RH_SAMR", "", 100, -1 },
			{ "RH_SR25EC", "", 100, -1 },
			{ "hlc_rifle_awmagnum_BL", "", 100, -1 },
            { "RH_uspm", "", 100, -1 },
            { "RH_matchsd", "", 100, -1 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "RH_60Rnd_556x45_M855A1", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "RH_20Rnd_762x51_M80A1", "", 100 },
			{ "RH_30Rnd_556x45_Mk262", "", 100 },
			{ "HLC_300WM_FMJ", "", 100 },
            { "RH_16Rnd_40cal_usp", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
        };
    };
	
	class cop_fbi {
        name = "FBI Weapons Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be an FBI Rank!" };
        items[] = {
            { "RH_M27IAR", "", 100, -1 },
            { "RH_m9", "", 100, -1 },
            { "RH_M4_ris", "", 100, 5000 },
            { "HandGrenade_Stone", "Flashbang", 100, -1 },
			{ "RH_M16A4", "", 100, 5000 },
			{ "RH_SAMR", "", 100, 5000 },
			{ "RH_SR25EC", "", 100, 5000 },
			{ "RH_Mk11", "", 100, 5000 },
			{ "hlc_rifle_awmagnum_BL", "", 100, 5000 }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 100 },
            { "RH_60Rnd_556x45_M855A1", "", 100 },
            { "RH_30Rnd_556x45_M855A1", "", 100 },
			{ "RH_20Rnd_762x51_M80A1", "", 100 },
			{ "RH_30Rnd_556x45_Mk262", "", 100 },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 100 },
            { "muzzle_snds_H", "", 100 },
			{ "optic_Hamr", "", 100 },
			{ "optic_DMS", "", 100 },
			{ "optic_AMS", "", 100 },
			{ "bipod_01_F_blk", "", 100 },
			{ "optic_Holosight", "", 100 }
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
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};