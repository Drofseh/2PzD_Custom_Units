
class CfgPatches {

    class 2PzD_Custom_German_Units {

        //Add yourself to authors[] if you contribute. authors[] = {"Wilhelm Haas (Drofseh)","Your Name"};
        authors[] = { "Wilhelm Haas (Drofseh)" };
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = { "2PzD_Ger_WHR_1939_CC","2PzD_Ger_WHR_1939_C2","2PzD_Ger_WHR_1939_PC","2PzD_Ger_WHR_1939_P2","2PzD_Ger_WHR_1939_RTO","2PzD_Ger_WHR_1939_Mess","2PzD_Ger_WHR_1939_MedP","2PzD_Ger_WHR_1939_SL","2PzD_Ger_WHR_1939_S2","2PzD_Ger_WHR_1939_S3","2PzD_Ger_WHR_1939_MG","2PzD_Ger_WHR_1939_MGA","2PzD_Ger_WHR_1939_MGAB","2PzD_Ger_WHR_1939_Gren","2PzD_Ger_WHR_1939_MedS","2PzD_Ger_WHR_1939_Rif"
        };
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance"};
        requiredVersion = 1.62;

    };//End 2PzD_Custom_US_Units

}; //End CfgPatches

class EventHandlers;

class CBA_Extended_EventHandlers_base;

class CfgVehicleIcons {

    //All unit icons should go in the icons folder and then be declared in this #included file.
    #include "images\Ger_Icons.hpp"

};

class CfgEditorSubcategories {

    //If a new subcategory class is needed it should be in it's own file and then be #include here.
    //#include "subcategories\my_category"

}; //End CfgEditorSubcategories

class CfgFactionClasses {

    //All new factions should go in their own files and then be #include here.
    #include "Ger_Factions.hpp"

};

class CfgGroups {
    class Indep {
        //#include "compositions\Ger_Army\1939_Compositions.hpp"
    };
};

class CfgVehicles {

    //Base classes will be placed here for inheritance.
    class LIB_GER_Soldier_base;

    class 2PzD_Ger_WHR_Base : LIB_GER_Soldier_base {
        author = "Wilhelm Haas";
        scope = 1;
        scopeCurator = 1;
        displayName = "2PzD_Ger_WGR_Base";
        side = 1;
        faction = "2PzD_Ger_WGR_1939";
        identityTypes[] = { "Head_Euro" , "Language_LIB_GER" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            //replace ALiVE_orbatCreator with 2PzD_Loadout for publication
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['fow_e_m24',1,1],['HandGrenade',1,1]]],['B_LIB_GER_A_frame',[['LIB_50Rnd_792x57',1,50]]],'fow_h_ger_m40_heer_01','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    //New units will be placed in their own folder and file and then be #include here.
    #include "units\Ger_WHR_1939.hpp"

}; //end CfgVehicles