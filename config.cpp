class CfgPatches
{
    class GAMPBF
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Vehicles_Wheeled",
            "DZ_Scripts"
        };
    };
};

class CfgMods
{
    // GAMPBF - Galleon AC Mod Pack Bug Fix
    class GAMPBF
    {
        dir = "GAMPBF";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "GAMPBF";
        credits = "João Ricardo (@kerodrach)";
        author = "Thaís (@thaai_n) & Lucas (@luka__is)";
        authorID = "0";
        version = "1.0";
        extra = 0;
        type = "mod";

        dependencies[] = { "World" };

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] =
                {
                    "GAMPBF/scripts/4_World"
                };
            };
        };
    };
};
