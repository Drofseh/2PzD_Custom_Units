
//Company HQ

    class 2PzD_UK_Army_39_CC : fow_s_uk_base {
        displayName = "Company Commander";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManOfficer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_Web455,"SmokeShell","HandGrenade"};
        respawnMagazines[] = {UK_Mags_Web455,"SmokeShell","HandGrenade"};

        weapons[] = {"fow_w_webley","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_lieutenant";
    };

    class 2PzD_UK_Army_39_C2 : fow_s_uk_base {
        displayName = "Company Sergeant Major";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade",UK_Mags_M2HE};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade",UK_Mags_M2HE};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_sergeant";
    };

//Platoon HQ

    class 2PzD_UK_Army_39_PC : fow_s_uk_base {
        displayName = "Platoon Commander";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManOfficer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_Web455,"SmokeShell","HandGrenade"};
        respawnMagazines[] = {UK_Mags_Web455,"SmokeShell","HandGrenade"};

        weapons[] = {"fow_w_webley","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_lieutenant";
    };

    class 2PzD_UK_Army_39_P2 : fow_s_uk_base {
        displayName = "Platoon Sergeant";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade",UK_Mags_M2HE};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade",UK_Mags_M2HE};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_sergeant";
    };

    class 2PzD_UK_Army_39_Sig : fow_s_uk_base {
        displayName = "Signaller";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManEngineer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_us_radio";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade"};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade"};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_Med : fow_s_uk_base {
        displayName = "Medic";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManMedic";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_p37";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell"};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell"};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_LMortG : fow_s_uk_base {
        displayName = "2"" Mortar Gunner";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManExplosive";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_bergenpack";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,"ACE_MapTools","ACE_RangeTable_82mm"};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,"ACE_MapTools","ACE_RangeTable_82mm"};

        magazines[] = {UK_Mags_Web455,UK_Mags_M2HE,UK_Mags_M2HE};
        respawnMagazines[] = {UK_Mags_Web455,UK_Mags_M2HE,UK_Mags_M2HE};

        weapons[] = {"fow_w_webley","LIB_M2_60_Barrel","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","LIB_M2_60_Barrel","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_lance_corporal";
    };

    class 2PzD_UK_Army_39_LMortA : 2PzD_UK_Army_39_LMortG {
        displayName = "2"" Mortar Assistant";

        //Items
        weapons[] = {"fow_w_webley","LIB_M2_60_Tripod","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","LIB_M2_60_Tripod","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

//Squad

    class 2PzD_UK_Army_39_SL : fow_s_uk_base {
        displayName = "Section Leader";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_p37";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","SmokeShell","HandGrenade","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_corporal";
    };

    class 2PzD_UK_Army_39_TL : 2PzD_UK_Army_39_SL {
        displayName = "Team Leader";

        //Items
        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};

        uniformClass = "fow_u_uk_bd40_lance_corporal";
    };

    class 2PzD_UK_Army_39_Rif : fow_s_uk_base {
        displayName = "Rifleman";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconMan";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_p37";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL};

        magazines[] = {UK_Mags_LeeEn,"HandGrenade","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
        respawnMagazines[] = {UK_Mags_LeeEn,"HandGrenade","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_AR : 2PzD_UK_Army_39_Rif {
        displayName = "Bren Gunner";
        icon = "iconManMG";

        //Items
        backpack = "fow_b_uk_p37";

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren",UK_Def_EqL};

        magazines[] = {UK_Mags_Bren,UK_Mags_Bren,"fow_30Rnd_303_bren","fow_30Rnd_303_bren","HandGrenade"};
        respawnMagazines[] = {UK_Mags_Bren,UK_Mags_Bren,"fow_30Rnd_303_bren","fow_30Rnd_303_bren","HandGrenade"};

        weapons[] = {"fow_w_bren","Throw","Put"};
        respawnWeapons[] = {"fow_w_bren","Throw","Put"};
    };

    class 2PzD_UK_Army_39_AAR : 2PzD_UK_Army_39_AR {
        displayName = "Bren Gun Assistant";
        icon = "iconManMG";

        //Items
        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren","LIB_Binocular_SU",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren","LIB_Binocular_SU",UK_Def_EqL};

        magazines[] = {UK_Mags_LeeEn,"ACE_SpareBarrel",UK_Mags_Bren,"HandGrenade"};
        respawnMagazines[] = {UK_Mags_LeeEn,"ACE_SpareBarrel",UK_Mags_Bren,"HandGrenade"};

        weapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
        respawnWeapons[] = {"LEN_SMLE_No4Mk1","Throw","Put"};
    };

    class 2PzD_UK_Army_39_ARAB : 2PzD_UK_Army_39_Rif {
        displayName = "Bren Gun Ammo Bearer";
        icon = "iconMan";

        //Items
        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren",UK_Def_EqL};

        magazines[] = {UK_Mags_LeeEn,"HandGrenade",UK_Mags_Bren,UK_Mags_Bren,"fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
        respawnMagazines[] = {UK_Mags_LeeEn,"HandGrenade",UK_Mags_Bren,UK_Mags_Bren,"fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
    };

//Machine Gun Team

    class 2PzD_UK_Army_39_MGTL : 2PzD_UK_Army_39_TL {
        displayName = "Heavy Machine Gun Team Leader";

        //Items
        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        uniformClass = "fow_u_uk_bd40_corporal";
    };

    class 2PzD_UK_Army_39_MG : fow_s_uk_base {
        displayName = "Heavy Machine Gunner";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManMG";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_vickers_weapon";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};

        magazines[] = {UK_Mags_Web455};
        respawnMagazines[] = {UK_Mags_Web455};

        weapons[] = {"fow_w_webley","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_MGA : 2PzD_UK_Army_39_MG {
        displayName = "Heavy Machine Gunner Assistant";

        //Items
        backpack = "fow_b_uk_vickers_support";

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};
    };

    class 2PzD_UK_Army_39_MGAB : 2PzD_UK_Army_39_Rif {
        displayName = "Heavy Machine Gun Ammo Bearer";

        //Items
        backpack = "fow_b_uk_p37";

        magazines[] = {UK_Mags_LeeEn};
        respawnMagazines[] = {UK_Mags_LeeEn};
    };

//Mortar Team

    class 2PzD_UK_Army_39_MortTL : 2PzD_UK_Army_39_TL {
        displayName = "3"" Mortar Team Leader";

        //Items
        backpack = "fow_b_uk_bergenpack";

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade",UK_Mags_M3HE};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade",UK_Mags_M3HE};

        uniformClass = "fow_u_uk_bd40_corporal";
    };

    class 2PzD_UK_Army_39_MortG : fow_s_uk_base {
        displayName = "3"" Mortar Gunner";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManExplosive";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_bergenpack";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,"ACE_MapTools","ACE_RangeTable_82mm"};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,"ACE_MapTools","ACE_RangeTable_82mm"};

        magazines[] = {UK_Mags_Web455,UK_Mags_M3HE};
        respawnMagazines[] = {UK_Mags_Web455,UK_Mags_M3HE};

        weapons[] = {"fow_w_webley","LIB_BM37_Barrel","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","LIB_BM37_Barrel","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_MortA : 2PzD_UK_Army_39_MortG {
        displayName = "3"" Mortar Assistant";

        //Items
        weapons[] = {"fow_w_webley","LIB_BM37_Tripod","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","LIB_BM37_Tripod","Throw","Put"};
    };

    class 2PzD_UK_Army_39_MortAB : 2PzD_UK_Army_39_Rif {
        displayName = "3"" Mortar Ammo Bearer";

        //Items
        magazines[] = {UK_Mags_LeeEn,UK_Mags_M3HE,"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_HE"};
        respawnMagazines[] = {UK_Mags_LeeEn,UK_Mags_M3HE,"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_HE"};
    };

