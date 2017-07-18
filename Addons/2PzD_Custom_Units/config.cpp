class CfgPatches {
    class 2PzD_Custom_Units {
        author = "Wilhelm Haas";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"haas_wwii_rebalance"};
    };
 }; //End CfgPatches

class CfgFactionClasses {

    class 2PzD_G_WHR_39_Jan {
        displayName = "!2PzD German Wehrmacht 1939 January";
        icon = "";
        priority = 1;
        side = 1;
    };

};

class CfgEditorSubcategories {

}; //End CfgEditorSubcategories


class cfgVehicles {

    class LIB_GER_Soldier_base;
    class LIB_GER_rifleman;
    class LIB_GER_smgunner;

    #include "units\german\G_1939_Jan.hpp"

}; //End cfgVehicles