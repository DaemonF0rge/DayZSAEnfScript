////////////////////////////////////////////////////////////////////
//DeRap: gear_consumables\config.bin
//Produced from mikero's Dos Tools Dll version 7.27
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Tue Sep 03 15:30:39 2019 : 'file' last modified on Mon Sep 02 12:19:36 2019
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
	class DZ_Gear_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Box_Base;
	class Paper: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Paper0";
		descriptionShort = "$STR_CfgVehicles_Paper1";
		model = "\dz\gear\consumables\Paper.p3d";
		isMeleeWeapon = 1;
		weight = 2;
		absorbency = 1;
		rotationFlags = 16;
		itemSize[] = {1,1};
		inventorySlot = "Paper";
		lootTag[] = {"Civilian","Office"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},{0.7,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},{0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPaper_SoundSet";
					id = 797;
				};
			};
		};
	};
	class DuctTape: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DuctTape0";
		descriptionShort = "$STR_CfgVehicles_DuctTape1";
		model = "\dz\gear\consumables\DuctTape.p3d";
		OnRestrainChange = "DuctTapeLocked";
		isMeleeWeapon = 1;
		weight = 500;
		absorbency = 0.3;
		itemSize[] = {2,2};
		rotationFlags = 17;
		stackedUnit = "percentage";
		quantityBar = 1;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		repairKitType = 5;
		lootTag[] = {"Civilian","Office"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.7,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.5,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\duct_tape_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class rope_untie
				{
					soundSet = "rope_untie_SoundSet";
					id = 202;
				};
				class rope_struggle
				{
					soundSet = "rope_struggle_SoundSet";
					id = 203;
				};
				class ducttape_tieup
				{
					soundSet = "ducttape_tieup_SoundSet";
					id = 13338;
				};
				class rope_tieup_end
				{
					soundSet = "rope_tieup_end_SoundSet";
					id = 13339;
				};
				class rope_tieup_back
				{
					soundSet = "rope_tieup_back_SoundSet";
					id = 13340;
				};
			};
		};
	};
	class DuctTapeLocked: Inventory_Base
	{
		scope = 1;
		displayName = "$STR_CfgVehicles_DuctTapeLocked0";
		model = "\dz\gear\consumables\DuctTape_tied.p3d";
		OnRestrainChange = "DuctTape";
		StruggleLength = 10;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		quantityShow = 0;
		rotationFlags = 17;
		CanBeUnrestrainedBy[] = {"Sickle",3,"Hacksaw",3,"KitchenKnife",3,"SteakKnife",3,"HayHook",3,"StoneKnife",3,"Cleaver",3,"CombatKnife",3,"HuntingKnife",3,"Machete",3,"Screwdriver",3,"Crowbar",3,"Pickaxe",3,"WoodAxe",3,"Hatchet",3,"FirefighterAxe",3,"Sword",3,"AK_Bayonet",3,"M9A1_Bayonet",3,"Mosin_Bayonet",3,"SKS_Bayonet",3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.7,{"DZ\gear\consumables\data\duct_tape.rvmat"}},{0.5,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\duct_tape_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\duct_tape_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class rope_struggle
				{
					soundSet = "rope_struggle_SoundSet";
					id = 203;
				};
				class ducttape_tieup
				{
					soundSet = "ducttape_tieup_SoundSet";
					id = 13338;
				};
				class rope_tieup_end
				{
					soundSet = "rope_tieup_end_SoundSet";
					id = 13339;
				};
				class rope_tieup_back
				{
					soundSet = "rope_tieup_back_SoundSet";
					id = 13340;
				};
			};
		};
	};
	class Rag: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rag0";
		descriptionShort = "$STR_CfgVehicles_Rag1";
		model = "\dz\gear\consumables\Rags.p3d";
		itemSize[] = {1,3};
		weight = 20;
		absorbency = 1;
		inventorySlot[] = {"Rags"};
		ChangeInventorySlot[] = {"Mask"};
		ChangeIntoOnAttach[] = {"","MouthRag"};
		canBeSplit = 1;
		varQuantityInit = 6.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Crafted";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\rags_bandages.rvmat"}},{0.7,{"DZ\gear\consumables\data\rags_bandages.rvmat"}},{0.5,{"DZ\gear\consumables\data\rags_bandages_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\rags_bandages_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\rags_bandages_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class BurlapStrip: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BurlapStrip0";
		descriptionShort = "$STR_CfgVehicles_BurlapStrip1";
		model = "\DZ\gear\crafting\sackcloth_rag.p3d";
		lootCategory = "Crafted";
		weight = 50;
		itemSize[] = {1,3};
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 10.0;
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\weaponcamo.rvmat"}},{0.7,{"DZ\gear\consumables\data\weaponcamo.rvmat"}},{0.5,{"DZ\gear\consumables\data\weaponcamo_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\weaponcamo_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\weaponcamo_destruct.rvmat"}}};
				};
			};
		};
	};
	class Stone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Stone0";
		descriptionShort = "$STR_CfgVehicles_Stone1";
		model = "\dz\gear\consumables\Stone.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		weight = 1000;
		itemSize[] = {3,3};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		inventorySlot = "Stones";
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class SmallStone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallStone0";
		descriptionShort = "$STR_CfgVehicles_SmallStone1";
		model = "\dz\gear\consumables\SmallStone.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		weight = 500;
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\stone.rvmat"}},{0.7,{"DZ\gear\consumables\data\stone.rvmat"}},{0.5,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\stone_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\stone_destruct.rvmat"}}};
				};
			};
		};
	};
	class Firewood: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Firewood0";
		descriptionShort = "$STR_CfgVehicles_Firewood1";
		model = "\dz\gear\cooking\log01.p3d";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 6.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 1.0;
		absorbency = 0.3;
		weight = 2000;
		itemSize[] = {2,5};
		inventorySlot = "Firewood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\log01.rvmat"}},{0.7,{"DZ\gear\consumables\data\log01.rvmat"}},{0.5,{"DZ\gear\consumables\data\log01_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\log01_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\log01_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class woodenlog_drop
				{
					soundset = "woodenlog_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Battery9V: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Battery9V0";
		descriptionShort = "$STR_CfgVehicles_Battery9V1";
		model = "\dz\gear\consumables\9v_battery.p3d";
		inventorySlot = "BatteryD";
		armAction = "Disarm";
		lootCategory = "Tools";
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 50;
		varQuantityMin = 0.0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 0;
		isMeleeWeapon = 1;
		itemSize[] = {1,1};
		weight = 10;
		absorbency = 0.8;
		lootTag[] = {"Civilian","Work","Medic"};
		rotationFlags = 17;
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 50;
			energyAtSpawn = 50;
			convertEnergyToQuantity = 1;
			reduceMaxEnergyByDamageCoef = 1;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {1};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\9v.rvmat"}},{0.7,{"DZ\gear\consumables\data\9v.rvmat"}},{0.5,{"DZ\gear\consumables\data\9v_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\9v_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\9v_destruct.rvmat"}}};
				};
			};
		};
	};
	class LargeGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LargeGasCanister0";
		descriptionShort = "$STR_cfgvehicles_portablegascanister1";
		model = "\dz\gear\consumables\GasCannisterLarge.p3d";
		overrideDrawArea = "8.0";
		weight = 340;
		itemSize[] = {4,3};
		inventorySlot = "GasCanister";
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0.0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 0;
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 800;
			energyUsagePerSecond = 0;
			energyAtSpawn = 800;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
			convertEnergyToQuantity = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterLarge.rvmat"}},{0.7,{"DZ\gear\consumables\data\LootGasCannisterLarge.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterLarge_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\LootGasCannisterLarge_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterLarge_destruct.rvmat"}}};
				};
			};
		};
	};
	class MediumGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MediumGasCanister0";
		descriptionShort = "$STR_cfgvehicles_portablegascanister1";
		model = "\dz\gear\consumables\GasCannisterMedium.p3d";
		overrideDrawArea = "8.0";
		weight = 220;
		itemSize[] = {4,3};
		inventorySlot = "GasCanister";
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0.0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 0;
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 650;
			energyUsagePerSecond = 0;
			energyAtSpawn = 650;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
			convertEnergyToQuantity = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterMedium.rvmat"}},{0.7,{"DZ\gear\consumables\data\LootGasCannisterMedium.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterMedium_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\LootGasCannisterMedium_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterMedium_destruct.rvmat"}}};
				};
			};
		};
	};
	class SmallGasCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallGasCanister0";
		descriptionShort = "$STR_cfgvehicles_portablegascanister1";
		model = "\dz\gear\consumables\GasCannisterSmall.p3d";
		overrideDrawArea = "8.0";
		itemSize[] = {4,3};
		weight = 160;
		inventorySlot = "GasCanister";
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0.0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 0;
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 330;
			energyUsagePerSecond = 0;
			energyAtSpawn = 330;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
			convertEnergyToQuantity = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\LootGasCannisterSmall.rvmat"}},{0.7,{"DZ\gear\consumables\data\LootGasCannisterSmall.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterSmall_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\LootGasCannisterSmall_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\LootGasCannisterSmall_destruct.rvmat"}}};
				};
			};
		};
	};
	class ButaneCanister: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ButaneCanister0";
		descriptionShort = "$STR_CfgVehicles_ButaneCanister1";
		model = "\dz\gear\consumables\ButaneCanister.p3d";
		overrideDrawArea = "8.0";
		weight = 120;
		itemSize[] = {2,3};
		inventorySlot = "ButaneTorchCanister";
		quantityBar = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.7,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.5,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\butane_canister_destruct.rvmat"}}};
				};
			};
		};
	};
	class Spraycan_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Spraycan_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Spraycan_ColorBase1";
		model = "\dz\gear\consumables\spraycan.p3d";
		weight = 100;
		itemSize[] = {2,3};
		stackedUnit = "ml";
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		quantityBar = 1;
		lootTag[] = {"Work"};
		lootCategory = "Materials";
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.7,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.5,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\butane_canister_destruct.rvmat"}}};
				};
			};
		};
	};
	class Spraycan_Black: Spraycan_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Spraycan_Black0";
		color = "Black";
		hiddenSelectionsTextures[] = {"DZ\gear\consumables\data\spraycan_black_co.paa"};
	};
	class Spraycan_Green: Spraycan_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Spraycan_Green0";
		color = "Green";
		hiddenSelectionsTextures[] = {"DZ\gear\consumables\data\spraycan_green_co.paa"};
	};
	class Matchbox: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Matchbox0";
		descriptionShort = "$STR_CfgVehicles_Matchbox1";
		model = "\dz\gear\consumables\Matchbox.p3d";
		isMeleeWeapon = 1;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Kitchen","Camping","Work","Farm"};
		itemSize[] = {1,1};
		weight = 0;
		quantityBar = 1;
		varQuantityInit = 100.0;
		varQuantityMin = 0.0;
		varQuantityMax = 100.0;
		varQuantityDestroyOnMin = 0;
		destroyOnEmpty = 0;
		absorbency = 0.8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\matchbox.rvmat"}},{0.7,{"DZ\gear\consumables\data\matchbox.rvmat"}},{0.5,{"DZ\gear\consumables\data\matchbox_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\matchbox_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\matchbox_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MatchStrike
				{
					soundSet = "MatchStrike_SoundSet";
					id = 201;
				};
				class MatchOut
				{
					soundSet = "MatchOut_SoundSet";
					id = 202;
				};
				class MatchIgnite
				{
					soundSet = "MatchIgnite_SoundSet";
					id = 203;
				};
			};
		};
	};
	class NailBox: Box_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NailBox0";
		descriptionShort = "$STR_CfgVehicles_NailBox1";
		model = "\dz\gear\consumables\Nails_box.p3d";
		itemSize[] = {1,1};
		weight = 2540;
		absorbency = 0.8;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Box_of_Nails.rvmat"}},{0.7,{"DZ\gear\consumables\data\Box_of_Nails.rvmat"}},{0.5,{"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Box_of_Nails_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class Nail
			{
				value = 70;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class Roadflare: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Roadflare0";
		descriptionShort = "$STR_CfgVehicles_Roadflare1";
		model = "\dz\gear\consumables\road_flare.p3d";
		overrideDrawArea = "8.0";
		armAction = "Disarm";
		inventorySlot = "tripWireAttachment";
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0.0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 0;
		rotationFlags = 17;
		itemSize[] = {1,3};
		weight = 50;
		absorbency = 0.5;
		lootTag[] = {"Military_east","Military_west","Police"};
		lootCategory = "Tools";
		hiddenSelections[] = {"Burning","Burned_out","Pristine","All"};
		hiddenSelectionsTextures[] = {"dz\gear\consumables\data\road_flare_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\Road_flare.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Road_flare_DISABLED.rvmat"}},{0.7,{"DZ\gear\consumables\data\Road_flare_DISABLED.rvmat"}},{0.5,{"DZ\gear\consumables\data\Road_flare_DISABLED_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\Road_flare_DISABLED_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Road_flare_DISABLED_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn = 1200;
			energyUsagePerSecond = 1;
			updateInterval = 5;
			convertEnergyToQuantity = 1;
		};
		class AnimationSources
		{
			class Sticks_Flare_Folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Sticks_Flare_Unfolded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Burned_out
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Burning
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Flare_cap
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Pristine
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Flare_strike
				{
					soundSet = "Flare_strike_SoundSet";
					id = 201;
				};
				class Flare_open
				{
					soundSet = "Flare_open_SoundSet";
					id = 202;
				};
			};
		};
	};
	class Chemlight_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Chemlight_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Chemlight_ColorBase1";
		model = "\dz\gear\consumables\Chemlight.p3d";
		overrideDrawArea = "8.0";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 30;
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 100;
		varQuantityMin = 0.0;
		varQuantityMax = 100;
		varQuantityDestroyOnMin = 0;
		inventorySlot = "Chemlight";
		lootTag[] = {"Military_east","Military_west","Firefighters","Police"};
		lootCategory = "Materials";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\gear\consumables\data\chemlight_ca.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\"""".rvmat"}},{0.7,{"DZ\gear\consumables\data\"""".rvmat"}},{0.5,{"DZ\gear\consumables\data\""""_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\""""_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\""""_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn = 10800;
			energyUsagePerSecond = 1;
			updateInterval = 50;
			convertEnergyToQuantity = 1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Chemlight
				{
					soundSet = "Chemlight_break_SoundSet";
					id = 201;
				};
			};
		};
	};
	class Chemlight_White: Chemlight_ColorBase
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_white_off.rvmat","dz\gear\consumables\data\chemlight_white_on.rvmat"};
	};
	class Chemlight_Red: Chemlight_ColorBase
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_red_off.rvmat","dz\gear\consumables\data\chemlight_red_on.rvmat"};
	};
	class Chemlight_Green: Chemlight_ColorBase
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_green_off.rvmat","dz\gear\consumables\data\chemlight_green_on.rvmat"};
	};
	class Chemlight_Blue: Chemlight_ColorBase
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_blue_off.rvmat","dz\gear\consumables\data\chemlight_blue_on.rvmat"};
	};
	class Chemlight_Yellow: Chemlight_ColorBase
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_yellow_off.rvmat","dz\gear\consumables\data\chemlight_yellow_on.rvmat"};
	};
	class Pelt_Base: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Pelt_Base0";
		descriptionShort = "";
		animClass = "NoFireClass";
		lootCategory = "Crafted";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.3;
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class WildboarPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WildboarPelt0";
		descriptionShort = "$STR_CfgVehicles_WildboarPelt1";
		model = "\dz\gear\consumables\Pelt_Wildboar.p3d";
		weight = 420;
		itemSize[] = {5,3};
		peltGain = 6;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wildboar.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_wildboar.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wildboar_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_wildboar_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wildboar_destruct.rvmat"}}};
				};
			};
		};
	};
	class RabbitPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_RabbitPelt1";
		model = "\dz\gear\consumables\Pelt_Rabbit.p3d";
		itemSize[] = {3,2};
		weight = 220;
		peltGain = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_rabbit.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_rabbit.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_rabbit_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_rabbit_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_rabbit_destruct.rvmat"}}};
				};
			};
		};
	};
	class CowPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CowPelt0";
		descriptionShort = "$STR_CfgVehicles_CowPelt1";
		model = "\dz\gear\consumables\Pelt_Cow.p3d";
		peltGain = 12;
		itemSize[] = {7,3};
		weight = 960;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_cow_destruct.rvmat"}}};
				};
			};
		};
	};
	class PigPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PigPelt0";
		descriptionShort = "$STR_CfgVehicles_PigPelt1";
		model = "\dz\gear\consumables\Pelt_Pig.p3d";
		peltGain = 6;
		weight = 420;
		itemSize[] = {5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_cow.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_cow_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_cow_destruct.rvmat"}}};
				};
			};
		};
	};
	class DeerPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DeerPelt0";
		descriptionShort = "$STR_CfgVehicles_DeerPelt1";
		model = "\dz\gear\consumables\Pelt_Deer.p3d";
		peltGain = 8;
		itemSize[] = {6,3};
		weight = 420;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_deer.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_deer.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_deer_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_deer_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_deer_destruct.rvmat"}}};
				};
			};
		};
	};
	class GoatPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GoatPelt0";
		descriptionShort = "$STR_CfgVehicles_GoatPelt1";
		model = "\dz\gear\consumables\Pelt_Goat.p3d";
		peltGain = 4;
		weight = 380;
		itemSize[] = {5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_goat.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_goat.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_goat_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_goat_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_goat_destruct.rvmat"}}};
				};
			};
		};
	};
	class BearPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BearPelt1";
		model = "\dz\gear\consumables\Pelt_Bear.p3d";
		peltGain = 10;
		weight = 1200;
		itemSize[] = {8,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_bear.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_bear.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_bear_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_bear_destruct.rvmat"}}};
				};
			};
		};
	};
	class WolfPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WolfPelt0";
		descriptionShort = "$STR_CfgVehicles_WolfPelt1";
		model = "\dz\gear\consumables\Pelt_Wolf.p3d";
		peltGain = 6;
		weight = 1200;
		itemSize[] = {5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_wolf.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_wolf_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_wolf_destruct.rvmat"}}};
				};
			};
		};
	};
	class SheepPelt: Pelt_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SheepPelt0";
		descriptionShort = "$STR_CfgVehicles_SheepPelt1";
		model = "\dz\gear\consumables\Pelt_Sheep.p3d";
		weight = 1200;
		itemSize[] = {5,3};
		peltGain = 4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_sheep_destruct.rvmat"}}};
				};
			};
		};
	};
	class MouflonPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_MouflonPelt1";
		model = "\dz\gear\consumables\Pelt_Mouflon.p3d";
		peltGain = 10;
		weight = 1200;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_sheep.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_sheep_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_sheep_destruct.rvmat"}}};
				};
			};
		};
	};
	class FoxPelt: Pelt_Base
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FoxPelt1";
		model = "\dz\gear\consumables\Pelt_Fox.p3d";
		peltGain = 2;
		weight = 600;
		itemSize[] = {4,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pelt_fox.rvmat"}},{0.7,{"DZ\gear\consumables\data\pelt_fox.rvmat"}},{0.5,{"DZ\gear\consumables\data\pelt_fox_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pelt_fox_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pelt_fox_destruct.rvmat"}}};
				};
			};
		};
	};
	class TannedLeather: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TannedLeather0";
		descriptionShort = "$STR_CfgVehicles_TannedLeather1";
		model = "\dz\gear\consumables\tanned_leather.p3d";
		lootCategory = "Crafted";
		itemSize[] = {5,2};
		canBeSplit = 1;
		varQuantityInit = 8.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\tanned_leather.rvmat"}},{0.7,{"DZ\gear\consumables\data\tanned_leather.rvmat"}},{0.5,{"DZ\gear\consumables\data\tanned_leather_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\tanned_leather_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\tanned_leather_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Hook: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Hook0";
		descriptionShort = "$STR_CfgVehicles_Hook1";
		model = "\dz\gear\consumables\bait_hook.p3d";
		rotationFlags = 12;
		weight = 1;
		itemSize[] = {2,2};
		absorbency = 0.8;
		inventorySlot = "Hook";
		lootTag[] = {"Fishing","Farm"};
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bait.rvmat"}},{0.7,{"DZ\gear\consumables\data\bait.rvmat"}},{0.5,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bait_destruct.rvmat"}}};
				};
			};
		};
	};
	class BoneHook: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoneHook0";
		descriptionShort = "$STR_CfgVehicles_BoneHook1";
		model = "\dz\gear\crafting\bone_hook.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 1;
		absorbency = 0.8;
		inventorySlot = "Hook";
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bone_hook.rvmat"}},{0.7,{"DZ\gear\consumables\data\bone_hook.rvmat"}},{0.5,{"DZ\gear\consumables\data\bone_hook_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\bone_hook_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bone_hook_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bark_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_Bark_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Bark_ColorBase1";
		model = "\dz\gear\consumables\oak_bark.p3d";
		itemSize[] = {1,4};
		weight = 20;
		absorbency = 0.3;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 8.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Materials";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "bark_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bark_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Bark_Oak: Bark_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgvehicles_bark_oak0";
		descriptionShort = "$STR_CfgVehicles_Bark_Oak1";
		model = "\dz\gear\consumables\oak_bark.p3d";
		inventorySlot = "OakBark";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\oak_bark.rvmat"}},{0.7,{"DZ\gear\consumables\data\oak_bark.rvmat"}},{0.5,{"DZ\gear\consumables\data\oak_bark_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\oak_bark_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\oak_bark_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bark_Birch: Bark_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Bark_Birch0";
		descriptionShort = "$STR_CfgVehicles_Bark_Birch1";
		model = "\dz\gear\consumables\birch_bark.p3d";
		inventorySlot = "BirchBark";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\birch_bark.rvmat"}},{0.7,{"DZ\gear\consumables\data\birch_bark.rvmat"}},{0.5,{"DZ\gear\consumables\data\birch_bark_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\birch_bark_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\birch_bark_destruct.rvmat"}}};
				};
			};
		};
	};
	class Nail: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Nail0";
		descriptionShort = "$STR_CfgVehicles_Nail1";
		model = "\dz\gear\consumables\Nails_loose_10.p3d";
		itemSize[] = {1,1};
		weight = 36.28;
		canBeSplit = 1;
		varQuantityInit = 70.0;
		varQuantityMin = 0.0;
		varQuantityMax = 99.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Crafted";
		inventorySlot[] = {"Material_Nails","Material_L1_Nails","Material_L1W1_Nails","Material_L1W2_Nails","Material_L1W3_Nails","Material_L2_Nails","Material_L2W1_Nails","Material_L2W2_Nails","Material_L2W3_Nails","Material_L3_Nails","Material_L3W1_Nails","Material_L3W2_Nails","Material_L3W3_Nails"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\Pile of Nails.rvmat"}},{0.7,{"DZ\gear\consumables\data\Pile of Nails.rvmat"}},{0.5,{"DZ\gear\consumables\data\Pile of Nails_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\Pile of Nails_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\Pile of Nails_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Bone0";
		descriptionShort = "$STR_CfgVehicles_Bone1";
		model = "\dz\gear\food\pile_of_bones.p3d";
		handheld = "true";
		weight = 200;
		itemSize[] = {2,2};
		canBeSplit = 1;
		varQuantityInit = 10.0;
		varQuantityMin = 0.0;
		varQuantityMax = 10.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Materials";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pile_of_bones.rvmat"}},{0.7,{"DZ\gear\consumables\data\pile_of_bones.rvmat"}},{0.5,{"DZ\gear\consumables\data\pile_of_bones_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pile_of_bones_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pile_of_bones_destruct.rvmat"}}};
				};
			};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
	};
	class Bait: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Bait0";
		descriptionShort = "$STR_CfgVehicles_Bait1";
		model = "\dz\gear\consumables\bait_worm_pinned.p3d";
		lootCategory = "Crafted";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 15;
		absorbency = 0.8;
		inventorySlot = "Bait";
		armAction = "Disarm";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\gear\consumables\data\bait.rvmat","DZ\gear\consumables\data\bait_damage.rvmat","DZ\gear\consumables\data\bait_destruct.rvmat"};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\bait.rvmat"}},{0.7,{"DZ\gear\consumables\data\bait.rvmat"}},{0.5,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\bait_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\bait_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
	};
	class BoneBait: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoneBait0";
		descriptionShort = "$STR_CfgVehicles_BoneBait1";
		model = "\dz\gear\crafting\bone_bait.p3d";
		lootCategory = "Crafted";
		inventorySlot = "Bait";
		armAction = "Disarm";
		itemSize[] = {1,2};
		rotationFlags = 17;
		weight = 15;
		absorbency = 0.8;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\data\data\default.rvmat","DZ\characters\data\Generic_damage.rvmat","DZ\characters\data\Generic_destruct.rvmat"};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
	};
	class GardenLime: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_GardenLime0";
		descriptionShort = "$STR_CfgVehicles_GardenLime1";
		model = "\dz\gear\consumables\garden_lime.p3d";
		animClass = "NoFireClass";
		weight = 100;
		itemSize[] = {3,5};
		stackedUnit = "g";
		quantityBar = 1;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Work"};
		inventorySlot = "Lime";
		varQuantityInit = 5000.0;
		varQuantityMin = 0.0;
		varQuantityMax = 5000.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\garden_lime.rvmat"}},{0.7,{"DZ\gear\consumables\data\garden_lime.rvmat"}},{0.5,{"DZ\gear\consumables\data\garden_lime_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\garden_lime_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\garden_lime_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			TexId = 1;
			AddEnergyToSlot = 0.5;
			ConsumedQuantity = 250.0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItemLight
				{
					soundSet = "pickUpGardenLimeLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpGardenLime_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "gardenlime_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Netting: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Netting0";
		descriptionShort = "$STR_CfgVehicles_Netting1";
		model = "\dz\gear\consumables\Netting.p3d";
		animClass = "NoFireClass";
		rotationFlags = 17;
		absorbency = 0.3;
		itemSize[] = {2,3};
		weight = 400;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varQuantityDestroyOnMin = 1;
		lootCategory = "Tools";
		lootTag[] = {"Fishing"};
	};
	class WoodenPlank: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WoodenPlank0";
		descriptionShort = "$STR_CfgVehicles_WoodenPlank1";
		model = "\dz\gear\consumables\single_plank.p3d";
		weight = 1500;
		itemSize[] = {2,8};
		canBeSplit = 1;
		varQuantityInit = 10.0;
		varQuantityMin = 0.0;
		varQuantityMax = 20.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 10.0;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		inventorySlot[] = {"Material_WoodenPlanks","Material_L1_WoodenPlanks","Material_L1W1_WoodenPlanks","Material_L1W2_WoodenPlanks","Material_L1W3_WoodenPlanks","Material_L2_WoodenPlanks","Material_L2W1_WoodenPlanks","Material_L2W2_WoodenPlanks","Material_L2W3_WoodenPlanks","Material_L3_WoodenPlanks","Material_L3W1_WoodenPlanks","Material_L3W2_WoodenPlanks","Material_L3W3_WoodenPlanks"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "woodenlog_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodenlog_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PileOfWoodenPlanks: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PileOfWoodenPlanks0";
		descriptionShort = "$STR_CfgVehicles_PileOfWoodenPlanks1";
		model = "\dz\gear\consumables\pile_of_planks.p3d";
		canBeSplit = 0;
		varQuantityInit = 84.0;
		varQuantityMin = 0.0;
		varQuantityMax = 84.0;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {7,20};
		weight = 5000;
		physLayer = "item_large";
		useEntityHierarchy = "true";
		rotationFlags = 256;
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		class AnimationSources
		{
			class stage_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_2
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stage_3
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class MetalPlate: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MetalPlate0";
		descriptionShort = "$STR_CfgVehicles_MetalPlate1";
		model = "\dz\gear\consumables\Single_Metal_Sheet.p3d";
		rotationFlags = 34;
		weight = 400;
		itemSize[] = {10,10};
		itemBehaviour = 0;
		canBeSplit = 1;
		varQuantityInit = 10.0;
		varQuantityMin = 0.0;
		varQuantityMax = 20.0;
		varQuantityDestroyOnMin = 1;
		varStackMax = 10.0;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		inventorySlot[] = {"Material_MetalSheets","Material_L3_MetalSheets","Material_L1W1_MetalSheets","Material_L1W2_MetalSheets","Material_L1W3_MetalSheets","Material_L2W1_MetalSheets","Material_L2W2_MetalSheets","Material_L2W3_MetalSheets","Material_L3W1_MetalSheets","Material_L3W2_MetalSheets","Material_L3W3_MetalSheets"};
	};
	class WoodenLog: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WoodenLog0";
		descriptionShort = "$STR_CfgVehicles_WoodenLog1";
		model = "\dz\gear\camping\wooden_log.p3d";
		weight = 400;
		itemSize[] = {3,11};
		varQuantityDestroyOnMin = 1;
		itemBehaviour = 0;
		canBeSplit = 1;
		varQuantityInit = 1.0;
		varQuantityMin = 0.0;
		varQuantityMax = 4.0;
		varStackMax = 1.0;
		lootCategory = "Tools";
		lootTag[] = {"Civilian","Camping","Work","Farm","Forester"};
		inventorySlot[] = {"Material_WoodenLogs","Material_L1_WoodenLogs","Material_L2_WoodenLogs","Material_L3_WoodenLogs"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "woodenlog_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodenlog_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyroad_flare: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\gear\consumables\road_flare.p3d";
		class AnimationSources
		{
			class Sticks_Flare_Folded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Sticks_Flare_Unfolded_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class ProxyGasCannisterLarge: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "GasCanister";
		model = "\dz\gear\consumables\GasCannisterLarge.p3d";
	};
	class Proxybait_hook: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Hook";
		model = "\dz\gear\consumables\bait_hook.p3d";
	};
	class ProxyChemlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Chemlight";
		model = "\DZ\gear\consumables\Chemlight.p3d";
	};
};
