// 函数: sub_42db95
// 地址: 0x42db95
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi

if (arg1[0x10] != 0 || arg1[0x12] != 0)
    arg1[0x9e] = 0xc
else
    void* eax_1 = arg1[0x19]
    
    if (eax_1 == 0)
        sub_42b68f(arg1[0x9b], arg1[0xa6] | 4, &arg1[0x9e])
    else
        __builtin_memcpy(&arg1[0x9e], eax_1 + 0x10, 0x20)
        arg1[0x19] = *(eax_1 + 0xc)
        *(eax_1 + 0xc) = 0
    
    int32_t eax_13 = arg1[0x9e]
    
    if (eax_13 == 1)
        eax_13.b = *(arg1 + 0x281)
        
        if (eax_13.b == 0)
            return sx.d(arg1[0xa0].b)
        
        if (*(arg1 + 0x282) == 0)
            if (eax_13.b != 0x3d)
                int32_t* ebx
                ebx.b = arg1[0xa0].b
                
                if (ebx.b == eax_13.b)
                    if (ebx.b == 0x26)
                        return 0x114
                    
                    if (ebx.b == 0x7c)
                        return 0x115
            else
                int32_t eax_14 = sx.d(arg1[0xa0].b)
                
                if (eax_14 == 0x21)
                    return 0x113
                
                if (eax_14 == 0x3c)
                    return 0x110
                
                if (eax_14 == 0x3d)
                    return 0x112
                
                if (eax_14 == 0x3e)
                    return 0x111
        
        return 0x119
    
    if (eax_13 s<= 1)
        return 0x119
    
    if (eax_13 s<= 4)
        return 0x117
    
    if (eax_13 == 9)
        if (arg1[0x13] == 0)
            char* eax_8 = arg1[0xa0]
            char const* const edi_20 = "defined"
            char* esi_20 = eax_8
            int32_t i = 8
            bool cond:3_1 = false
            
            while (i != 0)
                char temp5_1 = *esi_20
                char const temp6_1 = *edi_20
                cond:3_1 = temp5_1 != temp6_1
                esi_20 = &esi_20[1]
                edi_20 = &edi_20[1]
                i -= 1
                
                if (temp5_1 != temp6_1)
                    break
            
            if (not(cond:3_1))
                arg1[0x16] = 0
                return 0x10f
            
            int32_t result_1
            char* var_8
            
            if (arg1[0x16] != 0 && sub_42cf1a(arg1, eax_8, &result_1, &var_8) != 0)
                bool cond:9_1 = arg1[0x11] != 0
                void var_2c
                __builtin_memcpy(&var_2c, &arg1[0x9e], 0x20)
                int32_t eax_10
                
                if (not(cond:9_1))
                    eax_10 = sub_42d32d(arg1, &var_2c, result_1, var_8)
                
                int32_t eax_11
                
                if (cond:9_1 || eax_10 == 0)
                    eax_11 = 1
                else
                    eax_11 = 0
                
                arg1[0x11] = eax_11
                int32_t result
                int32_t ecx_14
                
                if (eax_11 != 0)
                    result = result_1
                    ecx_14 = 1
                else
                    result = sub_42db95()
                    
                    ecx_14 = result == 0xffffffff ? 1 : 0
                
                arg1[0x11] = ecx_14
                
                if (ecx_14 == 0)
                    return result
                
                arg1[0x12] = 1
                __builtin_memcpy(&arg1[0x9e], &var_2c, 0x20)
                sub_42aba3(&arg1[6], &arg1[0x9e], 0x5ee, 
                    "invalid or unsupported integer constant expression")
        else
            bool cond:4_1 = arg1[0x14] == 0
            arg1[0x13] = 0
            arg1[0x16] = 0
            char* eax_5 = arg1[0xa0]
            
            if (cond:4_1)
                char ecx_2 = *eax_5
                
                if (ecx_2 == 0x65)
                    char const* const edi_17 = "else"
                    char* esi_17 = eax_5
                    int32_t i_1 = 5
                    bool cond:6_1 = false
                    
                    while (i_1 != 0)
                        char temp9_1 = *esi_17
                        char const temp10_1 = *edi_17
                        cond:6_1 = temp9_1 != temp10_1
                        esi_17 = &esi_17[1]
                        edi_17 = &edi_17[1]
                        i_1 -= 1
                        
                        if (temp9_1 != temp10_1)
                            break
                    
                    if (not(cond:6_1))
                        return 0x10a
                    
                    char const* const edi_18 = "endif"
                    char* esi_18 = eax_5
                    int32_t i_2 = 6
                    bool cond:11_1 = false
                    
                    while (i_2 != 0)
                        char temp22_1 = *esi_18
                        char const temp23_1 = *edi_18
                        cond:11_1 = temp22_1 != temp23_1
                        esi_18 = &esi_18[1]
                        edi_18 = &edi_18[1]
                        i_2 -= 1
                        
                        if (temp22_1 != temp23_1)
                            break
                    
                    if (not(cond:11_1))
                        return 0x10b
                    
                    char* esi_19 = eax_5
                    char const* const edi_19 = "elif"
                    int32_t i_3 = 5
                    bool cond:17_1 = false
                    
                    while (i_3 != 0)
                        char temp36_1 = *esi_19
                        char const temp37_1 = *edi_19
                        cond:17_1 = temp36_1 != temp37_1
                        esi_19 = &esi_19[1]
                        edi_19 = &edi_19[1]
                        i_3 -= 1
                        
                        if (temp36_1 != temp37_1)
                            break
                    
                    if (not(cond:17_1))
                        int32_t* eax_7 = *(arg1[0x9a] + 0x38)
                        
                        if (eax_7 == 0)
                            arg1[0x14] = 1
                            goto label_42de73
                        
                        int32_t ecx_10 = eax_7[1]
                        
                        if (ecx_10 == 0 || *eax_7 != 0)
                            return 0x10d
                        
                        arg1[0x14] = ecx_10
                        arg1[0x16] = 1
                        return 0x109
                else if (ecx_2 == 0x69)
                    void* const edi_14 = &data_ab7e60
                    char* esi_14 = eax_5
                    int32_t i_4 = 3
                    bool cond:13_1 = true
                    
                    while (i_4 != 0)
                        char temp14_1 = *esi_14
                        char temp15_1 = *edi_14
                        cond:13_1 = temp14_1 == temp15_1
                        esi_14 = &esi_14[1]
                        edi_14 += 1
                        i_4 -= 1
                        
                        if (temp14_1 != temp15_1)
                            break
                    
                    if (cond:13_1)
                        return 0x10c
                    
                    char const* const edi_15 = "ifdef"
                    char* esi_15 = eax_5
                    int32_t i_5 = 6
                    bool cond:19_1 = true
                    
                    while (i_5 != 0)
                        char temp26_1 = *esi_15
                        char const temp27_1 = *edi_15
                        cond:19_1 = temp26_1 == temp27_1
                        esi_15 = &esi_15[1]
                        edi_15 = &edi_15[1]
                        i_5 -= 1
                        
                        if (temp26_1 != temp27_1)
                            break
                    
                    if (cond:19_1)
                        return 0x10c
                    
                    char* esi_16 = eax_5
                    char const* const edi_16 = "ifndef"
                    int32_t i_6 = 7
                    bool cond:25_1 = false
                    
                    while (i_6 != 0)
                        char temp38_1 = *esi_16
                        char const temp39_1 = *edi_16
                        cond:25_1 = temp38_1 != temp39_1
                        esi_16 = &esi_16[1]
                        edi_16 = &edi_16[1]
                        i_6 -= 1
                        
                        if (temp38_1 != temp39_1)
                            break
                    
                    if (not(cond:25_1))
                        return 0x10c
            else
                switch (sx.d(*eax_5))
                    case 0x64
                        char* esi_13 = eax_5
                        char const* const edi_13 = "define"
                        int32_t i_7 = 7
                        bool cond:8_1 = false
                        
                        while (i_7 != 0)
                            char temp11_1 = *esi_13
                            char const temp12_1 = *edi_13
                            cond:8_1 = temp11_1 != temp12_1
                            esi_13 = &esi_13[1]
                            edi_13 = &edi_13[1]
                            i_7 -= 1
                            
                            if (temp11_1 != temp12_1)
                                break
                        
                        if (not(cond:8_1))
                            return 0x101
                    case 0x65
                        char const* const edi_9 = "elif"
                        char* esi_9 = eax_5
                        int32_t i_8 = 5
                        bool cond:15_1 = true
                        
                        while (i_8 != 0)
                            char temp16_1 = *esi_9
                            char const temp17_1 = *edi_9
                            cond:15_1 = temp16_1 == temp17_1
                            esi_9 = &esi_9[1]
                            edi_9 = &edi_9[1]
                            i_8 -= 1
                            
                            if (temp16_1 != temp17_1)
                                break
                        
                        if (cond:15_1)
                        label_42de73:
                            arg1[0x16] = 1
                            return 0x109
                        
                        char const* const edi_10 = "else"
                        char* esi_10 = eax_5
                        int32_t i_9 = 5
                        bool cond:21_1 = true
                        
                        while (i_9 != 0)
                            char temp28_1 = *esi_10
                            char const temp29_1 = *edi_10
                            cond:21_1 = temp28_1 == temp29_1
                            esi_10 = &esi_10[1]
                            edi_10 = &edi_10[1]
                            i_9 -= 1
                            
                            if (temp28_1 != temp29_1)
                                break
                        
                        if (cond:21_1)
                            return 0x10a
                        
                        char const* const edi_11 = "endif"
                        char* esi_11 = eax_5
                        int32_t i_10 = 6
                        bool cond:27_1 = true
                        
                        while (i_10 != 0)
                            char temp40_1 = *esi_11
                            char const temp41_1 = *edi_11
                            cond:27_1 = temp40_1 == temp41_1
                            esi_11 = &esi_11[1]
                            edi_11 = &edi_11[1]
                            i_10 -= 1
                            
                            if (temp40_1 != temp41_1)
                                break
                        
                        if (cond:27_1)
                            return 0x10b
                        
                        char* esi_12 = eax_5
                        char const* const edi_12 = "error"
                        int32_t i_11 = 6
                        bool cond:34_1 = false
                        
                        while (i_11 != 0)
                            char temp44_1 = *esi_12
                            char const temp45_1 = *edi_12
                            cond:34_1 = temp44_1 != temp45_1
                            esi_12 = &esi_12[1]
                            edi_12 = &edi_12[1]
                            i_11 -= 1
                            
                            if (temp44_1 != temp45_1)
                                break
                        
                        if (not(cond:34_1))
                            return 0x105
                    case 0x69
                        void* const edi_5 = &data_ab7e60
                        char* esi_5 = eax_5
                        int32_t i_12 = 3
                        bool cond:23_1 = false
                        
                        while (i_12 != 0)
                            char temp19_1 = *esi_5
                            char temp20_1 = *edi_5
                            cond:23_1 = temp19_1 != temp20_1
                            esi_5 = &esi_5[1]
                            edi_5 += 1
                            i_12 -= 1
                            
                            if (temp19_1 != temp20_1)
                                break
                        
                        if (not(cond:23_1))
                            arg1[0x16] = 1
                            return 0x106
                        
                        char const* const edi_6 = "ifdef"
                        char* esi_6 = eax_5
                        int32_t i_13 = 6
                        bool cond:29_1 = false
                        
                        while (i_13 != 0)
                            char temp32_1 = *esi_6
                            char const temp33_1 = *edi_6
                            cond:29_1 = temp32_1 != temp33_1
                            esi_6 = &esi_6[1]
                            edi_6 = &edi_6[1]
                            i_13 -= 1
                            
                            if (temp32_1 != temp33_1)
                                break
                        
                        if (not(cond:29_1))
                            return 0x107
                        
                        char const* const edi_7 = "ifndef"
                        char* esi_7 = eax_5
                        int32_t i_14 = 7
                        bool cond:36_1 = false
                        
                        while (i_14 != 0)
                            char temp42_1 = *esi_7
                            char const temp43_1 = *edi_7
                            cond:36_1 = temp42_1 != temp43_1
                            esi_7 = &esi_7[1]
                            edi_7 = &edi_7[1]
                            i_14 -= 1
                            
                            if (temp42_1 != temp43_1)
                                break
                        
                        if (not(cond:36_1))
                            return 0x108
                        
                        char* esi_8 = eax_5
                        char const* const edi_8 = "include"
                        int32_t i_15 = 8
                        bool cond:41_1 = false
                        
                        while (i_15 != 0)
                            char temp46_1 = *esi_8
                            char const temp47_1 = *edi_8
                            cond:41_1 = temp46_1 != temp47_1
                            esi_8 = &esi_8[1]
                            edi_8 = &edi_8[1]
                            i_15 -= 1
                            
                            if (temp46_1 != temp47_1)
                                break
                        
                        if (not(cond:41_1))
                            return 0x104
                    case 0x6c
                        char* esi_4 = eax_5
                        char const* const edi_4 = "line"
                        int32_t i_16 = 5
                        bool cond:31_1 = false
                        
                        while (i_16 != 0)
                            char temp24_1 = *esi_4
                            char const temp25_1 = *edi_4
                            cond:31_1 = temp24_1 != temp25_1
                            esi_4 = &esi_4[1]
                            edi_4 = &edi_4[1]
                            i_16 -= 1
                            
                            if (temp24_1 != temp25_1)
                                break
                        
                        if (not(cond:31_1))
                            return 0x103
                    case 0x70
                        char* esi_3 = eax_5
                        char const* const edi_3 = "pragma"
                        int32_t i_17 = 7
                        bool cond:38_1 = false
                        
                        while (i_17 != 0)
                            char temp30_1 = *esi_3
                            char const temp31_1 = *edi_3
                            cond:38_1 = temp30_1 != temp31_1
                            esi_3 = &esi_3[1]
                            edi_3 = &edi_3[1]
                            i_17 -= 1
                            
                            if (temp30_1 != temp31_1)
                                break
                        
                        if (not(cond:38_1))
                            return 0x10e
                    case 0x75
                        char* esi_2 = eax_5
                        char const* const edi_2 = "undef"
                        int32_t i_18 = 6
                        bool cond:43_1 = false
                        
                        while (i_18 != 0)
                            char temp34_1 = *esi_2
                            char const temp35_1 = *edi_2
                            cond:43_1 = temp34_1 != temp35_1
                            esi_2 = &esi_2[1]
                            edi_2 = &edi_2[1]
                            i_18 -= 1
                            
                            if (temp34_1 != temp35_1)
                                break
                        
                        if (not(cond:43_1))
                            return 0x102
            
            arg1[0x13] = 1
        
        return 0x116
    
    if (eax_13 == 0xa)
        return 0x118
    
    if (eax_13 != 0xc && eax_13 != 0xd)
        return 0x119
    
    arg1[0x10] = 1

return 0xffffffff
