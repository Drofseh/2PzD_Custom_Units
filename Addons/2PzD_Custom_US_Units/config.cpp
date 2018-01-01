
class CfgPatches {

    class 2PzD_Custom_US_Units {

        //Add yourself to authors[] if you contribute. authors[] = {"Wilhelm Haas (Drofseh)","Your Name"};
        authors[] = { "Wilhelm Haas (Drofseh)" };
        author = "Wilhelm Haas";

        //Add all new 'vehicle' classes to the units array. This will give Zeus access to them.
        units[] = { "2PzD_US_Army_1939_CC","2PzD_US_Army_1939_C2","2PzD_US_Army_1939_CSGT","2PzD_US_Army_1939_CRTO","2PzD_US_Army_1939_PC","2PzD_US_Army_1939_PSGT","2PzD_US_Army_1939_PGde","2PzD_US_Army_1939_Mess","2PzD_US_Army_1939_Med","2PzD_US_Army_1939_SL","2PzD_US_Army_1939_S2","2PzD_US_Army_1939_Scout","2PzD_US_Army_1939_AR","2PzD_US_Army_1939_AAR","2PzD_US_Army_1939_ARAB","2PzD_US_Army_1939_Rif","2PzD_US_Army_1939_MGTL","2PzD_US_Army_1939_MG","2PzD_US_Army_1939_MG_2","2PzD_US_Army_1939_MGA","2PzD_US_Army_1939_MGA_2","2PzD_US_Army_1939_MGAB","2PzD_US_Army_1939_MortTL","2PzD_US_Army_1939_MortG","2PzD_US_Army_1939_MortG_2","2PzD_US_Army_1939_MortA","2PzD_US_Army_1939_MortA_2","2PzD_US_Army_1939_MortAB","2PzD_US_Army_1939_VCom","2PzD_US_Army_1939_VCrew",
                    "2PzD_US_Army_1940_CC","2PzD_US_Army_1940_C2","2PzD_US_Army_1940_CSGT","2PzD_US_Army_1940_CRTO","2PzD_US_Army_1940_PC","2PzD_US_Army_1940_PSGT","2PzD_US_Army_1940_PGde","2PzD_US_Army_1940_Mess","2PzD_US_Army_1940_Med","2PzD_US_Army_1940_SL","2PzD_US_Army_1940_S2","2PzD_US_Army_1940_Scout","2PzD_US_Army_1940_AR","2PzD_US_Army_1940_AAR","2PzD_US_Army_1940_ARAB","2PzD_US_Army_1940_Rif","2PzD_US_Army_1940_MGTL","2PzD_US_Army_1940_MG","2PzD_US_Army_1940_MG_2","2PzD_US_Army_1940_MGA","2PzD_US_Army_1940_MGA_2","2PzD_US_Army_1940_MGAB","2PzD_US_Army_1940_MortTL","2PzD_US_Army_1940_MortG","2PzD_US_Army_1940_MortG_2","2PzD_US_Army_1940_MortA","2PzD_US_Army_1940_MortA_2","2PzD_US_Army_1940_MortAB","2PzD_US_Army_1940_VCom","2PzD_US_Army_1940_VCrew",
                    "2PzD_US_Army_1941_CC","2PzD_US_Army_1941_C2","2PzD_US_Army_1941_CSGT","2PzD_US_Army_1941_CRTO","2PzD_US_Army_1941_PC","2PzD_US_Army_1941_PSGT","2PzD_US_Army_1941_PGde","2PzD_US_Army_1941_Mess","2PzD_US_Army_1941_Med","2PzD_US_Army_1941_SL","2PzD_US_Army_1941_S2","2PzD_US_Army_1941_Scout","2PzD_US_Army_1941_AR","2PzD_US_Army_1941_AAR","2PzD_US_Army_1941_ARAB","2PzD_US_Army_1941_Rif","2PzD_US_Army_1941_MGTL","2PzD_US_Army_1941_MG","2PzD_US_Army_1941_MG_2","2PzD_US_Army_1941_MGA","2PzD_US_Army_1941_MGA_2","2PzD_US_Army_1941_MGAB","2PzD_US_Army_1941_MortTL","2PzD_US_Army_1941_MortG","2PzD_US_Army_1941_MortG_2","2PzD_US_Army_1941_MortA","2PzD_US_Army_1941_MortA_2","2PzD_US_Army_1941_MortAB","2PzD_US_Army_1941_VCom","2PzD_US_Army_1941_VCrew",
                    "2PzD_US_Army_1942_CC","2PzD_US_Army_1942_C2","2PzD_US_Army_1942_CSGT","2PzD_US_Army_1942_CRTO","2PzD_US_Army_1942_PC","2PzD_US_Army_1942_PSGT","2PzD_US_Army_1942_PGde","2PzD_US_Army_1942_Mess","2PzD_US_Army_1942_Med","2PzD_US_Army_1942_SL","2PzD_US_Army_1942_S2","2PzD_US_Army_1942_Scout","2PzD_US_Army_1942_AR","2PzD_US_Army_1942_AAR","2PzD_US_Army_1942_ARAB","2PzD_US_Army_1942_Rif","2PzD_US_Army_1942_MGTL","2PzD_US_Army_1942_MG","2PzD_US_Army_1942_MG_2","2PzD_US_Army_1942_MGA","2PzD_US_Army_1942_MGA_2","2PzD_US_Army_1942_MGAB","2PzD_US_Army_1942_MortTL","2PzD_US_Army_1942_MortG","2PzD_US_Army_1942_MortG_2","2PzD_US_Army_1942_MortA","2PzD_US_Army_1942_MortA_2","2PzD_US_Army_1942_MortAB","2PzD_US_Army_1942_VCom","2PzD_US_Army_1942_VCrew",
                    "2PzD_US_Army_1942_06_CC","2PzD_US_Army_1942_06_C2","2PzD_US_Army_1942_06_CSGT","2PzD_US_Army_1942_06_CRTO","2PzD_US_Army_1942_06_PC","2PzD_US_Army_1942_06_PSGT","2PzD_US_Army_1942_06_PGde","2PzD_US_Army_1942_06_Mess","2PzD_US_Army_1942_06_Med","2PzD_US_Army_1942_06_SL","2PzD_US_Army_1942_06_S2","2PzD_US_Army_1942_06_Scout","2PzD_US_Army_1942_06_AR","2PzD_US_Army_1942_06_AAR","2PzD_US_Army_1942_06_ARAB","2PzD_US_Army_1942_06_Rif","2PzD_US_Army_1942_06_MGTL","2PzD_US_Army_1942_06_MG","2PzD_US_Army_1942_06_MG_2","2PzD_US_Army_1942_06_MGA","2PzD_US_Army_1942_06_MGA_2","2PzD_US_Army_1942_06_MGAB","2PzD_US_Army_1942_06_MortTL","2PzD_US_Army_1942_06_MortG","2PzD_US_Army_1942_06_MortG_2","2PzD_US_Army_1942_06_MortA","2PzD_US_Army_1942_06_MortA_2","2PzD_US_Army_1942_06_MortAB","2PzD_US_Army_1942_06_BzkaTL","2PzD_US_Army_1942_06_BzkaG","2PzD_US_Army_1942_06_BzkaA","2PzD_US_Army_1942_06_VCom","2PzD_US_Army_1942_06_VCrew",
                    "2PzD_US_Army_1943_CC","2PzD_US_Army_1943_C2","2PzD_US_Army_1943_CSGT","2PzD_US_Army_1943_CRTO","2PzD_US_Army_1943_PC","2PzD_US_Army_1943_PSGT","2PzD_US_Army_1943_PGde","2PzD_US_Army_1943_Mess","2PzD_US_Army_1943_Med","2PzD_US_Army_1943_SL","2PzD_US_Army_1943_S2","2PzD_US_Army_1943_Scout","2PzD_US_Army_1943_AR","2PzD_US_Army_1943_AAR","2PzD_US_Army_1943_ARAB","2PzD_US_Army_1943_Rif","2PzD_US_Army_1943_MGTL","2PzD_US_Army_1943_MG","2PzD_US_Army_1943_MG_2","2PzD_US_Army_1943_MGA","2PzD_US_Army_1943_MGA_2","2PzD_US_Army_1943_MGAB","2PzD_US_Army_1943_MortTL","2PzD_US_Army_1943_MortG","2PzD_US_Army_1943_MortG_2","2PzD_US_Army_1943_MortA","2PzD_US_Army_1943_MortA_2","2PzD_US_Army_1943_MortAB","2PzD_US_Army_1943_BzkaTL","2PzD_US_Army_1943_BzkaG","2PzD_US_Army_1943_BzkaA","2PzD_US_Army_1943_VCom","2PzD_US_Army_1943_VCrew",
                    "2PzD_US_Army_1944_CC","2PzD_US_Army_1944_C2","2PzD_US_Army_1944_CSGT","2PzD_US_Army_1944_CRTO","2PzD_US_Army_1944_PC","2PzD_US_Army_1944_PSGT","2PzD_US_Army_1944_PGde","2PzD_US_Army_1944_PRTO","2PzD_US_Army_1944_Mess","2PzD_US_Army_1944_Med","2PzD_US_Army_1944_SL","2PzD_US_Army_1944_S2","2PzD_US_Army_1944_Scout","2PzD_US_Army_1944_AR","2PzD_US_Army_1944_AAR","2PzD_US_Army_1944_ARAB","2PzD_US_Army_1944_Rif","2PzD_US_Army_1944_MGTL","2PzD_US_Army_1944_MG","2PzD_US_Army_1944_MG_2","2PzD_US_Army_1944_MGA","2PzD_US_Army_1944_MGA_2","2PzD_US_Army_1944_MGAB","2PzD_US_Army_1944_MortTL","2PzD_US_Army_1944_MortG","2PzD_US_Army_1944_MortG_2","2PzD_US_Army_1944_MortA","2PzD_US_Army_1944_MortA_2","2PzD_US_Army_1944_MortAB","2PzD_US_Army_1944_BzkaTL","2PzD_US_Army_1944_BzkaG","2PzD_US_Army_1944_BzkaA","2PzD_US_Army_1944_VCom","2PzD_US_Army_1944_VCrew",
                    "2PzD_US_Army_1945_CC","2PzD_US_Army_1945_C2","2PzD_US_Army_1945_CSGT","2PzD_US_Army_1945_CRTO","2PzD_US_Army_1945_PC","2PzD_US_Army_1945_PSGT","2PzD_US_Army_1945_PGde","2PzD_US_Army_1945_PRTO","2PzD_US_Army_1945_Mess","2PzD_US_Army_1945_Med","2PzD_US_Army_1945_SL","2PzD_US_Army_1945_S2","2PzD_US_Army_1945_Scout","2PzD_US_Army_1945_AR","2PzD_US_Army_1945_AAR","2PzD_US_Army_1945_ARAB","2PzD_US_Army_1945_Rif","2PzD_US_Army_1945_MGTL","2PzD_US_Army_1945_MG","2PzD_US_Army_1945_MG_2","2PzD_US_Army_1945_MGA","2PzD_US_Army_1945_MGA_2","2PzD_US_Army_1945_MGAB","2PzD_US_Army_1945_MortTL","2PzD_US_Army_1945_MortG","2PzD_US_Army_1945_MortG_2","2PzD_US_Army_1945_MortA","2PzD_US_Army_1945_MortA_2","2PzD_US_Army_1945_MortAB","2PzD_US_Army_1945_BzkaTL","2PzD_US_Army_1945_BzkaG","2PzD_US_Army_1945_BzkaA","2PzD_US_Army_1945_VCom","2PzD_US_Army_1945_VCrew"
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
    #include "images\US_Icons.hpp"

};

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
        author = "Wilhelm Haas";
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
