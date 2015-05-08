class CfgPatches
{
	class acr_a3_landrover_c
	{
		units[] = {"ACR_A3_LandRover","ACR_A3_LandRover_Des","ACR_A3_LandRover_MG","ACR_A3_LandRover_MG_Des","ACR_A3_LandRover_Special","ACR_A3_LandRover_Special_Des","ACR_A3_LandRover_Ambulance","ACR_A3_LandRover_Ambulance_Des"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponCloudsMGun;
class CfgWeapons
{
	class ACR_A3_PKT;
	class ACR_A3_PKT_LR: ACR_A3_PKT
	{
		magazines[] = {"ACR_A3_1500Rnd_762x54_PKT","ACR_A3_2000Rnd_762x54_PKT","ACR_A3_250Rnd_762x54_PKT","ACR_A3_200Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT"};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne_2";
				directionName = "usti hlavne_2";
				effectName = "MachineGunCloud";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class ACR_A3_LandRover_Base: Car_F
	{
		side = 1;
		vehicleClass = "Car";
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
		scope = 0;
		displayname = "$STR_acr_a3_landrover";
		armor = 50;
		armorWheels = 0.2;
		damageResistance = 0.00719;
		model = "\acr_a3\acr_a3_landrover\LR_ACR.p3d";
		Picture = "\acr_a3\acr_a3_landrover\data\Picture_lr_CA.paa";
		Icon = "\acr_a3\acr_a3_landrover\data\Icon_lr_transport_CA.paa";
		MapSize = 6;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.9;
		crewVulnerable = 1;
		crewCrashProtection = 0.15;
		wheelDestroyRadiusCoef = 0.75;
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		nameSound = "veh_car";
		accuracy = 0.25;
		fuelExplosionPower = 2;
		cost = 50000;
		weapons[] = {"SportCarHorn"};
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		dustFrontLeftPos = "stopa PLL";
		dustFrontRightPos = "stopa PPP";
		dustBackLeftPos = "stopa ZLL";
		dustBackRightPos = "stopa ZPP";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		maximumLoad = 4000;

        //PhyshX
        #include "physx.hpp"


		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		soundGear[] = {"","db-85",1};
		soundDammage[] = {"",0.56234133,1};
		soundGetIn[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_door.wss","db0",1};
		soundGetOut[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_door.wss","db0",1,30};
		soundEngineOnInt[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_int_start.wss","db0",1.0};
		soundEngineOnExt[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_ext_start.wss","db0",1.0,100};
		soundEngineOffInt[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_int_stop.wss","db0",1.0};
		soundEngineOffExt[] = {"\acr_a3\acr_a3_landrover\Sounds\LRover_ext_stop.wss","db0",1.0,100};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle",0.31622776,1,100};
				frequency = "0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1",0.31622776,1,200};
				frequency = "0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2",0.35481337,1,225};
				frequency = "0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3",0.35481337,1,250};
				frequency = "0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4",0.39810717,1,275};
				frequency = "0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5",0.4466836,1,300};
				frequency = "0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6",0.5011872,1,300};
				frequency = "0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7",0.56234133,1,300};
				frequency = "0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume = "engineOn*camPos*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle",0.5011872,1,200};
				frequency = "0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1",0.56234133,1,250};
				frequency = "0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2",0.63095737,1,275};
				frequency = "0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3",0.70794576,1,300};
				frequency = "0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4",0.7943282,1,325};
				frequency = "0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5",0.8912509,1,350};
				frequency = "0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6",1.0,1,375};
				frequency = "0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7",1.1220185,1,400};
				frequency = "0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle",0.2238721,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1",0.25118864,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2",0.17782794,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3",0.31622776,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4",0.35481337,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5",0.39810717,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6",0.39810717,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7",0.4466836,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle",0.31622776,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(200/ 3500),(580/ 3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(200/ 3500),(350/ 3500)]) * ((rpm/ 3500) factor[(580/ 3500),(400/ 3500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1",0.35481337,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(380/ 3500),(960/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(380/ 3500),(580/ 3500)]) * ((rpm/ 3500) factor[(960/ 3500),(700/ 3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2",0.39810717,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(700/ 3500),(1400/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(700/ 3500),(970/ 3500)]) * ((rpm/ 3500) factor[(1400/ 3500),(1100/ 3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3",0.4466836,1};
				frequency = "0.9 + ((rpm/ 3500) factor[(1100/ 3500),(1860/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1100/ 3500),(1430/ 3500)]) * ((rpm/ 3500) factor[(1860/ 3500),(1570/ 3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4",0.5011872,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(1600/ 3500),(2200/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(1600/ 3500),(1860/ 3500)]) * ((rpm/ 3500) factor[(2200/ 3500),(2050/ 3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5",0.56234133,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2040/ 3500),(2670/ 3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2040/ 3500),(2200/ 3500)]) * ((rpm/ 3500) factor[(2670/ 3500),(2400/ 3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6",0.63095737,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2400/ 3500),(3050/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 3500) factor[(2400/ 3500),(2660/ 3500)]) * ((rpm/ 3500) factor[(3050/ 3500),(2800/ 3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7",0.70794576,1};
				frequency = "0.95 + ((rpm/ 3500) factor[(2700/ 3500),(3500/ 3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 3500) factor[(2700/ 3500),(3200/ 3500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.56234133,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.15848932,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover";
		};
		transportSoldier = 7;
		transportMaxBackpacks = 5;
		driverAction = "Driver_High01";
		cargoAction[] = {"passenger_generic01_foldhands","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03"};
		cargoIsCoDriver[] = {1,0};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right
			{
				useFlare = 1;
				position = "P svetlo";
			};
			class Left2: Left
			{
				useFlare = 1;
				position = "L svetlo";
			};
		};
		class Exhausts
		{
			class Exhaust
			{
				effect = "ExhaustEffectOffroad";
				position = "vyfuk start";
				direction = "vyfuk konec";
			};
		};
		hiddenSelections[] = {};
		threat[] = {0.5,0.5,0.1};
	};
	class ACR_A3_LandRover_MG_Base: ACR_A3_LandRover_Base
	{
		model = "\acr_a3\acr_a3_landrover\LR_MG.p3d";
		Picture = "\acr_a3\acr_a3_landrover\data\Picture_lr_mg_CA.paa";
		Icon = "\acr_a3\acr_a3_landrover\data\Icon_lr_mg_CA.paa";
		transportSoldier = 0;
		cargoAction[] = {"passenger_generic01_foldhands"};
		threat[] = {1,0.1,0.3};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.51;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_landrover\data\LR_base.rvmat","acr_a3\acr_a3_landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_glass.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_MG-SPG9.rvmat","acr_a3\acr_a3_landrover\data\LR_MG-SPG9_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_MG-SPG9_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerName = "Passenger (Front Right Seat)";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				proxyIndex = 1;
				gunnerDoor = "Door_RF";
				maxElev = 45;
				minElev = -35;
				maxTurn = 41;
				minTurn = -95;
				isPersonTurret = 1;
				gunnerUsesPilotView = 0;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-105,40};
				};
			};
			class MainTurret: MainTurret
			{
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				weapons[] = {"HMG_M2"};
				minElev = -25;
				maxElev = "+60";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1.0};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				gunnerAction = "gunner_standup01";
				gunnerInAction = "gunner_standup01";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				class ViewOptics: ViewOptics
				{
					initFov = 0.8;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "HMG_M2";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover_MG";
		};
	};
	class ACR_A3_LandRover: ACR_A3_LandRover_Base
	{
		displayname = "$STR_acr_a3_landrover";
		scope = 2;
		side = 1;
		vehicleClass = "Car";
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
		enableGPS = 1;
		cargoProxyIndexes[] = {1,2,3,4,5};
		transportSoldier = 5;
		driverAction = "driver_offroad01";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 10;
				minElev = -30;
				maxTurn = -20;
				minTurn = -105;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 7;
				maxTurn = 95;
				minTurn = 20;
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.15;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_landrover\data\LR_base.rvmat","acr_a3\acr_a3_landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_glass.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_Special.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class ACR_A3_LandRover_Des: ACR_A3_LandRover_Base
	{
		displayname = "$STR_acr_a3_landrover_des";
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		cargoProxyIndexes[] = {1,2,3,4,5};
		transportSoldier = 5;
		driverAction = "driver_offroad01";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 10;
				minElev = -30;
				maxTurn = -20;
				minTurn = -105;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 7;
				maxTurn = 95;
				minTurn = 20;
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.15;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_landrover\data\LR_base.rvmat","acr_a3\acr_a3_landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_glass.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_Special.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_landrover\data\lr_base_acrs_co.paa","acr_a3\acr_a3_landrover\data\lr_special_acr_co.paa"};
	};
	class ACR_A3_LandRover_MG: ACR_A3_LandRover_MG_Base
	{
		displayname = "$STR_acr_a3_landrover_mg";
		scope = 2;
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01"};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
	class ACR_A3_LandRover_MG_Des: ACR_A3_LandRover_MG_Base
	{
		displayname = "$STR_acr_a3_landrover_mg_des";
		scope = 2;
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des"};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_landrover\data\lr_base_acrs_co.paa","acr_a3\acr_a3_landrover\data\lr_special_acr_co.paa"};
	};
	class ACR_A3_LandRover_Special: ACR_A3_LandRover_Base
	{
		scope = 2;
		side = 1;
		faction = "ACR_A3";
		crew = "B_ACR_A3_Soldier_01";
		typicalCargo[] = {"B_ACR_A3_Soldier_01","B_ACR_A3_Soldier_01"};
		model = "\acr_a3\acr_a3_landrover\LR_Special_ACR.p3d";
		displayname = "$STR_acr_a3_landrover_special";
		Picture = "\acr_a3\acr_a3_landrover\data\Picture_lr_special_CA.paa";
		Icon = "\acr_a3\acr_a3_landrover\data\Icon_lr_special_CA.paa";
		transportSoldier = 4;
		cargoProxyIndexes[] = {1,2,3,4};
		getInProxyOrder[] = {5,6,1,4,2,3};
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_apc_narrow_generic02"};
		threat[] = {1,0.2,0.3};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_landrover\data\LR_base.rvmat","acr_a3\acr_a3_landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_glass.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_Special.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos cargo 2";
				memoryPointsGetInGunnerDir = "pos cargo dir 2";
				gunnerName = "Passenger (Left Seat)";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				proxyIndex = 5;
				gunnerDoor = "Door_LB";
				maxElev = 45;
				minElev = -35;
				maxTurn = 95;
				minTurn = 18;
				isPersonTurret = 1;
				gunnerUsesPilotView = 0;
				class dynamicViewLimits {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo 1";
				memoryPointsGetInGunnerDir = "pos cargo dir 1";
				proxyIndex = 6;
				gunnerDoor = "Door_RB";
				maxTurn = -11;
				minTurn = -95;
				class dynamicViewLimits {};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerName = "Passenger (Back Seat)";
				memoryPointsGetInGunner = "pos cargo 3";
				memoryPointsGetInGunnerDir = "pos cargo dir 3";
				proxyIndex = 7;
				gunnerDoor = "Door_RB";
				maxTurn = 95;
				minTurn = -95;
				class dynamicViewLimits {};
			};
			class PK_Turret: MainTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
				commanding = 2;
				body = "mainTurret_2";
				gun = "mainGun_2";
				animationSourceBody = "mainTurret_2";
				animationSourceGun = "mainGun_2";
				proxyIndex = 2;
				gunBeg = "usti hlavne_2";
				gunEnd = "konec hlavne_2";
				memoryPointGunnerOptics = "gunnerview_2";
				minElev = -18;
				maxElev = "+40";
				minTurn = -45;
				maxTurn = "+45";
				initTurn = 0;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"ACR_A3_PKT_LR"};
				magazines[] = {"ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT"};
				soundServo[] = {};
				gunnerAction = "passenger_generic01_foldhands";
				gunnerInAction = "passenger_generic01_foldhands";
				ejectDeadGunner = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				memoryPointGun = "usti hlavne_2";
				selectionFireAnim = "zasleh";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.8;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
			};
			class MainTurret: MainTurret
			{
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				body = "mainTurret";
				gun = "mainGun";
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"GMG_40mm"};
				magazines[] = {"32Rnd_40mm_G_belt","32Rnd_40mm_G_belt","32Rnd_40mm_G_belt"};
				soundServo[] = {"\acr_a3\acr_a3_landrover\Sounds\turret-1.wss","db-30",1.0,15};
				minElev = -18;
				maxElev = 60;
				gunnerAction = "LR_Gunner01_EP1";
				gunnerInAction = "LR_Gunner01_EP1";
				ejectDeadGunner = 1;
				gunnerOpticsModel = "\acr_a3\acr_a3_landrover\optika_AGS30.p3d";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.8;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics{};
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "GMG_40mm";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "GMG_40mm";
			};
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "ACR_A3_PKT_LR";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "ACR_A3_PKT_LR";
			};
			class Revolving_2
			{
				source = "revolving";
				weapon = "ACR_A3_PKT_LR";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover_Special_CZ";
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class ACR_A3_LandRover_Special_Des: ACR_A3_LandRover_Special
	{
		model = "\acr_a3\acr_a3_landrover\LR_Special.p3d";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		displayname = "$STR_acr_a3_landrover_special_des";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
	class ACR_A3_LandRover_Ambulance: ACR_A3_LandRover_Base
	{
		scope = 2;
		vehicleClass = "Support";
		displayName = "$STR_acr_a3_landrover_ambulance";
		model = "\acr_a3\acr_a3_landrover\LR_AMB_ACR.p3d";
		attendant = 1;
		slingLoadCargoMemoryPoints[] = {};
		driverAction = "driver_offroad01";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_landrover\data\lr_amb_ext.rvmat","acr_a3\acr_a3_landrover\data\lr_amb_ext_damage.rvmat","acr_a3\acr_a3_landrover\data\lr_amb_ext_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_base.rvmat","acr_a3\acr_a3_landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_glass.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_landrover\data\LR_Special.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_landrover\data\LR_Special_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class TransportWeapons{};
	};
	class ACR_A3_LandRover_Ambulance_Des: ACR_A3_LandRover_Ambulance
	{
		displayName = "$STR_acr_a3_landrover_ambulance_des";
		vehicleClass = "Support";
		crew = "B_ACR_A3_Soldier_01_des";
		typicalCargo[] = {"B_ACR_A3_Soldier_01_des","B_ACR_A3_Soldier_01_des"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"acr_a3\acr_a3_landrover\data\lr_base_acrs_co.paa","acr_a3\acr_a3_landrover\data\lr_amb_ext_desert_co.paa","acr_a3\acr_a3_landrover\data\lr_special_acr_co.paa"};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
};
