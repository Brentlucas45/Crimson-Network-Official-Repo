class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };
	
	class Lambo_shop {
        side = "civ";
        vehicles[] = {
            { "cg_lambo_veneno_grise", { "", "", -1 } },
			{ "cg_lambo_veneno_noir", { "", "", -1 } },
			{ "cg_lambo_veneno_bleu", { "", "", -1 } },
			{ "cg_lambo_veneno_bleufonce", { "", "", -1 } },
			{ "cg_lambo_veneno_vert", { "", "", -1 } },
			{ "cg_lambo_veneno_orange", { "", "", -1 } },
			{ "cg_lambo_veneno_rose", { "", "", -1 } },
			{ "cg_lambo_veneno_white", { "", "", -1 } },
			{ "cg_lambo_veneno_jaune", { "", "", -1 } },
			{ "cg_lamborghini_huracan_violet", { "", "", -1 } },
			{ "cg_lamborghini_huracan_bleu", { "", "", -1 } },
			{ "cg_lamborghini_huracan_noir", { "", "", -1 } },
			{ "cg_lamborghini_huracan_bleufonce", { "", "", -1 } },
			{ "cg_lamborghini_huracan_vert", { "", "", -1 } },
			{ "cg_lamborghini_huracan_grise", { "", "", -1 } },
			{ "cg_lamborghini_huracan_orange", { "", "", -1 } },
			{ "cg_lamborghini_huracan_rose", { "", "", -1 } },
			{ "cg_lamborghini_huracan_rouge", { "", "", -1 } },
			{ "cg_lamborghini_huracan_white", { "", "", -1 } },
			{ "cg_lamborghini_huracan_jaune", { "", "", -1 } },
			{ "ivory_rev", { "", "", -1 } },
			{ "ivory_lp560", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Black", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Blue", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Green", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Orange", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Purple", { "", "", -1 } },
			{ "CG_Lamborghini_Aventador_Red", { "", "", -1 } },	
			{ "CG_Lamborghini_Aventador_White", { "", "", -1 } }
        };
    };
	
	class mercedes_shop {
        side = "civ";
        vehicles[] = {
            { "ivory_190e", { "", "", -1 } },
            { "shounka_clk", { "", "", -1 } },
			{ "shounka_clk_noir", { "", "", -1 } },
			{ "shounka_clk_bleufonce", { "", "", -1 } },
			{ "shounka_clk_grise", { "", "", -1 } },
			{ "shounka_clk_orange", { "", "", -1 } },
			{ "shounka_clk_rose", { "", "", -1 } },
			{ "shounka_clk_rouge", { "", "", -1 } },
			{ "shounka_clk_violet", { "", "", -1 } },
			{ "shounka_clk_jaune", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_violet", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_civ", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_mat", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_noir", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_bleu", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_orange", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_rose", { "", "", -1 } },
			{ "Mrshounka_mercedes_190_p_rouge", { "", "", -1 } },
			{ "Quiet_c65amg_noir_f", { "", "", -1 } },
			{ "Quiet_c65amg_blanche_f", { "", "", -1 } },
			{ "Quiet_c65amg_chrome_f", { "", "", -1 } },
			{ "Quiet_c65amg_rouge_f", { "", "", -1 } },
			{ "Mrshounka_c63_2015_civ", { "", "", -1 } },
			{ "Mrshounka_c63_2015_noir", { "", "", -1 } },
			{ "Mrshounka_c63_2015_mat", { "", "", -1 } },
			{ "Mrshounka_c63_2015_bleufonce", { "", "", -1 } },
			{ "Mrshounka_c63_2015_grise", { "", "", -1 } },
			{ "Mrshounka_c63_2015_orange", { "", "", -1 } },
			{ "Mrshounka_c63_2015_rose", { "", "", -1 } },
			{ "Mrshounka_c63_2015_rouge", { "", "", -1 } },
			{ "Mrshounka_c63_2015_violet", { "", "", -1 } }	
        };
    };
	
	class vw_shop {
        side = "civ";
        vehicles[] = {
            { "cg_volkswagen_toureg_bleufonce", { "", "", -1 } },
			{ "cg_volkswagen_toureg_vert", { "", "", -1 } },
			{ "cg_volkswagen_toureg_grise", { "", "", -1 } },
			{ "cg_volkswagen_toureg_white", { "", "", -1 } },
			{ "cg_volkswagen_toureg_rose", { "", "", -1 } },
			{ "cg_volkswagen_toureg_bleu", { "", "", -1 } },
			{ "cg_volkswagen_toureg_orange", { "", "", -1 } },
			{ "cg_volkswagen_toureg_rouge", { "", "", -1 } },
			{ "cg_volkswagen_toureg_violet", { "", "", -1 } },
			{ "cg_volkswagen_toureg_jaune", { "", "", -1 } },
			{ "A3L_VolksWagenGolfGTiBlack", { "", "", -1 } },
			{ "ivory_gti", { "", "", -1 } },
			{ "A3L_VolksWagenGolfGTiwhite", { "", "", -1 } }

        };
    };
	
	class ford_shop {
        side = "civ";
        vehicles[] = {
            { "shounka_gt_rouge", { "", "", -1 } },
			{ "shounka_gt_noir", { "", "", -1 } },
			{ "shounka_gt_bleufonce", { "", "", -1 } },
			{ "shounka_gt_grise", { "", "", -1 } },
			{ "shounka_gt_orange", { "", "", -1 } },
			{ "shounka_gt_rose", { "", "", -1 } },
			{ "ADM_Ford_F100", { "", "", -1 } },
			{ "Jonzie_Raptor", { "", "", -1 } },
			{ "cg_raptor_truck_va_noir", { "", "", -1 } },
			{ "cg_raptor_truck_va_rouge", { "", "", -1 } },
			{ "cg_raptor_truck_va_bleufonce", { "", "", -1 } },
			{ "cg_raptor_truck_va_grise", { "", "", -1 } },
			{ "cg_raptor_truck_va_orange", { "", "", -1 } },
			{ "cg_raptor_truck_va_rose", { "", "", -1 } },
			{ "A3L_FordKaBlack", { "", "", -1 } },
			{ "A3L_FordKaBlue", { "", "", -1 } },
			{ "A3L_FordKaGrey", { "", "", -1 } },
			{ "A3L_FordKaRed", { "", "", -1 } },
			{ "A3L_FordKaWhite", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Black", { "", "", -1 } },
			{ "A3L_Ford_Mustang_DarkBlue", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Grey", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Orange", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Pink", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Purple", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Red", { "", "", -1 } },
			{ "A3L_Ford_Mustang_White", { "", "", -1 } },
			{ "A3L_Ford_Mustang_Yellow", { "", "", -1 } },
			{ "Jonzie_XB", { "", "", -1 } },
			{ "quiet_Ford_Shelby_GT500_Blanche_f", { "", "", -1 } },
            { "quiet_Ford_Shelby_GT500_bleu_f", { "", "", -1 } },
			{ "quiet_Ford_Shelby_GT500_chrome_f", { "", "", -1 } },
			{ "quiet_Ford_Shelby_GT500_noir_f", { "", "", -1 } },
			{ "quiet_Ford_Shelby_GT500_rouge_f", { "", "", -1 } },
			{ "A3L_Towtruck", { "", "", -1 } },
			{ "A3L_F350Blue", { "", "", -1 } },
			{ "A3L_F350Black", { "", "", -1 } },
			{ "A3L_F350Red", { "", "", -1 } },
			{ "A3L_F350White", { "", "", -1 } }
        };
    };
	
	class subaru_shop {
        side = "civ";
        vehicles[] = {
            { "Jonzie_sti", { "", "", -1 } },
			{ "A3L_Subaru_WRX_Black", { "", "", -1 } },
			{ "A3L_Subaru_WRX_DarkBlue", { "", "", -1 } },
			{ "A3L_Subaru_WRX_Grey", { "", "", -1 } },
			{ "A3L_Subaru_WRX_Pink", { "", "", -1 } },
			{ "A3L_Subaru_WRX_Purple", { "", "", -1 } },
			{ "A3L_Subaru_WRX_Red", { "", "", -1 } },
			{ "ivory_wrx", { "", "", -1 } }
        };
    };
	
	class bmw_shop {
        side = "civ";
        vehicles[] = {
            { "BMW_M5Black", { "", "", -1 } },
			{ "BMW_M5Blue", { "", "", -1 } },
			{ "BMW_M5Red", { "", "", -1 } },
			{ "BMW_M5White", { "", "", -1 } },
			{ "cg_bmw_1series_m_noir", { "", "", -1 } },
			{ "cg_bmw_1series_m_bleu", { "", "", -1 } },
			{ "cg_bmw_1series_m_bleufonce", { "", "", -1 } },
			{ "cg_bmw_1series_m_grise", { "", "", -1 } },
			{ "cg_bmw_1series_m_orange", { "", "", -1 } },
			{ "cg_bmw_1series_m_rouge", { "", "", -1 } },
			{ "cg_bmw_1series_m_rose", { "", "", -1 } },
			{ "Jonzie_30CSL", { "", "", -1 } },
			{ "ivory_e36", { "", "", -1 } },
			{ "ivory_m3", { "", "", -1 } },
			{ "A3L_BMW_M6_Black", { "", "", -1 } },
			{ "A3L_BMW_M6_DarkBlue", { "", "", -1 } },
			{ "A3L_BMW_M6_Grey", { "", "", -1 } },
			{ "A3L_BMW_M6_Pink", { "", "", -1 } },
			{ "A3L_BMW_M6_Red", { "", "", -1 } },
			{ "A3L_BMW_M6_White", { "", "", -1 } }		
        };
    };
	
	class lexus_shop {
        side = "civ";
        vehicles[] = {
            { "ivory_ifa", { "", "", -1 } },
			{ "ivory_isf", { "", "", -1 } }
        };
    };
	
	class super_shop {
        side = "civ";
        vehicles[] = {
            { "Mrshounka_Pagani_c_noir", { "", "", -1 } },
			{ "Mrshounka_Pagani_c_bleufonce", { "", "", -1 } },
			{ "Mrshounka_Pagani_c_rouge", { "", "", -1 } },
			{ "Mrshounka_Pagani_c_rose", { "", "", -1 } },
			{ "Mrshounka_Pagani_c_orange", { "", "", -1 } },
			{ "Mrshounka_Pagani_c_gris", { "", "", -1 } },
			{ "Mrshounka_agera_p_bleu", { "", "", -1 } },
			{ "Mrshounka_agera_p_jaune", { "", "", -1 } },
			{ "Mrshounka_agera_p_noir", { "", "", -1 } },
			{ "ivory_veyron", { "", "", -1 } },
			{ "ivory_ccx", { "", "", -1 } }
        };
    };
	
	class nissan_shop {
        side = "civ";
        vehicles[] = {
            { "ivory_r34", { "", "", -1 } },
			{ "bv_gtr_spec_v_2tone1", { "", "", -1 } },
			{ "bv_gtr_spec_v_2tone2", { "", "", -1 } },
			{ "bv_gtr_spec_v_2tone4", { "", "", -1 } },
			{ "bv_gtr_spec_v_2tone5", { "", "", -1 } },
			{ "bv_gtr_spec_v_gold", { "", "", -1 } },
			{ "bv_gtr_spec_v_black2", { "", "", -1 } }	
        };
    };
	
	class mittsub_shop {
        side = "civ";
        vehicles[] = {
            { "A3L_EvoXrally_blue", { "", "", -1 } },
			{ "A3L_EvoXrally_red", { "", "", -1 } },
			{ "A3L_EvoXrally_green", { "", "", -1 } },
			{ "A3L_EvoXrally_white", { "", "", -1 } },
			{ "ivory_evox", { "", "", -1 } },
			{ "Jonzie_Galant", { "", "", -1 } }
        };
    };
	
	class audi_shop {
        side = "civ";
        vehicles[] = {
            { "shounka_a3_audiq7_bleu", { "", "", -1 } },
			{ "shounka_a3_audiq7_noir", { "", "", -1 } },
			{ "shounka_a3_audiq7_gris", { "", "", -1 } },
			{ "shounka_a3_audiq7_rose", { "", "", -1 } },
			{ "shounka_a3_rs5_bleufonce", { "", "", -1 } },
			{ "shounka_a3_rs5_noir", { "", "", -1 } },
			{ "shounka_a3_rs5_rose", { "", "", -1 } },
			{ "shounka_a3_rs5_rouge", { "", "", -1 } },
			{ "shounka_a3_rs5_grise", { "", "", -1 } },
			{ "shounka_a3_rs5_jaune", { "", "", -1 } },
			{ "ivory_r8_spyder", { "", "", -1 } },
			{ "ivory_r8spyder", { "", "", -1 } },
			{ "Quiet_v2_r8plus_bleu_f", { "", "", -1 } },
			{ "Quiet_v2_r8plus_chrome_f_f", { "", "", -1 } },
		    { "Quiet_v2_r8plus_noir_f_f", { "", "", -1 } },
			{ "ivory_rs4", { "", "", -1 } },
			{ "cg_audi_a8_limo_black", { "", "", -1 } },
			{ "cg_audi_a8_limo_white", { "", "", -1 } }
        };
    };
	
	class chevy_shop {
        side = "civ";
        vehicles[] = {
            { "ADM_1964_impala", { "", "", -1 } },
			{ "ADM_1969_Camaro", { "", "", -1 } },
			{ "A3L_TahoeBlue", { "", "", -1 } },
			{ "A3L_Camaro", { "", "", -1 } },
			{ "shounka_monsteur_bleufonce", { "", "", -1 } },
			{ "shounka_monsteur_noir", { "", "", -1 } },
			{ "shounka_monsteur_grise", { "", "", -1 } },
			{ "shounka_monsteur_rose", { "", "", -1 } },
			{ "D_Cobalt_Granite_", { "", "", -1 } },
			{ "D_Cobalt_DarkRed", { "", "", -1 } },
			{ "D_Cobalt_White", { "", "", -1 } },
			{ "D_Cobalt_Yellow", { "", "", -1 } },
			{ "D_Cobalt_Granite", { "", "", -1 } }
        };
    };
	
	class porsche_shop {
        side = "civ";
        vehicles[] = {
            { "S_PorscheRS_Black", { "", "", -1 } },
			{ "S_PorscheRS_White", { "", "", -1 } },
			{ "S_PorscheRS_Yellow", { "", "", -1 } },
			{ "cg_porsche_cayenne_blue", { "", "", -1 } },
			{ "cg_porsche_cayenne_red", { "", "", -1 } },
			{ "cg_porsche_cayenne_grey", { "", "", -1 } },
			{ "cg_porsche_cayenne_yellow", { "", "", -1 } },
			{ "cg_porsche_cayenne_white", { "", "", -1 } },
			{ "cg_porsche_cayenne_violet", { "", "", -1 } },
        };
    };
	
	

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_bleu", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_bleufonce", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_grise", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_orange", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_noir", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_rose", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_rouge", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_violet", { "", "", -1 } },
			{ "cg_mercedes_sprinter_van_jaune", { "", "", -1 } },
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
            { "I_Truck_02_medical_F", { "", "", -1 } },
            { "O_Truck_03_medical_F", { "", "", -1 } },
            { "B_Truck_01_medical_F", { "", "", -1 } },
			{ "A3L_Charger_EMS_Fast", { "", "", -1 } },
			{ "ivory_suburban_ems", { "", "", -1 } }, 	
			{ "EvoXEMS", { "", "", -1 } },	
			{ "ivory_b206_rescue", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "EMS_Chopper", { "", "", -1 } },
			{ "EMS_Orca" , { "", "", -1 } },
		
			
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
			{ "A3L_CVPIUCBlack", { "", "", -1 } },
			{ "A3L_CVPIUCWhite", { "", "", -1 } },
			{ "A3L_CVPIUCRed", { "", "", -1 } },
			{ "A3L_CVPIFPBCSO", { "", "", -1 } },
			{ "A3L_CVPIFPBFG", { "", "", -1 } },
			{ "A3L_TaurusFPBLBCSO", { "", "", -1 } },
			{ "cg_taurustrooper", { "", "", -1 } },
			{ "A3L_TaurusUC", { "", "", -1 } },
			{ "A3L_TaurusUCWhite", { "", "", -1 } },
			{ "A3L_TaurusUCGrey", { "", "", -1 } },
			{ "A3L_Charger_Patrol", { "", "", -1 } },
			{ "A3L_ChargerUC_Blue_New", { "", "", -1 } },
			{ "A3L_ChargerSERTLB", { "", "", -1 } },
			{ "A3L_jailbus", { "", "", -1 } },
			{ "cg_h2_sert", { "", "", -1 } },
			{ "ivory_evox_unmarked", { "", "", -1 } },
			{ "cg_evopol1", { "", "", -1 } },
			{ "ivory_m3_unmarked", { "", "", -1 } },
			{ "A3L_TahoeCSOLBPB", { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "PD_sheriff_mh9", { "", "", -1 } },
            { "C_Heli_light_01_sheriff_F", { "", "", -1 } },
			{ "Sheriff_Chopper", { "", "", -1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	class A3L_CVPIUCBlack {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class PD_sheriff_mh9 {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class C_Heli_light_01_sheriff_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class Sheriff_Chopper {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIUCWhite {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIUCRed {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIFPBCSO {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIFPBFG {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TaurusFPBLBCSO {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class cg_taurustrooper {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TaurusUC {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TaurusUCWhite {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TaurusUCGrey {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_Charger_Patrol {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_ChargerUC_Blue_New {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_ChargerSERTLB {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TahoeCSOLBPB {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };    
	
	class CG_EMS1_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };		
	
	class CG_EMS2_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };		
	
	class CG_EMS4_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class CG_EMS5_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class CG_EMS6_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class EvoXEMS {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class A3L_Charger_EMS_Fast {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class ivory_suburban_ems {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };	
	
	class ivory_b206_rescue {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 0;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class cg_ducati_pol_reg {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_m3_marked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_m3_unmarked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_rev_marked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_rev_unmarked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class cg_evopol1 {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_TahoeUCPB {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIUCGrey {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIUCPink {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIUCBlue {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_CVPIFPBLBPD {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_ChargerPDLB {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class A3L_jailbus {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class cg_h2_sert {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_evox_marked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };
	
	class ivory_evox_unmarked {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };
	
		
	class cg_lambo_veneno_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_vert {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class cg_lambo_veneno_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };
	
	class ivory_rev {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };
	
	class ivory_lp560 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_vert {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class cg_lamborghini_huracan_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Blue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Green {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Purple {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_Red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class CG_Lamborghini_Aventador_White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = { };
    };
	
	class ivory_190e {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_rouge{
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class shounka_clk_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_bleu {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_bleufonce {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_noir {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_rose {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_rougee {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_violet {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_orange {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_jaune {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class cg_mercedes_sprinter_van_grise {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Mrshounka_mercedes_190_p_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class Quiet_c65amg_blanche_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Quiet_c65amg_noir_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Quiet_c65amg_chrome_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Quiet_c65amg_rouge_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_civ {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_mat {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class Mrshounka_c63_2015_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_vert {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class cg_volkswagen_toureg_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class A3L_VolksWagenGolfGTiBlack {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class A3L_VolksWagenGolfGTiwhite {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = { };
    };
	
	class ivory_gti {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = { };
    };
	
	class shounka_gt_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_gt_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_gt_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_gt_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_gt_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_gt_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class ADM_Ford_F100 {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 11000;
        textures[] = { };
    };
	
	class Jonzie_Raptor {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_noir {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_bleu {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_bleufonce {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_rouge {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_rose {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_orange {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class cg_raptor_truck_va_grise {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
	
	class A3L_FordKaBlack {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };
	
	class A3L_FordKaGrey {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };
	
	class A3L_FordKaRed {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };
	
	class A3L_FordKaBlue {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };
	
	class A3L_FordKaWhite {
        vItemSpace = 30;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Grey {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Pink {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Purple {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Ford_Mustang_Yellow {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class Jonzie_XB {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };
	
	class quiet_Ford_Shelby_GT500_Blanche_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class quiet_Ford_Shelby_GT500_bleu_f_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class quiet_Ford_Shelby_GT500_chrome_f_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class quiet_Ford_Shelby_GT500_noir_f_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class quiet_Ford_Shelby_GT500_rouge_f_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_Towtruck {
        vItemSpace = 80;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class A3L_F350Blue {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };
	
	class A3L_F350Black {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };
	
	class A3L_F350Red {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };
	
	class A3L_F350White {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };
	
	class Jonzie_sti {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_Black {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_Grey {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_DarkBlue {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_Pink {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_Purple {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class A3L_Subaru_WRX_Red {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class ivory_wrx {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };
	
	class BMW_M5Black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class BMW_M5Blue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class BMW_M5Red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class BMW_M5White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class cg_bmw_1series_m_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class Jonzie_30CSL {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };
	
	class ivory_e36 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };
	
	class ivory_m3 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_Black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_Grey {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_Pink {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_Red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class A3L_BMW_M6_White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };

	class ivory_isf {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 65000;
        textures[] = { };
    };	
	
	class ivory_ifa {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_gris {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_orange {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_Pagani_c_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = { };
    };
	
	class Mrshounka_agera_p_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = { };
    };
	
	class Mrshounka_agera_p_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = { };
    };
	
	class Mrshounka_agera_p_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 550000;
        textures[] = { };
    };
	
	class ivory_veyron {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };
	
	class ivory_ccx {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = { };
    };
	
	class ivory_r34 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_gold {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone2 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone5 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone1 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone4 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_black2 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class A3L_EvoXrally_blue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_EvoXrally_green {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_EvoXrally_red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class A3L_EvoXrally_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class ivory_evox {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class Jonzie_Galant {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };
	
	class shounka_a3_audiq7_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_audiq7_bleu {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_audiq7_gris{
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_audiq7_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_noir {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_rouge {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_grise {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_rose {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_jaune {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 55000;
        textures[] = { };
    };
	
	class ivory_r8_spyder {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_chrome_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_bleu_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_noir_f {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };
	
	class ivory_rs4 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = { };
    };
	
	class cg_audi_a8_limo_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class cg_audi_a8_limo_black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = { };
    };
	
	class ivory_r8spyder {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = { };
    };
	
	class ADM_1964_impala {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };
	
	class ADM_1969_Camaro {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };
	
	class A3L_TahoeBlue {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class A3L_TahoeRed {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class A3L_TahoeWhite {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };
	
	class A3L_Camaro {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = { };
    };
	
	class shounka_monsteur_bleufonce {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	
	class shounka_monsteur_noir {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	
	class shounka_monsteur_grise {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	
	class shounka_monsteur_rose {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	
	class shounka_monsteur_rouge {
        vItemSpace = 125;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = { };
    };
	
	class D_Cobalt_Granite {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 47000;
        textures[] = { };
    };
	
	class D_Cobalt_DarkRed {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 47000;
        textures[] = { };
    };
	
	class D_Cobalt_White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 47000;
        textures[] = { };
    };
	
	class D_Cobalt_Yellow {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 47000;
        textures[] = { };
    };
	
	class S_PorscheRS_White {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class S_PorscheRS_Black {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class S_PorscheRS_Yellow {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class ivory_911 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_violet {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_blue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_grey {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_white {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_yellow {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class cg_porsche_cayenne_red {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = { };
    };
	
	class bv_gt_navy_blue {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gt_navy_gold {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gt_navy_2tone2 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gt_navy_burgundy {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gt_navy_2tone5 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
	class bv_gt_navy_2tone3 {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = { };
    };
	
    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 400;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 0;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 0;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
};
