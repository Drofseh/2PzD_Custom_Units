
    class 2PzD_US_Army_1939_CC : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Company Commander";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_CC.jpg";
        icon = "icon2PzD_US_CC";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['LIB_7Rnd_45ACP',3,7],['SmokeShell',1,1],['HandGrenade',1,1]]],[],'H_LIB_US_Helmet_Cap','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_C2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Company Executive Officer";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_C2.jpg";
        icon = "icon2PzD_US_C2";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['LIB_7Rnd_45ACP',2,7],['SmokeShell',1,1],['HandGrenade',1,1]]],[],'H_LIB_US_Helmet_First_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_CSGT : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Company First Sergeant";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_CSGT.jpg";
        icon = "icon2PzD_US_CSGT";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_CRTO : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Company Radio Operator";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_CRTO.jpg";
        icon = "icon2PzD_US_RTO";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_radio',[]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_PC : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Platoon Commander";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_PC.jpg";
        icon = "icon2PzD_US_PC";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['LIB_7Rnd_45ACP',3,7],['SmokeShell',1,1],['HandGrenade',1,1]]],[],'H_LIB_US_Helmet_Second_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_PSGT : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Platoon Sergeant";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_PSGT.jpg";
        icon = "icon2PzD_US_PSGT";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_PGde : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Platoon Guide";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_PGde.jpg";
        icon = "icon2PzD_US_PGde";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_Mess : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Messenger";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_Mess.jpg";
        icon = "icon2PzD_US_Rif";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],[],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_Med : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_Med.jpg";
        icon = "icon2PzD_US_Med";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_medic',[['LIB_5Rnd_762x63',20,5],['SmokeShell',1,1]]],['fow_b_us_m1928',[['ACE_fieldDressing',20],['ACE_elasticBandage',10],['ACE_epinephrine',5],['ACE_morphine',10],['ACE_personalAidKit',5],['ACE_salineIV_500',5],['ACE_surgicalKit',1],['ACE_tourniquet',2]]],'H_LIB_US_Helmet_Med','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_SL : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_SL.jpg";
        icon = "icon2PzD_US_SL";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1928A1_Thompson','','','',['LIB_20Rnd_45ACP_M1_2PzD',20],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['LIB_20Rnd_45ACP_M1_2PzD',5,20],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_S2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assistant Squad Leader";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_S2.jpg";
        icon = "icon2PzD_US_S2";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_Scout : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_Scout.jpg";
        icon = "icon2PzD_US_Scout";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_AR : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_AR.jpg";
        icon = "icon2PzD_US_AR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1918A2_BAR','','','',['LIB_20Rnd_762x63',20],[],'LIB_M1918A2_BAR_Bipod'],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_bar',[['LIB_20Rnd_762x63',6,20],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',9,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_AAR : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifle Assistant";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_AAR.jpg";
        icon = "icon2PzD_US_AAR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',10,20]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_ARAB : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifle Ammo Bearer";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_ARAB.jpg";
        icon = "icon2PzD_US_ARAB";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',15,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_Rif : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_Rif.jpg";
        icon = "icon2PzD_US_Rif";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',2,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',2,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MGTL : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gun Team Leader";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MGTL.jpg";
        icon = "icon2PzD_US_S2";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_250Rnd_762x63_2PzD',2,250]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MG : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MG.jpg";
        //icon = "NEEDS ICON";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1919A4','','','',['LIB_250Rnd_762x63_2PzD',250],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MG_2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (No MG)";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MG_2.jpg";
        //icon = "NEEDS ICON";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MGA : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gun Assistant";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MGA.jpg";
        icon = "icon2PzD_US_AAR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],['LIB_M2_Tripod','','','',[],[],''],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MGA_2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gun Assistant (No Tripod)";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MGA_2.jpg";
        icon = "icon2PzD_US_AAR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MGAB : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gun Ammo Bearer";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MGAB.jpg";
        icon = "icon2PzD_US_ARAB";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_150Rnd_762x63_2PzD',1,150]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortTL : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Team Leader";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortTL.jpg";
        icon = "icon2PzD_US_S2";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',19,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortG : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Gunner";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortG.jpg";
        //icon = "NEEDS ICON";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Barrel','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortG_2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Gunner (No Tube)";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortG_2.jpg";
        //icon = "NEEDS ICON";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortA : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Assistant";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortA.jpg";
        icon = "icon2PzD_US_AAR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Tripod','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortA_2 : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Assistant (No Tripod)";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortA_2.jpg";
        icon = "icon2PzD_US_AAR";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_MortAB : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Ammo Bearer";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_MortAB.jpg";
        icon = "icon2PzD_US_ARAB";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_grenade',[['LIB_5Rnd_762x63',19,5],['LIB_1Rnd_60mm_Mo_HE',2,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_VCom : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tank Commander";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_VCom.jpg";
        icon = "icon2PzD_US_SL";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',2,7]]],[],'H_LIB_US_Helmet_Tank','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1939_VCrew : 2PzD_US_Army_Base {
        author = "Wilhelm Haas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tank Crew";
        side = 2;
        faction = "2PzD_US_Army_1939";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1939_VCrew.jpg";
        icon = "icon2PzD_US_Rif";
        identityTypes[] = { "Head_Euro" , "LanguageENG_F" , "LIB_Glasses" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_45',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',2,7]]],['fow_b_us_m1928',[['ToolKit',1]]],'H_LIB_US_Helmet_Tank','',[],['','','','ItemCompass','ItemWatch','LIB_Headwrap_gloves']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };