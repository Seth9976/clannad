// 函数: sub_43d710
// 地址: 0x43d710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** edx
ecx, edx = __chkstk(0x1018)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = 0xf
char* var_100c = ecx
int32_t eax_3 = sub_4d0fe0(arg1.b, "SYSBTN_PAT_MOD=", ecx, var_14)
int32_t entry_ebx
int32_t* var_1008

if (eax_3 != 0)
    int32_t eax_10 = sub_4d0fe0(eax_3.b, "SYSBTN_PAT_NO=", ecx, 0xe)
    
    if (eax_10 != 0)
        int32_t eax_17 = sub_4d0fe0(eax_10.b, "SYSBTN_HIDE_USE=", ecx, 0x10)
        
        if (eax_17 != 0)
            int32_t eax_24
            int32_t ecx_16
            eax_24, ecx_16 = sub_4d0fe0(eax_17.b, "SYSBTN_HIDE_STR="", ecx, 0x11)
            char** edx_4 = &var_100c
            
            if (eax_24 != 0)
                if (sub_434540(eax_24.b, edx_4, ecx, "#SYSBTN.") != 0)
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 1
                
                int32_t var_1010
                int32_t eax_32 = sub_4d11d0(&var_1010, &var_100c, var_100c, &var_1010)
                
                if (eax_32 == 0)
                    int32_t edi_5 = var_1010
                    
                    if (edi_5 u<= 7)
                        int32_t eax_33 = sub_434540(eax_32.b, &var_100c, var_100c, ".")
                        
                        if (eax_33 == 0)
                            int32_t eax_34
                            int32_t ecx_25
                            eax_34, ecx_25 = sub_434540(eax_33.b, &var_100c, var_100c, "NAME="")
                            char** edx_9 = &var_100c
                            
                            if (eax_34 != 0)
                                int32_t eax_40
                                int32_t ecx_32
                                eax_40, ecx_32 = sub_434540(eax_34.b, edx_9, var_100c, "BTN="")
                                char** edx_11 = &var_100c
                                
                                if (eax_40 != 0)
                                    int32_t eax_46 = sub_434540(eax_40.b, edx_11, var_100c, "POS=")
                                    char* ecx_39 = var_100c
                                    char** edx_13 = &var_100c
                                    int32_t var_1014
                                    int32_t var_1004
                                    
                                    if (eax_46 != 0)
                                        int32_t eax_58
                                        int32_t* ecx_46
                                        eax_58, ecx_46 =
                                            sub_434540(eax_46.b, edx_13, ecx_39, "HIDE_PARAM=")
                                        char** edx_16 = &var_100c
                                        
                                        if (eax_58 != 0)
                                            int32_t eax_67
                                            int32_t ecx_52
                                            eax_67, ecx_52 =
                                                sub_434540(eax_58.b, edx_16, var_100c, "MOVE_BTN="")
                                            char** edx_17 = &var_100c
                                            
                                            if (eax_67 != 0)
                                                int32_t eax_73
                                                int32_t ecx_59
                                                eax_73, ecx_59 = sub_434540(eax_67.b, edx_17, 
                                                    var_100c, "CLEAR_BTN="")
                                                char** edx_19 = &var_100c
                                                
                                                if (eax_73 != 0)
                                                    int32_t eax_79
                                                    int32_t ecx_66
                                                    eax_79, ecx_66 = sub_434540(eax_73.b, edx_19, 
                                                        var_100c, "READJUMP_OFF_BTN="")
                                                    char** edx_21 = &var_100c
                                                    
                                                    if (eax_79 != 0)
                                                        int32_t eax_85
                                                        int32_t ecx_73
                                                        eax_85, ecx_73 = sub_434540(eax_79.b, 
                                                            edx_21, var_100c, "READJUMP_ON_BTN="")
                                                        char** edx_23 = &var_100c
                                                        
                                                        if (eax_85 != 0)
                                                            int32_t eax_91
                                                            int32_t ecx_80
                                                            eax_91, ecx_80 = sub_434540(eax_85.b, 
                                                                edx_23, var_100c, "AUTOMODE_OFF_BTN="")
                                                            char** edx_25 = &var_100c
                                                            
                                                            if (eax_91 != 0)
                                                                int32_t eax_97
                                                                int32_t ecx_87
                                                                eax_97, ecx_87 = sub_434540(eax_91.b, 
                                                                    edx_25, var_100c, "AUTOMODE_ON_BTN="")
                                                                char** edx_27 = &var_100c
                                                                
                                                                if (eax_97 != 0)
                                                                    int32_t eax_103
                                                                    int32_t ecx_94
                                                                    eax_103, ecx_94 = sub_434540(eax_97.b, 
                                                                        edx_27, var_100c, "KOEPLAY_BTN="")
                                                                    char** edx_29 = &var_100c
                                                                    
                                                                    if (eax_103 != 0)
                                                                        int32_t eax_109
                                                                        int32_t ecx_101
                                                                        eax_109, ecx_101 = sub_434540(
                                                                            eax_103.b, edx_29, var_100c, 
                                                                            "MSGBK_BTN="")
                                                                        char** edx_31 = &var_100c
                                                                        
                                                                        if (eax_109 != 0)
                                                                            int32_t eax_115
                                                                            int32_t ecx_108
                                                                            eax_115, ecx_108 = sub_434540(
                                                                                eax_109.b, edx_31, var_100c, 
                                                                                "MSGBKLEFT_BTN="")
                                                                            char** edx_33 = &var_100c
                                                                            
                                                                            if (eax_115 != 0)
                                                                                int32_t eax_121
                                                                                int32_t ecx_115
                                                                                eax_121, ecx_115 = sub_434540(
                                                                                    eax_115.b, edx_33, var_100c, 
                                                                                    "MSGBKRIGHT_BTN="")
                                                                                void** edx_35 = &var_100c
                                                                                
                                                                                if (eax_121 != 0)
                                                                                    int32_t eax_127 = sub_434540(eax_121.b, 
                                                                                        edx_35, var_100c, "MOVE_BOX=")
                                                                                    
                                                                                    if (eax_127 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129aaf0, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_133 = sub_434540(eax_127.b, 
                                                                                        &var_100c, var_100c, "CLEAR_BOX=")
                                                                                    
                                                                                    if (eax_133 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ab04, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_139 = sub_434540(eax_133.b, 
                                                                                        &var_100c, var_100c, "READJUMP_BOX=")
                                                                                    
                                                                                    if (eax_139 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129abf4, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_145 = sub_434540(eax_139.b, 
                                                                                        &var_100c, var_100c, "AUTOMODE_BOX=")
                                                                                    
                                                                                    if (eax_145 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ac08, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_151 = sub_434540(eax_145.b, 
                                                                                        &var_100c, var_100c, "KOEPLAY_BOX=")
                                                                                    
                                                                                    if (eax_151 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ac1c, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_157 = sub_434540(eax_151.b, 
                                                                                        &var_100c, var_100c, "MSGBK_BOX=")
                                                                                    
                                                                                    if (eax_157 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ab18, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_163 = sub_434540(eax_157.b, 
                                                                                        &var_100c, var_100c, "MSGBKLEFT_BOX=")
                                                                                    
                                                                                    if (eax_163 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ab2c, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_169 = sub_434540(eax_163.b, 
                                                                                        &var_100c, var_100c, "MSGBKRIGHT_BOX=")
                                                                                    
                                                                                    if (eax_169 == 0)
                                                                                        *arg1 = sub_436cd0(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ab40, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_175 = sub_434540(eax_169.b, 
                                                                                        &var_100c, var_100c, "MOVE_POS=")
                                                                                    
                                                                                    if (eax_175 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ad70, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_181 = sub_434540(eax_175.b, 
                                                                                        &var_100c, var_100c, "CLEAR_POS=")
                                                                                    
                                                                                    if (eax_181 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ad84, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_187 = sub_434540(eax_181.b, 
                                                                                        &var_100c, var_100c, "READJUMP_POS=")
                                                                                    
                                                                                    if (eax_187 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ae74, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_193 = sub_434540(eax_187.b, 
                                                                                        &var_100c, var_100c, "AUTOMODE_POS=")
                                                                                    
                                                                                    if (eax_193 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ae88, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_199 = sub_434540(eax_193.b, 
                                                                                        &var_100c, var_100c, "KOEPLAY_POS=")
                                                                                    
                                                                                    if (eax_199 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ae9c, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_205 = sub_434540(eax_199.b, 
                                                                                        &var_100c, var_100c, "MSGBK_POS=")
                                                                                    
                                                                                    if (eax_205 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129ad98, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_211 = sub_434540(eax_205.b, 
                                                                                        &var_100c, var_100c, "MSGBKLEFT_POS=")
                                                                                    
                                                                                    if (eax_211 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129adac, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_217 = sub_434540(eax_211.b, 
                                                                                        &var_100c, var_100c, "MSGBKRIGHT_POS=")
                                                                                    
                                                                                    if (eax_217 == 0)
                                                                                        *arg1 = sub_436d90(&var_100c, var_100c, 
                                                                                            edi_5 * 0xfcc + 0x129adc0, &var_100c)
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    if (sub_434540(eax_217.b, &var_100c, 
                                                                                            var_100c, "EXBTN_") == 0)
                                                                                        int32_t eax_225 = sub_4d11d0(&var_1014, 
                                                                                            &var_100c, var_100c, &var_1014)
                                                                                        
                                                                                        if (eax_225 == 0)
                                                                                            int32_t ebx_34 = var_1014
                                                                                            
                                                                                            if (ebx_34 u<= 7)
                                                                                                int32_t eax_226 = sub_434540(eax_225.b, 
                                                                                                    &var_100c, var_100c, "_BTN.")
                                                                                                char* ecx_204 = var_100c
                                                                                                char** edx_71 = &var_100c
                                                                                                
                                                                                                if (eax_226 != 0)
                                                                                                    int32_t eax_237 = sub_434540(eax_226.b, 
                                                                                                        edx_71, ecx_204, "_BOX=")
                                                                                                    
                                                                                                    if (eax_237 == 0)
                                                                                                        int32_t eax_239 = (ebx_34 + 0xa) * 5
                                                                                                        *arg1 = sub_436cd0(eax_239, var_100c, 
                                                                                                            &(edi_5 * 0xfcc + 0x129aa8c)[eax_239
                                                                                                                << 2], 
                                                                                                            &var_100c)
                                                                                                        *edx = var_100c
                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                        return 0
                                                                                                    
                                                                                                    if (sub_434540(eax_237.b, &var_100c, 
                                                                                                            var_100c, "_POS=") == 0)
                                                                                                        int32_t eax_246 = (ebx_34 + 0x2a) * 5
                                                                                                        *arg1 = sub_436d90(eax_246, var_100c, 
                                                                                                            &(edi_5 * 0xfcc + 0x129aa8c)[eax_246
                                                                                                                << 2], 
                                                                                                            &var_100c)
                                                                                                        *edx = var_100c
                                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                        return 0
                                                                                                else
                                                                                                    int32_t eax_228 = sub_4d11d0(&var_1010, 
                                                                                                        edx_71, ecx_204, &var_1010)
                                                                                                    
                                                                                                    if (eax_228 == 0 && var_1010 u<= 7)
                                                                                                        int32_t eax_229
                                                                                                        int32_t ecx_206
                                                                                                        eax_229, ecx_206 = sub_434540(
                                                                                                            eax_228.b, &var_100c, var_100c, "="")
                                                                                                        
                                                                                                        if (eax_229 == 0)
                                                                                                            int32_t var_14_91 = ecx_206
                                                                                                            
                                                                                                            if (sub_4d1140(&var_1008, &var_100c, 
                                                                                                                    var_100c, &var_1008, 0x1000) == 0)
                                                                                                                int32_t eax_233 =
                                                                                                                    var_1010 + (ebx_34 << 3)
                                                                                                                sub_4cfdf0(eax_233, &var_1008, 
                                                                                                                    &(edi_5 * 0xfcc + 0x129aa8c)[(
                                                                                                                        eax_233 * 9 + 0x1b3) << 2], 
                                                                                                                    0x24)
                                                                                                                *arg1 = eax_228
                                                                                                                *edx = var_100c
                                                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                                                return 0
                                                                                else
                                                                                    int32_t var_14_52 = ecx_115
                                                                                    void* eax_123 = sub_4d1140(&var_1008, 
                                                                                        edx_35, var_100c, &var_1008, 0x1000)
                                                                                    
                                                                                    if (eax_123 == 0)
                                                                                        sub_4cfdf0(eax_123, &var_1008, 
                                                                                            edi_5 * 0xfcc + 0x129b080, 0x24)
                                                                                        *arg1 = eax_32
                                                                                        *edx = var_100c
                                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                        return 0
                                                                            else
                                                                                int32_t var_14_49 = ecx_108
                                                                                void* eax_117 = sub_4d1140(&var_1008, 
                                                                                    edx_33, var_100c, &var_1008, 0x1000)
                                                                                
                                                                                if (eax_117 == 0)
                                                                                    sub_4cfdf0(eax_117, &var_1008, 
                                                                                        edi_5 * 0xfcc + 0x129b05c, 0x24)
                                                                                    *arg1 = eax_32
                                                                                    *edx = var_100c
                                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                    return 0
                                                                        else
                                                                            int32_t var_14_46 = ecx_101
                                                                            void* eax_111 = sub_4d1140(&var_1008, 
                                                                                edx_31, var_100c, &var_1008, 0x1000)
                                                                            
                                                                            if (eax_111 == 0)
                                                                                sub_4cfdf0(eax_111, &var_1008, 
                                                                                    edi_5 * 0xfcc + 0x129b038, 0x24)
                                                                                *arg1 = eax_32
                                                                                *edx = var_100c
                                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                                return 0
                                                                    else
                                                                        int32_t var_14_43 = ecx_94
                                                                        void* eax_105 = sub_4d1140(&var_1008, 
                                                                            edx_29, var_100c, &var_1008, 0x1000)
                                                                        
                                                                        if (eax_105 == 0)
                                                                            sub_4cfdf0(eax_105, &var_1008, 
                                                                                edi_5 * 0xfcc + 0x129b134, 0x24)
                                                                            *arg1 = eax_32
                                                                            *edx = var_100c
                                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                            return 0
                                                                else
                                                                    int32_t var_14_40 = ecx_87
                                                                    void* eax_99 = sub_4d1140(&var_1008, 
                                                                        edx_27, var_100c, &var_1008, 0x1000)
                                                                    
                                                                    if (eax_99 == 0)
                                                                        sub_4cfdf0(eax_99, &var_1008, 
                                                                            edi_5 * 0xfcc + 0x129b110, 0x24)
                                                                        *arg1 = eax_32
                                                                        *edx = var_100c
                                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                        return 0
                                                            else
                                                                int32_t var_14_37 = ecx_80
                                                                void* eax_93 = sub_4d1140(&var_1008, 
                                                                    edx_25, var_100c, &var_1008, 0x1000)
                                                                
                                                                if (eax_93 == 0)
                                                                    sub_4cfdf0(eax_93, &var_1008, 
                                                                        edi_5 * 0xfcc + 0x129b0ec, 0x24)
                                                                    *arg1 = eax_32
                                                                    *edx = var_100c
                                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                    return 0
                                                        else
                                                            int32_t var_14_34 = ecx_73
                                                            void* eax_87 = sub_4d1140(&var_1008, 
                                                                edx_23, var_100c, &var_1008, 0x1000)
                                                            
                                                            if (eax_87 == 0)
                                                                sub_4cfdf0(eax_87, &var_1008, 
                                                                    edi_5 * 0xfcc + 0x129b0c8, 0x24)
                                                                *arg1 = eax_32
                                                                *edx = var_100c
                                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                                return 0
                                                    else
                                                        int32_t var_14_31 = ecx_66
                                                        void* eax_81 = sub_4d1140(&var_1008, 
                                                            edx_21, var_100c, &var_1008, 0x1000)
                                                        
                                                        if (eax_81 == 0)
                                                            sub_4cfdf0(eax_81, &var_1008, 
                                                                edi_5 * 0xfcc + 0x129b0a4, 0x24)
                                                            *arg1 = eax_32
                                                            *edx = var_100c
                                                            sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                            return 0
                                                else
                                                    int32_t var_14_28 = ecx_59
                                                    void* eax_75 = sub_4d1140(&var_1008, edx_19, 
                                                        var_100c, &var_1008, 0x1000)
                                                    
                                                    if (eax_75 == 0)
                                                        sub_4cfdf0(eax_75, &var_1008, 
                                                            edi_5 * 0xfcc + 0x129b014, 0x24)
                                                        *arg1 = eax_32
                                                        *edx = var_100c
                                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                        return 0
                                            else
                                                int32_t var_14_25 = ecx_52
                                                void* eax_69 = sub_4d1140(&var_1008, edx_17, 
                                                    var_100c, &var_1008, 0x1000)
                                                
                                                if (eax_69 == 0)
                                                    sub_4cfdf0(eax_69, &var_1008, 
                                                        edi_5 * 0xfcc + 0x129aff0, 0x24)
                                                    *arg1 = eax_32
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                        else
                                            int32_t* var_14_23 = &var_1014
                                            
                                            if (sub_4d1280(&var_1008, edx_16, var_100c, &var_1008, 
                                                    ecx_46) == 0)
                                                *(edi_5 * 0xfcc + 0x129aae0) = var_1008
                                                *(edi_5 * 0xfcc + 0x129aae4) = var_1004
                                                int32_t var_1000
                                                *(edi_5 * 0xfcc + 0x129aae8) = var_1000
                                                char var_ffc
                                                int32_t eax_63
                                                eax_63.b = var_ffc
                                                *(edi_5 * 0xfcc + 0x129aaec) = eax_63.b
                                                *arg1 = eax_32
                                                *edx = var_100c
                                                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                return 0
                                    else
                                        int32_t eax_48 =
                                            sub_4d11d0(&var_1010, edx_13, ecx_39, &var_1010)
                                        
                                        if (eax_48 == 0)
                                            int32_t eax_49
                                            int32_t* ecx_41
                                            eax_49, ecx_41 =
                                                sub_434540(eax_48.b, &var_100c, var_100c, ":")
                                            
                                            if (eax_49 == 0)
                                                int32_t* var_14_21 = &var_1014
                                                void* eax_51 = sub_4d1280(&var_1008, &var_100c, 
                                                    var_100c, &var_1008, ecx_41)
                                                
                                                if (eax_51 == 0)
                                                    *(edi_5 * 0xfcc + 0x129aad4) = var_1010
                                                    *(edi_5 * 0xfcc + 0x129aad8) = var_1008
                                                    *(edi_5 * 0xfcc + 0x129aadc) = var_1004
                                                    *arg1 = eax_51
                                                    *edx = var_100c
                                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                                    return 0
                                else
                                    int32_t var_14_16 = ecx_32
                                    void* eax_42 =
                                        sub_4d1140(&var_1008, edx_11, var_100c, &var_1008, 0x1000)
                                    
                                    if (eax_42 == 0)
                                        sub_4cfdf0(eax_42, &var_1008, edi_5 * 0xfcc + 0x129aab0, 
                                            0x24)
                                        *arg1 = eax_32
                                        *edx = var_100c
                                        sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                        return 0
                            else
                                int32_t var_14_13 = ecx_25
                                void* eax_36 =
                                    sub_4d1140(&var_1008, edx_9, var_100c, &var_1008, 0x1000)
                                
                                if (eax_36 == 0)
                                    sub_4cfdf0(eax_36, &var_1008, edi_5 * 0xfcc + 0x129aa8c, 0x24)
                                    *arg1 = eax_32
                                    *edx = var_100c
                                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                                    return 0
            else
                int32_t var_14_7 = ecx_16
                int32_t var_18_1 = 0x1000
                char* var_1c_1 = &var_1008
                var_100c = &ecx[0x11]
                void* eax_26 = sub_4d1140(&var_1008, edx_4, &ecx[0x11], var_1c_1, var_18_1)
                
                if (eax_26 == 0)
                    sub_4cfdf0(eax_26, &var_1008, &data_129a98c, 0xff)
                    *arg1 = 0
                    *edx = var_100c
                    sub_5f02dd(entry_ebx ^ &__saved_ebp)
                    return 0
        else
            int32_t* var_14_5 = &var_1008
            var_100c = &ecx[0x10]
            
            if (sub_4d11d0(&var_1008, &var_100c, &ecx[0x10], var_14_5) == 0)
                data_129a988 = var_1008
                *arg1 = 0
                *edx = var_100c
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return 0
    else
        int32_t* var_14_3 = &var_1008
        var_100c = &ecx[0xe]
        
        if (sub_4d11d0(&var_1008, &var_100c, &ecx[0xe], var_14_3) == 0)
            data_129a984 = var_1008
            *arg1 = 0
            *edx = var_100c
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return 0
else
    int32_t* var_14_1 = &var_1008
    var_100c = &ecx[0xf]
    
    if (sub_4d11d0(&var_1008, &var_100c, &ecx[0xf], var_14_1) == 0)
        data_129a980 = var_1008
        *arg1 = 0
        *edx = var_100c
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0
*arg1 = 1
*edx = var_100c
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return 0
