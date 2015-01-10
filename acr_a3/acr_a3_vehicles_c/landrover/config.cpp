class CfgPatches
{
	class CAWheeled_ACR_LR
	{
		units[] = {"LandRover_ACR","LandRover_Ambulance_ACR","LandRover_Ambulance_Des_ACR"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponCloudsMGun;
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
            class MainTurret: NewTurret{};
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
	class acr_a3_LandRover_Base: Car_F
	{
		expansion = 1;
		enableManualFire = 0;
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 1;
		tBody = 250;
		scope = 0;
		displayname = "STR_EP1_DN_LandRover_Base";
		armor = 30;
		damageResistance = 0.00719;
		model = "\acr_a3\acr_a3_vehicles\landrover\LR.p3d";
		Picture = "\acr_a3\acr_a3_vehicles\landrover\data\Picture_lr_CA.paa";
		Icon = "\acr_a3\acr_a3_vehicles\landrover\data\Icon_lr_transport_CA.paa";
		MapSize = 6;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.9;

		//PhyshX
        #include "physx.hpp"

		soundGear[] = {"","db-85",1};
		soundGetIn[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_door.wss","db0",1};
		soundGetOut[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_door.wss","db0",1,30};
		soundEngineOnInt[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_start.wss","db0",1.0};
		soundEngineOnExt[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_start.wss","db0",1.0,100};
		soundEngineOffInt[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_stop.wss","db0",1.0};
		soundEngineOffExt[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_stop.wss","db0",1.0,100};
		buildCrash0[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_building_01.wss","db-3",1,150};
		buildCrash1[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_building_02.wss","db-3",1,150};
		buildCrash2[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_building_03.wss","db-3",1,150};
		buildCrash3[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_building_04.wss","db-3",1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_wood_01.wss","db-3",1,150};
		WoodCrash1[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_wood_02.wss","db-3",1,150};
		WoodCrash2[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_wood_03.wss","db-3",1,150};
		WoodCrash3[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_wood_04.wss","db-3",1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_vehicle_01.wss","db-3",1,150};
		ArmorCrash1[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_vehicle_02.wss","db-3",1,150};
		ArmorCrash2[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_vehicle_03.wss","db-3",1,150};
		ArmorCrash3[] = {"acr_a3\acr_a3_vehicles\landrover\Sounds\tank_vehicle_04.wss","db-3",1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_acceleration.wss","db-5",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_acceleration.wss","db-5",1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_low.wss","db3",0.6,200};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_high.wss","db3",0.6,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_ext_idle.wss","db-5",1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-rock2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-sand2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-grass3.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-mud2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-gravel2.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\ext-tires-asphalt3.wss","db-20",1.0,50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\noise3.wss","db-5",1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_low.wss","db3",0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_high.wss","db3",0.6};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\LRover_int_idle.wss","db-2",1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-rock2.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-sand2.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-grass3.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-mud2.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-gravel2.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\int-tires-asphalt3.wss","db-20",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\noise4.wss","db-10",1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LandRover";
		};
		transportSoldier = 7;
		driverAction = "LR_Driver_EP1";
		cargoAction[] = {"LR_Cargo01_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1","LR_Cargo05_EP1","LR_Cargo04_EP1","LR_Cargo02_EP1","LR_Cargo03_EP1"};
		cargoIsCoDriver[] = {1,0};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
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
		hiddenSelections[] = {};
		threat[] = {0.0,0.0,0.0};
	};
	class acr_a3_LandRover_CZ_EP1: acr_a3_LandRover_Base
	{
		scope = 2;
		side = 1;
		faction = "ACR";
		crew = "ACR_Des_Vojak01";
		typicalCargo[] = {"ACR_Des_Vojak01","ACR_Des_Vojak01"};
		class Turrets{};
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
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK47
			{
				magazine = "30Rnd_762x39_AK47";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
		};
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
	class acr_a3_LandRover_MG_Base_EP1: acr_a3_LandRover_Base
	{
		model = "\acr_a3\acr_a3_vehicles\landrover\LR_MG.p3d";
		displayname = "STR_EP1_DN_LandRover_MG_Base_EP1";
		Picture = "\acr_a3\acr_a3_vehicles\landrover\data\Picture_lr_mg_CA.paa";
		Icon = "\acr_a3\acr_a3_vehicles\landrover\data\Icon_lr_mg_CA.paa";
		transportSoldier = 1;
		cargoAction[] = {"LR_Cargo01_EP1"};
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
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_MG-SPG9.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_MG-SPG9_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_MG-SPG9_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"HMG_M2"};
				minElev = -25;
				maxElev = "+60";
				soundServo[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\servo3.wss","db-120",1.0};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				gunnerAction = "LR_Gunner_EP1";
				ejectDeadGunner = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
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
    class ACR_Offroad_HMG: acr_a3_LandRover_MG_Base_EP1
    {
        scope = 2;
        faction = "ACR";
        crew = "ACR_Vojak01";
        typicalCargo[] = {"ACR_Vojak01"};
    };
	class acr_a3_LandRover_Special_CZ_EP1: acr_a3_LandRover_Base
    {
        scope = 2;
        side = 1;
        faction = "ACR";
        crew = "ACR_Des_Vojak01";
        typicalCargo[] = {"ACR_Des_Vojak01","ACR_Des_Vojak01"};
        model = "\acr_a3\acr_a3_vehicles\landrover\LR_Special.p3d";
        displayname = "STR_EP1_DN_LandRover_Special_CZ_EP1";
        Picture = "\acr_a3\acr_a3_vehicles\landrover\data\Picture_lr_special_CA.paa";
        Icon = "\acr_a3\acr_a3_vehicles\landrover\data\Icon_lr_special_CA.paa";
        transportSoldier = 2;
        cargoIsCoDriver[] = {0};
        cargoAction[] = {"LR_Cargo03_EP1","LR_Cargo02_EP1"};
        threat[] = {1,0.2,0.3};
        class Damage
        {
            tex[] = {};
            mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                body = "mainTurret";
                gun = "mainGun";
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {"GMG_40mm"};
                magazines[] = {"96Rnd_40mm_G_belt","96Rnd_40mm_G_belt","96Rnd_40mm_G_belt"};
                soundServo[] = {"\acr_a3\acr_a3_vehicles\landrover\Sounds\turret-1.wss","db-30",1.0,15};
                minElev = -18;
				maxElev = 60;
                gunnerAction = "LR_Gunner01_EP1";
                gunnerInAction = "LR_Gunner01_EP1";
                ejectDeadGunner = 1;
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
                    initFov = 0.2;
                    minFov = 0.058;
                    maxFov = 0.2;
                };
                stabilizedInAxes = "StabilizedInAxesNone";
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
                weapons[] = {"ACR_A3_PKT"};
                magazines[] = {"ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT","ACR_A3_100Rnd_762x54_PKT"};
                soundServo[] = {};
                gunnerAction = "LR_Gunner02_EP1";
                gunnerInAction = "LR_Gunner02_EP1";
                ejectDeadGunner = 1;
                stabilizedInAxes = "StabilizedInAxesNone";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
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
                weapon = "ACR_A3_PKT";
            };
            class ReloadMagazine_2
            {
                source = "reloadmagazine";
                weapon = "ACR_A3_PKT";
            };
            class Revolving_2
            {
                source = "revolving";
                weapon = "ACR_A3_PKT";
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
	class acr_a3_LandRover_ACR: acr_a3_LandRover_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "Car";
		model = "\acr_a3\acr_a3_vehicles\landrover\LR_ACR.p3d";
		side = 1;
		faction = "ACR";
		crew = "ACR_Vojak01";
		typicalCargo[] = {"ACR_Vojak01","ACR_Vojak01"};
		enableGPS = 1;
		class Turrets{};
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
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
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
	class acr_a3_LandRover_Ambulance_ACR: acr_a3_LandRover_ACR
	{
		vehicleClass = "Support";
		displayName = "Military Offroad (Ambulance)";
		model = "\acr_a3\acr_a3_vehicles\landrover\LR_AMB_ACR.p3d";
		attendant = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext.rvmat","acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_base_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_glass_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_damage.rvmat","acr_a3\acr_a3_vehicles\landrover\data\LR_Special_destruct.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default.rvmat","acr_a3\acr_a3_vehicles\landrover\data\default_destruct.rvmat"};
		};
		class TransportWeapons{};
	};
	class acr_a3_LandRover_Ambulance_Des_ACR: acr_a3_LandRover_Ambulance_ACR
	{
		vehicleClass = "Support";
		crew = "ACR_Des_Vojak01";
		typicalCargo[] = {"ACR_Des_Vojak01","ACR_Des_Vojak01"};
		hiddenSelectionsTextures[] = {"\acr_a3\acr_a3_vehicles\landrover\data\lr_amb_ext_desert_co.paa"};
	};
};
