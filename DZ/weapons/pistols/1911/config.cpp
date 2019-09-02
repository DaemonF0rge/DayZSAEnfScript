////////////////////////////////////////////////////////////////////
//DeRap: weapons_pistols\1911\config.bin
//Produced from mikero's Dos Tools Dll version 7.27
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Tue Sep 03 00:32:22 2019 : 'file' last modified on Wed Aug 14 11:04:31 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(8 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Pistols_1911
	{
		units[] = {"Colt1911","1911_Engraved"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base;
	class Colt1911_Base: Pistol_Base
	{
		scope = 0;
		weight = 1106;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_1911_7Rnd"};
		chamberableFrom[] = {"Ammo_45ACP"};
		magazineSwitchTime = 0.24;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_reload",0.8,1,20};
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_1",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_1911";
			recoilProne = "recoil_1911_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_Pistol_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_Pistol_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_Pistol_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_Pistol_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_Pistol_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_Pistol_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_Pistol_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_Pistol_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_Pistol_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_Pistol_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_Pistol_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_Pistol_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_Pistol_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_Pistol_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_Pistol_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_Pistol_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_Pistol_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_Pistol_Walk
				{
					soundSet = "Weapon_Movement_Pistol_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Pistol_Run
				{
					soundSet = "Weapon_Movement_Pistol_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Pistol_Sprint
				{
					soundSet = "Weapon_Movement_Pistol_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Pistol_Land
				{
					soundSet = "Weapon_Movement_Pistol_landFeetErc_SoundSet";
					id = 104;
				};
				class pickup
				{
					soundSet = "pickUpPistol_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "pistol_drop_SoundSet";
					id = 898;
				};
				class bodyfall_pistol
				{
					soundSet = "pickUpPistol_SoundSet";
					id = 13400;
				};
			};
		};
	};
	class Colt1911: Colt1911_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Colt19110";
		descriptionShort = "$STR_cfgWeapons_Colt19111";
		hiddenSelections[] = {"camoGround"};
		model = "\dz\weapons\pistols\1911\1911.p3d";
		attachments[] = {"pistolFlashlight","pistolMuzzle"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\1911\data\1911_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\1911\data\1911.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\1911\data\1911.rvmat"}},{0.7,{"DZ\weapons\pistols\1911\data\1911.rvmat"}},{0.5,{"DZ\weapons\pistols\1911\data\1911_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\1911\data\1911_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\1911\data\1911_destruct.rvmat"}}};
				};
			};
		};
	};
	class Engraved1911: Colt1911_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Engraved19110";
		descriptionShort = "$STR_cfgWeapons_Engraved19111";
		model = "\dz\weapons\pistols\1911\1911_engraved.p3d";
		attachments[] = {"pistolFlashlight","pistolMuzzle"};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\1911\data\1911_engraved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\1911\data\1911_engraved.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\1911\data\1911_engraved.rvmat"}},{0.7,{"DZ\weapons\pistols\1911\data\1911_engraved.rvmat"}},{0.5,{"DZ\weapons\pistols\1911\data\1911_engraved_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\1911\data\1911_engraved_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\1911\data\1911_engraved_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxy1911: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\1911\1911.p3d";
	};
};
