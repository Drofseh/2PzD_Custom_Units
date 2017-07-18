#include "!German_Definitions.hpp"

    class 2PzD_G_39_Jan_SLeader : LIB_GER_smgunner {
        displayName = "Squad Leader";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39_Jan";
        icon = "iconManLeader";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_Eq,G_Ldr_Eq};
        RespawnItems[] = {G_Def_Eq,G_Ldr_Eq};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98"};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98"};

        magazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "U_LIB_GER_Unterofficer";
    };

    class 2PzD_G_39_Jan_Rifleman : LIB_GER_rifleman {
        displayName = "Rifleman";
        editorSubcategory = "EdSubcat_Personnel";
        faction = "2PzD_G_WHR_39_Jan";
        icon = "iconMan";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 2;

        //Items
        backpack = "B_LIB_GER_A_frame";

        Items[] = {G_Def_Eq};
        RespawnItems[] = {G_Def_Eq};

        linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98"};
        respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98"};

        magazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};
        respawnMagazines[] = {G_Mags_K98,"fow_e_m24","HandGrenade","LIB_50Rnd_792x57"};

        weapons[] = {"LIB_K98","Throw","Put"};
        respawnWeapons[] = {"LIB_K98","Throw","Put"};

        uniformClass = "fow_u_ger_m43_01_private";
    };