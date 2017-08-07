
    #include "US_Definitions.hpp"

class CfgPatches {
    
    class 2PzD_Custom_US_Units {
        
        //Add yourself to authors if you contribute. author = {"Wilhelm Haas","Your Name"};
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = {US_Army_1939,US_Army_1942,US_Army_1942OpT,US_Army_1943NA};
        weapons[] = {};
        requiredAddons[] = {"haas_wwii_rebalance"};

    };//End 2PzD_Custom_US_Units

}; //End CfgPatches

class EventHandlers;

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "US_Factions.hpp"

};

class CfgEditorSubcategories {

    //If a new subcategory class is needed it should be in it's own file and then be #include here.
    //#include "subcategories\my_category"

}; //End CfgEditorSubcategories

class cfgVehicles {

    //Base classes will be placed here for inheritance.
    class LIB_US_Soldier_base;

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\US_Army_1939.hpp"
    #include "units\US_Army_1942.hpp"
    #include "units\US_Army_1942_Nov_Op_Torch.hpp"
    #include "units\US_Army_1943_NA.hpp"

}; //End cfgVehicles

class CfgGroups {

    //Groups will go in their own folders and files, then be #include in their own side specific class.

    class Indep {
        //Allies

        class 2PzD_US_Army_1939 {
            author = "Wilhelm Haas";
            name = "!2PzD US Army 1939";

            class Infantry {
                name = "Infantry";

                //#include "compositions\US_Army\1939\Company_HQ.hpp"

            };
            
        }; //End 2PzD_US_Army_1939

    }; //End Indep

}; //End CfgGroups