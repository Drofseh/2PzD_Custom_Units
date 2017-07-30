
    #include "British_Definitions.hpp"

class CfgPatches {
    
    class 2PzD_Custom_British_Units {
        
        //Add yourself to authors if you contribute. author = {"Wilhelm Haas","Your Name"};
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = {UK_Army_1939,UK_Army_1941,UK_Army_1943,UK_Army_1944,UK_Army_1945};
        weapons[] = {};
        requiredAddons[] = {"haas_wwii_rebalance"};

    };//End 2PzD_Custom_British_Units

}; //End CfgPatches

class EventHandlers;

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "British_Factions.hpp"

};

class CfgEditorSubcategories {

    //If a new subcategory class is needed it should be in it's own file and then be #include here.
    //#include "subcategories\my_category"

}; //End CfgEditorSubcategories

class CfgGroups {

    //Groups will go in their own folders and files, then be #include in their own side specific class.

    class Indep {
        //Allies

        class 2PzD_UK_Army_1939 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1939/40";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1939\Company_HQ.hpp"
                #include "compositions\UK_Army\1939\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1939\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1939\Tank_Crew.hpp"
                #include "compositions\UK_Army\1939\Team_Boys.hpp"
                #include "compositions\UK_Army\1939\Team_Gun.hpp"
                #include "compositions\UK_Army\1939\Team_HMG.hpp"
                #include "compositions\UK_Army\1939\Team_Mort.hpp"
                #include "compositions\UK_Army\1939\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1939

        class 2PzD_UK_Army_1941 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1941";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1941\Company_HQ.hpp"
                #include "compositions\UK_Army\1941\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1941\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1941\Tank_Crew.hpp"
                #include "compositions\UK_Army\1941\Team_Boys.hpp"
                #include "compositions\UK_Army\1941\Team_Gun.hpp"
                #include "compositions\UK_Army\1941\Team_HMG.hpp"
                #include "compositions\UK_Army\1941\Team_Mort.hpp"
                #include "compositions\UK_Army\1941\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1941

        class 2PzD_UK_Army_1942 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1942";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1942\Company_HQ.hpp"
                #include "compositions\UK_Army\1942\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1942\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1942\Tank_Crew.hpp"
                #include "compositions\UK_Army\1942\Team_Boys.hpp"
                #include "compositions\UK_Army\1942\Team_Gun.hpp"
                #include "compositions\UK_Army\1942\Team_HMG.hpp"
                #include "compositions\UK_Army\1942\Team_Mort.hpp"
                #include "compositions\UK_Army\1942\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1942

        class 2PzD_UK_Army_1943 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1943";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1943\Company_HQ.hpp"
                #include "compositions\UK_Army\1943\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1943\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1943\Tank_Crew.hpp"
                #include "compositions\UK_Army\1943\Team_Boys.hpp"
                #include "compositions\UK_Army\1943\Team_Gun.hpp"
                #include "compositions\UK_Army\1943\Team_HMG.hpp"
                #include "compositions\UK_Army\1943\Team_Mort.hpp"
                #include "compositions\UK_Army\1943\Team_PIAT.hpp"
                #include "compositions\UK_Army\1943\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1943

        class 2PzD_UK_Army_1944 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1944";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1944\Company_HQ.hpp"
                #include "compositions\UK_Army\1944\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1944\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1944\Tank_Crew.hpp"
                #include "compositions\UK_Army\1944\Team_Boys.hpp"
                #include "compositions\UK_Army\1944\Team_Gun.hpp"
                #include "compositions\UK_Army\1944\Team_HMG.hpp"
                #include "compositions\UK_Army\1944\Team_Mort.hpp"
                #include "compositions\UK_Army\1944\Team_PIAT.hpp"
                #include "compositions\UK_Army\1944\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1944

        class 2PzD_UK_Army_1945 {
            author = "Wilhelm Haas";
            name = "!2PzD British Army 1945";

            class Infantry {
                name = "Infantry";

                #include "compositions\UK_Army\1945\Company_HQ.hpp"
                #include "compositions\UK_Army\1945\Infantry_Squad.hpp"
                #include "compositions\UK_Army\1945\Platoon_HQ.hpp"
                #include "compositions\UK_Army\1945\Tank_Crew.hpp"
                #include "compositions\UK_Army\1945\Team_Boys.hpp"
                #include "compositions\UK_Army\1945\Team_Gun.hpp"
                #include "compositions\UK_Army\1945\Team_HMG.hpp"
                #include "compositions\UK_Army\1945\Team_Mort.hpp"
                #include "compositions\UK_Army\1945\Team_PIAT.hpp"
                #include "compositions\UK_Army\1945\Team_Rifle.hpp"

            };
            
        }; //End 2PzD_UK_Army_1945

    }; //End Indep

}; //End CfgGroups

class cfgVehicles {

    //Base classes will be placed here for inheritance.
    class fow_s_uk_base;
    class LIB_GER_Soldier_base;

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\UK_Army_1939.hpp"
    #include "units\UK_Army_1941.hpp"
    #include "units\UK_Army_1943.hpp"
    #include "units\UK_Army_1944.hpp"
    #include "units\UK_Army_1945.hpp"

}; //End cfgVehicles