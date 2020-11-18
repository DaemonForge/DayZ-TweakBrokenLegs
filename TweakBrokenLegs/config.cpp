class CfgPatches
{
	class TweakBrokenLegs
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class TweakBrokenLegs
	{
		dir="TweakBrokenLegs";
        name="TweakBrokenLegs";
        credits="DaemonForge";
        author="DaemonForge";
        authorID="0";
        version="0.1";
        extra=0;
        type = "Mod";
	    dependencies[]={"Game", "World", "Mission"};
	    class defs
	    {
			class gameScriptModule
            {
				value = "";
                files[]={
					"TweakBrokenLegs/scripts/3_Game"
					};
            };
			
			class worldScriptModule
            {
                value="";
                files[]={ 
					"TweakBrokenLegs/scripts/4_World" 
				};
            };
        };
    };
};