
    class 2PzD_US_Army_1943_CC : 2PzD_US_Army_1942_06_CC {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_CC.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_carbine',[['LIB_7Rnd_45ACP',1,7],['SmokeShell',1,1],['HandGrenade',1,1],['LIB_15Rnd_762x33',4,15]]],[],'H_LIB_US_Helmet_Cap','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_C2 : 2PzD_US_Army_1942_06_C2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_C2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_carbine',[['LIB_7Rnd_45ACP',1,7],['SmokeShell',1,1],['HandGrenade',1,1],['LIB_15Rnd_762x33',4,15]]],[],'H_LIB_US_Helmet_First_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_CSGT : 2PzD_US_Army_1942_06_CSGT {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_CSGT.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_CRTO : 2PzD_US_Army_1942_06_CRTO {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_CRTO.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_radio',[]],'fow_h_us_m1_net','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_PC : 2PzD_US_Army_1942_06_PC {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_PC.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1A1_Thompson','','','',['LIB_30Rnd_45ACP',30],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['LIB_7Rnd_45ACP',2,7],['SmokeShell',1,1],['HandGrenade',1,1],['LIB_30Rnd_45ACP',5,30]]],[],'H_LIB_US_Helmet_Second_lieutenant','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_PSGT : 2PzD_US_Army_1942_06_PSGT {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_PSGT.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_PGde : 2PzD_US_Army_1942_06_PGde {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_PGde.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_garand',[['LIB_7Rnd_45ACP',1,7],['HandGrenade',1,1],['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_Mess : 2PzD_US_Army_1942_06_Mess {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_Mess.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_8Rnd_762x63',10,8],['HandGrenade',1,1],['SmokeShell',1,1]]],[],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_Med : 2PzD_US_Army_1942_06_Med {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_Med.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_medic',[['SmokeShell',1,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_m1928',[['ACE_fieldDressing',20],['ACE_elasticBandage',10],['ACE_epinephrine',5],['ACE_morphine',10],['ACE_personalAidKit',5],['ACE_salineIV_500',5],['ACE_surgicalKit',1],['ACE_tourniquet',2]]],'H_LIB_US_Helmet_Med','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_SL : 2PzD_US_Army_1942_06_SL {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_SL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1A1_Thompson','','','',['LIB_30Rnd_45ACP',30],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['LIB_30Rnd_45ACP',5,30],['HandGrenade',1,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_S2 : 2PzD_US_Army_1942_06_S2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_S2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','LIB_ACC_GL_M7','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_grenade',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8],['LIB_1Rnd_G_M9A1',4,1],['LIB_1Rnd_G_Mk2',4,1]]],['fow_b_us_m1928',[]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_Scout : 2PzD_US_Army_1942_06_Scout {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_Scout.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8]]],['fow_b_us_m1928',[]],'fow_h_us_m1_net','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_AR : 2PzD_US_Army_1942_06_AR {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_AR.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1918A2_BAR','','','',['LIB_20Rnd_762x63',20],[],'LIB_M1918A2_BAR_Bipod'],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_bar',[['LIB_20Rnd_762x63',6,20],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',9,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_AAR : 2PzD_US_Army_1942_06_AAR {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_AAR.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['SmokeShell',1,1],['LIB_8Rnd_762x63',10,8]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',10,20]]],'fow_h_us_m1_net','',['LIB_Binocular_SU','','','',[],[],''],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_ARAB : 2PzD_US_Army_1942_06_ARAB {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_ARAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_8Rnd_762x63',10,8],['HandGrenade',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',15,20]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_Rif : 2PzD_US_Army_1942_06_Rif {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_Rif.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Garand','','','',['LIB_8Rnd_762x63',8],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_garand',[['LIB_8Rnd_762x63',10,8],['HandGrenade',2,1],['SmokeShell',1,1]]],['fow_b_us_m1928',[['LIB_20Rnd_762x63',2,20]]],'fow_h_us_m1_net','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MGTL : 2PzD_US_Army_1942_06_MGTL {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MGTL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_m1928',[['LIB_250Rnd_762x63_2PzD',2,250]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MG : 2PzD_US_Army_1942_06_MG {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MG.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1919A4','','','',['LIB_250Rnd_762x63_2PzD',250],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MG_2 : 2PzD_US_Army_1942_06_MG_2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MG_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',2,7],['LIB_250Rnd_762x63_2PzD',1,250]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1_net','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MGA : 2PzD_US_Army_1942_06_MGA {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MGA.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],['LIB_M2_Tripod','','','',[],[],''],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_15Rnd_762x33',4,15]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MGA_2 : 2PzD_US_Army_1942_06_MGA_2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MGA_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_15Rnd_762x33',4,15]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1_net','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MGAB : 2PzD_US_Army_1942_06_MGAB {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MGAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_150Rnd_762x63_2PzD',1,150],['LIB_15Rnd_762x33',4,15]]],['B_LIB_US_MGbag_Empty',[['LIB_250Rnd_762x63_2PzD',2,250]]],'fow_h_us_m1','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortTL : 2PzD_US_Army_1942_06_MortTL {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortTL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortG : 2PzD_US_Army_1942_06_MortG {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortG.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Barrel','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1_net','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortG_2 : 2PzD_US_Army_1942_06_MortG_2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortG_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortA : 2PzD_US_Army_1942_06_MortA {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortA.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],['LIB_M2_60_Tripod','','','',[],[],''],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1_net','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortA_2 : 2PzD_US_Army_1942_06_MortA_2 {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortA_2.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [[],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_asst_mg',[['LIB_7Rnd_45ACP',3,7],['LIB_1Rnd_60mm_Mo_HE',3,1]]],['B_LIB_US_MGbag_Empty',[['LIB_1Rnd_60mm_Mo_HE',4,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_MortAB : 2PzD_US_Army_1942_06_MortAB {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_MortAB.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_1Rnd_60mm_Mo_HE',2,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_m1928',[['LIB_1Rnd_60mm_Mo_HE',5,1]]],'fow_h_us_m1_net','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_BzkaTL : 2PzD_US_Army_1942_06_BzkaTL {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_BzkaTL.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_15Rnd_762x33',4,15]]],['fow_b_us_rocket_bag',[['LIB_1Rnd_60mm_M6',3,1]]],'H_LIB_US_Helmet_NCO','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_BzkaG : 2PzD_US_Army_1942_06_BzkaG {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_BzkaG.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],['fow_w_m1a1_bazooka','','','',['LIB_1Rnd_60mm_M6',1],[],''],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_15Rnd_762x33',4,15]]],['fow_b_us_rocket_bag',[['LIB_1Rnd_60mm_M6',2,1]]],'fow_h_us_m1','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_BzkaA : 2PzD_US_Army_1942_06_BzkaA {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_BzkaA.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['LIB_M1_Carbine','','','',['LIB_15Rnd_762x33',15],[],''],[],[],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1]]],['fow_v_us_carbine',[['LIB_15Rnd_762x33',4,15]]],['fow_b_us_rocket_bag',[['LIB_1Rnd_60mm_M6',3,1]]],'fow_h_us_m1_net','',[],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_VCom : 2PzD_US_Army_1942_06_VCom {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_VCom.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['fow_w_m3','','','',['fow_30Rnd_45acp_M3_2PzD',30],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['fow_i_whistle',1]]],['fow_v_us_thompson',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',3,7],['fow_30Rnd_45acp_M3_2PzD',5,30]]],[],'H_LIB_US_Helmet_Tank','',['LIB_Binocular_SU','','','',[],[],''],['ItemMap','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };

    class 2PzD_US_Army_1943_VCrew : 2PzD_US_Army_1942_06_VCrew {
        faction = "2PzD_US_Army_1943";
        //editorPreview = "\2PzD_Custom_US_Units\images\editor previews\2PzD_US_Army_1943_VCrew.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
            class 2PzD_Loadout {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['fow_w_m3','','','',['fow_30Rnd_45acp_M3_2PzD',30],[],''],[],['LIB_Colt_M1911','','','',['LIB_7Rnd_45ACP',7],[],''],['fow_u_us_m41_01_private',[['ACE_fieldDressing',4],['ACE_EntrenchingTool',1],['ACE_Flashlight_MX991',1],['ACE_CableTie',1],['ACE_tourniquet',1],['LIB_Headwrap_gloves',1]]],['fow_v_us_thompson',[['HandGrenade',1,1],['SmokeShell',1,1],['LIB_7Rnd_45ACP',2,7],['fow_30Rnd_45acp_M3_2PzD',5,30]]],['fow_b_us_m1928',[['ToolKit',1]]],'H_LIB_US_Helmet_Tank','',[],['','','','ItemCompass','ItemWatch','']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
    };