// 函数: sub_442cc0
// 地址: 0x442cc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x1018)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t var_14 = 0xe
char* var_1014 = ecx
int32_t esi = 0
int32_t eax_3 = sub_4d0fe0(arg2.b, "#SEL_MOUSESET=", ecx, var_14)
int32_t* var_1010

if (eax_3 != 0)
    int32_t eax_9 = sub_4d0fe0(eax_3.b, "#SEL_WINDOWCLOSE=", ecx, 0x11)
    
    if (eax_9 != 0)
        int32_t eax_16 = sub_4d0fe0(eax_9.b, "#SEL_WINDOWCLEAR=", ecx, 0x11)
        
        if (eax_16 != 0)
            int32_t eax_23 = sub_4d0fe0(eax_16.b, "#SEL_FLUSH_USE=", ecx, 0xf)
            char** edx_4 = &var_1014
            
            if (eax_23 != 0)
                int32_t eax_30 = sub_434540(eax_23.b, edx_4, ecx, "#SEL_FLUSH_CNT=")
                char* ecx_18 = var_1014
                char** edx_5 = &var_1014
                
                if (eax_30 != 0)
                    int32_t eax_40 = sub_434540(eax_30.b, edx_5, ecx_18, "#SEL_WAIT_USE=")
                    char* ecx_23 = var_1014
                    char** edx_6 = &var_1014
                    
                    if (eax_40 != 0)
                        int32_t eax_47 = sub_434540(eax_40.b, edx_6, ecx_23, "#SEL_WAIT=")
                        char* ecx_26 = var_1014
                        char** edx_7 = &var_1014
                        
                        if (eax_47 != 0)
                            int32_t eax_57 = sub_434540(eax_47.b, edx_7, ecx_26, "#SEL_CURSOR=")
                            char* ecx_31 = var_1014
                            char** edx_8 = &var_1014
                            
                            if (eax_57 != 0)
                                int32_t eax_63 = sub_434540(eax_57.b, edx_8, ecx_31, "#WINDOW_")
                                char* ecx_35 = var_1014
                                void** edx_9 = &var_1014
                                int32_t var_1018
                                int32_t var_100c
                                int32_t var_1008
                                int32_t var_1004
                                int32_t var_1000
                                
                                if (eax_63 != 0)
                                    int32_t eax_164 =
                                        sub_434540(eax_63.b, edx_9, ecx_35, "#FULLSCREEN_MSGBK")
                                    
                                    if (eax_164 != 0)
                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                        return 1
                                    
                                    int32_t eax_165 =
                                        sub_434540(eax_164.b, &var_1014, var_1014, "_")
                                    char* ecx_85 = var_1014
                                    void** edx_25 = &var_1014
                                    int32_t eax_229
                                    int32_t* edi_5
                                    
                                    if (eax_165 != 0)
                                        if (sub_434540(eax_165.b, edx_25, ecx_85, ".") != 0)
                                            esi = 1
                                        else
                                            esi = sub_4d11d0(&var_1018, &var_1014, var_1014, 
                                                &var_1018)
                                            
                                            if (esi != 0)
                                                esi = 1
                                            else
                                                int32_t eax_239 = var_1018
                                                
                                                if (eax_239 u> 7)
                                                    esi = 1
                                                else
                                                    edi_5 = &(&data_12999a0)[eax_239 * 0x7f]
                                                    eax_229 = sub_434540(eax_239.b, &var_1014, 
                                                        var_1014, ".")
                                                    
                                                    if (eax_229 != 0)
                                                        esi = 1
                                                    else if (edi_5 != 0)
                                                        goto label_443bea
                                    else
                                        int32_t eax_166 =
                                            sub_434540(eax_165.b, edx_25, ecx_85, "PAT_MOD=")
                                        char* ecx_86 = var_1014
                                        char** edx_26 = &var_1014
                                        
                                        if (eax_166 != 0)
                                            int32_t eax_173 =
                                                sub_434540(eax_166.b, edx_26, ecx_86, "PAT_NO=")
                                            char* ecx_89 = var_1014
                                            char** edx_27 = &var_1014
                                            
                                            if (eax_173 != 0)
                                                int32_t eax_180 = sub_434540(eax_173.b, edx_27, 
                                                    ecx_89, "INITIAL_MOJI_SIZE=")
                                                char* ecx_92 = var_1014
                                                char** edx_28 = &var_1014
                                                
                                                if (eax_180 != 0)
                                                    int32_t eax_187 = sub_434540(eax_180.b, edx_28, 
                                                        ecx_92, "MIN_MOJI_SIZE=")
                                                    char* ecx_95 = var_1014
                                                    char** edx_29 = &var_1014
                                                    
                                                    if (eax_187 != 0)
                                                        int32_t eax_194 = sub_434540(eax_187.b, 
                                                            edx_29, ecx_95, "MAX_MOJI_SIZE=")
                                                        char* ecx_98 = var_1014
                                                        char** edx_30 = &var_1014
                                                        
                                                        if (eax_194 != 0)
                                                            int32_t eax_201 = sub_434540(eax_194.b, 
                                                                edx_30, ecx_98, "INITIAL_NAME_MOD=")
                                                            char* ecx_101 = var_1014
                                                            char** edx_31 = &var_1014
                                                            
                                                            if (eax_201 != 0)
                                                                int32_t eax_208 = sub_434540(eax_201.b, 
                                                                    edx_31, ecx_101, 
                                                                    "INDENT_NAME_MOJI_CNT=")
                                                                char* ecx_104 = var_1014
                                                                char** edx_32 = &var_1014
                                                                
                                                                if (eax_208 != 0)
                                                                    int32_t eax_215 = sub_434540(eax_208.b, 
                                                                        edx_32, ecx_104, 
                                                                        "RETURN_NAME_MOJI_CNT=")
                                                                    char* ecx_107 = var_1014
                                                                    char** edx_33 = &var_1014
                                                                    
                                                                    if (eax_215 != 0)
                                                                        int32_t eax_222 = sub_434540(eax_215.b, 
                                                                            edx_33, ecx_107, 
                                                                            "TOGAKI_TOP_SPACE_MOD=")
                                                                        char* ecx_110 = var_1014
                                                                        char** edx_34 = &var_1014
                                                                        
                                                                        if (eax_222 != 0)
                                                                            eax_229 = sub_434540(eax_222.b, edx_34, 
                                                                                ecx_110, "SERIFU_INDENT_USE=")
                                                                            
                                                                            if (eax_229 != 0)
                                                                                edi_5 = &data_12999a0
                                                                            label_443bea:
                                                                                int32_t eax_240 = sub_434540(eax_229.b, 
                                                                                    &var_1014, var_1014, "MSG_AREA_WIDTH=")
                                                                                char* ecx_119 = var_1014
                                                                                char** edx_39 = &var_1014
                                                                                
                                                                                if (eax_240 != 0)
                                                                                    int32_t eax_247 = sub_434540(eax_240.b, 
                                                                                        edx_39, ecx_119, "MSG_AREA_X=")
                                                                                    char* ecx_122 = var_1014
                                                                                    char** edx_40 = &var_1014
                                                                                    
                                                                                    if (eax_247 != 0)
                                                                                        int32_t eax_254 = sub_434540(eax_247.b, 
                                                                                            edx_40, ecx_122, 
                                                                                            "BACKGROUND_COLOR_MOD=")
                                                                                        char* ecx_125 = var_1014
                                                                                        void** edx_41 = &var_1014
                                                                                        
                                                                                        if (eax_254 != 0)
                                                                                            int32_t eax_261
                                                                                            int32_t* ecx_128
                                                                                            eax_261, ecx_128 = sub_434540(
                                                                                                eax_254.b, edx_41, ecx_125, 
                                                                                                "BACKGROUND_ATTR=")
                                                                                            char** edx_42 = &var_1014
                                                                                            
                                                                                            if (eax_261 != 0)
                                                                                                int32_t eax_272 = sub_434540(eax_261.b, 
                                                                                                    edx_42, var_1014, "MOJI_COLOR=")
                                                                                                char* ecx_133 = var_1014
                                                                                                char** edx_43 = &var_1014
                                                                                                
                                                                                                if (eax_272 != 0)
                                                                                                    int32_t eax_279 = sub_434540(eax_272.b, 
                                                                                                        edx_43, ecx_133, "MOJI_SHADOW=")
                                                                                                    char* ecx_136 = var_1014
                                                                                                    char** edx_44 = &var_1014
                                                                                                    
                                                                                                    if (eax_279 != 0)
                                                                                                        int32_t eax_286 = sub_434540(eax_279.b, 
                                                                                                            edx_44, ecx_136, "KOE_MOJI_COLOR=")
                                                                                                        char* ecx_139 = var_1014
                                                                                                        char** edx_45 = &var_1014
                                                                                                        
                                                                                                        if (eax_286 != 0)
                                                                                                            int32_t eax_293 = sub_434540(eax_286.b, 
                                                                                                                edx_45, ecx_139, "KOE_MOJI_SHADOW=")
                                                                                                            char* ecx_142 = var_1014
                                                                                                            char** edx_46 = &var_1014
                                                                                                            
                                                                                                            if (eax_293 != 0)
                                                                                                                int32_t eax_300 = sub_434540(eax_293.b, 
                                                                                                                    edx_46, ecx_142, "HIT_KOE_MOJI_COLOR=")
                                                                                                                char* ecx_145 = var_1014
                                                                                                                char** edx_47 = &var_1014
                                                                                                                
                                                                                                                if (eax_300 != 0)
                                                                                                                    int32_t eax_307 = sub_434540(eax_300.b, 
                                                                                                                        edx_47, ecx_145, "HIT_KOE_MOJI_SHADOW=")
                                                                                                                    char* ecx_148 = var_1014
                                                                                                                    char** edx_48 = &var_1014
                                                                                                                    
                                                                                                                    if (eax_307 != 0)
                                                                                                                        int32_t eax_314
                                                                                                                        int32_t ecx_151
                                                                                                                        eax_314, ecx_151 = sub_434540(
                                                                                                                            eax_307.b, edx_48, ecx_148, "KOEICON="")
                                                                                                                        void** edx_49 = &var_1014
                                                                                                                        
                                                                                                                        if (eax_314 != 0)
                                                                                                                            int32_t eax_320 = sub_434540(eax_314.b, 
                                                                                                                                edx_49, var_1014, "ITEM.")
                                                                                                                            
                                                                                                                            if (eax_320 == 0)
                                                                                                                                int32_t eax_321 = sub_434540(eax_320.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "SLIDER_BASE.FILENAME="")
                                                                                                                                int32_t var_14_95
                                                                                                                                
                                                                                                                                if (eax_321 == 0)
                                                                                                                                    var_14_95 = eax_321
                                                                                                                                label_44433e:
                                                                                                                                    *arg2 = sub_4372b0(&var_1014, var_14_95)
                                                                                                                                    *edx = var_1014
                                                                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                                    return 0
                                                                                                                                
                                                                                                                                int32_t eax_322 = sub_434540(eax_321.b, 
                                                                                                                                    &var_1014, var_1014, "SLIDER_BASE.POS=")
                                                                                                                                int32_t var_18_4
                                                                                                                                int32_t var_14_97
                                                                                                                                
                                                                                                                                if (eax_322 == 0)
                                                                                                                                    var_14_97 = eax_322
                                                                                                                                    var_18_4 = eax_322
                                                                                                                                label_444266:
                                                                                                                                    *arg2 = sub_437340(&var_1014, var_18_4, 
                                                                                                                                        var_14_97)
                                                                                                                                    *edx = var_1014
                                                                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                                    return 0
                                                                                                                                
                                                                                                                                int32_t eax_323 = sub_434540(eax_322.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "SLIDER_BTN.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_323 == 0)
                                                                                                                                    var_14_95 = 1
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_324 = sub_434540(eax_323.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "SLIDER_BTN.TOP_POS=")
                                                                                                                                
                                                                                                                                if (eax_324 == 0)
                                                                                                                                    var_14_97 = eax_324
                                                                                                                                    var_18_4 = 1
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_325 = sub_434540(eax_324.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "SLIDER_BTN.BOTTOM_POS=")
                                                                                                                                
                                                                                                                                if (eax_325 == 0)
                                                                                                                                    var_14_97 = 1
                                                                                                                                    var_18_4 = 1
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_326 = sub_434540(eax_325.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_CLOSE.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_326 == 0)
                                                                                                                                    var_14_95 = 2
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_327 = sub_434540(eax_326.b, 
                                                                                                                                    &var_1014, var_1014, "BTN_CLOSE.POS=")
                                                                                                                                
                                                                                                                                if (eax_327 == 0)
                                                                                                                                    var_14_97 = eax_327
                                                                                                                                    var_18_4 = 2
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_328 = sub_434540(eax_327.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MSG_UP.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_328 == 0)
                                                                                                                                    var_14_95 = 3
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_329 = sub_434540(eax_328.b, 
                                                                                                                                    &var_1014, var_1014, "BTN_MSG_UP.POS=")
                                                                                                                                
                                                                                                                                if (eax_329 == 0)
                                                                                                                                    var_14_97 = eax_329
                                                                                                                                    var_18_4 = 3
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_330 = sub_434540(eax_329.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MSG_DOWN.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_330 == 0)
                                                                                                                                    var_14_95 = 4
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_331 = sub_434540(eax_330.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MSG_DOWN.POS=")
                                                                                                                                
                                                                                                                                if (eax_331 == 0)
                                                                                                                                    var_14_97 = eax_331
                                                                                                                                    var_18_4 = 4
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_332 = sub_434540(eax_331.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MOJI_LARGE.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_332 == 0)
                                                                                                                                    var_14_95 = 5
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_333 = sub_434540(eax_332.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MOJI_LARGE.POS=")
                                                                                                                                
                                                                                                                                if (eax_333 == 0)
                                                                                                                                    var_14_97 = eax_333
                                                                                                                                    var_18_4 = 5
                                                                                                                                    goto label_444266
                                                                                                                                
                                                                                                                                int32_t eax_338 = sub_434540(eax_333.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MOJI_SMALL.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_338 == 0)
                                                                                                                                    var_14_95 = 6
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_339 = sub_434540(eax_338.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_MOJI_SMALL.POS=")
                                                                                                                                
                                                                                                                                if (eax_339 == 0)
                                                                                                                                    *arg2 =
                                                                                                                                        sub_437340(&var_1014, 6, eax_339)
                                                                                                                                    *edx = var_1014
                                                                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                                    return 0
                                                                                                                                
                                                                                                                                int32_t eax_344 = sub_434540(eax_339.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_NAME_MOD.FILENAME="")
                                                                                                                                
                                                                                                                                if (eax_344 == 0)
                                                                                                                                    var_14_95 = 7
                                                                                                                                    goto label_44433e
                                                                                                                                
                                                                                                                                int32_t eax_349 = sub_434540(eax_344.b, 
                                                                                                                                    &var_1014, var_1014, 
                                                                                                                                    "BTN_NAME_MOD.POS=")
                                                                                                                                
                                                                                                                                if (eax_349 == 0)
                                                                                                                                    var_14_97 = eax_349
                                                                                                                                    var_18_4 = 7
                                                                                                                                    goto label_444266
                                                                                                                        else
                                                                                                                            int32_t var_14_91 = ecx_151
                                                                                                                            void* eax_316 = sub_4d1140(&var_1010, 
                                                                                                                                edx_49, var_1014, &var_1010, 0x1000)
                                                                                                                            
                                                                                                                            if (eax_316 == 0)
                                                                                                                                sub_4cfdf0(eax_316, &var_1010, 
                                                                                                                                    &edi_5[0xe], 0x24)
                                                                                                                                *arg2 = esi
                                                                                                                                *edx = var_1014
                                                                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                                return 0
                                                                                                                    else
                                                                                                                        int32_t eax_309 = sub_4d11d0(&var_1010, 
                                                                                                                            edx_48, ecx_148, &var_1010)
                                                                                                                        
                                                                                                                        if (eax_309 == 0)
                                                                                                                            edi_5[0xd] = var_1010
                                                                                                                            *arg2 = eax_309
                                                                                                                            *edx = var_1014
                                                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                            return 0
                                                                                                                else
                                                                                                                    int32_t eax_302 = sub_4d11d0(&var_1010, 
                                                                                                                        edx_47, ecx_145, &var_1010)
                                                                                                                    
                                                                                                                    if (eax_302 == 0)
                                                                                                                        edi_5[0xc] = var_1010
                                                                                                                        *arg2 = eax_302
                                                                                                                        *edx = var_1014
                                                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                        return 0
                                                                                                            else
                                                                                                                int32_t eax_295 = sub_4d11d0(&var_1010, 
                                                                                                                    edx_46, ecx_142, &var_1010)
                                                                                                                
                                                                                                                if (eax_295 == 0)
                                                                                                                    edi_5[0xb] = var_1010
                                                                                                                    *arg2 = eax_295
                                                                                                                    *edx = var_1014
                                                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                    return 0
                                                                                                        else
                                                                                                            int32_t eax_288 = sub_4d11d0(&var_1010, 
                                                                                                                edx_45, ecx_139, &var_1010)
                                                                                                            
                                                                                                            if (eax_288 == 0)
                                                                                                                edi_5[0xa] = var_1010
                                                                                                                *arg2 = eax_288
                                                                                                                *edx = var_1014
                                                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                return 0
                                                                                                    else
                                                                                                        int32_t eax_281 = sub_4d11d0(&var_1010, 
                                                                                                            edx_44, ecx_136, &var_1010)
                                                                                                        
                                                                                                        if (eax_281 == 0)
                                                                                                            edi_5[9] = var_1010
                                                                                                            *arg2 = eax_281
                                                                                                            *edx = var_1014
                                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                            return 0
                                                                                                else
                                                                                                    int32_t eax_274 = sub_4d11d0(&var_1010, 
                                                                                                        edx_43, ecx_133, &var_1010)
                                                                                                    
                                                                                                    if (eax_274 == 0)
                                                                                                        edi_5[8] = var_1010
                                                                                                        *arg2 = eax_274
                                                                                                        *edx = var_1014
                                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                        return 0
                                                                                            else
                                                                                                int32_t* var_14_77 = &var_1018
                                                                                                void* eax_263 = sub_4d1280(&var_1010, 
                                                                                                    edx_42, var_1014, &var_1010, ecx_128)
                                                                                                
                                                                                                if (eax_263 == 0)
                                                                                                    edi_5[3] = var_1010
                                                                                                    edi_5[4] = var_100c
                                                                                                    edi_5[5] = var_1008
                                                                                                    edi_5[6] = var_1004
                                                                                                    edi_5[7] = var_1000
                                                                                                    *arg2 = eax_263
                                                                                                    *edx = var_1014
                                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                    return 0
                                                                                        else
                                                                                            int32_t eax_256 = sub_4d11d0(&var_1010, 
                                                                                                edx_41, ecx_125, &var_1010)
                                                                                            
                                                                                            if (eax_256 == 0)
                                                                                                edi_5[2] = var_1010
                                                                                                *arg2 = eax_256
                                                                                                *edx = var_1014
                                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                return 0
                                                                                    else
                                                                                        int32_t eax_249 = sub_4d11d0(&var_1010, 
                                                                                            edx_40, ecx_122, &var_1010)
                                                                                        
                                                                                        if (eax_249 == 0)
                                                                                            edi_5[1] = var_1010
                                                                                            *arg2 = eax_249
                                                                                            *edx = var_1014
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                else
                                                                                    int32_t eax_242 = sub_4d11d0(&var_1010, 
                                                                                        edx_39, ecx_119, &var_1010)
                                                                                    
                                                                                    if (eax_242 == 0)
                                                                                        *edi_5 = var_1010
                                                                                        *arg2 = eax_242
                                                                                        *edx = var_1014
                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                        return 0
                                                                                
                                                                                esi = 1
                                                                            else
                                                                                int32_t eax_231 = sub_4d11d0(&var_1010, 
                                                                                    &var_1014, var_1014, &var_1010)
                                                                                
                                                                                if (eax_231 == 0)
                                                                                    data_129999c = var_1010
                                                                                    *arg2 = eax_231
                                                                                    *edx = var_1014
                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                    return 0
                                                                                
                                                                                esi = 1
                                                                        else
                                                                            int32_t eax_224 = sub_4d11d0(&var_1010, 
                                                                                edx_34, ecx_110, &var_1010)
                                                                            
                                                                            if (eax_224 == 0)
                                                                                data_1299998 = var_1010
                                                                                *arg2 = eax_224
                                                                                *edx = var_1014
                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                return 0
                                                                            
                                                                            esi = 1
                                                                    else
                                                                        int32_t eax_217 = sub_4d11d0(&var_1010, 
                                                                            edx_33, ecx_107, &var_1010)
                                                                        
                                                                        if (eax_217 == 0)
                                                                            data_1299994 = var_1010
                                                                            *arg2 = eax_217
                                                                            *edx = var_1014
                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                            return 0
                                                                        
                                                                        esi = 1
                                                                else
                                                                    int32_t eax_210 = sub_4d11d0(&var_1010, 
                                                                        edx_32, ecx_104, &var_1010)
                                                                    
                                                                    if (eax_210 == 0)
                                                                        data_1299990 = var_1010
                                                                        *arg2 = eax_210
                                                                        *edx = var_1014
                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                        return 0
                                                                    
                                                                    esi = 1
                                                            else
                                                                int32_t eax_203 = sub_4d11d0(&var_1010, 
                                                                    edx_31, ecx_101, &var_1010)
                                                                
                                                                if (eax_203 == 0)
                                                                    data_1299980:0xc = var_1010
                                                                    *arg2 = eax_203
                                                                    *edx = var_1014
                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                    return 0
                                                                
                                                                esi = 1
                                                        else
                                                            int32_t eax_196 = sub_4d11d0(&var_1010, 
                                                                edx_30, ecx_98, &var_1010)
                                                            
                                                            if (eax_196 == 0)
                                                                data_1299980:8 = var_1010
                                                                *arg2 = eax_196
                                                                *edx = var_1014
                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                return 0
                                                            
                                                            esi = 1
                                                    else
                                                        int32_t eax_189 = sub_4d11d0(&var_1010, 
                                                            edx_29, ecx_95, &var_1010)
                                                        
                                                        if (eax_189 == 0)
                                                            data_1299980:4 = var_1010
                                                            *arg2 = eax_189
                                                            *edx = var_1014
                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                            return 0
                                                        
                                                        esi = 1
                                                else
                                                    int32_t eax_182 = sub_4d11d0(&var_1010, edx_28, 
                                                        ecx_92, &var_1010)
                                                    
                                                    if (eax_182 == 0)
                                                        data_1299980.d = var_1010
                                                        *arg2 = eax_182
                                                        *edx = var_1014
                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                        return 0
                                                    
                                                    esi = 1
                                            else
                                                if (sub_4d11d0(&var_1010, edx_27, ecx_89, &var_1010)
                                                        == 0)
                                                    data_129997c = var_1010
                                                    *arg2 = 0
                                                    *edx = var_1014
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                                                
                                                esi = 1
                                        else
                                            if (sub_4d11d0(&var_1010, edx_26, ecx_86, &var_1010)
                                                    == 0)
                                                data_1299978 = var_1010
                                                *arg2 = 0
                                                *edx = var_1014
                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                return 0
                                            
                                            esi = 1
                                else
                                    int32_t eax_64
                                    int32_t* ecx_36
                                    eax_64, ecx_36 = sub_434540(eax_63.b, edx_9, ecx_35, "ATTR=")
                                    char** edx_10 = &var_1014
                                    
                                    if (eax_64 != 0)
                                        int32_t eax_75 =
                                            sub_434540(eax_64.b, edx_10, var_1014, "PROCESS_MOD=")
                                        char* ecx_41 = var_1014
                                        char** edx_11 = &var_1014
                                        
                                        if (eax_75 != 0)
                                            int32_t eax_86 =
                                                sub_434540(eax_75.b, edx_11, ecx_41, "MOVE_USE=")
                                            char* ecx_44 = var_1014
                                            char** edx_12 = &var_1014
                                            
                                            if (eax_86 != 0)
                                                int32_t eax_92 = sub_434540(eax_86.b, edx_12, 
                                                    ecx_44, "CLEAR_USE=")
                                                char* ecx_47 = var_1014
                                                char** edx_13 = &var_1014
                                                
                                                if (eax_92 != 0)
                                                    int32_t eax_98 = sub_434540(eax_92.b, edx_13, 
                                                        ecx_47, "READJUMP_USE=")
                                                    char* ecx_50 = var_1014
                                                    char** edx_14 = &var_1014
                                                    
                                                    if (eax_98 != 0)
                                                        int32_t eax_104 = sub_434540(eax_98.b, 
                                                            edx_14, ecx_50, "AUTOMODE_USE=")
                                                        char* ecx_53 = var_1014
                                                        char** edx_15 = &var_1014
                                                        
                                                        if (eax_104 != 0)
                                                            int32_t eax_110 = sub_434540(eax_104.b, 
                                                                edx_15, ecx_53, "KOEPLAY_USE=")
                                                            char* ecx_56 = var_1014
                                                            char** edx_16 = &var_1014
                                                            
                                                            if (eax_110 != 0)
                                                                int32_t eax_116 = sub_434540(eax_110.b, 
                                                                    edx_16, ecx_56, "MSGBK_USE=")
                                                                char* ecx_59 = var_1014
                                                                char** edx_17 = &var_1014
                                                                
                                                                if (eax_116 != 0)
                                                                    int32_t eax_122 = sub_434540(eax_116.b, 
                                                                        edx_17, ecx_59, "MSGBKLEFT_USE=")
                                                                    char* ecx_62 = var_1014
                                                                    char** edx_18 = &var_1014
                                                                    
                                                                    if (eax_122 != 0)
                                                                        int32_t eax_128 = sub_434540(eax_122.b, 
                                                                            edx_18, ecx_62, "MSGBKRIGHT_USE=")
                                                                        char* ecx_65 = var_1014
                                                                        char** edx_19 = &var_1014
                                                                        
                                                                        if (eax_128 != 0)
                                                                            int32_t eax_134 = sub_434540(eax_128.b, 
                                                                                edx_19, ecx_65, "EXBTN_USE=")
                                                                            char* ecx_68 = var_1014
                                                                            char** edx_20 = &var_1014
                                                                            
                                                                            if (eax_134 != 0)
                                                                                int32_t eax_140 = sub_434540(eax_134.b, 
                                                                                    edx_20, ecx_68, "MSGBK_BACKUP=")
                                                                                char* ecx_73 = var_1014
                                                                                char** edx_21 = &var_1014
                                                                                
                                                                                if (eax_140 != 0)
                                                                                    int32_t eax_150 = sub_434540(eax_140.b, 
                                                                                        edx_21, ecx_73, "BOX_HIT_MODE=")
                                                                                    char* ecx_78 = var_1014
                                                                                    char** edx_22 = &var_1014
                                                                                    
                                                                                    if (eax_150 != 0)
                                                                                        if (sub_434540(eax_150.b, edx_22, 
                                                                                                ecx_78, "MOVE_MODE=") == 0)
                                                                                            int32_t eax_159 = sub_4d11d0(&var_1010, 
                                                                                                &var_1014, var_1014, &var_1010)
                                                                                            
                                                                                            if (eax_159 == 0)
                                                                                                data_12a2988 = var_1010
                                                                                                *arg2 = eax_159
                                                                                                *edx = var_1014
                                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                return 0
                                                                                    else
                                                                                        int32_t eax_152 = sub_4d11d0(&var_1010, 
                                                                                            edx_22, ecx_78, &var_1010)
                                                                                        
                                                                                        if (eax_152 == 0)
                                                                                            data_12a2984 = var_1010
                                                                                            *arg2 = eax_152
                                                                                            *edx = var_1014
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                else
                                                                                    int32_t eax_142 = sub_4d11d0(&var_1010, 
                                                                                        edx_21, ecx_73, &var_1010)
                                                                                    
                                                                                    if (eax_142 == 0)
                                                                                        int32_t* eax_143 = var_1010
                                                                                        
                                                                                        if (eax_143 != 0)
                                                                                            data_12a297c = 1
                                                                                            
                                                                                            if (eax_143 == 2)
                                                                                                data_12a2980 = 1
                                                                                                *arg2 = eax_142
                                                                                                *edx = var_1014
                                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                return 0
                                                                                        else
                                                                                            data_12a297c = eax_143
                                                                                        
                                                                                        data_12a2980 = 0
                                                                                        *arg2 = eax_142
                                                                                        *edx = var_1014
                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                        return 0
                                                                            else
                                                                                int32_t eax_136 = sub_4d11d0(&var_1010, 
                                                                                    edx_20, ecx_68, &var_1010)
                                                                                
                                                                                if (eax_136 == 0)
                                                                                    int32_t ecx_70 =
                                                                                        zx.d(var_1010.b) * 0x1010101
                                                                                    data_108f591 = ecx_70
                                                                                    data_108f595 = ecx_70
                                                                                    *arg2 = eax_136
                                                                                    *edx = var_1014
                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                    return 0
                                                                        else
                                                                            int32_t esi_36 = sub_4d11d0(&var_1010, 
                                                                                edx_19, ecx_65, &var_1010)
                                                                            
                                                                            if (esi_36 == 0)
                                                                                int32_t eax_130
                                                                                eax_130.b = var_1010.b
                                                                                data_108f590 = eax_130.b
                                                                                *arg2 = esi_36
                                                                                *edx = var_1014
                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                return 0
                                                                    else
                                                                        int32_t esi_34 = sub_4d11d0(&var_1010, 
                                                                            edx_18, ecx_62, &var_1010)
                                                                        
                                                                        if (esi_34 == 0)
                                                                            int32_t eax_124
                                                                            eax_124.b = var_1010.b
                                                                            data_108f58f = eax_124.b
                                                                            *arg2 = esi_34
                                                                            *edx = var_1014
                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                            return 0
                                                                else
                                                                    int32_t esi_32 = sub_4d11d0(&var_1010, 
                                                                        edx_17, ecx_59, &var_1010)
                                                                    
                                                                    if (esi_32 == 0)
                                                                        int32_t eax_118
                                                                        eax_118.b = var_1010.b
                                                                        data_108f58e = eax_118.b
                                                                        *arg2 = esi_32
                                                                        *edx = var_1014
                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                        return 0
                                                            else
                                                                int32_t esi_30 = sub_4d11d0(&var_1010, 
                                                                    edx_16, ecx_56, &var_1010)
                                                                
                                                                if (esi_30 == 0)
                                                                    int32_t eax_112
                                                                    eax_112.b = var_1010.b
                                                                    data_108f59b = eax_112.b
                                                                    *arg2 = esi_30
                                                                    *edx = var_1014
                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                    return 0
                                                        else
                                                            int32_t esi_28 = sub_4d11d0(&var_1010, 
                                                                edx_15, ecx_53, &var_1010)
                                                            
                                                            if (esi_28 == 0)
                                                                int32_t eax_106
                                                                eax_106.b = var_1010.b
                                                                data_108f59a = eax_106.b
                                                                *arg2 = esi_28
                                                                *edx = var_1014
                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                return 0
                                                    else
                                                        int32_t esi_26 = sub_4d11d0(&var_1010, 
                                                            edx_14, ecx_50, &var_1010)
                                                        
                                                        if (esi_26 == 0)
                                                            int32_t eax_100
                                                            eax_100.b = var_1010.b
                                                            data_108f599 = eax_100.b
                                                            *arg2 = esi_26
                                                            *edx = var_1014
                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                            return 0
                                                else
                                                    int32_t esi_24 = sub_4d11d0(&var_1010, edx_13, 
                                                        ecx_47, &var_1010)
                                                    
                                                    if (esi_24 == 0)
                                                        int32_t eax_94
                                                        eax_94.b = var_1010.b
                                                        data_108f58d = eax_94.b
                                                        *arg2 = esi_24
                                                        *edx = var_1014
                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                        return 0
                                            else
                                                int32_t esi_22 =
                                                    sub_4d11d0(&var_1010, edx_12, ecx_44, &var_1010)
                                                
                                                if (esi_22 == 0)
                                                    int32_t eax_88
                                                    eax_88.b = var_1010.b
                                                    data_108f58c = eax_88.b
                                                    *arg2 = esi_22
                                                    *edx = var_1014
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                                            
                                            esi = 1
                                        else
                                            esi = sub_4d11d0(&var_1010, edx_11, ecx_41, &var_1010)
                                            int32_t* eax_78
                                            
                                            if (esi == 0)
                                                eax_78 = var_1010
                                            
                                            if (esi != 0 || eax_78 == 0)
                                                data_1392cb0 = 1
                                            label_4431e5:
                                                int32_t eax_81 = (sub_4d18c0(2) & 0x7ff) + 0x400
                                                data_139271c = eax_81
                                                data_1392718 = &(&data_702fc0)[eax_81]
                                                *arg2 = esi
                                                *edx = var_1014
                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                return 0
                                            
                                            if (eax_78 == 0x67)
                                                eax_78 = data_1392cb0
                                            else
                                                data_1392cb0 = eax_78
                                            
                                            if (eax_78 != 0)
                                                goto label_4431e5
                                    else
                                        int32_t* var_14_18 = &var_1018
                                        void* eax_66 = sub_4d1280(&var_1010, edx_10, var_1014, 
                                            &var_1010, ecx_36)
                                        
                                        if (eax_66 == 0)
                                            data_12a2964 = var_1010
                                            data_12a2968 = var_100c
                                            data_12a296c = var_1008
                                            data_12a2970 = var_1004
                                            data_12a2974 = var_1000
                                            *arg2 = eax_66
                                            *edx = var_1014
                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                            return 0
                                        
                                        esi = 1
                            else
                                int32_t eax_59 = sub_4d11d0(&var_1010, edx_8, ecx_31, &var_1010)
                                
                                if (eax_59 == 0)
                                    int32_t* ecx_32 = 0xffffffff
                                    
                                    if (var_1010 u<= 0x1f)
                                        ecx_32 = var_1010
                                    
                                    data_12dc638 = ecx_32
                                    *arg2 = eax_59
                                    *edx = var_1014
                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                    return 0
                                
                                esi = 1
                        else
                            int32_t eax_49 = sub_4d11d0(&var_1010, edx_7, ecx_26, &var_1010)
                            
                            if (eax_49 == 0)
                                int32_t* eax_50 = var_1010
                                
                                if (eax_50 s< 0)
                                    data_12dc62c = eax_49
                                    *arg2 = eax_49
                                    *edx = var_1014
                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                    return 0
                                
                                if (eax_50 s>= 0x1388)
                                    eax_50 = 0x1388
                                
                                data_12dc62c = eax_50
                                *arg2 = eax_49
                                *edx = var_1014
                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                return 0
                            
                            esi = 1
                    else
                        int32_t eax_42 = sub_4d11d0(&var_1010, edx_6, ecx_23, &var_1010)
                        
                        if (eax_42 == 0)
                            data_12dc628 = var_1010
                            *arg2 = eax_42
                            *edx = var_1014
                            sub_5f02dd(arg1 ^ &__saved_ebp)
                            return 0
                        
                        esi = 1
                else
                    int32_t eax_32 = sub_4d11d0(&var_1010, edx_5, ecx_18, &var_1010)
                    
                    if (eax_32 == 0)
                        int32_t* eax_33 = var_1010
                        
                        if (eax_33 s< 0)
                            data_12dc624 = eax_32
                            *arg2 = eax_32
                            *edx = var_1014
                            sub_5f02dd(arg1 ^ &__saved_ebp)
                            return 0
                        
                        if (eax_33 s>= 0x14)
                            eax_33 = 0x14
                        
                        data_12dc624 = eax_33
                        *arg2 = eax_32
                        *edx = var_1014
                        sub_5f02dd(arg1 ^ &__saved_ebp)
                        return 0
                    
                    esi = 1
            else
                int32_t* var_14_7 = &var_1010
                var_1014 = &ecx[0xf]
                int32_t eax_25 = sub_4d11d0(&var_1010, edx_4, &ecx[0xf], var_14_7)
                
                if (eax_25 == 0)
                    data_12dc620 = var_1010
                    *arg2 = eax_25
                    *edx = var_1014
                    sub_5f02dd(arg1 ^ &__saved_ebp)
                    return 0
                
                esi = 1
        else
            int32_t* var_14_5 = &var_1010
            var_1014 = &ecx[0x11]
            int32_t eax_18 = sub_4d11d0(&var_1010, &var_1014, &ecx[0x11], var_14_5)
            
            if (eax_18 == 0)
                data_12dc618 = var_1010
                *arg2 = eax_18
                *edx = var_1014
                sub_5f02dd(arg1 ^ &__saved_ebp)
                return 0
            
            esi = 1
    else
        int32_t* var_14_3 = &var_1010
        var_1014 = &ecx[0x11]
        int32_t eax_11 = sub_4d11d0(&var_1010, &var_1014, &ecx[0x11], var_14_3)
        
        if (eax_11 == 0)
            data_12dc614 = var_1010
            *arg2 = eax_11
            *edx = var_1014
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return 0
        
        esi = 1
else
    int32_t* var_14_1 = &var_1010
    var_1014 = &ecx[0xe]
    int32_t eax_5 = sub_4d11d0(&var_1010, &var_1014, &ecx[0xe], var_14_1)
    
    if (eax_5 == 0)
        data_12dc61c = var_1010
        *arg2 = eax_5
        *edx = var_1014
        sub_5f02dd(arg1 ^ &__saved_ebp)
        return 0
    
    esi = 1
*arg2 = esi
*edx = var_1014
sub_5f02dd(arg1 ^ &__saved_ebp)
return 0
