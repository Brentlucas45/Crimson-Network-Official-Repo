/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "cg_awesome1", "Awesome Clothing", 125, { "", "", -1 } },
			{ "cg_bb1", "BB Clothing", 125, { "", "", -1 } },
			{ "cg_beats1", "Beats Clothing", 125, { "", "", -1 } },
			{ "cg_bipolar1", "Bipolar Clothing", 125, { "", "", -1 } },
			{ "cg_burgerking1", "Burger King Clothing", 125, { "", "", -1 } },
			{ "cg_catvideos1", "Cat Video Clothing", 125, { "", "", -1 } },
			{ "cg_chickens1", "Chicken Clothing", 125, { "", "", -1 } },
			{ "cg_condoms1", "Condom Clothing", 125, { "", "", -1 } },
			{ "cg_csgo1", "CSGO Clothing", 125, { "", "", -1 } },
			{ "cg_dad1", "Dad Clothing", 125, { "", "", -1 } },
			{ "cg_deeznuts1", "Deez Nuts Clothing", 125, { "", "", -1 } },
			{ "cg_et1", "ET Clothing", 125, { "", "", -1 } },
			{ "cg_got1", "Got Clothing", 125, { "", "", -1 } },
			{ "cg_evolution1", "Evolution Clothing", 125, { "", "", -1 } },
			{ "cg_ferrari1", "Ferrari Clothing", 125, { "", "", -1 } },
			{ "cg_fightclub1", "Fight Clothing", 125, { "", "", -1 } },
			{ "cg_gameover1", "GameOver Clothing", 125, { "", "", -1 } },
			{ "cg_jason1", "Jason Clothing", 125, { "", "", -1 } },
			{ "cg_joker1", "Joker Clothing", 125, { "", "", -1 } },
			{ "cg_kfc1", "KFC Clothing", 125, { "", "", -1 } },
			{ "cg_lambo1", "Lambo Clothing", 125, { "", "", -1 } },
			{ "cg_lsd1", "LSD Clothing", 125, { "", "", -1 } },
			{ "cg_mario1", "Mario Clothing", 125, { "", "", -1 } },
			{ "cg_mayan1", "Mayan Clothing", 125, { "", "", -1 } },
			{ "cg_mtv1", "MTV Clothing", 125, { "", "", -1 } },
			{ "cg_nike1", "Nike Clothing", 125, { "", "", -1 } },
			{ "cg_peanut1", "Peanut Clothing", 125, { "", "", -1 } },
			{ "cg_pepsi1", "Pepsi Clothing", 125, { "", "", -1 } },
			{ "cg_pika1", "Pika Clothing", 125, { "", "", -1 } },
			{ "cg_stoned1", "Stoner Clothing", 125, { "", "", -1 } },
			{ "cg_strippers1", "Stripper Clothing", 125, { "", "", -1 } },
			{ "cg_superman1", "Superman Clothing", 125, { "", "", -1 } },
			{ "cg_tupac1", "Tupac Clothing", 125, { "", "", -1 } },
			{ "cg_turtles1", "Turtles Clothing", 125, { "", "", -1 } },
			{ "cg_upyours1", "UpYours Clothing", 125, { "", "", -1 } },
			{ "A3L_Priest_Uniform", "", 125, { "", "", -1 } },
			{ "U_C_Poor_2", "", 125, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "", 125, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "", 125, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "", 125, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "", 125, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "", 125, { "", "", -1 } },
			{ "U_OrestesBody", "", 125, { "", "", -1 } },
			{ "U_NikosAgedBody", "", 125, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 125, { "", "", -1 } },
			{ "U_PMC_GTShirt_DJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_GTShirt_SJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_BlkTShirt_DJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_BlkTShirt_SJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_BluTShirt_SJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_WTShirt_DJeans", "", 125, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "", 125, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "", 125, { "", "", -1 } },
			{ "U_PMC_BlackPoloShirt_BeigeCords", "", 125, { "", "", -1 } },
			{ "U_PMC_BgPolo_GrnPants", "", 125, { "", "", -1 } },
			{ "U_PMC_BlckPolo_BluPants", "", 125, { "", "", -1 } },
			{ "U_PMC_GrnPolo_BgPants", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_BSSPBB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_SSGPBB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckLR_SPBB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSGPSB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSSPBB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSGPSB", "", 125, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_ChckLR_SPBB", "", 125, { "", "", -1 } },
			{ "vip_clothes", "", 125, { "", "", -1 } }
			
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_AntmanMask", "Antman Mask", 120, { "", "", -1 } },
            { "H_AugustusMask", "Augustus Mask", 120, { "", "", -1 } },
			{ "H_BatmanMask", "Batman Mask", 120, { "", "", -1 } },
			{ "H_BobaMask", "Boba Mask", 120, { "", "", -1 } },
			{ "H_BushMask", "Bush Mask", 120, { "", "", -1 } },
			{ "H_ClintonMask", "Clinton Mask", 120, { "", "", -1 } },
			{ "H_DeadpoolMask", "Deadpool Mask", 120, { "", "", -1 } },
			{ "H_FranklinMask", "Franklin Mask", 120, { "", "", -1 } },
			{ "H_GingerbreadMask", "Gingerbread Mask", 120, { "", "", -1 } },
			{ "H_GrantMask", "Grant Mask", 120, { "", "", -1 } },
			{ "H_HulkMask", "Hulk Mask", 120, { "", "", -1 } },
			{ "H_JasonMask", "Jason Mask", 120, { "", "", -1 } },
			{ "H_KermitMask", "Kermit Mask", 120, { "", "", -1 } },
			{ "H_LincolnMask", "Lincoln Mask", 120, { "", "", -1 } },
			{ "H_MickeyMask", "Mickey Mask", 120, { "", "", -1 } },
			{ "H_NixonMask", "Nixon Mask", 120, { "", "", -1 } },
			{ "H_ObamaMask", "Obama Mask", 120, { "", "", -1 } },
			{ "H_PatriotMask", "Patriot Mask", 120, { "", "", -1 } },
			{ "H_RAAMMask", "Raam Mask", 120, { "", "", -1 } },
			{ "H_ScarecrowMask", "Scarecrow Mask", 120, { "", "", -1 } },
			{ "H_ShrekMask", "Shrek Mask", 120, { "", "", -1 } },
			{ "H_SpidermanMask", "Spiderman Mask", 120, { "", "", -1 } },
			{ "H_SpongebobMask", "Spongebob Mask", 120, { "", "", -1 } },
			{ "H_SquidwardMask", "Squidward Mask", 120, { "", "", -1 } },
			{ "H_StarFoxMask", "Starfox Mask", 120, { "", "", -1 } },
			{ "H_UltronMask", "Ultron Mask", 120, { "", "", -1 } },
			{ "H_VenomMask", "Venom Mask", 120, { "", "", -1 } },
			{ "H_WashingtonMask", "Washington Mask", 120, { "", "", -1 } },
			{ "Kio_Afro_Hat", "", 120, { "", "", -1 } },
			{ "Kio_Capital_Hat", "", 120, { "", "", -1 } },
			{ "Kio_Spinning_Hat", "", 120, { "", "", -1 } },
			{ "Kio_Pirate_Hat", "", 120, { "", "", -1 } },
			{ "Kio_Santa_Hat", "", 120, { "", "", -1 } },
			{ "Kio_No1_Hat", "", 120, { "", "", -1 } },
			{ "Kio_Hat", "", 120, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 120, { "", "", -1 } },
			{ "H_Shemag_olive", "", 120, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 120, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 120, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 120, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 120, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 120, { "", "", -1 } },
			{ "H_Bandanna_gry", "", 120, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 120, { "", "", -1 } },
			{ "H_Bandanna_khk", "", 120, { "", "", -1 } },
			{ "H_Bandanna_sgg", "", 120, { "", "", -1 } },
			{ "H_StrawHat", "", 120, { "", "", -1 } },
			{ "H_BandMask_blk", "", 120, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 120, { "", "", -1 } },
			{ "H_Hat_blue", "", 120, { "", "", -1 } },
			{ "H_Hat_brown", "", 120, { "", "", -1 } },
			{ "H_Hat_checker", "", 120, { "", "", -1 } },
			{ "H_Hat_grey", "", 120, { "", "", -1 } },
			{ "H_Hat_tan", "", 120, { "", "", -1 } },
			{ "H_Cap_blu", "", 120, { "", "", -1 } },
			{ "H_Cap_grn", "", 120, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 120, { "", "", -1 } },
			{ "H_Cap_oli", "", 120, { "", "", -1 } },
			{ "H_Cap_red", "", 120, { "", "", -1 } },
			{ "H_Cap_tan", "", 120, { "", "", -1 } },
			{ "H_Cap_blk_ION", "", 120, { "", "", -1 } },,
			{ "H_PilotHelmetFighter_B", "", 120, { "", "", -1 } },,
			{ "H_CrewHelmetHeli_B", "", 120, { "", "", -1 } },
			{ "H_HelmetB_light_desert", "", 120, { "", "", -1 } },
			{ "H_HelmetB_light_desert", "", 120, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 120, { "", "", -1 } },		
			{ "H_PilotHelmetHeli_B", "", 120, { "", "", -1 } },
			{ "H_PilotHelmetHeli_O", "", 120, { "", "", -1 } },
			{ "H_PilotHelmetHeli_I", "", 120, { "", "", -1 } },
			{ "H_CrewHelmetHeli_O", "", 120, { "", "", -1 } },
			{ "H_CrewHelmetHeli_I", "", 120, { "", "", -1 } },
			{ "H_Cap_headphones", "", 120, { "", "", -1 } },
			{ "H_Cap_press", "", 120, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "SFG_Tac_Beard", "", 150, { "", "", -1 } },
			{ "SFG_Tac_BeardD", "", 150, { "", "", -1 } },
			{ "SFG_Tac_BeardB", "", 150, { "", "", -1 } },
			{ "SFG_Tac_BeardG", "", 150, { "", "", -1 } },
			{ "SFG_Tac_BeardO", "", 150, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 150, { "", "", -1 } },
			{ "SFG_Tac_ChopsG", "", 150, { "", "", -1 } },
			{ "SFG_Tac_ChopsB", "", 150, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 150, { "", "", -1 } },
			{ "SFG_Tac_moustacheD", "", 150, { "", "", -1 } },
			{ "SFG_Tac_moustacheG", "", 150, { "", "", -1 } },
			{ "SFG_Tac_moustacheB", "", 150, { "", "", -1 } },
			{ "SFG_Tac_moustacheO", "", 150, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 150, { "", "", -1 } },
			{ "SFG_Tac_chinlessbG", "", 150, { "", "", -1 } },
			{ "SFG_Tac_chinlessbB", "", 150, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 150, { "", "", -1 } },
			{ "SFG_Tac_SmallBeard", "", 150, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 150, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 150, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 150, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 150, { "", "", -1 } },
			{ "G_Combat", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 150, { "", "", -1 } },
			{ "G_Combat", "", 150, { "", "", -1 } },
			{ "G_Goggles_VR", "", 150, { "", "", -1 } },
			{ "H_BandMask_blk", "", 150, { "", "", -1 } },
			{ "H_BandMask_khk", "", 150, { "", "", -1 } },
			{ "H_BandMask_demon", "", 150, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 150, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class sert {
        title = "STR_Shops_C_sert";
        license = "sert";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "A3L_SERT_Patrol", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "TRYK_H_GR", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "TRYK_G_bala_ess_NV", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "SERT_FULL_VESTGRN", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "AM_PoliceBelt", "Police Duty Belt", 0, { "", "", -1 } }
        };
    };
	
	class dtu {
        title = "STR_Shops_C_dtu";
        license = "dtu";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "", 0, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BWH", "", 0, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_ylb", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 0, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "DTU_VEST_TACTICAL_BK", "", 0, { "", "", -1 } },
			{ "DTU_VEST_TACTICAL_TAN", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "AM_PoliceBelt", "Police Duty Belt", 0, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "cadetDOC", "Cadet", 0, { "", "", -1 } },
			{ "PRO_SOO", "Officer", 0, { "", "", -1 } },
			{ "PRO_SOSO", "Senior Deputy", 0, { "", "", -1 } },
			{ "PRO_SOCPL", "Corporal", 0, { "", "", -1 } },
			{ "PRO_SOSGT", "Sergeant", 0, { "", "", -1 } },
			{ "A3L_SOLieutenant_Uniform", "Lieutenant", 0, { "", "", -1 } },
            { "A3L_SOCaptain_Uniform", "Captain", 0, { "", "", -1 } },
            { "A3L_SOUnderSheriff_Uniform", "Undersheriff", 0, { "", "", -1 } },
			{ "A3L_SOSheriff_Uniform", "Sheriff", 0, { "", "", -1 } },
			{ "officerHWP", "HWP Officer", 0, { "", "", -1 } },
			{ "snrofficerHWP", "HWP Snr. Officer", 0, { "", "", -1 } },
			{ "corporalHWP", "HWP Corporal", 0, { "", "", -1 } },
			{ "sergeantHWP", "HWP Sergeant", 0, { "", "", -1 } },
			{ "lieutenantHWP", "HWP Lieutenant", 0, { "", "", -1 } },
			{ "captainHWP", "HWP Captain", 0, { "", "", -1 } },
			{ "FTOuniform", "FTO Officer", 0, { "", "", -1 } },
			{ "FTO_1", "FTO Snr. Officer", 0, { "", "", -1 } },
			{ "FTO_5", "FTO Corporal", 0, { "", "", -1 } },
			{ "FTO_3", "FTO Sergeant", 0, { "", "", -1 } },
			{ "FTO_4", "FTO Lieutenant", 0, { "", "", -1 } },
			{ "FTO_6", "FTO Captain", 0, { "", "", -1 } }
			
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "Campaign_Hat_Light", "Sheriffs Hat", 0, { "", "", -1 } },
            { "TRYK_UA_CAP", "Cadet Hat", 0, { "", "", -1 } },
			{ "jamie_pcapblack", "FTO Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
			{ "pmc_earpiece", "Radio Earpiece", 0, { "", "", -1 } },
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "Sheriff_vest_ylw", "Sheriff Vest", 0, { "", "", -1 } },
            { "PRO_SOVEST_Command", "Command Vest", 0, { "", "", -1 } },
            { "FTO_vest", "FTO Vest", 0, { "", "", -1 } },
			{ "Police_Patrol_Division", "HWP Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "AM_PoliceBelt", "Duty Belt", 0, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class kingsman {
        title = "STR_Shops_C_kingsman";
        license = "kingsman";
        side = "civ";
        uniforms[] = {
            { "KAEL_SUITS_BR_F12", "", 100, { "", "", -1 } }
        };
        headgear[] = {
            { "H_RacingHelmet_1_black_f", "", 100, { "", "", -1 } }
        };
        goggles[] = {
            { "G_Bandanna_blk", "", 100, { "", "", -1 } }
        };
        vests[] = {
            { "EF_GSG9_2P", "", 100, { "", "", -1 } }
        };
        backpacks[] = {
            { "B_mas_kitbag_black", "", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "CG_EMS2", "EMT Trainee", 50, { "", "", -1 } },
			{ "CG_EMS3", "EMT", 50, { "", "", -1 } },
			{ "CG_EMS1", "Senior EMT", 50, { "", "", -1 } },
			{ "fn_ems8", "Search And Rescue", 50, { "", "", -1 } },
			{ "fn_ems10", "EMT Command", 50, { "", "", -1 } },
			{ "CG_EMS9", "Diver EMT", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } },
			{ "H_Cap_grn", "", 10, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "", 10, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 10, { "", "", -1 } },
			{ "TRYK_UA_CAP", "Cadet Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Diving", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 10, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "Duty Belt", 0, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_B_TRYK_3C_T", "", 5000, {"", "", -1} },
            { "TRYK_B_TRYK_MTP_T", "", 5000, {"", "", -1} },
			{ "TRYK_B_TRYK_OCP_D_T", "", 5000, {"", "", -1} },
			{ "TRYK_B_TRYK_OCP_T", "", 5000, {"", "", -1} },
			{ "TRYK_B_TRYK_UCP_T", "", 5000, {"", "", -1} },
			{ "TRYK_B_USMC_R", "", 5000, {"", "", -1} },
			{ "TRYK_B_USMC_R_ROLL", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD_BK", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD_BLU3", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD_BLW", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD_RED2", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_BLK_PAD_YEL", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_DENIM_BK", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_DENIM_BWH", "", 5000, {"", "", -1} },
			{ "TRYK_shirts_DENIM_BWH_Sleeve", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_3c", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_3c_BG", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_Desert_marpat", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_desert_marpat_BG", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_tan", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_Wood", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_Wood_BG", "", 5000, {"", "", -1} },
			{ "TRYK_T_camo_wood_marpat", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_ACUTshirt", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR1_Rollup_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_BLK_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_BLK_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_GRY_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_GRY_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_OD_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_OD_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_Rollup_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_ARO1_BLK_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_ARO1_BLK_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_ARO1_GRY_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_BLK_T_BG_BK", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_fleece_UCP", "", 5000, {"", "", -1} },
            { "U_O_GhillieSuit", "", 7000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TRYK_V_PlateCarrier_ACU", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_ACU_L", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_blk", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_blk_L", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_coyo", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_coyo_L", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_JSDF", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_oli", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_wood", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_wood_L", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_AOR1", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_AOR1_2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_AOR2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_AOR2_2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_Brown", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_Brown2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_CBR", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_cbr2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_coyo", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_coyo2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_Delta", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_Delta2", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_green", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_rgr", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_Ranger", "", 4500, { "", "", -1 } },
			{ "TRYK_V_ArmorVest_tan", "", 4500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
