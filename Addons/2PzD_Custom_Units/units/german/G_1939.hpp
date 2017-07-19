
//Company HQ

    class 2PzD_G_39_CC : LIB_GER_Soldier_base {
        displayName = "Kompaniefuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManOfficer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_officer_cap","V_LIB_GER_PrivateBelt",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_officer_cap","V_LIB_GER_PrivateBelt",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_P08};
        respawnMagazines[] = {G_Mags_P08};

        weapons[] = {"LIB_P08","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","Throw","Put"};

        uniformClass = "U_LIB_GER_Hauptmann";
    };

    class 2PzD_G_39_C2 : LIB_GER_Soldier_base {
        displayName = "Kompanietruppfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_feldmutze","V_LIB_GER_PrivateBelt",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_feldmutze","V_LIB_GER_PrivateBelt",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_P08};
        respawnMagazines[] = {G_Mags_P08};

        weapons[] = {"LIB_P08","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","Throw","Put"};

        uniformClass = "U_LIB_GER_Unterofficer";
    };

//Platoon HQ

    class 2PzD_G_39_PC : LIB_GER_Soldier_base {
        displayName = "Zugfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManOfficer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_officer_cap","V_LIB_GER_OfficerVest",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_officer_cap","V_LIB_GER_OfficerVest",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_P08};
        respawnMagazines[] = {G_Mags_P08};

        weapons[] = {"LIB_P08","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","Throw","Put"};

        uniformClass = "U_LIB_GER_Leutnant";
    };

    class 2PzD_G_39_P2 : LIB_GER_Soldier_base {
        displayName = "Zugtruppfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_feldmutze","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_feldmutze","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","SmokeShell"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","SmokeShell"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "U_LIB_GER_Unterofficer";
    };

    class 2PzD_G_39_RTO : LIB_GER_Soldier_base {
        displayName = "Funker";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManEngineer";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_Radio";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_feldmutze","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_feldmutze","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98};
        respawnMagazines[] = {G_Mags_K98};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };

    class 2PzD_G_39_Mess : LIB_GER_Soldier_base {
        displayName = "Melder";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconMan";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };

    class 2PzD_G_39_MedP : LIB_GER_Soldier_base {
        displayName = "Krankentrager";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManMedic";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_MedicBackpack_Big_Empty";

        Items[] = {G_Def_EqI,G_Med_P};
        RespawnItems[] = {G_Def_EqI,G_Med_P};

        linkedItems[] = {"fow_h_ger_m40_heer_01","V_LIB_GER_VestKar98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","V_LIB_GER_VestKar98",G_Def_EqL};

        magazines[] = {G_Mags_K98};
        respawnMagazines[] = {G_Mags_K98};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "U_LIB_GER_Medic";
    };

//Squad

    class 2PzD_G_39_SL : LIB_GER_Soldier_base {
        displayName = "Gruppenfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "U_LIB_GER_Unterofficer";
    };

    class 2PzD_G_39_S2 : 2PzD_G_39_SL {
        displayName = "Stellvertretender Gruppenfuhrer";

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_corporal";
    };

    class 2PzD_G_39_S3 : 2PzD_G_39_S2 {
        displayName = "Gefreiter";

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","SmokeShell","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_lance_corporal";
    };

    class 2PzD_G_39_Rifle : LIB_GER_Soldier_base {
        displayName = "Gewehrschutze";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconMan";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };

    /*class 2PzD_G_39_Gren : LIB_GER_Soldier_base {
        //This grenadier class is on hold because I can't get the Schiessbecher to spawn properly, 
        //probably because IFA has done super weird things to get it to work the way it does
        displayName = "Grenadier";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManExplosive";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98,G_Mags_RGAS,G_Mags_RGHE};
        respawnMagazines[] = {G_Mags_K98,G_Mags_RGAS,G_Mags_RGHE};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };*/

    class 2PzD_G_39_MG : 2PzD_G_39_Rifle {
        displayName = "MG-Richtschutze";
        icon = "iconManMG";

        //Items
        backpack = "fow_b_heer_ammo_belt";

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mg",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mg",G_Def_EqL};

        magazines[] = {G_Mags_MG};
        respawnMagazines[] = {G_Mags_MG};

        weapons[] = {"LIB_MG34","Throw","Put"};
        respawnWeapons[] = {"LIB_MG34","Throw","Put"};
    };

    class 2PzD_G_39_MGA : 2PzD_G_39_Rifle {
        displayName = "MG-Hilfsschutze";

        //Items
        backpack = "fow_b_heer_ammo_belt";

        Items[] = {G_Def_EqI,"LIB_Binocular_GER"};
        RespawnItems[] = {G_Def_EqI,"LIB_Binocular_GER"};

        magazines[] = {G_Mags_K98,"ACE_SpareBarrel","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"ACE_SpareBarrel","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57"};
    };

    class 2PzD_G_39_MGAB : 2PzD_G_39_Rifle {
        displayName = "MG-Munitionsträger";

        //Items
        backpack = "fow_b_heer_ammo_belt";

        magazines[] = {G_Mags_K98,"LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57","LIB_50Rnd_792x57"};
    };

    class 2PzD_G_39_MedS : LIB_GER_Soldier_base {
        displayName = "Hilfs-Krankenträger";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManMedic";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_MedicBackpack_Big_Empty";

        Items[] = {G_Def_EqI,G_Med_S};
        RespawnItems[] = {G_Def_EqI,G_Med_S};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98",G_Def_EqL};

        magazines[] = {G_Mags_K98};
        respawnMagazines[] = {G_Mags_K98};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };

//Weapon Truppen

    //Mortar Team

    class 2PzD_G_39_MortTL : 2PzD_G_39_S3 {
        displayName = "Mortar Truppfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};
        RespawnItems[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};

        magazines[] = {G_Mags_K98,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
        respawnMagazines[] = {G_Mags_K98,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
    };

    class 2PzD_G_39_MortG : 2PzD_G_39_Rifle {
        displayName = "Mortar Granatwerferschutzen";
        icon = "iconManExplosive";

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,G_Ldr_EqL,"ACE_RangeTable_82mm"};
        RespawnItems[] = {G_Def_EqI,G_Ldr_EqL,"ACE_RangeTable_82mm"};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};

        magazines[] = {G_Mags_P08,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
        respawnMagazines[] = {G_Mags_P08,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};

        weapons[] = {"LIB_P08","LIB_GrWr34_Barrel","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","LIB_GrWr34_Barrel","Throw","Put"};
    };

    class 2PzD_G_39_MortA : 2PzD_G_39_MortG {
        displayName = "Mortar Hilfsschutze";
        icon = "iconManExplosive";

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};
        RespawnItems[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};

        magazines[] = {G_Mags_P08,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
        respawnMagazines[] = {G_Mags_P08,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};

        weapons[] = {"LIB_P08","LIB_GrWr34_Tripod","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","LIB_GrWr34_Tripod","Throw","Put"};
    };

    class 2PzD_G_39_MortAB : 2PzD_G_39_Rifle {
        displayName = "Mortar Munitionstrager";
        icon = "iconManExplosive";

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};
        RespawnItems[] = {G_Def_EqI,"ACE_MapTools","ACE_RangeTable_82mm"};

        magazines[] = {G_Mags_K98,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
        respawnMagazines[] = {G_Mags_K98,"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_HE"};
    };

    //HMG Team

    class 2PzD_G_39_HMGTL : 2PzD_G_39_S3 {
        displayName = "HMG Truppfuhrer";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,G_Ldr_EqL};
        RespawnItems[] = {G_Def_EqI,G_Ldr_EqL};

        magazines[] = {G_Mags_K98,"LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_2PzD"};
        respawnMagazines[] = {G_Mags_K98,"LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_2PzD"};
    };

    class 2PzD_G_39_HMGG : 2PzD_G_39_Rifle {
        displayName = "HMG Richtschutze";
        icon = "iconManMG";

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        Items[] = {G_Def_EqI,G_Ldr_EqL};
        RespawnItems[] = {G_Def_EqI,G_Ldr_EqL};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_p38",G_Def_EqL};

        magazines[] = {G_Mags_HMG,G_Mags_HMG,G_Mags_P08};
        respawnMagazines[] = {G_Mags_HMG,G_Mags_HMG,G_Mags_P08};

        weapons[] = {"LIB_P08","LIB_MG34","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","LIB_MG34","Throw","Put"};
    };

    class 2PzD_G_39_HMGA : 2PzD_G_39_HMGG {
        displayName = "HMG Hilfsschutze";

        //Items
        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_ass",G_Def_EqL};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_ass",G_Def_EqL};

        magazines[] = {"ACE_SpareBarrel",G_Mags_K98,G_Mags_HMG};
        respawnMagazines[] = {"ACE_SpareBarrel",G_Mags_K98,G_Mags_HMG};

        weapons[] = {"LIB_K98","LIB_Laffete_Tripod","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","LIB_Laffete_Tripod","Throw","Put"};
    };

    class 2PzD_G_39_HMGAB : 2PzD_G_39_Rifle {
        displayName = "HMG Munitionstrager";

        //Items
        backpack = "B_LIB_GER_Tonister34_cowhide";

        magazines[] = {G_Mags_K98,G_Mags_HMG};
        respawnMagazines[] = {G_Mags_K98,G_Mags_HMG};
    };

//Tank Crew

    class 2PzD_G_39_VCom : LIB_GER_Soldier_base {
        displayName = "Panzerkommandant";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39";
        icon = "iconManLeader";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_SapperBackpack_empty";

        Items[] = {G_Def_EqI};
        RespawnItems[] = {G_Def_EqI};

        linkedItems[] = {"H_LIB_GER_TankOfficerCap","V_LIB_GER_TankPrivateBelt",G_Def_EqL,G_Ldr_EqL};
        respawnLinkedItems[] = {"H_LIB_GER_TankOfficerCap","V_LIB_GER_TankPrivateBelt",G_Def_EqL,G_Ldr_EqL};

        magazines[] = {G_Mags_P08};
        respawnMagazines[] = {G_Mags_P08};

        weapons[] = {"LIB_P08","Throw","Put"};
        respawnWeapons[] = {"LIB_P08","Throw","Put"};

        uniformClass = "U_LIB_GER_Tank_crew_unterofficer";
    };

    class 2PzD_G_39_VCrew : 2PzD_G_39_VCom {
        displayName = "Panzerbesatzung";
        icon = "iconMan";

        //Items
        Items[] = {G_Def_EqI,"ToolKit"};
        RespawnItems[] = {G_Def_EqI,"ToolKit"};

        linkedItems[] = {"H_LIB_GER_TankPrivateCap","V_LIB_GER_TankPrivateBelt",G_Def_EqL};
        respawnLinkedItems[] = {"H_LIB_GER_TankPrivateCap","V_LIB_GER_TankPrivateBelt",G_Def_EqL};

        uniformClass = "U_LIB_GER_Tank_crew_private";
    };