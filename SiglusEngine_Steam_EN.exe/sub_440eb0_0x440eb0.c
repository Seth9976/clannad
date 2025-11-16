// 函数: sub_440eb0
// 地址: 0x440eb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x1014)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = 0xa
char* var_100c = ecx
int32_t eax_3 = sub_4d0fe0(arg1.b, "#BGM_MODE=", ecx, var_14)
int32_t entry_ebx
void* esi_3
int32_t* var_1008

if (eax_3 != 0)
    int32_t eax_9 = sub_4d0fe0(eax_3.b, "#ALL_FONT_USE=", ecx, 0xe)
    
    if (eax_9 != 0)
        int32_t eax_23 = sub_4d0fe0(eax_9.b, "#INIT_FONT_TYPE=", ecx, 0x10)
        
        if (eax_23 != 0)
            int32_t eax_30
            int32_t ecx_24
            eax_30, ecx_24 = sub_4d0fe0(eax_23.b, "#INIT_FONT_NAME="", ecx, 0x11)
            char** edx_4 = &var_100c
            
            if (eax_30 != 0)
                int32_t eax_36 = sub_434540(eax_30.b, edx_4, ecx, "#INIT_FONT_QUALITY=")
                char* ecx_30 = var_100c
                char** edx_6 = &var_100c
                
                if (eax_36 != 0)
                    int32_t eax_43 = sub_434540(eax_36.b, edx_6, ecx_30, "#INIT_FONT_WEIGHT=")
                    char* ecx_34 = var_100c
                    char** edx_7 = &var_100c
                    
                    if (eax_43 != 0)
                        int32_t eax_50 = sub_434540(eax_43.b, edx_7, ecx_34, "#INIT_FONT_SHADOW=")
                        char* ecx_38 = var_100c
                        char** edx_8 = &var_100c
                        
                        if (eax_50 != 0)
                            int32_t eax_57 =
                                sub_434540(eax_50.b, edx_8, ecx_38, "#FONT_SHADOW_SETTING_MOD=")
                            char* ecx_42 = var_100c
                            char** edx_9 = &var_100c
                            
                            if (eax_57 != 0)
                                int32_t eax_64 =
                                    sub_434540(eax_57.b, edx_9, ecx_42, "#INIT_MESSAGE_SPEED=")
                                char* ecx_47 = var_100c
                                char** edx_10 = &var_100c
                                
                                if (eax_64 != 0)
                                    int32_t eax_71 = sub_434540(eax_64.b, edx_10, ecx_47, 
                                        "#INIT_MESSAGE_SPEED_MOD=")
                                    char* ecx_51 = var_100c
                                    char** edx_11 = &var_100c
                                    
                                    if (eax_71 != 0)
                                        int32_t eax_78 = sub_434540(eax_71.b, edx_11, ecx_51, 
                                            "#INIT_SCREENMODE=")
                                        char* ecx_55 = var_100c
                                        char** edx_12 = &var_100c
                                        
                                        if (eax_78 != 0)
                                            int32_t eax_85 = sub_434540(eax_78.b, edx_12, ecx_55, 
                                                "#INIT_KOEMODE=")
                                            char* ecx_59 = var_100c
                                            char** edx_13 = &var_100c
                                            
                                            if (eax_85 != 0)
                                                int32_t eax_92
                                                int32_t ecx_63
                                                eax_92, ecx_63 = sub_434540(eax_85.b, edx_13, 
                                                    ecx_59, "#SYSTEM_SAVELOADMESSAGE_STR="")
                                                char** edx_14 = &var_100c
                                                
                                                if (eax_92 != 0)
                                                    int32_t eax_98
                                                    int32_t ecx_69
                                                    eax_98, ecx_69 = sub_434540(eax_92.b, edx_14, 
                                                        var_100c, "#SYSTEM_ANIME_STR="")
                                                    char** edx_16 = &var_100c
                                                    
                                                    if (eax_98 != 0)
                                                        int32_t eax_104
                                                        int32_t ecx_75
                                                        eax_104, ecx_75 = sub_434540(eax_98.b, 
                                                            edx_16, var_100c, 
                                                            "#SAVEMESSAGE_TITLE_STR="")
                                                        char** edx_18 = &var_100c
                                                        
                                                        if (eax_104 != 0)
                                                            int32_t eax_110
                                                            int32_t ecx_81
                                                            eax_110, ecx_81 = sub_434540(eax_104.b, 
                                                                edx_18, var_100c, 
                                                                "#SAVEMESSAGE_MESS_STR="")
                                                            char** edx_20 = &var_100c
                                                            
                                                            if (eax_110 != 0)
                                                                int32_t eax_116
                                                                int32_t ecx_87
                                                                eax_116, ecx_87 = sub_434540(eax_110.b, 
                                                                    edx_20, var_100c, 
                                                                    "#SAVEMESSAGE_MESS2_STR="")
                                                                char** edx_22 = &var_100c
                                                                
                                                                if (eax_116 != 0)
                                                                    int32_t eax_122
                                                                    int32_t ecx_93
                                                                    eax_122, ecx_93 = sub_434540(eax_116.b, 
                                                                        edx_22, var_100c, 
                                                                        "#LOADMESSAGE_TITLE_STR="")
                                                                    char** edx_24 = &var_100c
                                                                    
                                                                    if (eax_122 != 0)
                                                                        int32_t eax_128
                                                                        int32_t ecx_99
                                                                        eax_128, ecx_99 = sub_434540(eax_122.b, 
                                                                            edx_24, var_100c, 
                                                                            "#LOADMESSAGE_MESS_STR="")
                                                                        char** edx_26 = &var_100c
                                                                        
                                                                        if (eax_128 != 0)
                                                                            int32_t eax_134
                                                                            int32_t ecx_105
                                                                            eax_134, ecx_105 = sub_434540(
                                                                                eax_128.b, edx_26, var_100c, 
                                                                                "#LOADMESSAGE_MESS2_STR="")
                                                                            char** edx_28 = &var_100c
                                                                            
                                                                            if (eax_134 != 0)
                                                                                int32_t eax_140
                                                                                int32_t ecx_111
                                                                                eax_140, ecx_111 = sub_434540(
                                                                                    eax_134.b, edx_28, var_100c, 
                                                                                    "#DLGSAVEMESSAGE_TITLE_STR="")
                                                                                char** edx_30 = &var_100c
                                                                                
                                                                                if (eax_140 != 0)
                                                                                    int32_t eax_146
                                                                                    int32_t ecx_117
                                                                                    eax_146, ecx_117 = sub_434540(
                                                                                        eax_140.b, edx_30, var_100c, 
                                                                                        "#DLGSAVEMESSAGE_OK_BUTTON_STR="")
                                                                                    char** edx_32 = &var_100c
                                                                                    
                                                                                    if (eax_146 != 0)
                                                                                        int32_t eax_152
                                                                                        int32_t ecx_123
                                                                                        eax_152, ecx_123 = sub_434540(
                                                                                            eax_146.b, edx_32, var_100c, 
                                                                                            "#DLGLOADMESSAGE_TITLE_STR="")
                                                                                        char** edx_34 = &var_100c
                                                                                        
                                                                                        if (eax_152 != 0)
                                                                                            int32_t eax_158
                                                                                            int32_t ecx_129
                                                                                            eax_158, ecx_129 = sub_434540(
                                                                                                eax_152.b, edx_34, var_100c, 
                                                                                                "#DLGLOADMESSAGE_OK_BUTTON_STR="")
                                                                                            char** edx_36 = &var_100c
                                                                                            
                                                                                            if (eax_158 != 0)
                                                                                                int32_t eax_164 = sub_434540(eax_158.b, 
                                                                                                    edx_36, var_100c, "#SAVELOADDLG_USE=")
                                                                                                char* ecx_135 = var_100c
                                                                                                char** edx_38 = &var_100c
                                                                                                
                                                                                                if (eax_164 != 0)
                                                                                                    int32_t eax_171
                                                                                                    int32_t* ecx_139
                                                                                                    eax_171, ecx_139 = sub_434540(
                                                                                                        eax_164.b, edx_38, ecx_135, 
                                                                                                        "#SAVELOADDLG_WINDOW_SIZE=")
                                                                                                    char** edx_39 = &var_100c
                                                                                                    int32_t var_1010
                                                                                                    int32_t var_1004
                                                                                                    
                                                                                                    if (eax_171 != 0)
                                                                                                        int32_t eax_179 = sub_434540(eax_171.b, 
                                                                                                            edx_39, var_100c, 
                                                                                                            "#SAVELOADDLG_TITLE_COLUMN_SIZE=")
                                                                                                        char* ecx_147 = var_100c
                                                                                                        char** edx_41 = &var_100c
                                                                                                        
                                                                                                        if (eax_179 != 0)
                                                                                                            int32_t eax_186 = sub_434540(eax_179.b, 
                                                                                                                edx_41, ecx_147, "QUICK_SAVEDATA_USE=")
                                                                                                            char* ecx_152 = var_100c
                                                                                                            char** edx_42 = &var_100c
                                                                                                            
                                                                                                            if (eax_186 != 0)
                                                                                                                int32_t eax_193
                                                                                                                int32_t ecx_156
                                                                                                                eax_193, ecx_156 = sub_434540(
                                                                                                                    eax_186.b, edx_42, ecx_152, 
                                                                                                                    "#SELPOINT_RETURN_MESS_STR="")
                                                                                                                char** edx_43 = &var_100c
                                                                                                                
                                                                                                                if (eax_193 != 0)
                                                                                                                    int32_t eax_199
                                                                                                                    int32_t ecx_162
                                                                                                                    eax_199, ecx_162 = sub_434540(
                                                                                                                        eax_193.b, edx_43, var_100c, 
                                                                                                                        "#MENU_RETURN_MESS_STR="")
                                                                                                                    char** edx_45 = &var_100c
                                                                                                                    
                                                                                                                    if (eax_199 != 0)
                                                                                                                        int32_t eax_205
                                                                                                                        int32_t ecx_168
                                                                                                                        eax_205, ecx_168 = sub_434540(
                                                                                                                            eax_199.b, edx_45, var_100c, 
                                                                                                                            "#GAME_END_MESS_STR="")
                                                                                                                        char** edx_47 = &var_100c
                                                                                                                        
                                                                                                                        if (eax_205 != 0)
                                                                                                                            int32_t eax_211
                                                                                                                            int32_t ecx_174
                                                                                                                            eax_211, ecx_174 = sub_434540(
                                                                                                                                eax_205.b, edx_47, var_100c, 
                                                                                                                                "UNREADJUMP_STR="")
                                                                                                                            char** edx_49 = &var_100c
                                                                                                                            
                                                                                                                            if (eax_211 != 0)
                                                                                                                                int32_t eax_217 = sub_434540(eax_211.b, 
                                                                                                                                    edx_49, var_100c, "#NAME_MAXLEN=")
                                                                                                                                char* ecx_180 = var_100c
                                                                                                                                char** edx_51 = &var_100c
                                                                                                                                
                                                                                                                                if (eax_217 != 0)
                                                                                                                                    int32_t eax_228 = sub_434540(eax_217.b, 
                                                                                                                                        edx_51, ecx_180, "#NAME.")
                                                                                                                                    char* ecx_187 = var_100c
                                                                                                                                    
                                                                                                                                    if (eax_228 != 0)
                                                                                                                                        int32_t eax_236 = sub_434540(eax_228.b, 
                                                                                                                                            &var_100c, ecx_187, "#LOCALNAME.")
                                                                                                                                        char* ecx_200 = var_100c
                                                                                                                                        
                                                                                                                                        if (eax_236 != 0)
                                                                                                                                            int32_t eax_244 = sub_434540(eax_236.b, 
                                                                                                                                                &var_100c, ecx_200, "#HINT.")
                                                                                                                                            char* ecx_213 = var_100c
                                                                                                                                            void** edx_58 = &var_100c
                                                                                                                                            int32_t var_1000
                                                                                                                                            int32_t var_ffc
                                                                                                                                            int32_t var_ff8
                                                                                                                                            
                                                                                                                                            if (eax_244 != 0)
                                                                                                                                                int32_t eax_345 = sub_434540(eax_244.b, 
                                                                                                                                                    edx_58, ecx_213, "#BTNOBJ.")
                                                                                                                                                
                                                                                                                                                if (eax_345 != 0)
                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                    return 1
                                                                                                                                                
                                                                                                                                                int32_t eax_346 = sub_434540(eax_345.b, 
                                                                                                                                                    &var_100c, var_100c, "SE.")
                                                                                                                                                char* ecx_283 = var_100c
                                                                                                                                                char** edx_78 = &var_100c
                                                                                                                                                
                                                                                                                                                if (eax_346 != 0)
                                                                                                                                                    if (sub_434540(eax_346.b, edx_78, 
                                                                                                                                                            ecx_283, "ACTION.") == 0)
                                                                                                                                                        int32_t eax_373 = sub_4d11d0(&var_1010, 
                                                                                                                                                            &var_100c, var_100c, &var_1010)
                                                                                                                                                        
                                                                                                                                                        if (eax_373 == 0)
                                                                                                                                                            int32_t ebx_53 = var_1010
                                                                                                                                                            
                                                                                                                                                            if (ebx_53 u<= 0xff)
                                                                                                                                                                int32_t eax_374 = sub_434540(eax_373.b, 
                                                                                                                                                                    &var_100c, var_100c, ".")
                                                                                                                                                                
                                                                                                                                                                if (eax_374 == 0)
                                                                                                                                                                    int32_t eax_375
                                                                                                                                                                    int32_t* ecx_304
                                                                                                                                                                    eax_375, ecx_304 = sub_434540(
                                                                                                                                                                        eax_374.b, &var_100c, var_100c, 
                                                                                                                                                                        "NORMAL=")
                                                                                                                                                                    int32_t edi_12
                                                                                                                                                                    
                                                                                                                                                                    if (eax_375 != 0)
                                                                                                                                                                        int32_t eax_376
                                                                                                                                                                        eax_376, ecx_304 = sub_434540(
                                                                                                                                                                            eax_375.b, &var_100c, var_100c, "HIT=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_376 == 0)
                                                                                                                                                                            edi_12 = eax_376 + 1
                                                                                                                                                                            goto label_442baa
                                                                                                                                                                        
                                                                                                                                                                        int32_t eax_377
                                                                                                                                                                        eax_377, ecx_304 = sub_434540(
                                                                                                                                                                            eax_376.b, &var_100c, var_100c, "PUSH=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_377 == 0)
                                                                                                                                                                            edi_12 = eax_377 + 2
                                                                                                                                                                            goto label_442baa
                                                                                                                                                                        
                                                                                                                                                                        int32_t eax_378
                                                                                                                                                                        eax_378, ecx_304 = sub_434540(
                                                                                                                                                                            eax_377.b, &var_100c, var_100c, 
                                                                                                                                                                            "RPUSH=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_378 == 0)
                                                                                                                                                                            edi_12 = eax_378 + 3
                                                                                                                                                                            goto label_442baa
                                                                                                                                                                        
                                                                                                                                                                        int32_t eax_379
                                                                                                                                                                        eax_379, ecx_304 = sub_434540(
                                                                                                                                                                            eax_378.b, &var_100c, var_100c, 
                                                                                                                                                                            "STATE1=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_379 == 0)
                                                                                                                                                                            edi_12 = eax_379 + 4
                                                                                                                                                                            goto label_442baa
                                                                                                                                                                        
                                                                                                                                                                        int32_t eax_380
                                                                                                                                                                        eax_380, ecx_304 = sub_434540(
                                                                                                                                                                            eax_379.b, &var_100c, var_100c, 
                                                                                                                                                                            "STATE2=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_380 == 0)
                                                                                                                                                                            edi_12 = eax_380 + 5
                                                                                                                                                                            goto label_442baa
                                                                                                                                                                    else
                                                                                                                                                                        edi_12 = 0
                                                                                                                                                                    label_442baa:
                                                                                                                                                                        int32_t* var_14_139 = &var_1010
                                                                                                                                                                        
                                                                                                                                                                        if (sub_4d1280(&var_1008, &var_100c, 
                                                                                                                                                                                var_100c, &var_1008, ecx_304) == 0
                                                                                                                                                                                && var_1010 s>= 7)
                                                                                                                                                                            int32_t ecx_312 =
                                                                                                                                                                                (edi_12 + ebx_53 * 6) * 7
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d70) =
                                                                                                                                                                                var_1008
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d74) =
                                                                                                                                                                                var_1004
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d78) =
                                                                                                                                                                                var_1000
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d7c) =
                                                                                                                                                                                var_ffc
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d80) =
                                                                                                                                                                                var_ff8
                                                                                                                                                                            int32_t var_ff4
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d84) =
                                                                                                                                                                                var_ff4
                                                                                                                                                                            int32_t var_ff0
                                                                                                                                                                            *((ecx_312 << 2) + &data_1305d88) =
                                                                                                                                                                                var_ff0
                                                                                                                                                                            *arg1 = eax_373
                                                                                                                                                                            *edx = var_100c
                                                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                            return 0
                                                                                                                                                else
                                                                                                                                                    int32_t eax_348 = sub_4d11d0(&var_1010, 
                                                                                                                                                        edx_78, ecx_283, &var_1010)
                                                                                                                                                    
                                                                                                                                                    if (eax_348 == 0)
                                                                                                                                                        int32_t edi_11 = var_1010
                                                                                                                                                        
                                                                                                                                                        if (edi_11 u<= 0xff)
                                                                                                                                                            int32_t eax_349 = sub_434540(eax_348.b, 
                                                                                                                                                                &var_100c, var_100c, ".")
                                                                                                                                                            
                                                                                                                                                            if (eax_349 == 0)
                                                                                                                                                                int32_t eax_350 = sub_434540(eax_349.b, 
                                                                                                                                                                    &var_100c, var_100c, "HIT=")
                                                                                                                                                                char* ecx_286 = var_100c
                                                                                                                                                                char** edx_81 = &var_100c
                                                                                                                                                                
                                                                                                                                                                if (eax_350 != 0)
                                                                                                                                                                    int32_t eax_357 = sub_434540(eax_350.b, 
                                                                                                                                                                        edx_81, ecx_286, "PUSH=")
                                                                                                                                                                    char* ecx_291 = var_100c
                                                                                                                                                                    char** edx_82 = &var_100c
                                                                                                                                                                    
                                                                                                                                                                    if (eax_357 != 0)
                                                                                                                                                                        if (sub_434540(eax_357.b, edx_82, 
                                                                                                                                                                                ecx_291, "DECIDE=") == 0 && sub_4d11d0(
                                                                                                                                                                                &var_1008, &var_100c, var_100c, 
                                                                                                                                                                                &var_1008) == 0)
                                                                                                                                                                            *(edi_11 * 0xc + &data_1310578) =
                                                                                                                                                                                var_1008
                                                                                                                                                                            *arg1 = eax_348
                                                                                                                                                                            *edx = var_100c
                                                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                            return 0
                                                                                                                                                                    else if (sub_4d11d0(&var_1008, edx_82, 
                                                                                                                                                                            ecx_291, &var_1008) == 0)
                                                                                                                                                                        *(edi_11 * 0xc + &data_1310574) =
                                                                                                                                                                            var_1008
                                                                                                                                                                        *arg1 = eax_348
                                                                                                                                                                        *edx = var_100c
                                                                                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                        return 0
                                                                                                                                                                else if (sub_4d11d0(&var_1008, edx_81, 
                                                                                                                                                                        ecx_286, &var_1008) == 0)
                                                                                                                                                                    *(edi_11 * 0xc + &data_1310570) =
                                                                                                                                                                        var_1008
                                                                                                                                                                    *arg1 = eax_348
                                                                                                                                                                    *edx = var_100c
                                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                    return 0
                                                                                                                                            else
                                                                                                                                                int32_t eax_245 = sub_434540(eax_244.b, 
                                                                                                                                                    edx_58, ecx_213, "AUTOMODE.")
                                                                                                                                                char* ecx_214 = var_100c
                                                                                                                                                void** edx_59 = &var_100c
                                                                                                                                                
                                                                                                                                                if (eax_245 != 0)
                                                                                                                                                    int32_t eax_295 = sub_434540(eax_245.b, 
                                                                                                                                                        edx_59, ecx_214, "READJUMP.")
                                                                                                                                                    
                                                                                                                                                    if (eax_295 == 0)
                                                                                                                                                        int32_t eax_296
                                                                                                                                                        int32_t ecx_249
                                                                                                                                                        eax_296, ecx_249 = sub_434540(
                                                                                                                                                            eax_295.b, &var_100c, var_100c, 
                                                                                                                                                            "GANFILE="")
                                                                                                                                                        char** edx_69 = &var_100c
                                                                                                                                                        
                                                                                                                                                        if (eax_296 != 0)
                                                                                                                                                            int32_t eax_302
                                                                                                                                                            int32_t ecx_255
                                                                                                                                                            eax_302, ecx_255 = sub_434540(
                                                                                                                                                                eax_296.b, edx_69, var_100c, 
                                                                                                                                                                "G00FILE="")
                                                                                                                                                            char** edx_71 = &var_100c
                                                                                                                                                            
                                                                                                                                                            if (eax_302 != 0)
                                                                                                                                                                int32_t eax_308
                                                                                                                                                                int32_t* ecx_261
                                                                                                                                                                eax_308, ecx_261 = sub_434540(
                                                                                                                                                                    eax_302.b, edx_71, var_100c, "POS=")
                                                                                                                                                                char** edx_73 = &var_100c
                                                                                                                                                                
                                                                                                                                                                if (eax_308 != 0)
                                                                                                                                                                    int32_t eax_316 = sub_434540(eax_308.b, 
                                                                                                                                                                        edx_73, var_100c, "SPEED=")
                                                                                                                                                                    char* ecx_267 = var_100c
                                                                                                                                                                    void** edx_74 = &var_100c
                                                                                                                                                                    
                                                                                                                                                                    if (eax_316 != 0)
                                                                                                                                                                        int32_t eax_323
                                                                                                                                                                        int32_t* ecx_271
                                                                                                                                                                        eax_323, ecx_271 = sub_434540(
                                                                                                                                                                            eax_316.b, edx_74, ecx_267, 
                                                                                                                                                                            "OPEN_ANIME_MOD=")
                                                                                                                                                                        void** edx_75 = &var_100c
                                                                                                                                                                        
                                                                                                                                                                        if (eax_323 != 0)
                                                                                                                                                                            int32_t eax_334
                                                                                                                                                                            int32_t* ecx_277
                                                                                                                                                                            eax_334, ecx_277 = sub_434540(
                                                                                                                                                                                eax_323.b, edx_75, var_100c, 
                                                                                                                                                                                "CLOSE_ANIME_MOD=")
                                                                                                                                                                            
                                                                                                                                                                            if (eax_334 == 0)
                                                                                                                                                                                int32_t* var_14_119 = &var_1010
                                                                                                                                                                                
                                                                                                                                                                                if (sub_4d1280(&var_1008, &var_100c, 
                                                                                                                                                                                        var_100c, &var_1008, ecx_277) == 0)
                                                                                                                                                                                    data_1305d5c = var_1008
                                                                                                                                                                                    data_1305d60 = var_1004
                                                                                                                                                                                    data_1305d64 = var_1000
                                                                                                                                                                                    data_1305d68 = var_ffc
                                                                                                                                                                                    data_1305d6c = var_ff8
                                                                                                                                                                                    *arg1 = 0
                                                                                                                                                                                    *edx = var_100c
                                                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                                    return 0
                                                                                                                                                                        else
                                                                                                                                                                            int32_t* var_14_117 = &var_1010
                                                                                                                                                                            
                                                                                                                                                                            if (sub_4d1280(&var_1008, edx_75, 
                                                                                                                                                                                    var_100c, &var_1008, ecx_271) == 0)
                                                                                                                                                                                data_1305d48 = var_1008
                                                                                                                                                                                data_1305d4c = var_1004
                                                                                                                                                                                data_1305d50 = var_1000
                                                                                                                                                                                data_1305d54 = var_ffc
                                                                                                                                                                                data_1305d58 = var_ff8
                                                                                                                                                                                *arg1 = 0
                                                                                                                                                                                *edx = var_100c
                                                                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                                return 0
                                                                                                                                                                    else if (sub_4d11d0(&var_1008, edx_74, 
                                                                                                                                                                            ecx_267, &var_1008) == 0)
                                                                                                                                                                        data_1305d44 = var_1008
                                                                                                                                                                        *arg1 = 0
                                                                                                                                                                        *edx = var_100c
                                                                                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                        return 0
                                                                                                                                                                else
                                                                                                                                                                    int32_t* var_14_113 = &var_1010
                                                                                                                                                                    
                                                                                                                                                                    if (sub_4d1280(&var_1008, edx_73, 
                                                                                                                                                                            var_100c, &var_1008, ecx_261) == 0)
                                                                                                                                                                        data_1305d38 = var_1008
                                                                                                                                                                        data_1305d3c = var_1004
                                                                                                                                                                        *arg1 = 0
                                                                                                                                                                        *edx = var_100c
                                                                                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                        return 0
                                                                                                                                                            else
                                                                                                                                                                int32_t var_14_110 = ecx_255
                                                                                                                                                                void* eax_304 = sub_4d1140(&var_1008, 
                                                                                                                                                                    edx_71, var_100c, &var_1008, 0x1000)
                                                                                                                                                                
                                                                                                                                                                if (eax_304 == 0)
                                                                                                                                                                    sub_4cfdf0(eax_304, &var_1008, 
                                                                                                                                                                        0x1305d14, 0x24)
                                                                                                                                                                    *arg1 = 0
                                                                                                                                                                    *edx = var_100c
                                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                    return 0
                                                                                                                                                        else
                                                                                                                                                            int32_t var_14_107 = ecx_249
                                                                                                                                                            void* eax_298 = sub_4d1140(&var_1008, 
                                                                                                                                                                edx_69, var_100c, &var_1008, 0x1000)
                                                                                                                                                            
                                                                                                                                                            if (eax_298 == 0)
                                                                                                                                                                sub_4cfdf0(eax_298, &var_1008, 
                                                                                                                                                                    0x1305cf0, 0x24)
                                                                                                                                                                *arg1 = 0
                                                                                                                                                                *edx = var_100c
                                                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                return 0
                                                                                                                                                else
                                                                                                                                                    int32_t eax_246
                                                                                                                                                    int32_t ecx_215
                                                                                                                                                    eax_246, ecx_215 = sub_434540(
                                                                                                                                                        eax_245.b, edx_59, ecx_214, "GANFILE="")
                                                                                                                                                    char** edx_60 = &var_100c
                                                                                                                                                    
                                                                                                                                                    if (eax_246 != 0)
                                                                                                                                                        int32_t eax_252
                                                                                                                                                        int32_t ecx_221
                                                                                                                                                        eax_252, ecx_221 = sub_434540(
                                                                                                                                                            eax_246.b, edx_60, var_100c, 
                                                                                                                                                            "G00FILE="")
                                                                                                                                                        char** edx_62 = &var_100c
                                                                                                                                                        
                                                                                                                                                        if (eax_252 != 0)
                                                                                                                                                            int32_t eax_258
                                                                                                                                                            int32_t* ecx_227
                                                                                                                                                            eax_258, ecx_227 = sub_434540(
                                                                                                                                                                eax_252.b, edx_62, var_100c, "POS=")
                                                                                                                                                            char** edx_64 = &var_100c
                                                                                                                                                            
                                                                                                                                                            if (eax_258 != 0)
                                                                                                                                                                int32_t eax_266 = sub_434540(eax_258.b, 
                                                                                                                                                                    edx_64, var_100c, "SPEED=")
                                                                                                                                                                char* ecx_233 = var_100c
                                                                                                                                                                char** edx_65 = &var_100c
                                                                                                                                                                
                                                                                                                                                                if (eax_266 != 0)
                                                                                                                                                                    int32_t eax_273
                                                                                                                                                                    int32_t* ecx_237
                                                                                                                                                                    eax_273, ecx_237 = sub_434540(
                                                                                                                                                                        eax_266.b, edx_65, ecx_233, 
                                                                                                                                                                        "OPEN_ANIME_MOD=")
                                                                                                                                                                    char** edx_66 = &var_100c
                                                                                                                                                                    
                                                                                                                                                                    if (eax_273 != 0)
                                                                                                                                                                        int32_t eax_284
                                                                                                                                                                        int32_t* ecx_243
                                                                                                                                                                        eax_284, ecx_243 = sub_434540(
                                                                                                                                                                            eax_273.b, edx_66, var_100c, 
                                                                                                                                                                            "CLOSE_ANIME_MOD=")
                                                                                                                                                                        
                                                                                                                                                                        if (eax_284 == 0)
                                                                                                                                                                            int32_t* var_14_104 = &var_1010
                                                                                                                                                                            
                                                                                                                                                                            if (sub_4d1280(&var_1008, &var_100c, 
                                                                                                                                                                                    var_100c, &var_1008, ecx_243) == 0)
                                                                                                                                                                                data_1305cdc = var_1008
                                                                                                                                                                                data_1305ce0 = var_1004
                                                                                                                                                                                data_1305ce4 = var_1000
                                                                                                                                                                                data_1305ce8 = var_ffc
                                                                                                                                                                                data_1305cec = var_ff8
                                                                                                                                                                                *arg1 = 0
                                                                                                                                                                                *edx = var_100c
                                                                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                                return 0
                                                                                                                                                                    else
                                                                                                                                                                        int32_t* var_14_102 = &var_1010
                                                                                                                                                                        
                                                                                                                                                                        if (sub_4d1280(&var_1008, edx_66, 
                                                                                                                                                                                var_100c, &var_1008, ecx_237) == 0)
                                                                                                                                                                            data_1305cc8 = var_1008
                                                                                                                                                                            data_1305ccc = var_1004
                                                                                                                                                                            data_1305cd0 = var_1000
                                                                                                                                                                            data_1305cd4 = var_ffc
                                                                                                                                                                            data_1305cd8 = var_ff8
                                                                                                                                                                            *arg1 = 0
                                                                                                                                                                            *edx = var_100c
                                                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                            return 0
                                                                                                                                                                else if (sub_4d11d0(&var_1008, edx_65, 
                                                                                                                                                                        ecx_233, &var_1008) == 0)
                                                                                                                                                                    data_1305cc4 = var_1008
                                                                                                                                                                    *arg1 = 0
                                                                                                                                                                    *edx = var_100c
                                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                    return 0
                                                                                                                                                            else
                                                                                                                                                                int32_t* var_14_98 = &var_1010
                                                                                                                                                                
                                                                                                                                                                if (sub_4d1280(&var_1008, edx_64, 
                                                                                                                                                                        var_100c, &var_1008, ecx_227) == 0)
                                                                                                                                                                    data_1305cb8 = var_1008
                                                                                                                                                                    data_1305cbc = var_1004
                                                                                                                                                                    *arg1 = 0
                                                                                                                                                                    *edx = var_100c
                                                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                    return 0
                                                                                                                                                        else
                                                                                                                                                            int32_t var_14_95 = ecx_221
                                                                                                                                                            void* eax_254 = sub_4d1140(&var_1008, 
                                                                                                                                                                edx_62, var_100c, &var_1008, 0x1000)
                                                                                                                                                            
                                                                                                                                                            if (eax_254 == 0)
                                                                                                                                                                sub_4cfdf0(eax_254, &var_1008, 
                                                                                                                                                                    &data_1305c94, 0x24)
                                                                                                                                                                *arg1 = 0
                                                                                                                                                                *edx = var_100c
                                                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                return 0
                                                                                                                                                    else
                                                                                                                                                        int32_t var_14_92 = ecx_215
                                                                                                                                                        void* eax_248 = sub_4d1140(&var_1008, 
                                                                                                                                                            edx_60, var_100c, &var_1008, 0x1000)
                                                                                                                                                        
                                                                                                                                                        if (eax_248 == 0)
                                                                                                                                                            sub_4cfdf0(eax_248, &var_1008, 
                                                                                                                                                                0x1305c70, 0x24)
                                                                                                                                                            *arg1 = 0
                                                                                                                                                            *edx = var_100c
                                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                            return 0
                                                                                                                                        else
                                                                                                                                            eax_236.b = *ecx_200
                                                                                                                                            
                                                                                                                                            if (eax_236.b u>= 0x41
                                                                                                                                                    && eax_236.b u<= 0x5a)
                                                                                                                                                int32_t edi_9 = zx.d(eax_236.b) - 0x41
                                                                                                                                                var_100c = &ecx_200[1]
                                                                                                                                                eax_236.b = ecx_200[1]
                                                                                                                                                
                                                                                                                                                if (eax_236.b == 0x3d)
                                                                                                                                                label_44212b:
                                                                                                                                                    var_100c = &var_100c[1]
                                                                                                                                                    
                                                                                                                                                    if (edi_9 s< 0x2be)
                                                                                                                                                        char* ecx_206 = var_100c
                                                                                                                                                        
                                                                                                                                                        if (*ecx_206 == 0x22)
                                                                                                                                                            void* var_14_87 = &ecx_206[1]
                                                                                                                                                            int32_t var_18_20 = 0x1000
                                                                                                                                                            char* var_1c_20 = &var_1008
                                                                                                                                                            var_100c = &ecx_206[1]
                                                                                                                                                            
                                                                                                                                                            if (sub_4d1140(&var_1008, &var_100c, 
                                                                                                                                                                    &ecx_206[1], var_1c_20, var_18_20) == 0)
                                                                                                                                                                int32_t eax_240 = edi_9 << 5
                                                                                                                                                                sub_4cfdf0(eax_240, &var_1008, 
                                                                                                                                                                    edi_9 + &data_12e81c8 + eax_240, 
                                                                                                                                                                    data_108f650)
                                                                                                                                                                *arg1 = 0
                                                                                                                                                                *edx = var_100c
                                                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                                return 0
                                                                                                                                                else if (eax_236.b u>= 0x41
                                                                                                                                                        && eax_236.b u<= 0x5a)
                                                                                                                                                    edi_9 =
                                                                                                                                                        zx.d(eax_236.b) + edi_9 * 0x1a - 0x27
                                                                                                                                                    void* ecx_205 = &var_100c[1]
                                                                                                                                                    var_100c = ecx_205
                                                                                                                                                    
                                                                                                                                                    if (*ecx_205 == 0x3d)
                                                                                                                                                        goto label_44212b
                                                                                                                                    else
                                                                                                                                        eax_228.b = *ecx_187
                                                                                                                                        
                                                                                                                                        if (eax_228.b u>= 0x41
                                                                                                                                                && eax_228.b u<= 0x5a)
                                                                                                                                            int32_t edi_6 = zx.d(eax_228.b) - 0x41
                                                                                                                                            var_100c = &ecx_187[1]
                                                                                                                                            eax_228.b = ecx_187[1]
                                                                                                                                            
                                                                                                                                            if (eax_228.b == 0x3d)
                                                                                                                                            label_44201f:
                                                                                                                                                var_100c = &var_100c[1]
                                                                                                                                                
                                                                                                                                                if (edi_6 s< 0x2be)
                                                                                                                                                    char* ecx_193 = var_100c
                                                                                                                                                    
                                                                                                                                                    if (*ecx_193 == 0x22)
                                                                                                                                                        void* var_14_84 = &ecx_193[1]
                                                                                                                                                        int32_t var_18_19 = 0x1000
                                                                                                                                                        char* var_1c_19 = &var_1008
                                                                                                                                                        var_100c = &ecx_193[1]
                                                                                                                                                        
                                                                                                                                                        if (sub_4d1140(&var_1008, &var_100c, 
                                                                                                                                                                &ecx_193[1], var_1c_19, var_18_19) == 0)
                                                                                                                                                            int32_t eax_232 = edi_6 << 5
                                                                                                                                                            sub_4cfdf0(eax_232, &var_1008, 
                                                                                                                                                                edi_6 + &data_12f97cc + eax_232, 
                                                                                                                                                                data_108f650)
                                                                                                                                                            *arg1 = 0
                                                                                                                                                            *edx = var_100c
                                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                                            return 0
                                                                                                                                            else if (eax_228.b u>= 0x41
                                                                                                                                                    && eax_228.b u<= 0x5a)
                                                                                                                                                edi_6 =
                                                                                                                                                    zx.d(eax_228.b) + edi_6 * 0x1a - 0x27
                                                                                                                                                void* ecx_192 = &var_100c[1]
                                                                                                                                                var_100c = ecx_192
                                                                                                                                                
                                                                                                                                                if (*ecx_192 == 0x3d)
                                                                                                                                                    goto label_44201f
                                                                                                                                else
                                                                                                                                    int32_t eax_219 = sub_4d11d0(&var_1008, 
                                                                                                                                        edx_51, ecx_180, &var_1008)
                                                                                                                                    
                                                                                                                                    if (eax_219 == 0)
                                                                                                                                        int32_t* eax_220 = var_1008
                                                                                                                                        
                                                                                                                                        if (eax_220 s< 4)
                                                                                                                                            data_108f650 = 9
                                                                                                                                            *arg1 = eax_219
                                                                                                                                            *edx = var_100c
                                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                            return 0
                                                                                                                                        
                                                                                                                                        if (eax_220 s> 0xa)
                                                                                                                                            eax_220 = 0xa
                                                                                                                                        
                                                                                                                                        data_108f650 = (eax_220 << 1) + 1
                                                                                                                                        *arg1 = eax_219
                                                                                                                                        *edx = var_100c
                                                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                        return 0
                                                                                                                            else
                                                                                                                                int32_t var_14_79 = ecx_174
                                                                                                                                void* eax_213 = sub_4d1140(&var_1008, 
                                                                                                                                    edx_49, var_100c, &var_1008, 0x1000)
                                                                                                                                
                                                                                                                                if (eax_213 == 0)
                                                                                                                                    sub_4cfdf0(eax_213, &var_1008, 
                                                                                                                                        &data_130028c, 0xff)
                                                                                                                                    *arg1 = 0
                                                                                                                                    *edx = var_100c
                                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                    return 0
                                                                                                                        else
                                                                                                                            int32_t var_14_76 = ecx_168
                                                                                                                            void* eax_207 = sub_4d1140(&var_1008, 
                                                                                                                                edx_47, var_100c, &var_1008, 0x1000)
                                                                                                                            
                                                                                                                            if (eax_207 == 0)
                                                                                                                                sub_4cfdf0(eax_207, &var_1008, 
                                                                                                                                    &data_130018c, 0xff)
                                                                                                                                *arg1 = 0
                                                                                                                                *edx = var_100c
                                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                                return 0
                                                                                                                    else
                                                                                                                        int32_t var_14_73 = ecx_162
                                                                                                                        void* eax_201 = sub_4d1140(&var_1008, 
                                                                                                                            edx_45, var_100c, &var_1008, 0x1000)
                                                                                                                        
                                                                                                                        if (eax_201 == 0)
                                                                                                                            sub_4cfdf0(eax_201, &var_1008, 
                                                                                                                                &data_130008c, 0xff)
                                                                                                                            *arg1 = 0
                                                                                                                            *edx = var_100c
                                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                            return 0
                                                                                                                else
                                                                                                                    int32_t var_14_70 = ecx_156
                                                                                                                    void* eax_195 = sub_4d1140(&var_1008, 
                                                                                                                        edx_43, var_100c, &var_1008, 0x1000)
                                                                                                                    
                                                                                                                    if (eax_195 == 0)
                                                                                                                        sub_4cfdf0(eax_195, &var_1008, 
                                                                                                                            &data_12fff8c, 0xff)
                                                                                                                        *arg1 = 0
                                                                                                                        *edx = var_100c
                                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                        return 0
                                                                                                            else
                                                                                                                int32_t eax_188 = sub_4d11d0(&var_1008, 
                                                                                                                    edx_42, ecx_152, &var_1008)
                                                                                                                
                                                                                                                if (eax_188 == 0)
                                                                                                                    data_12dc5f4 = var_1008
                                                                                                                    *arg1 = eax_188
                                                                                                                    *edx = var_100c
                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                    return 0
                                                                                                            
                                                                                                            esi_3 = 1
                                                                                                        else
                                                                                                            esi_3 = sub_4d11d0(&var_1008, edx_41, 
                                                                                                                ecx_147, &var_1008)
                                                                                                            
                                                                                                            if (esi_3 != 0)
                                                                                                                esi_3 = 1
                                                                                                            else
                                                                                                                int32_t* ecx_148 = var_1008
                                                                                                                
                                                                                                                if (ecx_148 - 0x32 u<= 0x3b5)
                                                                                                                    data_12dc5ec = ecx_148
                                                                                                                    *arg1 = esi_3
                                                                                                                    *edx = var_100c
                                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                    return 0
                                                                                                    else
                                                                                                        int32_t* var_14_64 = &var_1010
                                                                                                        esi_3 = sub_4d1280(&var_1008, edx_39, 
                                                                                                            var_100c, &var_1008, ecx_139)
                                                                                                        
                                                                                                        if (esi_3 != 0)
                                                                                                            esi_3 = 1
                                                                                                        else
                                                                                                            int32_t* edx_40 = var_1008
                                                                                                            int32_t* ecx_141 = data_12dc5e4
                                                                                                            
                                                                                                            if (edx_40 - 0x32 u<= 0x3b5)
                                                                                                                ecx_141 = edx_40
                                                                                                            
                                                                                                            data_12dc5e4 = ecx_141
                                                                                                            
                                                                                                            if (var_1004 - 0x32 u<= 0x3b5)
                                                                                                                data_12dc5e8 = var_1004
                                                                                                                *arg1 = esi_3
                                                                                                                *edx = var_100c
                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                return 0
                                                                                                else
                                                                                                    int32_t eax_166 = sub_4d11d0(&var_1008, 
                                                                                                        edx_38, ecx_135, &var_1008)
                                                                                                    
                                                                                                    if (eax_166 == 0)
                                                                                                        data_12dc5e0 = var_1008
                                                                                                        *arg1 = eax_166
                                                                                                        *edx = var_100c
                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                        return 0
                                                                                                    
                                                                                                    esi_3 = 1
                                                                                            else
                                                                                                int32_t var_14_59 = ecx_129
                                                                                                void* eax_160 = sub_4d1140(&var_1008, 
                                                                                                    edx_36, var_100c, &var_1008, 0x1000)
                                                                                                
                                                                                                if (eax_160 == 0)
                                                                                                    sub_4cfdf0(eax_160, &var_1008, 
                                                                                                        &data_12ffe8c, 0xff)
                                                                                                    *arg1 = 0
                                                                                                    *edx = var_100c
                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                    return 0
                                                                                                
                                                                                                esi_3 = 1
                                                                                        else
                                                                                            int32_t var_14_56 = ecx_123
                                                                                            void* eax_154 = sub_4d1140(&var_1008, 
                                                                                                edx_34, var_100c, &var_1008, 0x1000)
                                                                                            
                                                                                            if (eax_154 == 0)
                                                                                                sub_4cfdf0(eax_154, &var_1008, 
                                                                                                    &data_12ffd8c, 0xff)
                                                                                                *arg1 = 0
                                                                                                *edx = var_100c
                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                return 0
                                                                                            
                                                                                            esi_3 = 1
                                                                                    else
                                                                                        int32_t var_14_53 = ecx_117
                                                                                        void* eax_148 = sub_4d1140(&var_1008, 
                                                                                            edx_32, var_100c, &var_1008, 0x1000)
                                                                                        
                                                                                        if (eax_148 == 0)
                                                                                            sub_4cfdf0(eax_148, &var_1008, 
                                                                                                &data_12ffc8c, 0xff)
                                                                                            *arg1 = 0
                                                                                            *edx = var_100c
                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                            return 0
                                                                                        
                                                                                        esi_3 = 1
                                                                                else
                                                                                    int32_t var_14_50 = ecx_111
                                                                                    void* eax_142 = sub_4d1140(&var_1008, 
                                                                                        edx_30, var_100c, &var_1008, 0x1000)
                                                                                    
                                                                                    if (eax_142 == 0)
                                                                                        sub_4cfdf0(eax_142, &var_1008, 
                                                                                            &data_12ffb8c, 0xff)
                                                                                        *arg1 = 0
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    esi_3 = 1
                                                                            else
                                                                                int32_t var_14_47 = ecx_105
                                                                                void* eax_136 = sub_4d1140(&var_1008, 
                                                                                    edx_28, var_100c, &var_1008, 0x1000)
                                                                                
                                                                                if (eax_136 == 0)
                                                                                    sub_4cfdf0(eax_136, &var_1008, 
                                                                                        &data_12ffa8c, 0xff)
                                                                                    *arg1 = 0
                                                                                    *edx = var_100c
                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                    return 0
                                                                                
                                                                                esi_3 = 1
                                                                        else
                                                                            int32_t var_14_44 = ecx_99
                                                                            void* eax_130 = sub_4d1140(&var_1008, 
                                                                                edx_26, var_100c, &var_1008, 0x1000)
                                                                            
                                                                            if (eax_130 == 0)
                                                                                sub_4cfdf0(eax_130, &var_1008, 
                                                                                    &data_12ff98c, 0xff)
                                                                                *arg1 = 0
                                                                                *edx = var_100c
                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                return 0
                                                                            
                                                                            esi_3 = 1
                                                                    else
                                                                        int32_t var_14_41 = ecx_93
                                                                        void* eax_124 = sub_4d1140(&var_1008, 
                                                                            edx_24, var_100c, &var_1008, 0x1000)
                                                                        
                                                                        if (eax_124 == 0)
                                                                            sub_4cfdf0(eax_124, &var_1008, 
                                                                                &data_12ff88c, 0xff)
                                                                            *arg1 = 0
                                                                            *edx = var_100c
                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                            return 0
                                                                        
                                                                        esi_3 = 1
                                                                else
                                                                    int32_t var_14_38 = ecx_87
                                                                    void* eax_118 = sub_4d1140(&var_1008, 
                                                                        edx_22, var_100c, &var_1008, 0x1000)
                                                                    
                                                                    if (eax_118 == 0)
                                                                        sub_4cfdf0(eax_118, &var_1008, 
                                                                            &data_12ff78c, 0xff)
                                                                        *arg1 = 0
                                                                        *edx = var_100c
                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                        return 0
                                                                    
                                                                    esi_3 = 1
                                                            else
                                                                int32_t var_14_35 = ecx_81
                                                                void* eax_112 = sub_4d1140(&var_1008, 
                                                                    edx_20, var_100c, &var_1008, 0x1000)
                                                                
                                                                if (eax_112 == 0)
                                                                    sub_4cfdf0(eax_112, &var_1008, 
                                                                        &data_12ff68c, 0xff)
                                                                    *arg1 = 0
                                                                    *edx = var_100c
                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                    return 0
                                                                
                                                                esi_3 = 1
                                                        else
                                                            int32_t var_14_32 = ecx_75
                                                            void* eax_106 = sub_4d1140(&var_1008, 
                                                                edx_18, var_100c, &var_1008, 0x1000)
                                                            
                                                            if (eax_106 == 0)
                                                                sub_4cfdf0(eax_106, &var_1008, 
                                                                    &data_12ff58c, 0xff)
                                                                *arg1 = 0
                                                                *edx = var_100c
                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                return 0
                                                            
                                                            esi_3 = 1
                                                    else
                                                        int32_t var_14_29 = ecx_69
                                                        void* eax_100 = sub_4d1140(&var_1008, 
                                                            edx_16, var_100c, &var_1008, 0x1000)
                                                        
                                                        if (eax_100 == 0)
                                                            sub_4cfdf0(eax_100, &var_1008, 
                                                                &data_12ff48c, 0xff)
                                                            *arg1 = 0
                                                            *edx = var_100c
                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                            return 0
                                                        
                                                        esi_3 = 1
                                                else
                                                    int32_t var_14_26 = ecx_63
                                                    void* eax_94 = sub_4d1140(&var_1008, edx_14, 
                                                        var_100c, &var_1008, 0x1000)
                                                    
                                                    if (eax_94 == 0)
                                                        sub_4cfdf0(eax_94, &var_1008, 
                                                            &data_12ff38c, 0xff)
                                                        *arg1 = 0
                                                        *edx = var_100c
                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                        return 0
                                                    
                                                    esi_3 = 1
                                            else
                                                int32_t eax_87 =
                                                    sub_4d11d0(&var_1008, edx_13, ecx_59, &var_1008)
                                                
                                                if (eax_87 == 0)
                                                    int32_t* eax_88 = var_1008
                                                    
                                                    if (eax_88 s< 0 || eax_88 s> 2)
                                                        eax_88 = nullptr
                                                    
                                                    data_12ff37c = eax_88
                                                    *arg1 = eax_87
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                                
                                                esi_3 = 1
                                        else
                                            int32_t eax_80 =
                                                sub_4d11d0(&var_1008, edx_12, ecx_55, &var_1008)
                                            
                                            if (eax_80 == 0)
                                                int32_t* eax_81 = var_1008
                                                
                                                if (eax_81 s< 0 || eax_81 s> 1)
                                                    eax_81 = nullptr
                                                
                                                data_12ff378 = eax_81
                                                *arg1 = eax_80
                                                *edx = var_100c
                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                return 0
                                            
                                            esi_3 = 1
                                    else
                                        int32_t eax_73 =
                                            sub_4d11d0(&var_1008, edx_11, ecx_51, &var_1008)
                                        
                                        if (eax_73 == 0)
                                            int32_t* eax_74 = var_1008
                                            
                                            if (eax_74 s< 0 || eax_74 s> 2)
                                                eax_74 = nullptr
                                            
                                            data_12ff368 = eax_74
                                            *arg1 = eax_73
                                            *edx = var_100c
                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                            return 0
                                        
                                        esi_3 = 1
                                else
                                    int32_t eax_66 =
                                        sub_4d11d0(&var_1008, edx_10, ecx_47, &var_1008)
                                    
                                    if (eax_66 == 0)
                                        int32_t* eax_67 = var_1008
                                        
                                        if (eax_67 s< 0xa || eax_67 s> 0x64)
                                            eax_67 = 0xa
                                        
                                        data_12ff36c = eax_67
                                        *arg1 = eax_66
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                                    
                                    esi_3 = 1
                            else
                                esi_3 = sub_4d11d0(&var_1008, edx_9, ecx_42, &var_1008)
                                
                                if (esi_3 != 0)
                                    esi_3 = 1
                                else
                                    int32_t* ecx_43 = var_1008
                                    
                                    if (ecx_43 + 1 u<= 3)
                                        data_12ff364 = ecx_43
                                        *arg1 = esi_3
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                        else
                            esi_3 = sub_4d11d0(&var_1008, edx_8, ecx_38, &var_1008)
                            
                            if (esi_3 != 0)
                                esi_3 = 1
                            else
                                int32_t* eax_53 = var_1008
                                
                                if (eax_53 u<= 2)
                                    data_12ff360 = eax_53
                                    *arg1 = esi_3
                                    *edx = var_100c
                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                    return 0
                    else
                        esi_3 = sub_4d11d0(&var_1008, edx_7, ecx_34, &var_1008)
                        
                        if (esi_3 != 0)
                            esi_3 = 1
                        else
                            int32_t* eax_46 = var_1008
                            
                            if (eax_46 u<= 1)
                                data_12ff35c = eax_46
                                *arg1 = esi_3
                                *edx = var_100c
                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                return 0
                else
                    esi_3 = sub_4d11d0(&var_1008, edx_6, ecx_30, &var_1008)
                    
                    if (esi_3 != 0)
                        esi_3 = 1
                    else
                        int32_t* eax_39 = var_1008
                        
                        if (eax_39 u<= 2)
                            data_12ff358 = eax_39
                            *arg1 = esi_3
                            *edx = var_100c
                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                            return 0
            else
                int32_t var_14_7 = ecx_24
                int32_t var_18_1 = 0x1000
                char* var_1c_1 = &var_1008
                var_100c = &ecx[0x11]
                void* eax_32 = sub_4d1140(&var_1008, edx_4, &ecx[0x11], var_1c_1, var_18_1)
                
                if (eax_32 == 0)
                    sub_4cfdf0(eax_32, &var_1008, &data_12ff258, 0x100)
                    *arg1 = 0
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
                
                esi_3 = 1
        else
            int32_t* var_14_5 = &var_1008
            var_100c = &ecx[0x10]
            esi_3 = sub_4d11d0(&var_1008, &var_100c, &ecx[0x10], var_14_5)
            
            if (esi_3 != 0)
                esi_3 = 1
            else
                int32_t* eax_26 = var_1008
                
                if (eax_26 u<= 1)
                    data_12ff254 = eax_26
                    *arg1 = esi_3
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
    else
        int32_t* var_14_3 = &var_1008
        var_100c = &ecx[0xe]
        int32_t eax_11 = sub_4d11d0(&var_1008, &var_100c, &ecx[0xe], var_14_3)
        
        if (eax_11 == 0)
            int32_t* ecx_8 = var_1008
            
            if (ecx_8 s< 0)
                data_12ff250 = 0xffffffff
                *arg1 = eax_11
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            if (ecx_8 == 0)
                data_12ff250 = 0
                *arg1 = eax_11
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t eax_18
            eax_18.b = ecx_8 != 1
            data_12ff250 = eax_18 + 1
            *arg1 = eax_11
            *edx = var_100c
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return 0
        
        esi_3 = 1
else
    int32_t* var_14_1 = &var_1008
    var_100c = &ecx[0xa]
    int32_t eax_5 = sub_4d11d0(&var_1008, &var_100c, &ecx[0xa], var_14_1)
    
    if (eax_5 == 0)
        data_12dc4c0 = var_1008
        *arg1 = eax_5
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
    
    esi_3 = 1
*arg1 = esi_3
*edx = var_100c
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return 0
