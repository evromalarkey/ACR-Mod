class CfgPatches
{
	class ACR_A3_Characters
	{
		units[] = {"ACR_A3_Backpack_Carryall_vz95","ACR_A3_Backpack_Kitbag_vz95","ACRP_Vojak01","ACRP_Vojak02","ACRP_Vojak07","ACRP_Vojak03","ACRP_Vojak04","ACRP_Vojak05","ACRP_Vojak10","ACRP_Vojak06","ACR_Vojak01","ACR_Vojak02","ACR_Vojak07","ACR_Vojak03","ACR_Vojak04","ACR_Vojak05","ACR_Sniper","ACR_Sniper2","ACR_Sniper_Des","ACR_Sniper2_Des","ACR_Vojak10","ACR_Vojak06","ACR_Vojak12","ACR_MOUT_Vojak01","ACR_MOUT_Vojak02","ACR_MOUT_Vojak07","ACR_MOUT_Vojak03","ACR_MOUT_Vojak04","ACR_MOUT_Vojak05","ACR_MOUT_Vojak10","ACR_MOUT_Vojak06","ACR_Des_Vojak01","ACR_Des_Vojak02","ACR_Des_Vojak07","ACR_Des_Vojak03","ACR_Des_Vojak04","ACR_Des_Vojak05","ACR_Des_Vojak10","ACR_Des_Vojak06","ACR_Pilot","ACR_Dustojnik","ACR_Neozbrojeny","ACR_Pilot_des","ACR_Dustojnik_des","ACR_Neozbrojeny_des"};
		weapons[] = {"V_ACR_A3_PlateCarrierIA2_vz95","V_ACR_A3_PlateCarrier1_vz95","V_ACR_A3_PlateCarrier2_vz95","V_ACR_A3_PlateCarrier1_rgr","V_ACR_A3_PlateCarrier2_rgr","V_ACR_A3_PlateCarrier1_khk","V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95","H_ACR_A3_HelmetIA_vz95_des","H_ACR_A3_HelmetB_rgr","H_ACR_A3_Beret_red","H_ACR_A3_Booniehat_vz95","H_ACR_A3_Cap_rgr","U_ACR_A3_CombatUniform","U_ACR_A3_CombatUniform_tshirt","U_ACR_A3_CombatUniform_vest","U_ACR_A3_CombatUniform_MOUT","U_ACR_A3_CombatUniform_MOUT_vest","U_ACR_A3_CombatUniform_Des","U_ACR_A3_CombatUniform_Des_tshirt","U_ACR_A3_CombatUniform_Des_vest","U_ACR_A3_HeliPilotCoveralls_rgr","U_ACR_A3_OfficerUniform_vz95","U_ACR_A3_SweaterUniform_vz95","U_ACR_A3_HeliPilotCoveralls_khk","U_ACR_A3_OfficerUniform_des","U_ACR_A3_SweaterUniform_des","U_ACR_A3_SniperGhillie","U_ACR_A3_SniperGhillie_Des"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR"};
	};
};
class GenericNames
{
    #include "CzechMen.hpp"
};
class CfgVehicleClasses
{
	class ACRX0
	{
		displayName = "$STR_ACR_MENVZ95REC"; //Maj bonnie hatku a co ja vim
	};
	class ACRX00
	{
		displayName = "$STR_ACR_MEN"; //vz. 95 zakladni vojaci a pilot STRINGTABLETEXT: Men
	};
	class ACRX01
	{
		displayName = "$STR_ACR_MENVZ95"; //lesni kokoti STRINGTABLETEXT: Men (vz. 95)
	};
	class ACRX02
	{
		displayName = "$STR_ACR_MEN_MOUT"; //MOUT kokoti
	};
	class ACRX03
	{
		displayName = "$STR_ACR_MEN_DESERT"; //poustni curaci
	};
	class ACRX04
	{
		displayName = "$STR_ACR_SNIP"; //sniperi se krovim
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class cfgFactionClasses
{
	class ACR //class pod jakou frakci budou
	{
		displayName = "$STR_ACR_FACTION"; //jmeno frakce v editoru STRINGTABLETEXT: ACR
		priority = 6;
		side = "TWest";
		genericNames = "CzechMen";
		identitytypes[] = {"Head_Euro"};
		icon = "\acr_a3_characters\data\ACR_odznak.paa";
	};
};
class cfgWeapons
{
	class ItemCore;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
	class HeadGearItem;
    class UniformItem;
    class Uniform_Base;
    class U_B_CombatUniform_mcam;
    class U_B_CombatUniform_mcam_tshirt;
    class U_B_CombatUniform_mcam_vest;
	class ItemInfo;
	class VestItem;
	class BagItem;
	class H_HelmetB;
	class U_B_GhillieSuit;
    class ACR_blk_BasicBody: Uniform_Base
    {
        scope = 2;
        displayName = "ACR_blk_BasicBody";
        picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Underwear_Character";
            containerClass = "Supply0";
            mass = 1;
        };
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class V_ACR_A3_PlateCarrierIA2_vz95: ItemCore //Vesta
	{
		scope = 2;
		model = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta.paa";
		displayName = "$STR_ACR_VEST";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta.paa"};
		author = "$STR_ACR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_beta\Indep\equip_ia_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
	class V_ACR_A3_PlateCarrier1_vz95: V_PlateCarrier1_rgr //Vesta2
	{
		scope = 2;
		picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta2.paa";
		displayName = "$STR_ACR_VEST2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta2.paa"};
		author = "$STR_ACR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply200";
			mass = 50;
			armor = "5*0.5";
			passThrough = 0.7;
			hiddenSelections[] = {"camo"};
		};
	};
    class V_ACR_A3_PlateCarrier2_vz95: V_PlateCarrier2_rgr //Vesta2
    {
        scope = 2;
        picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta2.paa";
        displayName = "$STR_ACR_VEST2_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta2.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply200";
            mass = 50;
            armor = "5*0.5";
            passThrough = 0.7;
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_rgr: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta_olive.paa";
        displayName = "$STR_ACR_VEST2_rgr";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 60;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_rgr: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta_olive.paa";
        displayName = "$STR_ACR_VEST2_rgr_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_olive.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply120";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier1_khk: V_PlateCarrier1_rgr
    {
        picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta_khk.paa";
        displayName = "$STR_ACR_VEST2_khk";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 20;
            containerclass = "Supply140";
            mass = 60;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_ACR_A3_PlateCarrier2_khk: V_PlateCarrier2_rgr
    {
        picture = "\acr_a3_characters\data\UI\ikona_ACR_Vesta_khk.paa";
        displayName = "$STR_ACR_VEST2_khk_H";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Vesta_khk.paa"};
        author = "$STR_ACR";
        class ItemInfo: VestItem
        {
            armor = 30;
            containerclass = "Supply120";
            mass = 80;
            passthrough = 0.5;
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            hiddenSelections[] = {"camo"};
        };
    };
	class H_ACR_A3_HelmetIA_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_MICH2000";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_helma.paa";
        model   = "acr_a3_characters\mich2000nogoggles_ACR"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo3"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_copy_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadGearItem
		{
            uniformModel = "acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
			mass = 70;
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
    class H_ACR_A3_HelmetIA_vz95_des: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_MICH2000_Des";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_helma_poust.paa";
        model   = "acr_a3_characters\mich2000nogoggles_ACR"; /// what model does the cap use
        author = "$STR_ACR";
        hiddenSelections[] = {"camo3"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_co.paa"}; /// what texture is going to be used
        class ItemInfo: HeadGearItem
        {
            uniformModel = "acr_a3_characters\mich2000nogoggles_ACR.p3d";  /// what model is used for this cap
            mass = 70;
            modelSides[] = {3,1};
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
	class H_ACR_A3_HelmetIA_Goggles_vz95: ItemCore 
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_GOGGLES"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3_characters\data\UI\ikona_ACR_helmabryle.paa"; /// this looks fairly similar
        model   = "acr_a3_characters\mich2000_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo3"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_copy_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };
    class H_ACR_A3_HelmetIA_Goggles_vz95_des: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_MICH2000_GOGGLES_Des"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3_characters\data\UI\ikona_ACR_helmabryle_poust.paa"; /// this looks fairly similar
        model   = "acr_a3_characters\mich2000_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo3"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "acr_a3_characters\mich2000_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };
    class H_ACR_A3_HelmetB_rgr: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_ACR_ECH_rgr";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Prilba2.paa"};
        class ItemInfo: HeadGearItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            mass = 70;
            modelSides[] = {3,1};
            armor = "3*0.5";
            passThrough = 0.8;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_ACR_A3_Beret_red: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_Beret_red"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3_characters\data\UI\ikona_ACR_beret.paa"; /// this looks fairly similar
        model   = "acr_a3_characters\beret_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "acr_a3_characters\beret_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 1; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };      
    };
	class H_ACR_A3_Booniehat_vz95: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_BOONIEHAT";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_Klobouk95.paa";
    	model = "\A3\Characters_F_epb\Common\booniehat_hs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Klobouk95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_epb\Common\booniehat_hs";
			mass = 10;
			modelSides[] = {3,1};
			armor = "0";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class H_ACR_A3_Cap_rgr: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_ACR_CAP";
    	picture = "\acr_a3_characters\data\UI\ikona_ACR_rgrhatheadset.paa";
		model = "\A3\Characters_F_epb\Common\capb_hs";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Ksiltovka95.paa"};
		author = "$STR_ACR";
		class ItemInfo: HeadGearItem
		{
			uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
			mass = 10;
			modelSides[] = {3,1};
			armor = "0";
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
		class H_ACR_A3_Cap_khk: ItemCore
    	{
    		scope = 2;
    		weaponPoolAvailable = 1;
    		displayName = "$STR_ACR_CAP_DES";
    		picture = "\acr_a3_characters\data\UI\ikona_ACR_tanhatheadset.paa";
    		model = "\A3\Characters_F_epb\Common\capb_hs";
    		hiddenSelections[] = {"camo"};
    		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\data\capb_tan_co.paa"};
    		author = "$STR_ACR";
    		class ItemInfo: HeadGearItem
    		{
    			uniformModel = "\A3\Characters_F_epb\Common\capb_hs";
    			mass = 10;
    			modelSides[] = {3,1};
    			armor = "0";
    			passThrough = 0.8;
    			hiddenSelections[] = {"camo"};
    		};
    	};
	class H_ACR_A3_Pakol_grey: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_PAKOL_GREY"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3_characters\data\UI\ikona_ACR_pakol.paa"; /// this looks fairly similar
        model   = "acr_a3_characters\pakol_mic_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip4_co.paa","\acr_a3_characters\data\equip1_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "acr_a3_characters\pakol_mic_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 1; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
        };
    };
    class H_ACR_A3_Booniehat_fold_vz95: ItemCore
        {
        scope = 2; /// scope needs to be 2 to have a visible class
        displayName  = "$STR_ACR_BOONIEHAT_FOLD"; /// how would the stuff be displayed in inventory and on ground
        picture = "\acr_a3_characters\data\UI\ikona_ACR_booniefold.paa"; /// this looks fairly similar
        model   = "acr_a3_characters\boonie_ACR.p3d"; /// what model does the cap use
		author = "$STR_ACR";
        hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\equip2_co.paa"}; /// what texture is going to be used
        class ItemInfo : HeadgearItem
        {
            mass = 10; /// combined weight and volume of the cap, this equals to single magazine
            uniformModel = "acr_a3_characters\boonie_ACR.p3d";  /// what model is used for this cap
            allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};   /// this cap is so small and flexible that it fits everywhere
            modelSides[] = {6}; /// available for all sides
            armor = 0;  /// this cap doesn't provide any protection
            passThrough = 1; /// this cap doesn't provide any protection
            hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
        };
    };

	// vz. 95 Lesní Uniformy
	class U_ACR_A3_CombatUniform: Uniform_Base // Klasická
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_vz95.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_CombatUniform_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "$STR_ACR_UNIFORM_tshirt";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_vz95_triko.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak02";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_CombatUniform_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_vest";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_vz95.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };

    // MOUT Uniformy
	class U_ACR_A3_CombatUniform_MOUT: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_MOUT";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_MOUT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_MOUT_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};

    class U_ACR_A3_CombatUniform_MOUT_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_MOUT_vest";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_MOUT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_MOUT_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };

    // vz.95 Pouštní Uniformy
	class U_ACR_A3_CombatUniform_Des: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_DESERT";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_DESERT.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Des_Vojak01";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_CombatUniform_Des_tshirt: U_B_CombatUniform_mcam_tshirt // Tričko
    {
        displayName = "$STR_ACR_UNIFORM_DESERT_tshirt";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_DESERT_triko.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak02";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_CombatUniform_Des_vest: U_B_CombatUniform_mcam_vest // Rukávy
    {
        displayName = "$STR_ACR_UNIFORM_DESERT_vest";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_DESERT.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Des_Vojak03";
            containerClass = "Supply20";
            mass = 30;
        };
    };
    class U_ACR_A3_SniperGhillie: U_B_GhillieSuit // Sniper ghillie
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_ghillie.paa";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Sniper";
            containerClass = "Supply60";
            mass = 60;
        };
    };
    class U_ACR_A3_SniperGhillie_Des: U_B_GhillieSuit // Sniper ghillie poust
    {
        displayName = "$STR_ACR_UNIFORM_GHILLIE_DES";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_ghillie_des.paa";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Sniper_Des";
            containerClass = "Supply60";
            mass = 60;
        };
    };
	class U_ACR_A3_HeliPilotCoveralls_rgr: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_PILOT";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_pilot.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Pilot";
			containerClass = "Supply20";
			mass = 30;
		};
	};
    class U_ACR_A3_HeliPilotCoveralls_khk: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_PILOT_DES";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_pilot_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_pilot";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Pilot_des";
            containerClass = "Supply20";
            mass = 30;
        };
    };
	class U_ACR_A3_OfficerUniform_vz95: Uniform_Base
	{
		scope = 2;
		displayName = "$STR_ACR_UNIFORM_OFFICER";
		texture = "\acr_a3_characters\data\ACR_Uniforma_Offic.paa";
		picture = "\acr_a3_characters\data\UI\ikona_ACR_officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "$STR_ACR";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ACR_Dustojnik"; //znackablabla
			containerClass = "Supply20";
			mass = 30;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
    class U_ACR_A3_OfficerUniform_des: Uniform_Base
    {
        scope = 2;
        displayName = "$STR_ACR_UNIFORM_OFFICER_DES";
        texture = "\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_officer_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "$STR_ACR";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Dustojnik_des"; //znackablabla
            containerClass = "Supply20";
            mass = 30;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class U_ACR_A3_SweaterUniform_vz95: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR";
        displayName = "$STR_ACR_UNIFORM_SWEATER";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_svetr.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Neozbrojeny";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_ACR_A3_SweaterUniform_des: Uniform_Base
    {
        scope = 2;
        author = "$STR_ACR";
        displayName = "$STR_ACR_UNIFORM_SWEATER_DES";
        picture = "\acr_a3_characters\data\UI\ikona_ACR_svetr_des.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "ACR_Neozbrojeny_des";
            containerClass = "Supply30";
            mass = 30;
        };
    };
};
class cfgVehicles
{
	class B_Soldier_F;
    class B_Soldier_base_F;
    class B_Soldier_02_f;
    class B_Soldier_03_f;
    class Man;
	class B_Carryall_mcamo;
	class B_Kitbag_cbr;
	class B_spotter_F;
	class B_sniper_F;
	class ACR_A3_Backpack_Carryall_vz95: B_Carryall_mcamo
	{
		scope = 2;
		displayName = "$STR_ACR_BACKPACK"; //mel 2 textury na batoh ale ma v configu jen 1 wtf?
		picture = "\acr_a3_characters\data\UI\ikona_ACR_batoh02.paa"; //ikona
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Batoh02.paa"};
		author = "$STR_ACR";
	};
	class ACR_A3_Backpack_Kitbag_vz95: B_Kitbag_cbr {
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "$STR_ACR_KITBAG";
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Batoh.paa"};
		picture = "\acr_a3_characters\data\UI\ikona_ACR_batoh02.paa"; //ikona
		author = "$STR_ACR";
        maximumLoad = 200;
        mass = 25;
    };

