class CfgPatches
{
	class acr_a3_characters_c
	{
		units[] = {"ACR_A3_GearBox","ACR_A3_Backpack_Carryall_vz95","ACR_A3_Backpack_Kitbag_vz95","B_ACR_A3_Recon","B_ACR_A3_Recon_JTAC","B_ACR_A3_Recon_exp","B_ACR_A3_Recon_AR","B_ACR_A3_Recon_M","B_ACR_A3_Recon_medic","B_ACR_A3_Recon_MAT","B_ACR_A3_Recon_TL","B_ACR_A3_Recon_TL_des","B_ACR_A3_Recon_des","B_ACR_A3_Recon_JTAC_des","B_ACR_A3_Recon_AR_des","B_ACR_A3_Recon_M_des","B_ACR_A3_Recon_medic_des","B_ACR_A3_Recon_exp_des","B_ACR_A3_Recon_MAT_des","B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_GL","B_ACR_A3_Soldier_repair","B_ACR_A3_Soldier_AR","B_ACR_A3_Soldier_M","B_ACR_A3_Soldier_medic","B_ACR_A3_Spotter","B_ACR_A3_Sniper","B_ACR_A3_Spotter_des","B_ACR_A3_Sniper_des","B_ACR_A3_Soldier_MAT","B_ACR_A3_Soldier_TL","B_ACR_A3_Soldier_SL","B_ACR_A3_Soldier_SL_des","ACR_Vojak12","B_ACR_A3_Soldier_01_mout","B_ACR_A3_Soldier_GL_mout","B_ACR_A3_Soldier_repair_mout","B_ACR_A3_Soldier_AR_mout","B_ACR_A3_Soldier_M_mout","B_ACR_A3_Soldier_medic_mout","B_ACR_A3_Soldier_MAT_mout","B_ACR_A3_Soldier_TL_mout","B_ACR_A3_Soldier_01_mout_des","B_ACR_A3_Soldier_GL_mout_des","B_ACR_A3_Soldier_repair_mout_des","B_ACR_A3_Soldier_AR_mout_des","B_ACR_A3_Soldier_M_mout_des","B_ACR_A3_Soldier_medic_mout_des","B_ACR_A3_Soldier_MAT_mout_des","B_ACR_A3_Soldier_TL_mout_des","B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_GL_des","B_ACR_A3_Soldier_repair_des","B_ACR_A3_Soldier_AR_des","B_ACR_A3_Soldier_M_des","B_ACR_A3_Soldier_medic_des","B_ACR_A3_Soldier_MAT_des","B_ACR_A3_Soldier_TL_des","B_ACR_A3_Pilot","B_ACR_A3_Officer","B_ACR_A3_Soldier_lite","B_ACR_A3_Pilot_des","B_ACR_A3_Officer_des","B_ACR_A3_Soldier_lite_des","B_ACR_A3_diver","B_ACR_A3_diver_TL","B_ACR_A3_diver_exp","B_ACR_A3_crew","B_ACR_A3_crew_des","B_ACR_A3_Soldier_AA","B_ACR_A3_Soldier_AA_des"};
		weapons[] = {"V_ACR_A3_PlateCarrierIA2_vz95","V_ACR_A3_PlateCarrier1_vz95","V_ACR_A3_PlateCarrier2_vz95","V_ACR_A3_PlateCarrier1_rgr","V_ACR_A3_PlateCarrier2_rgr","V_ACR_A3_PlateCarrier1_khk","V_ACR_A3_PlateCarrier2_khk","H_ACR_A3_HelmetIA_vz95","H_ACR_A3_HelmetIA_vz95_des","H_ACR_A3_HelmetB_rgr","H_ACR_A3_Beret_red","H_ACR_A3_Booniehat_vz95","H_ACR_A3_Cap_rgr","U_ACR_A3_CombatUniform","U_ACR_A3_CombatUniform_tshirt","U_ACR_A3_CombatUniform_vest","U_ACR_A3_CombatUniform_MOUT","U_ACR_A3_CombatUniform_MOUT_vest","U_ACR_A3_CombatUniform_Des","U_ACR_A3_CombatUniform_Des_tshirt","U_ACR_A3_CombatUniform_Des_vest","U_ACR_A3_HeliPilotCoveralls_rgr","U_ACR_A3_OfficerUniform_vz95","U_ACR_A3_SweaterUniform_vz95","U_ACR_A3_HeliPilotCoveralls_khk","U_ACR_A3_OfficerUniform_des","U_ACR_A3_SweaterUniform_des","U_ACR_A3_SniperGhillie","U_ACR_A3_SniperGhillie_Des","U_ACR_A3_CombatUniform_MOUT_Des","U_ACR_A3_CombatUniform_MOUT_Des_vest"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR","CUP_Weapons_Backpacks","acr_a3_dubbingradio"};
	};
};
class GenericNames
{
    #include "CzechMen.hpp"
};
class UniformSlotInfo;

#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"
#include "cfgGroups.hpp"
#include "CfgUnitInsignia.hpp"