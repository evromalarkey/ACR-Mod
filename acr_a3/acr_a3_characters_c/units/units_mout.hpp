class acr_a3_soldier_01_mout: acr_a3_soldier_01
{
    vehicleClass = "ACRX02"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_GL_mout: acr_a3_soldier_GL // Granátometčík
{
    vehicleClass = "ACRX02"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_tshirt";
    weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_AR_mout: acr_a3_soldier_AR
{
    vehicleClass = "ACRX02"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_vest";
    weapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_M60E4","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    respawnMagazines[] = {"acr_a3_100Rnd_762x51_B_M60E4","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    hiddenSelectionsMaterials[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.rvmat"};
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'CUP_B_ACRScout_m95';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_soldier_M_mout: acr_a3_soldier_M
{
    vehicleClass = "ACRX02"; //MOUT
    backpack = "B_AssaultPack_rgr";
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A1_MRCO_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"H_ACR_A3_HelmetB_rgr","NVGoggles_OPFOR","V_ACR_A3_PlateCarrier2_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_medic_mout: acr_a3_soldier_medic
{
    vehicleClass = "ACRX02"; //MOUT
    backpack = "B_AssaultPack_rgr_Medic"; // Zdravotník
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_TL_mout: acr_a3_soldier_TL
{
    vehicleClass = "ACRX02"; //MOUT
    backpack = "B_Carryall_oli";
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    respawnWeapons[] = {"acr_a3_CZ805_GL_Hamr_Laser","acr_a3_P07","Throw","Put","Rangefinder"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareGreen_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareRed_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_repair_mout: acr_a3_soldier_repair
{
    vehicleClass = "ACRX02"; //MOUT
    backpack = "";
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_Aco_Laser","acr_a3_P07","Throw","Put","Binocular"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","Chemlight_green","Chemlight_green"};
    linkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"NVGoggles_OPFOR","V_ACR_A3_PlateCarrier1_rgr","H_ACR_A3_HelmetIA_vz952","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Kitbag_rgr';_unit addItem 'ToolKit';";
    };
};
class acr_a3_soldier_MAT_mout: acr_a3_soldier_MAT
{
    vehicleClass = "ACRX02"; //MOUT
    backpack = "ACR_A3_B_AssaultPack_rgr_LAT";
    uniformClass = "U_ACR_A3_CombatUniform_MOUT";
    weapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    respawnWeapons[] = {"acr_a3_CZ805_A2_MRCO_Laser","Throw","Put","Binocular","CUP_launch_MAAWS_Scope"};
    magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell","HandGrenade","CUP_MAAWS_HEAT_M"};
    linkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    respawnlinkedItems[] = {"V_ACR_A3_PlateCarrier1_rgr","NVGoggles_OPFOR","H_ACR_A3_HelmetB_rgr","ItemMap","ItemCompass","ItemWatch","ItemGPS","ItemRadio"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};

// vz.95 MOUT DES
class acr_a3_soldier_01_mout_des: acr_a3_soldier_01_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_GL_mout_des: acr_a3_soldier_GL_mout // Granátometčík
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_Des_tshirt";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_AB_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_AR_mout_des: acr_a3_soldier_AR_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des_vest";
    hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_characters\data\ACR_Uniforma_MOUT_des.paa"};
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Neg'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_AssaultPack_rgr';_unit addMagazines ['acr_a3_100Rnd_762x51_B_M60E4',3];";
    };
};
class acr_a3_soldier_M_mout_des: acr_a3_soldier_M_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_medic_mout_des: acr_a3_soldier_medic_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Medic'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_TL_mout_des: acr_a3_soldier_TL_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_A_Neg'] call BIS_fnc_setUnitInsignia;";
    };
};
class acr_a3_soldier_repair_mout_des: acr_a3_soldier_repair_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;_unit addBackpack 'B_Kitbag_rgr';_unit addItem 'ToolKit';";
    };
};
class acr_a3_soldier_MAT_mout_des: acr_a3_soldier_MAT_mout
{
    vehicleClass = "ACRX02_DES"; //MOUT
    uniformClass = "U_ACR_A3_CombatUniform_MOUT_Des";
    class eventHandlers
    {
        init = "_unit = _this select 0;[_unit,'ACR_Patch_B_Pos'] call BIS_fnc_setUnitInsignia;";
    };
};