////////////////////////////////////////////////////////////////////
//DeRap: language_f_patrol\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Mon Apr 30 18:30:08 2018 : 'file' last modified on Fri Apr 06 01:21:50 2018
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
	class A3_Language_F_Patrol
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Patrol - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Patrol"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints{};
