// 函数: sub_439cd0
// 地址: 0x439cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
void** edx
ecx, edx = __chkstk(0x1010)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_3 = sub_4d0fe0(arg1.b, "#MOUSE_CURSOR_WINDOWBUTTON_", ecx, 0x1b)
void* var_100c
int32_t entry_ebx
int32_t esi_10
void* var_1010
char var_1008

if (eax_3 != 0)
    int32_t eax_61 = sub_4d0fe0(eax_3.b, "#SELBTN.", ecx, 8)
    int32_t var_1004
    int32_t var_1000
    int32_t var_ffc
    
    if (eax_61 != 0)
        int32_t eax_245 = sub_4d0fe0(eax_61.b, "#MSGBK_WINDOW.", ecx, 0xe)
        
        if (eax_245 != 0)
            int32_t eax_322 = sub_4d0fe0(eax_245.b, "#KOEREPLAYICON.", ecx, 0xf)
            
            if (eax_322 != 0)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 1
            
            char* var_14_91 = "NAME=""
            var_100c = &ecx[0xf]
            int32_t eax_323
            int32_t ecx_195
            eax_323, ecx_195 = sub_434540(eax_322.b, &var_100c, &ecx[0xf], var_14_91)
            void** edx_54 = &var_100c
            
            if (eax_323 != 0)
                int32_t eax_329 = sub_434540(eax_323.b, edx_54, var_100c, "MOUSECURSORNO=")
                char* ecx_200 = var_100c
                void** edx_56 = &var_100c
                
                if (eax_329 != 0)
                    int32_t eax_336
                    int32_t* ecx_203
                    eax_336, ecx_203 = sub_434540(eax_329.b, edx_56, ecx_200, "REPPOS=")
                    void** edx_57 = &var_100c
                    
                    if (eax_336 != 0)
                        int32_t eax_344
                        int32_t* ecx_208
                        eax_344, ecx_208 = sub_434540(eax_336.b, edx_57, var_100c, "SIZE=")
                        
                        if (eax_344 == 0)
                            void** var_14_99 = &var_1010
                            void* eax_346 =
                                sub_4d1280(&var_1008, &var_100c, var_100c, &var_1008, ecx_208)
                            
                            if (eax_346 == 0)
                                data_12a2914 = var_1008.d
                                data_12a2918 = var_1004
                                *arg1 = eax_346
                                *edx = var_100c
                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                return 0
                    else
                        void** var_14_97 = &var_1010
                        void* eax_338 = sub_4d1280(&var_1008, edx_57, var_100c, &var_1008, ecx_203)
                        
                        if (eax_338 == 0)
                            data_12a291c = var_1008.d
                            data_12a2920 = var_1004
                            *arg1 = eax_338
                            *edx = var_100c
                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                            return 0
                else
                    int32_t eax_331 = sub_4d11d0(&var_1008, edx_56, ecx_200, &var_1008)
                    
                    if (eax_331 == 0)
                        data_12a2910 = var_1008.d
                        *arg1 = eax_331
                        *edx = var_100c
                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                        return 0
            else
                int32_t var_14_92 = ecx_195
                void* eax_325 = sub_4d1140(&var_1008, edx_54, var_100c, &var_1008, 0x1000)
                
                if (eax_325 == 0)
                    sub_4cfdf0(eax_325, &var_1008, &data_12a28ec, 0x24)
                    *arg1 = 0
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
        else
            int32_t var_14_71 = 6
            var_100c = &ecx[0xe]
            int32_t eax_246
            int32_t ecx_149
            eax_246, ecx_149 = sub_4d0fe0(eax_245.b, "NAME="", &ecx[0xe], var_14_71)
            void** edx_43 = &var_100c
            
            if (eax_246 != 0)
                int32_t eax_252
                int32_t* ecx_154
                eax_252, ecx_154 = sub_434540(eax_246.b, edx_43, &ecx[0xe], "POS=")
                void** edx_45 = &var_100c
                
                if (eax_252 != 0)
                    int32_t eax_260
                    int32_t* ecx_159
                    eax_260, ecx_159 = sub_434540(eax_252.b, edx_45, var_100c, "SIZE=")
                    void** edx_46 = &var_100c
                    
                    if (eax_260 != 0)
                        int32_t eax_268
                        int32_t* ecx_164
                        eax_268, ecx_164 = sub_434540(eax_260.b, edx_46, var_100c, "KAGE_POS=")
                        void** edx_47 = &var_100c
                        
                        if (eax_268 != 0)
                            int32_t eax_276
                            int32_t* ecx_169
                            eax_276, ecx_169 = sub_434540(eax_268.b, edx_47, var_100c, "LEFT_POS=")
                            void** edx_48 = &var_100c
                            
                            if (eax_276 != 0)
                                int32_t eax_284
                                int32_t* ecx_174
                                eax_284, ecx_174 =
                                    sub_434540(eax_276.b, edx_48, var_100c, "RIGHT_POS=")
                                void** edx_49 = &var_100c
                                
                                if (eax_284 != 0)
                                    int32_t eax_292
                                    int32_t* ecx_179
                                    eax_292, ecx_179 =
                                        sub_434540(eax_284.b, edx_49, var_100c, "MOVE_BOX=")
                                    void** edx_50 = &var_100c
                                    
                                    if (eax_292 != 0)
                                        int32_t eax_302
                                        int32_t* ecx_184
                                        eax_302, ecx_184 =
                                            sub_434540(eax_292.b, edx_50, var_100c, "LEFT_BOX=")
                                        void** edx_51 = &var_100c
                                        
                                        if (eax_302 != 0)
                                            int32_t eax_312
                                            int32_t* ecx_189
                                            eax_312, ecx_189 = sub_434540(eax_302.b, edx_51, 
                                                var_100c, "RIGHT_BOX=")
                                            
                                            if (eax_312 == 0)
                                                void** var_14_89 = &var_1010
                                                void* eax_314 = sub_4d1280(&var_1008, &var_100c, 
                                                    var_100c, &var_1008, ecx_189)
                                                
                                                if (eax_314 == 0)
                                                    data_1299958 = eax_314
                                                    data_129995c = var_1008.d
                                                    data_1299960 = var_1004
                                                    data_1299964 = var_1000
                                                    data_1299968 = var_ffc
                                                    *arg1 = eax_314
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                        else
                                            void** var_14_87 = &var_1010
                                            void* eax_304 = sub_4d1280(&var_1008, edx_51, var_100c, 
                                                &var_1008, ecx_184)
                                            
                                            if (eax_304 == 0)
                                                data_1299944 = eax_304
                                                data_1299948 = var_1008.d
                                                data_129994c = var_1004
                                                data_1299950 = var_1000
                                                data_1299954 = var_ffc
                                                *arg1 = eax_304
                                                *edx = var_100c
                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                return 0
                                    else
                                        void** var_14_85 = &var_1010
                                        void* eax_294 = sub_4d1280(&var_1008, edx_50, var_100c, 
                                            &var_1008, ecx_179)
                                        
                                        if (eax_294 == 0)
                                            data_1299930 = eax_294
                                            data_1299934 = var_1008.d
                                            data_1299938 = var_1004
                                            data_129993c = var_1000
                                            data_1299940 = var_ffc
                                            *arg1 = eax_294
                                            *edx = var_100c
                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                            return 0
                                else
                                    void** var_14_83 = &var_1010
                                    void* eax_286 =
                                        sub_4d1280(&var_1008, edx_49, var_100c, &var_1008, ecx_174)
                                    
                                    if (eax_286 == 0)
                                        data_1299928 = var_1008.d
                                        data_129992c = var_1004
                                        *arg1 = eax_286
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                            else
                                void** var_14_81 = &var_1010
                                void* eax_278 =
                                    sub_4d1280(&var_1008, edx_48, var_100c, &var_1008, ecx_169)
                                
                                if (eax_278 == 0)
                                    data_1299920 = var_1008.d
                                    data_1299924 = var_1004
                                    *arg1 = eax_278
                                    *edx = var_100c
                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                    return 0
                        else
                            void** var_14_79 = &var_1010
                            void* eax_270 =
                                sub_4d1280(&var_1008, edx_47, var_100c, &var_1008, ecx_164)
                            
                            if (eax_270 == 0)
                                data_1299918 = var_1008.d
                                data_129991c = var_1004
                                *arg1 = eax_270
                                *edx = var_100c
                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                return 0
                    else
                        void** var_14_77 = &var_1010
                        void* eax_262 = sub_4d1280(&var_1008, edx_46, var_100c, &var_1008, ecx_159)
                        
                        if (eax_262 == 0)
                            data_1299910 = var_1008.d
                            data_1299914 = var_1004
                            *arg1 = eax_262
                            *edx = var_100c
                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                            return 0
                else
                    void** var_14_75 = &var_1010
                    void* eax_254 = sub_4d1280(&var_1008, edx_45, var_100c, &var_1008, ecx_154)
                    
                    if (eax_254 == 0)
                        data_1299908 = var_1008.d
                        data_129990c = var_1004
                        *arg1 = eax_254
                        *edx = var_100c
                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                        return 0
            else
                int32_t var_14_72 = ecx_149
                int32_t var_18_16 = 0x1000
                char* var_1c_16 = &var_1008
                var_100c = &ecx[0x14]
                void* eax_248 = sub_4d1140(&var_1008, edx_43, &ecx[0x14], var_1c_16, var_18_16)
                
                if (eax_248 == 0)
                    sub_4cfdf0(eax_248, &var_1008, &data_12998e4, 0x24)
                    *arg1 = 0
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
        
        esi_10 = 1
    else
        int32_t* var_14_22 = &var_1010
        var_100c = &ecx[8]
        int32_t eax_63 = sub_4d11d0(&var_1010, &var_100c, &ecx[8], var_14_22)
        esi_10 = eax_63
        
        if (esi_10 != 0)
            esi_10 = 1
        else
            void* edi_7 = var_1010
            
            if (edi_7 u> 0x1f)
                esi_10 = 1
            else
                int32_t eax_64 = sub_434540(eax_63.b, &var_100c, var_100c, ".")
                
                if (eax_64 != 0)
                    esi_10 = 1
                else
                    int32_t eax_65
                    int32_t ecx_39
                    eax_65, ecx_39 = sub_434540(eax_64.b, &var_100c, var_100c, "NAME="")
                    void** edx_15 = &var_100c
                    
                    if (eax_65 != 0)
                        int32_t eax_71
                        int32_t ecx_45
                        eax_71, ecx_45 = sub_434540(eax_65.b, edx_15, var_100c, "BACK="")
                        void** edx_17 = &var_100c
                        
                        if (eax_71 != 0)
                            int32_t eax_77
                            int32_t* ecx_51
                            eax_77, ecx_51 = sub_434540(eax_71.b, edx_17, var_100c, "BASEPOS=")
                            void** edx_19 = &var_100c
                            
                            if (eax_77 != 0)
                                int32_t eax_85
                                int32_t* ecx_56
                                eax_85, ecx_56 = sub_434540(eax_77.b, edx_19, var_100c, "REPPOS=")
                                void** edx_20 = &var_100c
                                
                                if (eax_85 != 0)
                                    int32_t eax_93
                                    int32_t* ecx_61
                                    eax_93, ecx_61 =
                                        sub_434540(eax_85.b, edx_20, var_100c, "CENTERING=")
                                    void** edx_21 = &var_100c
                                    
                                    if (eax_93 != 0)
                                        int32_t eax_101
                                        int32_t* ecx_66
                                        eax_101, ecx_66 =
                                            sub_434540(eax_93.b, edx_21, var_100c, "MOJISIZE=")
                                        void** edx_22 = &var_100c
                                        
                                        if (eax_101 != 0)
                                            int32_t eax_110
                                            int32_t* ecx_72
                                            eax_110, ecx_72 = sub_434540(eax_101.b, edx_22, 
                                                var_100c, "MOJIPOSREP=")
                                            void** edx_23 = &var_100c
                                            
                                            if (eax_110 != 0)
                                                int32_t eax_118 = sub_434540(eax_110.b, edx_23, 
                                                    var_100c, "MOJIPOSMOD=")
                                                void* ecx_77 = var_100c
                                                char** edx_24 = &var_100c
                                                
                                                if (eax_118 != 0)
                                                    int32_t eax_125 = sub_434540(eax_118.b, edx_24, 
                                                        ecx_77, "MOJIDEFAULTCOL=")
                                                    void* ecx_80 = var_100c
                                                    char** edx_25 = &var_100c
                                                    
                                                    if (eax_125 != 0)
                                                        int32_t eax_135 = sub_434540(eax_125.b, 
                                                            edx_25, ecx_80, "MOJISELECTCOL=")
                                                        void* ecx_85 = var_100c
                                                        char** edx_26 = &var_100c
                                                        
                                                        if (eax_135 != 0)
                                                            int32_t eax_145 = sub_434540(eax_135.b, 
                                                                edx_26, ecx_85, "MOJIDARK=")
                                                            void* ecx_90 = var_100c
                                                            char** edx_27 = &var_100c
                                                            
                                                            if (eax_145 != 0)
                                                                int32_t eax_155 = sub_434540(eax_145.b, 
                                                                    edx_27, ecx_90, "MOJISHADOW=")
                                                                void* ecx_95 = var_100c
                                                                char** edx_28 = &var_100c
                                                                
                                                                if (eax_155 != 0)
                                                                    int32_t eax_162
                                                                    int32_t* ecx_98
                                                                    eax_162, ecx_98 = sub_434540(eax_155.b, 
                                                                        edx_28, ecx_95, "SELECTCURSORNO=")
                                                                    void** edx_29 = &var_100c
                                                                    
                                                                    if (eax_162 != 0)
                                                                        int32_t eax_171 = sub_434540(eax_162.b, 
                                                                            edx_29, var_100c, "MOUSECURSORNO=")
                                                                        void* ecx_103 = var_100c
                                                                        char** edx_30 = &var_100c
                                                                        
                                                                        if (eax_171 != 0)
                                                                            int32_t eax_178 = sub_434540(eax_171.b, 
                                                                                edx_30, ecx_103, "MOUSESET=")
                                                                            char* ecx_106 = var_100c
                                                                            void** edx_31 = &var_100c
                                                                            
                                                                            if (eax_178 != 0)
                                                                                int32_t eax_185
                                                                                int32_t* ecx_109
                                                                                eax_185, ecx_109 = sub_434540(
                                                                                    eax_178.b, edx_31, ecx_106, "NORMAL=")
                                                                                void** edx_32 = &var_100c
                                                                                int32_t var_ff8
                                                                                
                                                                                if (eax_185 != 0)
                                                                                    int32_t eax_194
                                                                                    int32_t* ecx_115
                                                                                    eax_194, ecx_115 = sub_434540(
                                                                                        eax_185.b, edx_32, var_100c, "SELECT=")
                                                                                    void** edx_34 = &var_100c
                                                                                    
                                                                                    if (eax_194 != 0)
                                                                                        int32_t eax_203
                                                                                        int32_t* ecx_121
                                                                                        eax_203, ecx_121 = sub_434540(
                                                                                            eax_194.b, edx_34, var_100c, "PUSH=")
                                                                                        void** edx_36 = &var_100c
                                                                                        
                                                                                        if (eax_203 != 0)
                                                                                            int32_t eax_212
                                                                                            int32_t* ecx_127
                                                                                            eax_212, ecx_127 = sub_434540(
                                                                                                eax_203.b, edx_36, var_100c, "DONTSEL=")
                                                                                            void** edx_38 = &var_100c
                                                                                            
                                                                                            if (eax_212 != 0)
                                                                                                int32_t eax_221
                                                                                                int32_t* ecx_133
                                                                                                eax_221, ecx_133 = sub_434540(
                                                                                                    eax_212.b, edx_38, var_100c, 
                                                                                                    "OPEN_ANM=")
                                                                                                void** edx_40 = &var_100c
                                                                                                
                                                                                                if (eax_221 != 0)
                                                                                                    int32_t eax_229
                                                                                                    int32_t* ecx_138
                                                                                                    eax_229, ecx_138 = sub_434540(
                                                                                                        eax_221.b, edx_40, var_100c, 
                                                                                                        "SELECT_ANM=")
                                                                                                    void** edx_41 = &var_100c
                                                                                                    
                                                                                                    if (eax_229 != 0)
                                                                                                        int32_t eax_237
                                                                                                        int32_t* ecx_143
                                                                                                        eax_237, ecx_143 = sub_434540(
                                                                                                            eax_229.b, edx_41, var_100c, 
                                                                                                            "CLOSE_ANM=")
                                                                                                        
                                                                                                        if (eax_237 == 0)
                                                                                                            void** var_14_69 = &var_1010
                                                                                                            void* eax_239 = sub_4d1280(&var_1008, 
                                                                                                                &var_100c, var_100c, &var_1008, ecx_143)
                                                                                                            
                                                                                                            if (eax_239 == 0)
                                                                                                                *(edi_7 * 0x10c + 0x10980e8) =
                                                                                                                    var_1008.d
                                                                                                                int32_t eax_241 = var_1004
                                                                                                                
                                                                                                                if (eax_241 s< 0 || eax_241 s> 0x2710)
                                                                                                                    eax_241 = 0x1f4
                                                                                                                
                                                                                                                *(edi_7 * 0x10c + 0x10980ec) = eax_241
                                                                                                                *arg1 = eax_239
                                                                                                                *edx = var_100c
                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                return 0
                                                                                                            
                                                                                                            esi_10 = 1
                                                                                                    else
                                                                                                        void** var_14_67 = &var_1010
                                                                                                        void* eax_231 = sub_4d1280(&var_1008, 
                                                                                                            edx_41, var_100c, &var_1008, ecx_138)
                                                                                                        
                                                                                                        if (eax_231 == 0)
                                                                                                            *(edi_7 * 0x10c + 0x10980e0) =
                                                                                                                var_1008.d
                                                                                                            int32_t eax_233 = var_1004
                                                                                                            
                                                                                                            if (eax_233 s< 0 || eax_233 s> 0x2710)
                                                                                                                eax_233 = 0x1f4
                                                                                                            
                                                                                                            *(edi_7 * 0x10c + 0x10980e4) = eax_233
                                                                                                            *arg1 = eax_231
                                                                                                            *edx = var_100c
                                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                            return 0
                                                                                                        
                                                                                                        esi_10 = 1
                                                                                                else
                                                                                                    void** var_14_65 = &var_1010
                                                                                                    void* eax_223 = sub_4d1280(&var_1008, 
                                                                                                        edx_40, var_100c, &var_1008, ecx_133)
                                                                                                    
                                                                                                    if (eax_223 == 0)
                                                                                                        *(edi_7 * 0x10c + 0x10980d8) =
                                                                                                            var_1008.d
                                                                                                        int32_t eax_225 = var_1004
                                                                                                        
                                                                                                        if (eax_225 s< 0 || eax_225 s> 0x2710)
                                                                                                            eax_225 = 0x1f4
                                                                                                        
                                                                                                        *(edi_7 * 0x10c + 0x10980dc) = eax_225
                                                                                                        *arg1 = eax_223
                                                                                                        *edx = var_100c
                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                        return 0
                                                                                                    
                                                                                                    esi_10 = 1
                                                                                            else
                                                                                                void** var_14_63 = &var_1010
                                                                                                void* eax_214 = sub_4d1280(&var_1008, 
                                                                                                    edx_38, var_100c, &var_1008, ecx_127)
                                                                                                
                                                                                                if (eax_214 == 0)
                                                                                                    int32_t ecx_129 = var_ffc
                                                                                                    
                                                                                                    if (ecx_129 s< 0)
                                                                                                        ecx_129 = 0
                                                                                                    else if (ecx_129 s> 0xff)
                                                                                                        ecx_129 = 0xff
                                                                                                    
                                                                                                    int32_t edx_39 = var_ff8
                                                                                                    
                                                                                                    if (edx_39 s< 0xffffff01)
                                                                                                        edx_39 = 0xffffff01
                                                                                                    else if (edx_39 s> 0xff)
                                                                                                        edx_39 = 0xff
                                                                                                    
                                                                                                    *(edi_7 * 0x10c + 0x10980c4) =
                                                                                                        var_1008.d
                                                                                                    *(edi_7 * 0x10c + 0x10980c8) = var_1004
                                                                                                    *(edi_7 * 0x10c + 0x10980cc) = var_1000
                                                                                                    *(edi_7 * 0x10c + 0x10980d0) = ecx_129
                                                                                                    *(edi_7 * 0x10c + 0x10980d4) = edx_39
                                                                                                    *arg1 = eax_214
                                                                                                    *edx = var_100c
                                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                    return 0
                                                                                                
                                                                                                esi_10 = 1
                                                                                        else
                                                                                            void** var_14_61 = &var_1010
                                                                                            void* eax_205 = sub_4d1280(&var_1008, 
                                                                                                edx_36, var_100c, &var_1008, ecx_121)
                                                                                            
                                                                                            if (eax_205 == 0)
                                                                                                int32_t ecx_123 = var_ffc
                                                                                                
                                                                                                if (ecx_123 s< 0)
                                                                                                    ecx_123 = 0
                                                                                                else if (ecx_123 s> 0xff)
                                                                                                    ecx_123 = 0xff
                                                                                                
                                                                                                int32_t edx_37 = var_ff8
                                                                                                
                                                                                                if (edx_37 s< 0xffffff01)
                                                                                                    edx_37 = 0xffffff01
                                                                                                else if (edx_37 s> 0xff)
                                                                                                    edx_37 = 0xff
                                                                                                
                                                                                                *(edi_7 * 0x10c + 0x10980b0) =
                                                                                                    var_1008.d
                                                                                                *(edi_7 * 0x10c + 0x10980b4) = var_1004
                                                                                                *(edi_7 * 0x10c + 0x10980b8) = var_1000
                                                                                                *(edi_7 * 0x10c + 0x10980bc) = ecx_123
                                                                                                *(edi_7 * 0x10c + 0x10980c0) = edx_37
                                                                                                *arg1 = eax_205
                                                                                                *edx = var_100c
                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                return 0
                                                                                            
                                                                                            esi_10 = 1
                                                                                    else
                                                                                        void** var_14_59 = &var_1010
                                                                                        void* eax_196 = sub_4d1280(&var_1008, 
                                                                                            edx_34, var_100c, &var_1008, ecx_115)
                                                                                        
                                                                                        if (eax_196 == 0)
                                                                                            int32_t ecx_117 = var_ffc
                                                                                            
                                                                                            if (ecx_117 s< 0)
                                                                                                ecx_117 = 0
                                                                                            else if (ecx_117 s> 0xff)
                                                                                                ecx_117 = 0xff
                                                                                            
                                                                                            int32_t edx_35 = var_ff8
                                                                                            
                                                                                            if (edx_35 s< 0xffffff01)
                                                                                                edx_35 = 0xffffff01
                                                                                            else if (edx_35 s> 0xff)
                                                                                                edx_35 = 0xff
                                                                                            
                                                                                            *(edi_7 * 0x10c + 0x109809c) =
                                                                                                var_1008.d
                                                                                            *(edi_7 * 0x10c + 0x10980a0) = var_1004
                                                                                            *(edi_7 * 0x10c + 0x10980a4) = var_1000
                                                                                            *(edi_7 * 0x10c + 0x10980a8) = ecx_117
                                                                                            *(edi_7 * 0x10c + 0x10980ac) = edx_35
                                                                                            *arg1 = eax_196
                                                                                            *edx = var_100c
                                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                            return 0
                                                                                        
                                                                                        esi_10 = 1
                                                                                else
                                                                                    void** var_14_57 = &var_1010
                                                                                    void* eax_187 = sub_4d1280(&var_1008, 
                                                                                        edx_32, var_100c, &var_1008, ecx_109)
                                                                                    
                                                                                    if (eax_187 == 0)
                                                                                        int32_t ecx_111 = var_ffc
                                                                                        
                                                                                        if (ecx_111 s< 0)
                                                                                            ecx_111 = 0
                                                                                        else if (ecx_111 s> 0xff)
                                                                                            ecx_111 = 0xff
                                                                                        
                                                                                        int32_t edx_33 = var_ff8
                                                                                        
                                                                                        if (edx_33 s< 0xffffff01)
                                                                                            edx_33 = 0xffffff01
                                                                                        else if (edx_33 s> 0xff)
                                                                                            edx_33 = 0xff
                                                                                        
                                                                                        *(edi_7 * 0x10c + 0x1098088) =
                                                                                            var_1008.d
                                                                                        *(edi_7 * 0x10c + 0x109808c) = var_1004
                                                                                        *(edi_7 * 0x10c + 0x1098090) = var_1000
                                                                                        *(edi_7 * 0x10c + 0x1098094) = ecx_111
                                                                                        *(edi_7 * 0x10c + 0x1098098) = edx_33
                                                                                        *arg1 = eax_187
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    esi_10 = 1
                                                                            else
                                                                                int32_t eax_180 = sub_4d11d0(&var_1008, 
                                                                                    edx_31, ecx_106, &var_1008)
                                                                                
                                                                                if (eax_180 == 0)
                                                                                    *(edi_7 * 0x10c + 0x1098084) =
                                                                                        var_1008.d
                                                                                    *arg1 = eax_180
                                                                                    *edx = var_100c
                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                    return 0
                                                                                
                                                                                esi_10 = 1
                                                                        else
                                                                            int32_t eax_173 = sub_4d11d0(&var_1008, 
                                                                                edx_30, ecx_103, &var_1008)
                                                                            
                                                                            if (eax_173 == 0)
                                                                                *(edi_7 * 0x10c + 0x1098080) =
                                                                                    var_1008.d
                                                                                *arg1 = eax_173
                                                                                *edx = var_100c
                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                return 0
                                                                            
                                                                            esi_10 = 1
                                                                    else
                                                                        void** var_14_51 = &var_1010
                                                                        void* eax_164 = sub_4d1280(&var_1008, 
                                                                            edx_29, var_100c, &var_1008, ecx_98)
                                                                        
                                                                        if (eax_164 == 0)
                                                                            *(edi_7 * 0x10c + 0x1098074) =
                                                                                var_1008.d
                                                                            *(edi_7 * 0x10c + 0x1098078) = var_1004
                                                                            *(edi_7 * 0x10c + 0x109807c) = var_1000
                                                                            *arg1 = eax_164
                                                                            *edx = var_100c
                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                            return 0
                                                                        
                                                                        esi_10 = 1
                                                                else
                                                                    int32_t eax_157 = sub_4d11d0(&var_1008, 
                                                                        edx_28, ecx_95, &var_1008)
                                                                    
                                                                    if (eax_157 == 0)
                                                                        *(edi_7 * 0x10c + 0x1098070) =
                                                                            var_1008.d
                                                                        *arg1 = eax_157
                                                                        *edx = var_100c
                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                        return 0
                                                                    
                                                                    esi_10 = 1
                                                            else
                                                                int32_t eax_147 = sub_4d11d0(&var_1008, 
                                                                    edx_27, ecx_90, &var_1008)
                                                                
                                                                if (eax_147 == 0)
                                                                    int32_t eax_148 = var_1008.d
                                                                    
                                                                    if (eax_148 s< 0)
                                                                        *(edi_7 * 0x10c + 0x109806c) = 0
                                                                        *arg1 = eax_147
                                                                        *edx = var_100c
                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                        return 0
                                                                    
                                                                    if (eax_148 s> 0xff)
                                                                        eax_148 = 0xff
                                                                    
                                                                    *(edi_7 * 0x10c + 0x109806c) = eax_148
                                                                    *arg1 = eax_147
                                                                    *edx = var_100c
                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                    return 0
                                                                
                                                                esi_10 = 1
                                                        else
                                                            int32_t eax_137 = sub_4d11d0(&var_1008, 
                                                                edx_26, ecx_85, &var_1008)
                                                            
                                                            if (eax_137 == 0)
                                                                int32_t eax_138 = var_1008.d
                                                                
                                                                if (eax_138 s< 0xffffffff)
                                                                    *(edi_7 * 0x10c + 0x1098068) =
                                                                        0xffffffff
                                                                    *arg1 = eax_137
                                                                    *edx = var_100c
                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                    return 0
                                                                
                                                                if (eax_138 s> 0xff)
                                                                    eax_138 = 0xff
                                                                
                                                                *(edi_7 * 0x10c + 0x1098068) = eax_138
                                                                *arg1 = eax_137
                                                                *edx = var_100c
                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                return 0
                                                            
                                                            esi_10 = 1
                                                    else
                                                        int32_t eax_127 = sub_4d11d0(&var_1008, 
                                                            edx_25, ecx_80, &var_1008)
                                                        
                                                        if (eax_127 == 0)
                                                            int32_t eax_128 = var_1008.d
                                                            
                                                            if (eax_128 s< 0)
                                                                *(edi_7 * 0x10c + 0x1098064) = 0
                                                                *arg1 = eax_127
                                                                *edx = var_100c
                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                return 0
                                                            
                                                            if (eax_128 s> 0xff)
                                                                eax_128 = 0xff
                                                            
                                                            *(edi_7 * 0x10c + 0x1098064) = eax_128
                                                            *arg1 = eax_127
                                                            *edx = var_100c
                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                            return 0
                                                        
                                                        esi_10 = 1
                                                else
                                                    int32_t eax_120 = sub_4d11d0(&var_1008, edx_24, 
                                                        ecx_77, &var_1008)
                                                    
                                                    if (eax_120 == 0)
                                                        *(edi_7 * 0x10c + 0x1098060) = var_1008.d
                                                        *arg1 = eax_120
                                                        *edx = var_100c
                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                        return 0
                                                    
                                                    esi_10 = 1
                                            else
                                                void** var_14_39 = &var_1010
                                                void* eax_112 = sub_4d1280(&var_1008, edx_23, 
                                                    var_100c, &var_1008, ecx_72)
                                                
                                                if (eax_112 == 0)
                                                    *(edi_7 * 0x10c + 0x1098058) = var_1008.d
                                                    *(edi_7 * 0x10c + 0x109805c) = var_1004
                                                    *arg1 = eax_112
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                                
                                                esi_10 = 1
                                        else
                                            void** var_14_37 = &var_1010
                                            void* eax_103 = sub_4d1280(&var_1008, edx_22, var_100c, 
                                                &var_1008, ecx_66)
                                            
                                            if (eax_103 == 0)
                                                void* eax_104 = var_1008.d
                                                
                                                if (eax_104 s< 8)
                                                    eax_104 = eax_103 + 8
                                                else if (eax_104 s> 0x40)
                                                    eax_104 = 0x40
                                                
                                                int32_t ecx_68 = var_ffc
                                                
                                                if (ecx_68 s< 0)
                                                    ecx_68 = 0
                                                else if (ecx_68 s> 0x64)
                                                    ecx_68 = 0x64
                                                
                                                *(edi_7 * 0x10c + 0x1098048) = eax_104
                                                *(edi_7 * 0x10c + 0x109804c) = var_1004
                                                *(edi_7 * 0x10c + 0x1098050) = var_1000
                                                *(edi_7 * 0x10c + 0x1098054) = ecx_68
                                                *arg1 = eax_103
                                                *edx = var_100c
                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                return 0
                                            
                                            esi_10 = 1
                                    else
                                        void** var_14_35 = &var_1010
                                        void* eax_95 = sub_4d1280(&var_1008, edx_21, var_100c, 
                                            &var_1008, ecx_61)
                                        
                                        if (eax_95 == 0)
                                            *(edi_7 * 0x10c + 0x1098040) = var_1008.d
                                            *(edi_7 * 0x10c + 0x1098044) = var_1004
                                            *arg1 = eax_95
                                            *edx = var_100c
                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                            return 0
                                        
                                        esi_10 = 1
                                else
                                    void** var_14_33 = &var_1010
                                    void* eax_87 =
                                        sub_4d1280(&var_1008, edx_20, var_100c, &var_1008, ecx_56)
                                    
                                    if (eax_87 == 0)
                                        *(edi_7 * 0x10c + 0x1098038) = var_1008.d
                                        *(edi_7 * 0x10c + 0x109803c) = var_1004
                                        *arg1 = eax_87
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                                    
                                    esi_10 = 1
                            else
                                void** var_14_31 = &var_1010
                                void* eax_79 =
                                    sub_4d1280(&var_1008, edx_19, var_100c, &var_1008, ecx_51)
                                
                                if (eax_79 == 0)
                                    *(edi_7 * 0x10c + 0x1098030) = var_1008.d
                                    *(edi_7 * 0x10c + 0x1098034) = var_1004
                                    *arg1 = eax_79
                                    *edx = var_100c
                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                    return 0
                                
                                esi_10 = 1
                        else
                            int32_t var_14_28 = ecx_45
                            void* eax_73 =
                                sub_4d1140(&var_1008, edx_17, var_100c, &var_1008, 0x1000)
                            
                            if (eax_73 == 0)
                                sub_4cfdf0(eax_73, &var_1008, edi_7 * 0x10c + 0x1098008, 0x24)
                                *arg1 = esi_10
                                *edx = var_100c
                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                return 0
                            
                            esi_10 = 1
                    else
                        int32_t var_14_25 = ecx_39
                        void* eax_67 = sub_4d1140(&var_1008, edx_15, var_100c, &var_1008, 0x1000)
                        
                        if (eax_67 == 0)
                            sub_4cfdf0(eax_67, &var_1008, edi_7 * 0x10c + 0x1097fe4, 0x24)
                            *arg1 = esi_10
                            *edx = var_100c
                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                            return 0
                        
                        esi_10 = 1
else
    int32_t var_14_1 = 5
    var_100c = &ecx[0x1b]
    int32_t eax_4 = sub_4d0fe0(eax_3.b, "MOVE=", &ecx[0x1b], var_14_1)
    
    if (eax_4 != 0)
        int32_t eax_10 = sub_4d0fe0(eax_4.b, "CLEAR=", &ecx[0x1b], 6)
        
        if (eax_10 != 0)
            int32_t eax_16 = sub_4d0fe0(eax_10.b, "READJUMP=", &ecx[0x1b], 9)
            void** edx_3 = &var_100c
            
            if (eax_16 != 0)
                int32_t eax_22 = sub_434540(eax_16.b, edx_3, &ecx[0x1b], "AUTOMODE=")
                void* ecx_15 = var_100c
                char** edx_4 = &var_100c
                
                if (eax_22 != 0)
                    int32_t eax_28 = sub_434540(eax_22.b, edx_4, ecx_15, "KOEPLAY=")
                    void* ecx_18 = var_100c
                    char** edx_5 = &var_100c
                    
                    if (eax_28 != 0)
                        int32_t eax_34 = sub_434540(eax_28.b, edx_5, ecx_18, "MSGBK=")
                        void* ecx_21 = var_100c
                        char** edx_6 = &var_100c
                        
                        if (eax_34 != 0)
                            int32_t eax_40 = sub_434540(eax_34.b, edx_6, ecx_21, "MSGBKLEFT=")
                            void* ecx_24 = var_100c
                            char** edx_7 = &var_100c
                            
                            if (eax_40 != 0)
                                int32_t eax_46 = sub_434540(eax_40.b, edx_7, ecx_24, "MSGBKRIGHT=")
                                void* ecx_27 = var_100c
                                char** edx_8 = &var_100c
                                
                                if (eax_46 != 0)
                                    if (sub_434540(eax_46.b, edx_8, ecx_27, "EXBTN_") == 0)
                                        int32_t eax_54 =
                                            sub_4d11d0(&var_1010, &var_100c, var_100c, &var_1010)
                                        
                                        if (eax_54 == 0)
                                            void* edi_5 = var_1010
                                            
                                            if (edi_5 u<= 7 &&
                                                    sub_434540(eax_54.b, &var_100c, var_100c, "=") == 0)
                                                int32_t esi_9 = sub_4d11d0(&var_1008, &var_100c, 
                                                    var_100c, &var_1008)
                                                
                                                if (esi_9 == 0)
                                                    int32_t eax_57
                                                    eax_57.b = var_1008
                                                    *(edi_5 + 0x108f5b1) = eax_57.b
                                                    *arg1 = esi_9
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                else
                                    int32_t esi_8 = sub_4d11d0(&var_1008, edx_8, ecx_27, &var_1008)
                                    
                                    if (esi_8 == 0)
                                        int32_t eax_48
                                        eax_48.b = var_1008
                                        data_108f5b0 = eax_48.b
                                        *arg1 = esi_8
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                            else
                                int32_t esi_7 = sub_4d11d0(&var_1008, edx_7, ecx_24, &var_1008)
                                
                                if (esi_7 == 0)
                                    int32_t eax_42
                                    eax_42.b = var_1008
                                    data_108f5af = eax_42.b
                                    *arg1 = esi_7
                                    *edx = var_100c
                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                    return 0
                        else
                            int32_t esi_6 = sub_4d11d0(&var_1008, edx_6, ecx_21, &var_1008)
                            
                            if (esi_6 == 0)
                                int32_t eax_36
                                eax_36.b = var_1008
                                data_108f5ae = eax_36.b
                                *arg1 = esi_6
                                *edx = var_100c
                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                return 0
                    else
                        int32_t esi_5 = sub_4d11d0(&var_1008, edx_5, ecx_18, &var_1008)
                        
                        if (esi_5 == 0)
                            int32_t eax_30
                            eax_30.b = var_1008
                            data_108f5bb = eax_30.b
                            *arg1 = esi_5
                            *edx = var_100c
                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                            return 0
                else
                    int32_t esi_4 = sub_4d11d0(&var_1008, edx_4, ecx_15, &var_1008)
                    
                    if (esi_4 == 0)
                        int32_t eax_24
                        eax_24.b = var_1008
                        data_108f5ba = eax_24.b
                        *arg1 = esi_4
                        *edx = var_100c
                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                        return 0
            else
                int32_t* var_14_6 = &var_1008
                var_100c = &ecx[0x24]
                int32_t esi_3 = sub_4d11d0(&var_1008, edx_3, &ecx[0x24], var_14_6)
                
                if (esi_3 == 0)
                    int32_t eax_18
                    eax_18.b = var_1008
                    data_108f5b9 = eax_18.b
                    *arg1 = esi_3
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
        else
            int32_t* var_14_4 = &var_1008
            var_100c = &ecx[0x21]
            int32_t esi_2 = sub_4d11d0(&var_1008, &var_100c, &ecx[0x21], var_14_4)
            
            if (esi_2 == 0)
                int32_t eax_12
                eax_12.b = var_1008
                data_108f5ad = eax_12.b
                *arg1 = esi_2
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
    else
        int32_t* var_14_2 = &var_1008
        var_100c = &ecx[0x20]
        int32_t eax_6 = sub_4d11d0(&var_1008, &var_100c, &ecx[0x20], var_14_2)
        
        if (eax_6 == 0)
            data_108f5ac = var_1008
            *arg1 = eax_6
            *edx = var_100c
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return 0
    
    esi_10 = 1
*arg1 = esi_10
*edx = var_100c
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return 0
