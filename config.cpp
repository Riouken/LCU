// LCU - Landing Craft Utility
//
#define PREFIX DIS
#define COMPONENT main
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 1
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define REQUIRED_VERSION 1.0
#include "\x\cba\addons\main\script_macros_common.hpp"


class CfgPatches
{
	class PREFIX  // DIS - Dive Intergration System
		{
			units[] = {};
			weapons[] = {};
			requiredVersion = REQUIRED_VERSION;
			requiredAddons[] = {"CBA_MAIN"};
			versionDesc = "LCU - 1.0";
			versionAct = "";
			//VERSION_CONFIG;
			author[] = {"Slatts"};
		};
};

class CfgMods {
	class PREFIX {
		dir = "@LCU";
		name = "Landing Craft Utility";
		picture = "";
		hidePicture = "true";
		hideName = "False";
		actionName = "Website";
		action = "http:";
		description = "A large Utility Boat for transportation";
	};
};
class Extended_PostInit_EventHandlers
{
	class PREFIX
	{
		//clientInit = QUOTE(call COMPILE_FILE2(\DIS\init.sqf));
		//clientInit = "call ('\LCU\init.sqf' call SLX_XEH_COMPILE)";
	};
};

//#include <base_class.hpp>

//#include <.hpp>

class CfgVehicles
{

};