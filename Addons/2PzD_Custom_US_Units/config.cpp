    #include "US_Definitions.hpp"

class CfgPatches {
    
    class 2PzD_Custom_US_Units {
        
        //Add yourself to authors if you contribute. author = {"Wilhelm Haas","Your Name"};
        authors[] = { "Wilhelm Haas" };
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = {Units_Army_1939,Units_Army_1940,Units_Army_1941,Units_Army_1942,Units_Army_1942_06,Units_Army_1943
        };
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance"};
        requiredVersion = 1.62;

    };//End 2PzD_Custom_US_Units

}; //End CfgPatches

class EventHandlers;

class CBA_Extended_EventHandlers_base;

class CfgEditorSubcategories {

    //If a new subcategory class is needed it should be in it's own file and then be #include here.
    //#include "subcategories\my_category"

}; //End CfgEditorSubcategories

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "US_Factions.hpp"

};

class CfgGroups {
    class Indep {
        #include "compositions\US_Army\1939_Compositions.hpp"
        #include "compositions\US_Army\1940_Compositions.hpp"
        #include "compositions\US_Army\1941_Compositions.hpp"
        #include "compositions\US_Army\1942_Compositions.hpp"
        #include "compositions\US_Army\1942_06_Compositions.hpp"
        #include "compositions\US_Army\1943_Compositions.hpp"
        #include "compositions\US_Army\1944_Compositions.hpp"
        #include "compositions\US_Army\1945_Compositions.hpp"
    };
};

class CfgVehicles {

    //Base classes will be placed here for inheritance.
    class LIB_US_Soldier_base;

    class 2PzD_US_Army_Base : LIB_US_Soldier_base {
        author = "Gefr.Haas-2.PzD";
        scope = 1;
        scopeCurator = 1;
        displayName = "2PzD_US_Army_Base";
        side = 2;
        faction = "2PzD_US_Army_1939";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\US_Army_1939.hpp"
    #include "units\US_Army_1940.hpp"
    #include "units\US_Army_1941.hpp"
    #include "units\US_Army_1942.hpp"
    #include "units\US_Army_1942_06.hpp"
    #include "units\US_Army_1943.hpp"
    #include "units\US_Army_1944.hpp"
    #include "units\US_Army_1945.hpp"

}; //end CfgVehicles