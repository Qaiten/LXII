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
            file = "\LXII\addons\arsenalWhitelist\functions";  // Correct path based on your folder structure
            class whitelistInit {};
            class attachWhitelist {};
        };
    };
    class Zeus {
        class functions {
            file = "\LXII\addons\arsenalWhitelist\zeus";  // Correct path for Zeus functions
            class spawnCrate {};
        };
    };
};

class CfgZeus {
    class Modules {
        class ZeusWhitelistCrate {
            displayName = "Spawn Whitelist Arsenal Crate";
            function = "Zeus_fnc_spawnCrate";
            icon = "\a3\ui_f\data\map\markers\military\dot_CA.paa";
            scope = 2;
            category = "Objects";
        };
    };
};