//Boys AT Rifle Team

    class 2PzD_UK_Army_39_ATRTL : 2PzD_UK_Army_39_TL {
        displayName = "Boys Rifle Team Leader";

        //Items
        backpack = "fow_b_uk_bergenpack";

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade",UK_Mags_Boys};
        respawnMagazines[] = {UK_Mags_LeeEn,"SmokeShell","HandGrenade",UK_Mags_Boys};

        uniformClass = "fow_u_uk_bd40_corporal";
    };

    class 2PzD_UK_Army_39_ATRG : fow_s_uk_base {
        displayName = "Boys Rifle Gunner";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManAT";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_bergenpack";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};

        magazines[] = {UK_Mags_Web455,UK_Mags_Boys};
        respawnMagazines[] = {UK_Mags_Web455,UK_Mags_Boys};

        weapons[] = {"fow_w_webley","LIB_PTRD","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","LIB_PTRD","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };

    class 2PzD_UK_Army_39_ATRAB : 2PzD_UK_Army_39_Rif {
        displayName = "Boys Rifle Ammo Bearer";

        //Items
        magazines[] = {UK_Mags_LeeEn,"HandGrenade",UK_Mags_Boys};
        respawnMagazines[] = {UK_Mags_LeeEn,"HandGrenade",UK_Mags_Boys};
    };

//Tank Crew

    class 2PzD_UK_Army_39_VCom : fow_s_uk_base {
        displayName = "Tank Commander";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_UK_Army_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "fow_b_uk_p37";

        Items[] = {UK_Def_EqI};
        RespawnItems[] = {UK_Def_EqI};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL,UK_Ldr_EqL};

        magazines[] = {UK_Mags_Web455,"SmokeShell","SmokeShell","HandGrenade"};
        respawnMagazines[] = {UK_Mags_Web455,"SmokeShell","SmokeShell","HandGrenade"};

        weapons[] = {"fow_w_webley","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_sergeant";
    };

    class 2PzD_UK_Army_39_VCrew : 2PzD_UK_Army_39_VCom {
        displayName = "Tank Crew";
        icon = "iconMan";

        //Items
        backpack = "fow_b_uk_p37";

        Items[] = {UK_Def_EqI,"ToolKit"};
        RespawnItems[] = {UK_Def_EqI,"ToolKit"};

        linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};
        respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer",UK_Def_EqL};

        magazines[] = {UK_Mags_Web455};
        respawnMagazines[] = {UK_Mags_Web455};

        weapons[] = {"fow_w_webley","Throw","Put"};
        respawnWeapons[] = {"fow_w_webley","Throw","Put"};

        uniformClass = "fow_u_uk_bd40_private";
    };