    // Base Classy
    class ACR_Underwear_Character: B_Soldier_base_F //The soldier who appears wearing your underwear class
    {
        scope = 0;//1 = private and ensures it doesnt list as a character in the editor
        displayName = "ACR Example Underwear Character";
		identitytypes[] = {"Head_Euro"};
        model = "\A3\Characters_F\Common\basicbody";
		genericNames = "CzechMen";
        uniformClass = "ACR_blk_BasicBody"; //Your underwear class in cfgweapons
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
        items[] = {};
        linkeditems[] = {};
        respawnlinkeditems[] = {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Basicbody.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };

    // vz.95 Specialni
	class ACRP_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak02: B_Soldier_F
	{
		_generalMacro = "B_Soldier_GL_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_ACR_MEN_COM";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak03: B_Soldier_F
	{
		_generalMacro = "B_soldier_AR_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManMG";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		head = "H_ACR_A3_Booniehat_vz95";
		displayName = "$STR_B_SOLDIER_M_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_Booniehat_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_Booniehat_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		identitytypes[] = {"Head_Euro"};
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_TL_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "B_Bergen_sgg";
		displayName = "$STR_B_ENGINEER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACRP_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX0"; //RECON
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_AT_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_ACR_A3_Booniehat_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_ACR_A3_Booniehat_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManAT";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};


	// vz.95 Lesni
	class ACR_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_ACR_MEN_COM";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_tshirt";
		weapons[] = {"ACR_A3_Sa58RIS2","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS2","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        hiddenSelections[] = {"camo", "camo2", "insignia"};
        hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa","\acr_a3_characters\data\ACR_Basicbody.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_vest";
		weapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr";
		head = "H_ACR_A3_HelmetIA_vz95";
		displayName = "$STR_B_SOLDIER_M_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		identitytypes[] = {"Head_Euro"};
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_TL_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Bergen_sgg";
		displayName = "$STR_B_ENGINEER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "B_Kitbag_Base";
		displayName = "$STR_B_SOLDIER_AT_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS2","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS2","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetIA_vz95","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManAT";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Vojak12: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX01"; //LESNI
		backpack = "ACR_A3_Backpack_Carryall_vz95";
		displayName = "$STR_B_SOLDIER_RECON_BASE0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform";
		weapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_Booniehat_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};


	// vz.95 MOUT
	class ACR_MOUT_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0";
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
	    hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_ACR_MEN_COM";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_tshirt";
		weapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT_vest";
		weapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		head = "H_ACR_A3_HelmetB_rgr";
		displayName = "$STR_B_SOLDIER_M_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		identitytypes[] = {"Head_Euro"};
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_B_SOLDIER_TL_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Bergen_sgg";
		displayName = "$STR_B_ENGINEER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_MOUT_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX02"; //MOUT
		backpack = "B_Kitbag_Base";
		displayName = "$STR_B_SOLDIER_AT_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_MOUT";
		weapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"ACR_A3_CZ805_A1","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio","UU_TSW_H_Optic"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManAT";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};

	// vz.95 Poust
	class ACR_Des_Vojak01: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_A3_CFGVEHICLES_B_SOLDIER_F0";
		genericNames = "CzechMen";
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak02: B_Soldier_02_f
	{
		_generalMacro = "B_Soldier_GL_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_ACR_MEN_COM";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
		weapons[] = {"ACR_A3_Sa58RIS1_camo","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1_camo","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		hiddenSelections[] = {"camo", "camo2", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa","\acr_a3_characters\data\ACR_Basicbody_des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak03: B_Soldier_03_f
	{
		_generalMacro = "B_soldier_AR_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		displayName = "$STR_B_SOLDIER_AR_F0";
		genericNames = "CzechMen";
		backpack = "B_AssaultPack_rgr";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des_vest";
		weapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_lmg_M60E4","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManMG";
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsMaterials[] = {"\acr_a3_characters\data\ACR_Uniforma.rvmat"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Des.paa"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak04: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		head = "H_HelmetB_light_sand";
		displayName = "$STR_B_SOLDIER_M_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak05: B_Soldier_F
	{
		_generalMacro = "B_medic_F";
		identitytypes[] = {"Head_Euro"};
		attendant = "true";
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr_Medic";
		displayName = "$STR_B_MEDIC_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"ACR_A3_Sa58RIS1_camo","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS1_camo","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		icon = "iconManMedic";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak06: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_AssaultPack_rgr";
		displayName = "$STR_B_SOLDIER_TL_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManLeader";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_O_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak07: B_Soldier_F
	{
		_generalMacro = "B_soldier_exp_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Bergen_sgg";
		displayName = "$STR_B_ENGINEER_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_Goggles_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		engineer = 1;
		icon = "iconManEngineer";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class ACR_Des_Vojak10: B_Soldier_F
	{
		_generalMacro = "B_soldier_M_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX03"; //POUST
		backpack = "B_Kitbag_Base";
		displayName = "$STR_B_SOLDIER_AT_F0";
		genericNames = "CzechMen";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_CombatUniform_Des";
		weapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		respawnWeapons[] = {"ACR_A3_Sa58RIS2_camo","acr_a3_P07","Throw","Put","Binocular","launch_NLAW_F"};
		magazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		respawnMagazines[] = {"ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","ACR_A3_30Rnd_Sa58_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","NLAW_F","NLAW_F"};
		linkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_ACR_A3_PlateCarrierIA2_vz95","H_ACR_A3_HelmetIA_vz95_des","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManAT";
		canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
        };
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};

	// Ostatni
    class ACR_Sniper: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_B_SPOTTER_F0";
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie";
		model = "\A3\characters_f\Common\ghillie.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_ghillie.paa"};
        weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
        respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
        linkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        canDeactivateMines = "true";
        camouflage = 0.6;
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class ACR_Sniper2: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identitytypes[] = {"Head_Euro"};
        faction = "ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_B_SNIPER_F0";
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie";
        weapons[] = {"srifle_LRR_SOS_F","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_SOS_F","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        linkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        canDeactivateMines = "true";
        camouflage = 0.6;
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class ACR_Sniper_Des: B_spotter_F
    {
        _generalMacro = "B_spotter_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        displayName = "$STR_ACR_SPOTTER_DES";
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        model = "\A3\characters_f\Common\ghillie.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_ghillie_des.paa"};
        weapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Black_F","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
        Items[] = {"optic_hamr","FirstAidKit","ItemRadio"};
        respawnItems[] = {"optic_hamr","FirstAidKit","ItemRadio"};
        linkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        canDeactivateMines = "true";
        camouflage = 0.6;
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class ACR_Sniper2_Des: B_sniper_F
    {
        _generalMacro = "B_sniper_F";
		identitytypes[] = {"Head_Euro"};
        faction = "ACR";
        vehicleClass = "ACRX04"; //SNIPERI
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_ACR_SNIPER_DES";
        genericNames = "CzechMen";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SniperGhillie_des";
        weapons[] = {"srifle_LRR_SOS_F","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_SOS_F","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","ClaymoreDirectionalMine_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","Chemlight_green","Chemlight_green"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        linkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_headphones","V_ACR_A3_PlateCarrierIA2_vz95","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        canDeactivateMines = "true";
        camouflage = 0.6;
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };

	class ACR_Pilot: B_Soldier_F
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_HELIPILOT_F0";
		genericNames = "CzechMen";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_HeliPilotCoveralls_rgr";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Pilot.paa"};
		weapons[] = {"SMG_02_ACO_F","acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
		linkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		canDeactivateMines = "true";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
    class ACR_Pilot_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_HELIPILOT_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_HeliPilotCoveralls_khk";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Pilot_des.paa"};
        weapons[] = {"SMG_02_ACO_F","acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"SMG_02_ACO_F","acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVestIR_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        canDeactivateMines = "true";
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
	class ACR_Dustojnik: B_Soldier_F //znackablabla
	{
		_generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
		scope = 2;
		scopeCurator = 2;
		faction = "ACR";
		vehicleClass = "ACRX00"; //zaklad
		displayName = "$STR_B_OFFICER_F0";
		genericNames = "CzechMen";
		model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
		uniformAccessories[] = {};
		nakedUniform = "ACR_blk_BasicBody";
		uniformClass = "U_ACR_A3_OfficerUniform_vz95";
		weapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		respawnlinkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
		Items[] = {"FirstAidKit","ItemRadio"};
		respawnItems[] = {"FirstAidKit","ItemRadio"};
		icon = "iconManOfficer";
		canDeactivateMines = "true";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Offic.paa","\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
    class ACR_Dustojnik_des: B_Soldier_F //znackablabla
    {
        _generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_OFFICER_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_beta\indep\ia_officer.p3d";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_OfficerUniform_des";
        weapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"acr_a3_P07","Throw","Put","Rangefinder"};
        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","H_ACR_A3_Beret_red","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        icon = "iconManOfficer";
        canDeactivateMines = "true";
        hiddenSelections[] = {"Camo1","Camo2","insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Offic_des.paa","\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class ACR_Neozbrojeny: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
		scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_B_SOLDIER_LITE_F0";
		genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_vz95";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Svetr.paa"};
        weapons[] = {"Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Throw","Put","Rangefinder"};
        magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
    class ACR_Neozbrojeny_des: B_Soldier_F
    {
        _generalMacro = "B_Soldier_F";
		identitytypes[] = {"Head_Euro"};
        scope = 2;
        scopeCurator = 2;
        faction = "ACR";
        vehicleClass = "ACRX00"; //zaklad
        displayName = "$STR_ACR_SOLDIER_LITE_DES";
        genericNames = "CzechMen";
        model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
        uniformAccessories[] = {};
        nakedUniform = "ACR_blk_BasicBody";
        uniformClass = "U_ACR_A3_SweaterUniform_des";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {"\acr_a3_characters\data\ACR_Uniforma_Svetr_des.paa"};
        weapons[] = {"Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Throw","Put","Rangefinder"};
        magazines[] = {"Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Chemlight_green","Chemlight_green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
        Items[] = {"FirstAidKit","ItemRadio"};
        respawnItems[] = {"FirstAidKit","ItemRadio"};
        canDeactivateMines = "true";
        class eventHandlers
        {
            init = "[_this select 0,'ACR_Flag'] call BIS_fnc_setUnitInsignia;";
        };
        class UniformInfo
        {
            class SlotsInfo
            {
                class NVG: UniformSlotInfo
                {
                    slotType = 602;
                };
                class Scuba: UniformSlotInfo
                {
                    slotType = 604;
                };
                class Headgear: UniformSlotInfo
                {
                    slotType = 605;
                };
            };
        };
    };
};
class CfgUnitInsignia
{
    class ACR_Flag
    {
        displayName = "$STR_ACR_FLAG";
        texture = "\acr_a3_characters\data\insignia\acr_flag.paa";
        author = "$STR_ACR";
    };
    class ACR_Medic
    {
        displayName = "$STR_ACR_MEDIC";
        texture = "\acr_a3_characters\data\insignia\acr_medic.paa";
        author = "$STR_ACR";
    };
	class ACR_Patch
	{
		displayName = "$STR_ACR_LOGO1";
		texture = "\acr_a3_characters\data\insignia\acr_patch.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch2
	{
		displayName = "$STR_ACR_LOGO2";
		texture = "\acr_a3_characters\data\insignia\acr_patch2.paa";
		author = "$STR_ACR";
	};
    class ACR_Patch3
	{
		displayName = "$STR_ACR_LOGO3";
		texture = "\acr_a3_characters\data\insignia\acr_patch3.paa";
		author = "$STR_ACR";
	};

    // Krev
    class ACR_Patch_A_Neg
    {
        displayName = "[AČR] A Neg";
        texture = "\acr_a3_characters\data\insignia\blood\A_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_A_Pos
    {
        displayName = "[AČR] A Pos";
        texture = "\acr_a3_characters\data\insignia\blood\A_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_B_Neg
    {
        displayName = "[AČR] B Neg";
        texture = "\acr_a3_characters\data\insignia\blood\B_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_B_Pos
    {
        displayName = "[AČR] B Pos";
        texture = "\acr_a3_characters\data\insignia\blood\B_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_AB_Neg
    {
        displayName = "[AČR] AB Neg";
        texture = "\acr_a3_characters\data\insignia\blood\AB_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_AB_Pos
    {
        displayName = "[AČR] AB Pos";
        texture = "\acr_a3_characters\data\insignia\blood\AB_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_O_Neg
    {
        displayName = "[AČR] O Neg";
        texture = "\acr_a3_characters\data\insignia\blood\O_Neg.paa";
        author = "$STR_ACR";
        scope = 0;
    };
    class ACR_Patch_O_Pos
    {
        displayName = "[AČR] O Pos";
        texture = "\acr_a3_characters\data\insignia\blood\O_Pos.paa";
        author = "$STR_ACR";
        scope = 0;
    };
};
