////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_destroyer\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 20:56:26 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Language_F_Destroyer
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "CFGPATCHES_A3_Language_F_Destroyer";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Destroyer"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class WeaponList
	{
		class Ship_Gun_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Ship_Gun_01_name"},{"STR_A3_Ship_Gun_01_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Ship_Gun_01_F";
			dlc = 601670;
			logicalOrder = 49;
		};
		class Ship_MRLS_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Ship_MRLS_01_name"},{"STR_A3_Ship_MRLS_01_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Ship_MRLS_01_F";
			dlc = 601670;
			logicalOrder = 50;
		};
	};
};
