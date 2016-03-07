class CfgPatches {
	class tft_lock {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.6;
		requiredAddons[] = {"ace_aircraft"}; //ACE is changing locking system for some choppers
		version = 2.0.0;
		versionStr = 2.0.0;
		versionAr[] = {2, 0, 0};
		author[] = {"YoursTruly"};
	};
};

class CfgVehicles {
	class All {};
	
	class AllVehicles : All {};

	class Air : AllVehicles {};

	class Helicopter : Air {};

	class Helicopter_Base_F : Helicopter {};

	class Helicopter_Base_H : Helicopter_Base_F {};

	class Heli_Light_01_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Light_01_armed_base_F : Heli_Light_01_base_F {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Light_02_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Attack_01_base_F : Helicopter_Base_F {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Attack_02_base_F : Helicopter_Base_F {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Transport_01_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Transport_02_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class I_Heli_light_03_base_F : Helicopter_Base_F {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class B_Heli_Transport_03_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};

	class Heli_Transport_04_base_F : Helicopter_Base_H {
		lockDetectionSystem = 15;
		incomingMissileDetectionSystem = 16;
        soundLocked[] = {"\A3\Sounds_F\air\Heli_Light_01\warning", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 10};
	};
};
