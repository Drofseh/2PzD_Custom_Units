
    #include "German_Definitions.hpp"

    class CfgPatches {
    
    class 2PzD_Custom_German_Units {
        
        //Add yourself to authors if you contribute. author = {"Wilhelm Haas","Your Name"};
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = {WHR_1939};
        weapons[] = {};
        requiredAddons[] = {"haas_wwii_rebalance"};

    };//End 2PzD_Custom_German_Units

}; //End CfgPatches

class EventHandlers;

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "German_Factions.hpp"

};

class CfgEditorSubcategories {

    //If a new subcategory class is needed it should be in it's own file and then be #include here.
    //#include "subcategories\my_category"

}; //End CfgEditorSubcategories

class CfgGroups {

    //Groups will go in their own folders and files, then be #include in their own side specific class.

    class West {
        //Axis Forces

        class 2PzD_Wehrmacht_1939 {
            author = "Wilhelm Haas";
            name = "2PzD Wehrmacht 1939";

            class Infantry {
                name = "Infantry";

                // #include "compositions\1939\example_group.hpp"

            };

        };

    }; //End West

}; //End CfgGroups

class cfgVehicles {

    //Base classes will be placed here for inheritance.
    class LIB_GER_Soldier_base;

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\WHR_1939.hpp"

}; //End cfgVehicles