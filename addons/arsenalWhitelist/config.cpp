class CfgPatches {
    class arsenalWhitelist {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Modules_F", "A3_Functions_F"};
    };
};

class CfgFunctions {
    class ArsenalWhitelist {
        class functions {
            file = "arsenalWhitelist\functions";
            class whitelistInit {};
            class attachWhitelist {}; 
            class applyWhitelist {};  // Add this line
        };
    };
    class Zeus {
        class functions {
            file = "arsenalWhitelist\zeus";
            class spawnCrate {};
            class whitelistModule {};  // Add this line
        };
    };
};

// Zeus modules configuration
class CfgZeus {
    class Categories {
        class Legio_XII {
            displayName = "Legio XII";  // This matches the category name in the Zeus UI
            scope = 2;
        };
    };
    
    class Modules {
        class MyMod_WhitelistModule {  // Add this block
            scope = 2;
            displayName = "Whitelist Supply Box";
            icon = "\a3\Modules_F_Curator\Data\iconSupplyDrop_ca.paa";
            category = "Legio_XII";  // Ensure this matches your category
            function = "Zeus_fnc_whitelistModule";
            functionPriority = 1;
            isGlobal = 1;
            isTriggerActivated = 0;
            isDisposable = 0;
            curatorCanAttach = 1;

            class Arguments {
                class Units {
                    displayName = "Units";
                    description = "Units to sync with the module.";
                    typeName = "ARRAY";
                };
            };

            class ModuleDescription {
                description = "Place a supply box and select a whitelist.";
                sync[] = {"AnyBrain"};
            };
        };
    };
};