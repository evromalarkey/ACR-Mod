////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.88
//Fri Jan 09 22:29:57 2015 : Source 'file' date Fri Jan 09 22:29:57 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class P:\acr_a3\acr_a3_vehicles\t72m4cz\config.bin{
class CfgPatches
{
	class CATracked_ACR_T72M4CZ
	{
		units[] = {"T72_ACR"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"acr_a3_vehicles","acr_a3_vehicles_c"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	class MBT_02_base_F: Tank_F {};
	class T72_ACR: MBT_02_base_F
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "Armored";
		model = "\acr_a3\acr_a3_vehicles\t72m4cz\T72_ACR.p3d";
		displayName = "T-72M4CZ";

		#include "physx.hpp"
		driveOnComponent[] = {};

		class Library
		{
			libTextDesc = "T-72M4CZ";
		};
		side = 1;
		faction = "ACR";
		crew = "ACR_neozbrojeny";
		typicalCargo[] = {"ACR_neozbrojeny"};
		LockDetectionSystem = 4;
		IncommingMisslieDetectionSystem = 16;
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_1_co.paa","\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_2_co.paa","\acr_a3\acr_a3_vehicles\t72m4cz\data\T72_3_co.paa"};
		armor = 745;
		damageResistance = 0.005;
		maxSpeed = 70;
		cost = 1200000;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_door1.wss",0.56234133,1};
		soundGetOut[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_door1.wss",0.56234133,1,60};
		soundEngineOnInt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_start1.wss",1.0,1.0};
		soundEngineOnExt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_start1.wss",2.5118864,1.0,500};
		soundEngineOffInt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_stop1.wss",1.0,1.0};
		soundEngineOffExt[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_stop1.wss",1.0,1.0,500};
		buildCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_01.wss",0.70794576,1,150};
		buildCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_02.wss",0.70794576,1,150};
		buildCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_03.wss",0.70794576,1,150};
		buildCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_building_04.wss",0.70794576,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_01.wss",0.70794576,1,150};
		WoodCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_02.wss",0.70794576,1,150};
		WoodCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_03.wss",0.70794576,1,150};
		WoodCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_wood_04.wss",0.70794576,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_01.wss",0.70794576,1,150};
		ArmorCrash1[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_02.wss",0.70794576,1,150};
		ArmorCrash2[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_03.wss",0.70794576,1,150};
		ArmorCrash3[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\tank_vehicle_04.wss",0.70794576,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_acceleration1.wss",1.7782794,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-d_acceleration1.wss",1.7782794,1.0,650};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
/*		class Sounds
		{
			class Engine
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_high1.wss",1.7782794,1.0,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_outside-m_idle1.wss",0.56234133,1.0,300};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\noise-outside.wss",1.0,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_hard_01.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_hard_02.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_hard_03.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_hard_04.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_hard_05.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_soft_01.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_soft_02.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_soft_03.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_soft_04.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\ext_treads_soft_05.wss",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1.0,1.0};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_high1.wss",1.0,1.0};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\T72_inside_idle1.wss",1.7782794,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\noise-inside.wss",0.15848932,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_hard_01.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_hard_02.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_hard_03.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_hard_04.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_hard_05.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_soft_01.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_soft_02.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_soft_03.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_soft_04.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"acr_a3\acr_a3_vehicles\t72m4cz\Sounds\int_treads_soft_05.wss",1.0,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};*/
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track_damage.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_track_destruct.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1_damage.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_1_destruct.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2_damage.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_2_destruct.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3_damage.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\t72_3_destruct.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\dshk.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\dshk_damage.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\dshk_destruct.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\default.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\default.rvmat","acr_a3\acr_a3_vehicles\t72m4cz\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"D81CZ","PKT"};
				magazines[] = {"22Rnd_125mmSABOT_IMI","15Rnd_125mmHE_T72CZ","2000Rnd_762x54_PKT"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						discreteDistance[] = {100,200,300,400,500,600,700,800};
						discreteDistanceInitIndex = 2;
						stabilizedInAxes = "StabilizedInAxesBoth";
						maxHorizontalRotSpeed = 2.0;
						maxVerticalRotSpeed = 2.0;
						gunnerOpticsModel = "\acr_a3\acr_a3_vehicles\t72m4cz\2Dscope_RWS.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
						weapons[] = {"KORD","SmokeLauncher"};
						magazines[] = {"150Rnd_127x108_KORD","150Rnd_127x108_KORD","150Rnd_127x108_KORD","150Rnd_127x108_KORD","SmokeLauncherMag","SmokeLauncherMag"};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "KORD";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "KORD";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "KORD";
			};
		};
/*		class TransportWeapons
		{
			class _xx_Sa58V_EP1
			{
				weapon = "Sa58V_EP1";
				count = "2*1";
			};
			class _xx_Sa58V_CCO_EP1
			{
				weapon = "Sa58V_CCO_EP1";
				count = 1;
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = "6*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "6*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "2*1";
			};
		};
*/		
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
};
//};
