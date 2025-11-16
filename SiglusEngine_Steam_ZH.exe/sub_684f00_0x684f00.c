// 函数: sub_684f00
// 地址: 0x684f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7f0a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_25c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_260 = arg1
int32_t* lpFileName_1
sub_532b80(sub_685d60(arg1), data_bac4d8 + 0x30, &lpFileName_1, u"\Flag.ini")
int32_t var_8_1 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_b0

if (var_b0 u>= 8)
    lpFileName = lpFileName_1

uint32_t result = GetFileAttributesW(lpFileName)
int32_t ebx

if (result == 0xffffffff || (result.b & 0x10) != 0)
    ebx.b = 1
else
    int32_t var_1c0 = 0
    int32_t var_1bc_1 = 0
    int32_t var_1b8_1 = 0
    var_8_1.b = 1
    int32_t var_94
    int16_t var_4c
    int32_t var_38
    
    if (sub_6b80e0(&lpFileName_1, &var_1c0) != 0)
        int32_t esi_1 = var_1c0
        ebx = 0
        int32_t var_1b0_1 = 0
        int32_t eax_11 = (var_1bc_1 - esi_1) s/ 0x18
        
        if (eax_11 s> 0)
            while (true)
                int32_t* esi_2 = esi_1 + ebx * 0x18
                sub_6ae600(esi_2)
                void* var_260_7 = 3
                int32_t var_c8_1 = 7
                void* const var_264_2 = &data_aee7a0
                int32_t var_cc_1 = 0
                int16_t var_dc = 0
                sub_52e720(&var_dc, var_264_2, var_260_7)
                int32_t edx_5 = esi_2[5]
                int32_t* ecx_10
                
                if (edx_5 u< 8)
                    ecx_10 = esi_2
                else
                    ecx_10 = *esi_2
                
                void* eax_14 = ecx_10 + (esi_2[4] << 1)
                
                if (edx_5 u>= 8)
                    esi_2 = *esi_2
                
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                int16_t var_2c = 0
                var_8_1.b = 5
                void* var_260_8 = 0xffffffff
                int32_t var_264_3 = 0
                int16_t* var_268_1 = &var_dc
                int32_t* var_34 = esi_2
                sub_52e3c0(&var_2c, var_268_1, var_264_3, var_260_8)
                int32_t var_260_9
                
                if (var_c8_1 u>= 8)
                    var_260_9 = var_dc.d
                    goto label_68510a
                
                int16_t* ecx_116
                
                while (true)
                    int32_t* ebx_1 = var_34
                    void* var_1a8 = eax_14
                    sub_6af750(&var_34)
                    int32_t* eax_16 = var_34
                    void* edi_1 = eax_14
                    void* esi_3
                    
                    if (eax_16 != edi_1)
                        esi_3 = eax_16 + 2
                    
                    if (eax_16 == edi_1 || *eax_16 != 0x23)
                        eax_16 = sub_6af730(&var_34, ebx_1, var_1a8)
                        edi_1 = eax_14
                        esi_3 = var_34
                    else
                        var_34 = esi_3
                        eax_16.b = 1
                    
                    if (eax_16.b == 0)
                        int32_t var_19c_1 = 0
                        int32_t var_1ac = 0
                        var_1a8 = nullptr
                        char var_195_1 = 0
                        char var_1a1_1 = 0
                        int32_t var_1a0_1 = 0x20
                        int32_t var_50_1 = 7
                        int16_t* var_54_1 = nullptr
                        int16_t var_64 = 0
                        int32_t var_68_1 = 7
                        int32_t var_6c_1 = 0
                        int16_t var_7c = 0
                        var_8_1.b = 0xb
                        char eax_30 = sub_684e00(sub_6af750(&var_34), &var_64, &var_34, eax_14)
                        char eax_31
                        
                        if (eax_30 == 0)
                            eax_31 = sub_6af730(&var_34, esi_3, edi_1)
                        
                        if (eax_30 == 0 && eax_31 == 0)
                        label_685bd0:
                            sub_52e8a0(&var_7c)
                            ecx_116 = &var_64
                            break
                        
                        int16_t* eax_32
                        
                        if (var_54_1 != 0)
                            eax_32 = &var_64
                            
                            if (var_50_1 u>= 8)
                                eax_32 = var_64.d
                        
                        void* esi_15
                        void* edi_13
                        int32_t* var_264_22
                        void* var_260_40
                        
                        if (var_54_1 == 0 || *eax_32 != 0x24)
                            int32_t var_260_41 = 1
                            
                            if (sub_536340(&var_64, var_54_1, var_54_1, U"abcdefglsmk") != 0)
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[1]) != 0)
                                    var_19c_1 = 0x1a
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[2]) != 0)
                                    var_19c_1 = 0x1b
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[3]) != 0)
                                    var_19c_1 = 0x1c
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[4]) != 0)
                                    var_19c_1 = 0x1d
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[5]) != 0)
                                    var_19c_1 = 0x1e
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[6]) != 0)
                                    var_19c_1 = 0x1f
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, 0xaee9a4) != 0)
                                    var_19c_1 = 0x20
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[7]) != 0)
                                    var_19c_1 = 0
                                    var_195_1 = 1
                                    goto label_68571c
                                
                                if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[8]) == 0)
                                    if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[9]) == 0)
                                        if (sub_5ccf10(&var_64, &(*U"abcdefglsmk")[0xa]) == 0)
                                            goto label_685bd0
                                        
                                        var_19c_1 = 1
                                        var_195_1 = 1
                                    else
                                        var_19c_1 = 0x23
                                else
                                    var_19c_1 = 0x22
                            else
                                var_19c_1 = 0x19
                            label_68571c:
                                int32_t* esi_12 = var_34
                                sub_6af750(&var_34)
                                int32_t* eax_57 = var_34
                                
                                if (eax_57 == eax_14 || *eax_57 != 0x2e)
                                    if (sub_6af730(&var_34, esi_12, eax_14) != 0)
                                        goto label_68575a
                                else
                                    var_34 = eax_57 + 2
                                label_68575a:
                                    sub_52e820(&var_4c, u"bit16")
                                    int32_t* esi_13 = var_34
                                    int32_t eax_59
                                    int32_t ecx_76
                                    eax_59, ecx_76 = sub_6af750(&var_34)
                                    int32_t var_260_44 = ecx_76
                                    
                                    if (sub_6af310(eax_59, &var_4c, &var_34, eax_14) != 0)
                                        ebx_1.b = 1
                                    else
                                        ebx_1.b = sub_6af730(&var_34, esi_13, eax_14)
                                    
                                    if (var_38 u>= 8)
                                        j__free(var_4c.d)
                                    
                                    if (ebx_1.b == 0)
                                        sub_52e820(&var_4c, u"bit8")
                                        ebx_1.b = sub_6af840(&var_34, &var_4c)
                                        
                                        if (var_38 u>= 8)
                                            j__free(var_4c.d)
                                        
                                        if (ebx_1.b == 0)
                                            sub_52e820(&var_94, u"bit4")
                                            ebx_1.b = sub_6af840(&var_34, &var_94)
                                            sub_52e8a0(&var_94)
                                            
                                            if (ebx_1.b == 0)
                                                sub_52e820(&var_94, u"bit2")
                                                ebx_1.b = sub_6af840(&var_34, &var_94)
                                                sub_52e8a0(&var_94)
                                                
                                                if (ebx_1.b == 0)
                                                    sub_52e820(&var_94, &data_afa1dc)
                                                    ebx_1.b = sub_6af840(&var_34, &var_94)
                                                    sub_52e8a0(&var_94)
                                                    
                                                    if (ebx_1.b == 0)
                                                        goto label_685bd0
                                                    
                                                    var_1a0_1 = 1
                                                else
                                                    var_1a0_1 = 2
                                            else
                                                var_1a0_1 = 4
                                        else
                                            var_1a0_1 = 8
                                    else
                                        var_1a0_1 = 0x10
                            
                            int32_t* esi_14 = var_34
                            sub_6af750(&var_34)
                            int32_t* eax_69 = var_34
                            
                            if (eax_69 == eax_14 || *eax_69 != 0x5b)
                                if (sub_6af730(&var_34, esi_14, eax_14) == 0)
                                    goto label_685bd0
                            else
                                var_34 = eax_69 + 2
                            
                            if (sub_6af8f0(&var_34, &var_1ac) == 0)
                                goto label_685bd0
                            
                            int32_t* ebx_2 = var_34
                            sub_6af750(&var_34)
                            int32_t* eax_73 = var_34
                            edi_13 = eax_14
                            
                            if (eax_73 != edi_13)
                                esi_15 = eax_73 + 2
                            
                            if (eax_73 == edi_13 || *eax_73 != 0x5d)
                                var_260_40 = eax_14
                                var_264_22 = ebx_2
                            label_685997:
                                
                                if (sub_6af730(&var_34, var_264_22, var_260_40) == 0)
                                    goto label_685bd0
                                
                                esi_15 = var_34
                                edi_13 = eax_14
                            else
                                var_34 = esi_15
                        else
                            int32_t* esi_7 = var_34
                            var_1a1_1 = 1
                            sub_6af750(&var_34)
                            int32_t* eax_33 = var_34
                            
                            if (eax_33 == eax_14 || *eax_33 != 0x2e)
                                if (sub_6af730(&var_34, esi_7, eax_14) != 0)
                                    goto label_6853e0
                            else
                                var_34 = eax_33 + 2
                            label_6853e0:
                                void* var_260_25 = 5
                                var_38 = 7
                                wchar16 const* const var_264_15 = u"bit16"
                                int32_t var_3c_4 = 0
                                var_4c = 0
                                sub_52e720(&var_4c, var_264_15, var_260_25)
                                int32_t* esi_8 = var_34
                                int32_t eax_35
                                int32_t ecx_38
                                eax_35, ecx_38 = sub_6af750(&var_34)
                                int32_t var_260_26 = ecx_38
                                
                                if (sub_6af310(eax_35, &var_4c, &var_34, eax_14) != 0)
                                    ebx_1.b = 1
                                else
                                    ebx_1.b = sub_6af730(&var_34, esi_8, eax_14)
                                
                                if (var_38 u>= 8)
                                    j__free(var_4c.d)
                                
                                if (ebx_1.b == 0)
                                    void* var_260_29 = 4
                                    var_38 = 7
                                    wchar16 const* const var_264_18 = u"bit8"
                                    int32_t var_3c_5 = 0
                                    var_4c = 0
                                    sub_52e720(&var_4c, var_264_18, var_260_29)
                                    int32_t* esi_9 = var_34
                                    int32_t eax_38
                                    int32_t ecx_43
                                    eax_38, ecx_43 = sub_6af750(&var_34)
                                    int32_t var_260_30 = ecx_43
                                    
                                    if (sub_6af310(eax_38, &var_4c, &var_34, eax_14) != 0)
                                        ebx_1.b = 1
                                    else
                                        ebx_1.b = sub_6af730(&var_34, esi_9, eax_14)
                                    
                                    sub_52e8a0(&var_4c)
                                    
                                    if (ebx_1.b == 0)
                                        sub_52e820(&var_94, u"bit4")
                                        ebx_1.b = sub_6af840(&var_34, &var_94)
                                        sub_52e8a0(&var_94)
                                        
                                        if (ebx_1.b == 0)
                                            sub_52e820(&var_94, u"bit2")
                                            ebx_1.b = sub_6af840(&var_34, &var_94)
                                            sub_52e8a0(&var_94)
                                            
                                            if (ebx_1.b == 0)
                                                sub_52e820(&var_94, &data_afa1dc)
                                                ebx_1.b = sub_6af840(&var_34, &var_94)
                                                sub_52e8a0(&var_94)
                                                
                                                if (ebx_1.b == 0)
                                                    goto label_685bd0
                                                
                                                var_1a0_1 = 1
                                            else
                                                var_1a0_1 = 2
                                        else
                                            var_1a0_1 = 4
                                    else
                                        var_1a0_1 = 8
                                else
                                    var_1a0_1 = 0x10
                            
                            int32_t* esi_10 = var_34
                            sub_6af750(&var_34)
                            int32_t* eax_44 = var_34
                            
                            if (eax_44 == eax_14 || *eax_44 != 0x5b)
                                if (sub_6af730(&var_34, esi_10, eax_14) != 0)
                                    goto label_6855c3
                                
                                esi_15 = var_34
                                edi_13 = eax_14
                            else
                                var_34 = eax_44 + 2
                            label_6855c3:
                                
                                if (sub_6af8f0(&var_34, &var_1ac) == 0)
                                    goto label_685bd0
                                
                                int32_t* esi_11 = var_34
                                sub_6af750(&var_34)
                                int32_t* eax_47 = var_34
                                
                                if (eax_47 == eax_14 || *eax_47 != 0x5d)
                                    var_260_40 = eax_14
                                    var_264_22 = esi_11
                                    goto label_685997
                                
                                var_34 = eax_47 + 2
                                esi_15 = var_34
                                edi_13 = eax_14
                        sub_6af750(&var_34)
                        int32_t* eax_75 = var_34
                        
                        if (eax_75 == eax_14 || *eax_75 != 0x3a)
                            if (sub_6af730(&var_34, esi_15, edi_13) == 0)
                                goto label_685bd0
                        else
                            var_34 = eax_75 + 2
                        
                        if (sub_6af8f0(&var_34, &var_1a8) == 0)
                            goto label_685bd0
                        
                        int32_t* esi_16 = var_34
                        sub_6af750(&var_34)
                        void* eax_78 = eax_14
                        int32_t* edx_13 = var_34
                        int32_t* ecx_104
                        
                        if (edx_13 != eax_78)
                            ecx_104 = edx_13 + 2
                        
                        if (edx_13 == eax_78 || *edx_13 != 0x3a)
                            if (sub_6af730(&var_34, esi_16, eax_14) == 0)
                                goto label_685bd0
                            
                            ecx_104 = var_34
                            eax_78 = eax_14
                        else
                            var_34 = ecx_104
                        
                        var_38 = 7
                        int32_t var_3c_6 = 0
                        var_4c = 0
                        
                        if (ecx_104 != eax_78)
                            sub_52e720(&var_4c, ecx_104, (eax_78 - ecx_104) s>> 1)
                        
                        var_8_1.b = 0xc
                        sub_52e3c0(&var_7c, &var_4c, 0, 0xffffffff)
                        
                        if (var_38 u>= 8)
                            j__free(var_4c.d)
                        
                        void* ebx_3 = var_1a8
                        
                        if (ebx_3 s>= 0 && ebx_3 s< 0x14)
                            struct _EXCEPTION_REGISTRATION_RECORD* var_194
                            sub_685c60(&var_194)
                            var_8_1.b = 0xd
                            
                            if (var_1a1_1 == 0)
                                int32_t var_24c
                                
                                if (var_195_1 == 0)
                                    var_24c = var_19c_1
                                    int32_t var_1d0_2 = 3
                                    int32_t var_248_2 = 0xffffffff
                                    int32_t var_244_2 = var_1ac
                                else
                                    int32_t var_248_1 = var_19c_1
                                    int32_t eax_84 = var_1ac
                                    int32_t var_1d0_1 = 4
                                    var_24c = 0x53
                                    int32_t var_244_1 = 0xffffffff
                                    int32_t var_240_1 = eax_84
                                
                                __builtin_memcpy(&var_194, &var_24c, 0x80)
                            else
                                void var_fc
                                sub_52e3c0(&var_fc, &var_64, 0, 0xffffffff)
                                int32_t var_e4_1 = var_1ac
                            
                            int32_t var_e0_1 = var_1a0_1
                            void var_114
                            sub_52e3c0(&var_114, &var_7c, 0, 0xffffffff)
                            sub_685ca0(*arg1 + ((ebx_3 * 9 + 6) << 2), &var_194)
                            sub_642c30(&var_194)
                        
                        if (var_68_1 u>= 8)
                            j__free(var_7c.d)
                        
                        int32_t var_68_2 = 7
                        int32_t var_6c_2 = 0
                        var_7c = 0
                        
                        if (var_50_1 u< 8)
                            continue
                        else
                            var_260_9 = var_64.d
                    else
                        int32_t var_98_1 = 7
                        int32_t var_9c_1 = 0
                        int16_t var_ac = 0
                        var_8_1.b = 8
                        void* const var_260_11 = 0xa
                        int32_t* var_264_5 = u"title_flag"
                        var_38 = 7
                        int32_t var_3c_2 = 0
                        var_4c = 0
                        sub_52e720(&var_4c, var_264_5, var_260_11)
                        int32_t* esi_4 = var_34
                        int32_t eax_17
                        int32_t ecx_16
                        eax_17, ecx_16 = sub_6af750(&var_34)
                        int32_t var_260_12 = ecx_16
                        char eax_18
                        
                        if (sub_6af310(eax_17, &var_4c, &var_34, eax_14) != 0)
                            eax_18 = 1
                        else
                            eax_18 = sub_6af730(&var_34, esi_4, eax_14)
                        
                        ebx_1.b = eax_18 == 0
                        
                        if (var_38 u>= 8)
                            j__free(var_4c.d)
                        
                        if (ebx_1.b != 0)
                            ecx_116 = &var_ac
                            break
                        
                        int32_t* esi_5 = var_34
                        int32_t var_1c8
                        char eax_20 = sub_6af380(sub_6af750(&var_34), &var_1c8, &var_34, eax_14)
                        char eax_21
                        
                        if (eax_20 == 0)
                            eax_21 = sub_6af730(&var_34, esi_5, eax_14)
                        
                        if (eax_20 == 0 && eax_21 == 0)
                            ecx_116 = &var_ac
                            break
                        
                        int32_t* esi_6 = var_34
                        sub_6af750(&var_34)
                        int32_t* edx_8 = var_34
                        void* eax_22 = eax_14
                        void* ecx_23
                        
                        if (edx_8 != eax_22)
                            ecx_23 = edx_8 + 2
                        
                        if (edx_8 == eax_22 || *edx_8 != 0x3d)
                            if (sub_6af730(&var_34, esi_6, eax_14) == 0)
                                ecx_116 = &var_ac
                                break
                                break
                            
                            eax_22 = eax_14
                            ecx_23 = var_34
                        else
                            var_34 = ecx_23
                        
                        var_38 = 7
                        int32_t var_3c_3 = 0
                        var_4c = 0
                        
                        if (ecx_23 != eax_22)
                            sub_52e720(&var_4c, ecx_23, (eax_22 - ecx_23) s>> 1)
                        
                        var_8_1.b = 9
                        sub_52e3c0(&var_ac, &var_4c, 0, 0xffffffff)
                        var_8_1.b = 8
                        
                        if (var_38 u>= 8)
                            j__free(var_4c.d)
                        
                        int32_t eax_26 = var_1c8
                        
                        if (eax_26 u<= 0x13)
                            int32_t* ecx_28 = *arg1 + eax_26 * 0x24
                            
                            if (ecx_28 != &var_ac)
                                sub_52e3c0(ecx_28, &var_ac, 0, 0xffffffff)
                        
                        if (var_98_1 u< 8)
                            continue
                        else
                            var_260_9 = var_ac.d
                    
                label_68510a:
                    j__free(var_260_9)
                
                sub_52e8a0(ecx_116)
                var_8_1.b = 1
                
                if (var_18_1 u>= 8)
                    j__free(var_2c.d)
                
                esi_1 = var_1c0
                ebx = var_1b0_1 + 1
                var_1b0_1 = ebx
                
                if (ebx s>= eax_11)
                    break
        
        ebx.b = 1
        sub_55d540(&var_1c0)
    else
        int16_t* eax_6 = sub_6b9ed0(&var_94)
        var_8_1.b = 2
        int16_t* eax_7 = sub_548cb0(eax_6, u"Flag.ini", &var_4c, eax_6)
        var_8_1.b = 3
        sub_684160(data_bac424, 2, eax_7)
        
        if (var_38 u>= 8)
            j__free(var_4c.d)
        
        int32_t var_38_1 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_80
        
        if (var_80 u>= 8)
            j__free(var_94)
        
        ebx.b = 0
        sub_55d540(&var_1c0)

if (var_b0 u>= 8)
    j__free(lpFileName_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
