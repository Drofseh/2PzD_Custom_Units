class CfgPatches {
    
    class 2PzD_Custom_Units {
        
        //Add yourself to authors if you contribute. author = {"Wilhelm Haas","Your Name"};
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = {"2PzD_G_39_CC","2PzD_G_39_C2","2PzD_G_39_PC","2PzD_G_39_P2","2PzD_G_39_RTO",
        "2PzD_G_39_Mess","2PzD_G_39_MedP","2PzD_G_39_SL","2PzD_G_39_S2","2PzD_G_39_S3","2PzD_G_39_Rifle",
        "2PzD_G_39_MG","2PzD_G_39_MGA","2PzD_G_39_MGAB","2PzD_G_39_MedS","2PzD_G_39_MortTL",
        "2PzD_G_39_MortG","2PzD_G_39_MortA","2PzD_G_39_MortAB","2PzD_G_39_HMGTL","2PzD_G_39_HMGG",
        "2PzD_G_39_HMGA","2PzD_G_39_HMGAB","2PzD_G_39_VCom","2PzD_G_39_VCrew"
        };
        weapons[] = {};
        requiredAddons[] = {"haas_wwii_rebalance"};

    };//End 2PzD_Custom_Units

 }; //End CfgPatches

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "factions\german.hpp"

};

class CfgEditorSubcategories {

    //If a new subcategory class is needed it shoud be in it's own file and then be #include here.
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

                // #include "compositions\german\example_group.hpp"

            };

        };

    }; //End West

    class East {
        //Russians

    }; //End East

    class Indep {
        //Allies

    }; //End Indep

    class Empty {

    }; //End Empty

}; //End CfgGroups

class cfgVehicles {

    //Base classes will be placed here for inheritance.
    class LIB_GER_Soldier_base;

    //Definitions will be placed in their own folder and file and then be #include here.
    #include "definitions\German_Definitions.hpp"

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\german\G_1939.hpp"

}; //End cfgVehicles