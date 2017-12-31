
    class 2PzD_Ger_WHR_1939_CC : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_CC";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_CC";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_P08','','','',['LIB_8Rnd_9x19_P08',8],[],''],['U_LIB_GER_Hauptmann',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_MapTools',1],['fow_i_whistle',1],['ACE_Flashlight_KSF1',1],['LIB_8Rnd_9x19_P08',3,8]]],['V_LIB_GER_PrivateBelt',[]],['B_LIB_GER_Radio',[]],'fow_h_ger_officer_cap','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_C2 : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_C2";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_C2";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],['LIB_P08','','','',['LIB_8Rnd_9x19_P08',8],[],''],['U_LIB_GER_Unterofficer',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1],['ACE_MapTools',1],['fow_i_whistle',1],['LIB_8Rnd_9x19_P08',2,8]]],['V_LIB_GER_VestKar98',[['lib_5Rnd_792x57',12,5]]],[],'fow_h_ger_feldmutze','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_PC : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_PC";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_PC";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_P08','','','',['LIB_8Rnd_9x19_P08',8],[],''],['U_LIB_GER_Leutnant',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1],['ACE_MapTools',1],['fow_i_whistle',1],['LIB_8Rnd_9x19_P08',2,8]]],['V_LIB_GER_OfficerVest',[]],[],'fow_h_ger_officer_cap','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_P2 : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_P2";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_P2";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],['LIB_P08','','','',['LIB_8Rnd_9x19_P08',8],[],''],['U_LIB_GER_Unterofficer',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1],['ACE_MapTools',1],['fow_i_whistle',1],['LIB_8Rnd_9x19_P08',2,8]]],['V_LIB_GER_VestKar98',[['lib_5Rnd_792x57',12,5]]],['B_LIB_GER_A_frame',[['HandGrenade',1,1],['fow_e_m24',1,1],['SmokeShell',1,1]]],'fow_h_ger_feldmutze','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_RTO : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Funker";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_RTO";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5]]],['B_LIB_GER_Radio',[]],'fow_h_ger_feldmutze','',[],['','','','ItemCompass','ItemWatch','LIB_GER_Headset']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_Mess : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Melder";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_Mess";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['SmokeShell',1,1],['fow_e_m24',1,1]]],['B_LIB_GER_A_frame',[]],'fow_h_ger_m40_heer_01','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_MedP : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_MedP";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_MedP";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['LIB_5Rnd_792x57',5],[],''],[],[],['U_LIB_GER_Medic',[['ACE_EntrenchingTool',1],['ACE_fieldDressing',4],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1],['ACE_CableTie',1]]],['V_LIB_GER_VestKar98',[['LIB_5Rnd_792x57',12,5],['SmokeShell',1,1]]],['fow_b_tornister_medic',[['ACE_fieldDressing',20],['ACE_elasticBandage',10],['ACE_morphine',10],['ACE_epinephrine',5],['ACE_tourniquet',2],['ACE_surgicalKit',1],['ACE_personalAidKit',5],['ACE_salineIV_500',5]]],'fow_h_ger_m40_heer_01','',['','','','',[],[],''],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_SL : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_SL";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_SL";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['U_LIB_GER_Unterofficer',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1],['ACE_MapTools',1],['fow_i_whistle',1]]],['V_LIB_GER_VestKar98',[['lib_5Rnd_792x57',12,5],['SmokeShell',1,1],['fow_e_m24',1,1]]],['B_LIB_GER_A_frame',[['LIB_50Rnd_792x57',1,50]]],'fow_h_ger_m40_heer_01','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_S2 : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_S2";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_S2";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_corporal',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['SmokeShell',1,1],['fow_e_m24',1,1]]],['B_LIB_GER_A_frame',[['LIB_50Rnd_792x57',1,50]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_S3 : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Gefreiter";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_S3";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_lance_corporal',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['SmokeShell',1,1],['fow_e_m24',1,1]]],['B_LIB_GER_A_frame',[['LIB_50Rnd_792x57',1,50]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_MG : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_MG";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_MG";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_MG34','','','',['LIB_50Rnd_792x57',50],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_mg',[['LIB_50Rnd_792x57',5,50]]],['fow_b_heer_ammo_belt',[['LIB_50Rnd_792x57',3,50]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_MGA : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_MGA";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_MGA";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_mg',[['lib_5Rnd_792x57',12,5],['ACE_SpareBarrel',1,1]]],['fow_b_heer_ammo_belt',[['LIB_50Rnd_792x57',3,50]]],'fow_h_ger_m40_heer_01','',['LIB_Binocular_GER','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_MGAB : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_MGAB";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_MGAB";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['LIB_50Rnd_792x57',2,50]]],['fow_b_heer_ammo_belt',[['LIB_50Rnd_792x57',3,50]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_Gren : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_Gren";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','LIB_ACC_GW_SB_Empty','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5]]],['B_LIB_GER_A_frame',[['LIB_1Rnd_G_PZGR_30',4,1],['LIB_1Rnd_G_SPRGR_30',4,1]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_MedS : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_MedS";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_MedS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['HandGrenade',1,1],['fow_e_m24',1,1]]],['fow_b_tornister_medic',[['ACE_fieldDressing',15],['ACE_elasticBandage',5],['ACE_morphine',5],['ACE_tourniquet',5]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_Ger_WHR_1939_Rif : 2PzD_Ger_WHR_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_2PzD_Rif";
        faction = "2PzD_Ger_WHR_1939";
        icon = "icon2PzD_Ger_Rif";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_K98','','','',['lib_5Rnd_792x57',5],[],''],[],[],['fow_u_ger_m43_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_CableTie',1],['ACE_tourniquet',1],['ACE_Flashlight_KSF1',1]]],['fow_v_heer_k98',[['lib_5Rnd_792x57',12,5],['HandGrenade',1,1],['fow_e_m24',1,1]]],['fow_b_tornister_medic',[['ACE_fieldDressing',15],['ACE_elasticBandage',5],['ACE_morphine',5],['ACE_tourniquet',5]]],'fow_h_ger_m40_heer_01','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };