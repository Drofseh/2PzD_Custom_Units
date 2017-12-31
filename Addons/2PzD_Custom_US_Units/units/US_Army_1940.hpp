
    class 2PzD_US_Army_1940_CC : 2PzD_US_Army_1939_CC {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_CC.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['LIB_7Rnd_45ACP',3,7],['SmokeShell',1,1],['HandGrenade',1,1]]],[],'H_LIB_US_Helmet_Cap','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_C2 : 2PzD_US_Army_1939_C2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_C2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_45',[['LIB_7Rnd_45ACP',2,7],['SmokeShell',1,1],['HandGrenade',1,1]]],[],'H_LIB_US_Helmet_First_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_CSGT : 2PzD_US_Army_1939_CSGT {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_CSGT.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_CRTO : 2PzD_US_Army_1939_CRTO {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_CRTO.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_radio',[]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_PC : 2PzD_US_Army_1939_PC {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_PC.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1928A1_Thompson','','','',['LIB_20Rnd_45ACP_M1_2PzD',20],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['LIB_7Rnd_45ACP',2,7],['SmokeShell',1,1],['HandGrenade',1,1],['LIB_20Rnd_45ACP_M1_2PzD',5,20]]],[],'H_LIB_US_Helmet_Second_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_PSGT : 2PzD_US_Army_1939_PSGT {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_PSGT.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_PGde : 2PzD_US_Army_1939_PGde {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_PGde.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_Mess : 2PzD_US_Army_1939_Mess {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_Mess.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],[],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_Med : 2PzD_US_Army_1939_Med {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_Med.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_medic',[['LIB_5Rnd_762x63',20,5],['SmokeShell',1,1]]],['fow_b_us_m1928',[['ACE_fieldDressing',20],['ACE_elasticBandage',10],['ACE_epinephrine',5],['ACE_morphine',10],['ACE_personalAidKit',5],['ACE_salineIV_500',5],['ACE_surgicalKit',1],['ACE_tourniquet',2]]],'H_LIB_US_Helmet_Med','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_SL : 2PzD_US_Army_1939_SL {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_SL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1928A1_Thompson','','','',['LIB_20Rnd_45ACP_M1_2PzD',20],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['LIB_20Rnd_45ACP_M1_2PzD',5,20],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_S2 : 2PzD_US_Army_1939_S2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_S2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_Scout : 2PzD_US_Army_1939_Scout {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_Scout.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_AR : 2PzD_US_Army_1939_AR {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_AR.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1918A2_BAR','','','',['LIB_20Rnd_762x63',20],[],'LIB_M1918A2_BAR_Bipod'],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_bar',[['LIB_20Rnd_762x63',6,20],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',9,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_AAR : 2PzD_US_Army_1939_AAR {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_AAR.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',10,20]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_ARAB : 2PzD_US_Army_1939_ARAB {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_ARAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',15,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_Rif : 2PzD_US_Army_1939_Rif {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_Rif.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',2,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',2,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MGTL : 2PzD_US_Army_1939_MGTL {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MGTL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_250Rnd_762x63_2PzD',2,250]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MG : 2PzD_US_Army_1939_MG {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MG.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1919A4','','','',['LIB_250Rnd_762x63_2PzD',250],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MG_2 : 2PzD_US_Army_1939_MG_2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MG_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MGA : 2PzD_US_Army_1939_MGA {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MGA.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],['LIB_M2_Tripod','','','',[],[],''],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MGA_2 : 2PzD_US_Army_1939_MGA_2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MGA_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MGAB : 2PzD_US_Army_1939_MGAB {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MGAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',20,5],['LIB_150Rnd_762x63_2PzD',1,150]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortTL : 2PzD_US_Army_1939_MortTL {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortTL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_5Rnd_762x63',19,5],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortG : 2PzD_US_Army_1939_MortG {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortG.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Barrel','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortG_2 : 2PzD_US_Army_1939_MortG_2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortG_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortA : 2PzD_US_Army_1939_MortA {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortA.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Tripod','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortA_2 : 2PzD_US_Army_1939_MortA_2 {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortA_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_MortAB : 2PzD_US_Army_1939_MortAB {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_MortAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1903A3_Springfield','','','',['LIB_5Rnd_762x63',5],[],''],[],[],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_grenade',[['LIB_5Rnd_762x63',19,5],['LIB_1Rnd_60mm_Mo_HE',2,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_VCom : 2PzD_US_Army_1939_VCom {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_VCom.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1928A1_Thompson','','','',['LIB_20Rnd_45ACP_M1_2PzD',20],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',3,7],['LIB_20Rnd_45ACP_M1_2PzD',5,20]]],[],'H_LIB_US_Helmet_Tank','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1940_VCrew : 2PzD_US_Army_1939_VCrew {
        faction = "2PzD_US_Army_1940";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1940_VCrew.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m37_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_45',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',2,7]]],['fow_b_us_m1928',[['ToolKit',1]]],'H_LIB_US_Helmet_Tank','',[],['','','','ItemCompass','ItemWatch','LIB_Headwrap_gloves']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };