class CfgPatches
{
	class pa_stargate
	{
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 1;
		units[] = {"PA_stargate_goauld_iris", "PA_stargate_goauld", "PA_stargate_tauri"};
		weapons[] = {};
	};
};

class CfgEditorCategories
{
	class PA_stargate_Objects
	{
		displayName = "Projact Aquilla StaGate Objects";
	};
};

class CfgEditorSubcategories
{
	class PA_stargate
	{
		displayName = "Stargates";
		priority = 40;
		side = 1;
	};

	class PA_dhd
	{
		displayName = "DHD";
		priority = 40;
		side = 1;
	};
};

class CfgVehicles
{
	class House_F;
	class PA_stargate_goauld_iris: House_F
	{
		model = "\sgi_porte_des_etoiles\SGI_porte_des_etoiles_iris.p3d";
		displayName = "PA Stargate Goauld Iris";
		editorCategory = "PA_stargate_Objects";
		editorsubcategory = "PA_stargate";
		scope = 2;
		icon = "";
		cost = 9400;
		armor = 100000;
		reversed = 1;
		animated = 1;
		autocenter = 0;
		class EventHandlers
		{
			init = "[_this select 0] execvm '\sgi_porte_des_etoiles\functions\fn_init_stargate.sqf'";
		};
		class AnimationSources
		{
			class anim_ring
			{
				animPeriod = 10;
			};
			class anim_iris1
			{
				animPeriod = 3;
			};
			class anim_iris2
			{
				animPeriod = 3;
			};
			class anim_iris3
			{
				animPeriod = 3;
			};
			class anim_iris4
			{
				animPeriod = 3;
			};
			class anim_iris5
			{
				animPeriod = 3;
			};
			class anim_iris6
			{
				animPeriod = 3;
			};
			class anim_iris7
			{
				animPeriod = 3;
			};
			class anim_iris8
			{
				animPeriod = 3;
			};
			class anim_iris9
			{
				animPeriod = 3;
			};
			class anim_iris10
			{
				animPeriod = 3;
			};
			class anim_iris11
			{
				animPeriod = 3;
			};
			class anim_iris12
			{
				animPeriod = 3;
			};
			class anim_iris13
			{
				animPeriod = 3;
			};
			class anim_iris14
			{
				animPeriod = 3;
			};
			class anim_iris15
			{
				animPeriod = 3;
			};
			class anim_iris16
			{
				animPeriod = 3;
			};
			class anim_iris17
			{
				animPeriod = 3;
			};
			class anim_iris18
			{
				animPeriod = 3;
			};
			class anim_iris19
			{
				animPeriod = 3;
			};
			class anim_iris20
			{
				animPeriod = 3;
			};
			class anim_iris21
			{
				animPeriod = 3;
			};
			class anim_iris22
			{
				animPeriod = 3;
			};
		};
		hiddenselections[] = {"chevron1","chevron2","chevron3","chevron4","chevron5","chevron6","chevron7","chevron8","chevron9","event","ring"};
	};

	class PA_stargate_goauld: House_F
	{
		model = "\sgi_porte_des_etoiles\SGI_porte_des_etoiles.p3d";
		displayName = "PA Stargate Goauld";
		editorCategory = "PA_stargate_Objects";
		editorsubcategory = "PA_stargate";
		scope = 2;
		icon = "";
		cost = 9400;
		armor = 100000;
		reversed = 1;
		animated = 1;
		autocenter = 0;
		class EventHandlers
		{
			init = "[_this select 0] execvm '\sgi_porte_des_etoiles\functions\fn_init_stargate.sqf'";
		};
		class AnimationSources
		{
			class anim_ring
			{
				animPeriod = 10;
			};
		};
		hiddenselections[] = {"chevron1","chevron2","chevron3","chevron4","chevron5","chevron6","chevron7","chevron8","chevron9","event","ring"};
	};

	class PA_stargate_tauri: House_F
	{
		model = "\sgi_porte_des_etoiles\sga_stargate.p3d";
		displayName = "PA Stargate Tauri";
		editorCategory = "PA_stargate_Objects";
		editorsubcategory = "PA_stargate";
		scope = 2;
		icon = "";
		cost = 9400;
		armor = 100000;
		reversed = 1;
		animated = 1;
		autocenter = 0;
		class EventHandlers
		{
			init = "[_this select 0] execvm '\sgi_porte_des_etoiles\functions\fn_init_stargate.sqf'";
		};
		class AnimationSources
		{
			class anim_ring
			{
				animPeriod = 10;
			};
			class lock_light
			{
				animPeriod = 0.2;
			};
			class lock_chevron
			{
				animPeriod = 0.2;
			};
			class anim_iris1
			{
				animPeriod = 3;
			};
			class anim_iris2
			{
				animPeriod = 3;
			};
			class anim_iris3
			{
				animPeriod = 3;
			};
			class anim_iris4
			{
				animPeriod = 3;
			};
			class anim_iris5
			{
				animPeriod = 3;
			};
			class anim_iris6
			{
				animPeriod = 3;
			};
			class anim_iris7
			{
				animPeriod = 3;
			};
			class anim_iris8
			{
				animPeriod = 3;
			};
			class anim_iris9
			{
				animPeriod = 3;
			};
			class anim_iris10
			{
				animPeriod = 3;
			};
			class anim_iris11
			{
				animPeriod = 3;
			};
			class anim_iris12
			{
				animPeriod = 3;
			};
			class anim_iris13
			{
				animPeriod = 3;
			};
			class anim_iris14
			{
				animPeriod = 3;
			};
			class anim_iris15
			{
				animPeriod = 3;
			};
			class anim_iris16
			{
				animPeriod = 3;
			};
			class anim_iris17
			{
				animPeriod = 3;
			};
			class anim_iris18
			{
				animPeriod = 3;
			};
			class anim_iris19
			{
				animPeriod = 3;
			};
			class anim_iris20
			{
				animPeriod = 3;
			};
			class anim_iris21
			{
				animPeriod = 3;
			};
			class anim_iris22
			{
				animPeriod = 3;
			};
		};
		hiddenselections[] = {"light1a","light1b","light2a","light2b","light3a","light3b","light4a","light4b","light5a","light5b","light6a","light6b","light7a","light7b","light8a","light8b","light9a","light9b","eh","dummy1","ring","ring1","separators"};
	};
};
