// 函数: sub_43d525
// 地址: 0x43d525
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_18 = edi

while (true)
    if (sub_42eebc(*(arg1 + 4), arg1 + 0x20) s>= 0)
        int32_t eax_3 = *(arg1 + 0x20)
        
        if (eax_3 u> 0xd)
            continue
        else
            switch (eax_3)
                case 0
                    break
                case 1
                    char ecx_1 = *(arg1 + 0x29)
                    
                    if (ecx_1 == 0)
                        return sx.d(*(arg1 + 0x28))
                    
                    if (*(arg1 + 0x2a) == 0)
                        if (ecx_1 != 0x3d)
                            eax_3.b = *(arg1 + 0x28)
                            
                            if (eax_3.b == ecx_1)
                                int32_t eax_13 = sx.d(eax_3.b)
                                
                                if (eax_13 == 0x26)
                                    return 0x140
                                
                                if (eax_13 == 0x2b)
                                    return 0x13a
                                
                                if (eax_13 == 0x2d)
                                    return 0x13b
                                
                                if (eax_13 == 0x7c)
                                    return 0x141
                        else
                            switch (sx.d(*(arg1 + 0x28)))
                                case 0x21
                                    return 0x13f
                                case 0x25
                                    return 0x144
                                case 0x2a
                                    return 0x142
                                case 0x2b
                                    return 0x145
                                case 0x2d
                                    return 0x146
                                case 0x2f
                                    return 0x143
                                case 0x3c
                                    return 0x13c
                                case 0x3d
                                    return 0x13e
                                case 0x3e
                                    return 0x13d
                    
                    break
                case 2
                    return 0x147
                case 3
                    return 0x148
                case 4
                    return 0x149
                case 5
                    return 0x14a
                case 6
                    return 0x14b
                case 7
                    return 0x14c
                case 8
                    return 0x14d
                case 9
                    char* eax_19 = *(arg1 + 0x28)
                    int32_t ecx_2 = sx.d(*eax_19)
                    
                    if (ecx_2 - 0x61 u<= 0x16)
                        int32_t i_83
                        char const* const edi_5
                        
                        switch (ecx_2)
                            case 0x61
                                char const* const edi_2 = "auto"
                                char* esi_1 = eax_19
                                int32_t i = 5
                                bool cond:3_1 = true
                                
                                while (i != 0)
                                    char temp3_1 = *esi_1
                                    char const temp4_1 = *edi_2
                                    cond:3_1 = temp3_1 == temp4_1
                                    esi_1 = &esi_1[1]
                                    edi_2 = &edi_2[1]
                                    i -= 1
                                    
                                    if (temp3_1 != temp4_1)
                                        break
                                
                                if (not(cond:3_1))
                                    char* esi_2 = eax_19
                                    char const* const edi_3 = "asm_fragment"
                                    int32_t i_1 = 0xd
                                    bool cond:40_1 = false
                                    
                                    while (i_1 != 0)
                                        char temp50_1 = *esi_2
                                        char const temp51_1 = *edi_3
                                        cond:40_1 = temp50_1 != temp51_1
                                        esi_2 = &esi_2[1]
                                        edi_3 = &edi_3[1]
                                        i_1 -= 1
                                        
                                        if (temp50_1 != temp51_1)
                                            break
                                    
                                    if (not(cond:40_1))
                                        return 0x102
                                    
                                    goto label_43d87c
                            case 0x62
                                char const* const edi_4 = "bool"
                                char* esi_3 = eax_19
                                int32_t i_2 = 5
                                bool cond:5_1 = false
                                
                                while (i_2 != 0)
                                    char temp5_1 = *esi_3
                                    char const temp6_1 = *edi_4
                                    cond:5_1 = temp5_1 != temp6_1
                                    esi_3 = &esi_3[1]
                                    edi_4 = &edi_4[1]
                                    i_2 -= 1
                                    
                                    if (temp5_1 != temp6_1)
                                        break
                                
                                if (not(cond:5_1))
                                    return 0x103
                                
                                edi_5 = "break"
                                goto label_43d701
                            case 0x63
                                char const* const edi_6 = "case"
                                char* esi_5 = eax_19
                                int32_t i_3 = 5
                                bool cond:7_1 = true
                                
                                while (i_3 != 0)
                                    char temp7_1 = *esi_5
                                    char const temp8_1 = *edi_6
                                    cond:7_1 = temp7_1 == temp8_1
                                    esi_5 = &esi_5[1]
                                    edi_6 = &edi_6[1]
                                    i_3 -= 1
                                    
                                    if (temp7_1 != temp8_1)
                                        break
                                
                                if (not(cond:7_1))
                                    char const* const edi_7 = "catch"
                                    char* esi_6 = eax_19
                                    int32_t i_4 = 6
                                    bool cond:42_1 = true
                                    
                                    while (i_4 != 0)
                                        char temp52_1 = *esi_6
                                        char const temp53_1 = *edi_7
                                        cond:42_1 = temp52_1 == temp53_1
                                        esi_6 = &esi_6[1]
                                        edi_7 = &edi_7[1]
                                        i_4 -= 1
                                        
                                        if (temp52_1 != temp53_1)
                                            break
                                    
                                    if (not(cond:42_1))
                                        char const* const edi_8 = "char"
                                        char* esi_7 = eax_19
                                        int32_t i_5 = 5
                                        bool cond:68_1 = true
                                        
                                        while (i_5 != 0)
                                            char temp75_1 = *esi_7
                                            char const temp76_1 = *edi_8
                                            cond:68_1 = temp75_1 == temp76_1
                                            esi_7 = &esi_7[1]
                                            edi_8 = &edi_8[1]
                                            i_5 -= 1
                                            
                                            if (temp75_1 != temp76_1)
                                                break
                                        
                                        if (not(cond:68_1))
                                            char const* const edi_9 = "class"
                                            char* esi_8 = eax_19
                                            int32_t i_6 = 6
                                            bool cond:91_1 = true
                                            
                                            while (i_6 != 0)
                                                char temp97_1 = *esi_8
                                                char const temp98_1 = *edi_9
                                                cond:91_1 = temp97_1 == temp98_1
                                                esi_8 = &esi_8[1]
                                                edi_9 = &edi_9[1]
                                                i_6 -= 1
                                                
                                                if (temp97_1 != temp98_1)
                                                    break
                                            
                                            if (not(cond:91_1))
                                                char const* const edi_10 = "column_major"
                                                char* esi_9 = eax_19
                                                int32_t i_7 = 0xd
                                                bool cond:109_1 = false
                                                
                                                while (i_7 != 0)
                                                    char temp115_1 = *esi_9
                                                    char const temp116_1 = *edi_10
                                                    cond:109_1 = temp115_1 != temp116_1
                                                    esi_9 = &esi_9[1]
                                                    edi_10 = &edi_10[1]
                                                    i_7 -= 1
                                                    
                                                    if (temp115_1 != temp116_1)
                                                        break
                                                
                                                if (not(cond:109_1))
                                                    return 0x104
                                                
                                                char const* const edi_11 = "compile"
                                                char* esi_10 = eax_19
                                                int32_t i_8 = 8
                                                bool cond:121_1 = false
                                                
                                                while (i_8 != 0)
                                                    char temp129_1 = *esi_10
                                                    char const temp130_1 = *edi_11
                                                    cond:121_1 = temp129_1 != temp130_1
                                                    esi_10 = &esi_10[1]
                                                    edi_11 = &edi_11[1]
                                                    i_8 -= 1
                                                    
                                                    if (temp129_1 != temp130_1)
                                                        break
                                                
                                                if (not(cond:121_1))
                                                    return 0x105
                                                
                                                char const* const edi_12 = "compile_fragment"
                                                char* esi_11 = eax_19
                                                int32_t i_9 = 0x11
                                                bool cond:131_1 = false
                                                
                                                while (i_9 != 0)
                                                    char temp139_1 = *esi_11
                                                    char const temp140_1 = *edi_12
                                                    cond:131_1 = temp139_1 != temp140_1
                                                    esi_11 = &esi_11[1]
                                                    edi_12 = &edi_12[1]
                                                    i_9 -= 1
                                                    
                                                    if (temp139_1 != temp140_1)
                                                        break
                                                
                                                if (not(cond:131_1))
                                                    return 0x106
                                                
                                                char const* const edi_13 = "const"
                                                char* esi_12 = eax_19
                                                int32_t i_10 = 6
                                                bool cond:139_1 = false
                                                
                                                while (i_10 != 0)
                                                    char temp145_1 = *esi_12
                                                    char const temp146_1 = *edi_13
                                                    cond:139_1 = temp145_1 != temp146_1
                                                    esi_12 = &esi_12[1]
                                                    edi_13 = &edi_13[1]
                                                    i_10 -= 1
                                                    
                                                    if (temp145_1 != temp146_1)
                                                        break
                                                
                                                if (not(cond:139_1))
                                                    return 0x107
                                                
                                                char const* const edi_14 = "const_cast"
                                                char* esi_13 = eax_19
                                                int32_t i_11 = 0xb
                                                bool cond:145_1 = true
                                                
                                                while (i_11 != 0)
                                                    char temp151_1 = *esi_13
                                                    char const temp152_1 = *edi_14
                                                    cond:145_1 = temp151_1 == temp152_1
                                                    esi_13 = &esi_13[1]
                                                    edi_14 = &edi_14[1]
                                                    i_11 -= 1
                                                    
                                                    if (temp151_1 != temp152_1)
                                                        break
                                                
                                                if (not(cond:145_1))
                                                    edi_5 = "continue"
                                                label_43daa0:
                                                    i_83 = 9
                                                    goto label_43d703
                            case 0x64
                                void* const edi_15 = "default"
                                char* esi_14 = eax_19
                                int32_t i_12 = 8
                                bool cond:9_1 = true
                                
                                while (i_12 != 0)
                                    char temp9_1 = *esi_14
                                    char temp10_1 = *edi_15
                                    cond:9_1 = temp9_1 == temp10_1
                                    esi_14 = &esi_14[1]
                                    edi_15 += 1
                                    i_12 -= 1
                                    
                                    if (temp9_1 != temp10_1)
                                        break
                                
                                if (not(cond:9_1))
                                    char const* const edi_16 = "delete"
                                    char* esi_15 = eax_19
                                    int32_t i_13 = 7
                                    bool cond:44_1 = true
                                    
                                    while (i_13 != 0)
                                        char temp54_1 = *esi_15
                                        char const temp55_1 = *edi_16
                                        cond:44_1 = temp54_1 == temp55_1
                                        esi_15 = &esi_15[1]
                                        edi_16 = &edi_16[1]
                                        i_13 -= 1
                                        
                                        if (temp54_1 != temp55_1)
                                            break
                                    
                                    if (not(cond:44_1))
                                        char const* const edi_17 = "discard"
                                        char* esi_16 = eax_19
                                        int32_t i_14 = 8
                                        bool cond:70_1 = false
                                        
                                        while (i_14 != 0)
                                            char temp77_1 = *esi_16
                                            char const temp78_1 = *edi_17
                                            cond:70_1 = temp77_1 != temp78_1
                                            esi_16 = &esi_16[1]
                                            edi_17 = &edi_17[1]
                                            i_14 -= 1
                                            
                                            if (temp77_1 != temp78_1)
                                                break
                                        
                                        if (not(cond:70_1))
                                            return 0x109
                                        
                                        void* const edi_18 = &data_ac095c
                                        char* esi_17 = eax_19
                                        int32_t i_15 = 3
                                        bool cond:93_1 = false
                                        
                                        while (i_15 != 0)
                                            char temp99_1 = *esi_17
                                            char temp100_1 = *edi_18
                                            cond:93_1 = temp99_1 != temp100_1
                                            esi_17 = &esi_17[1]
                                            edi_18 += 1
                                            i_15 -= 1
                                            
                                            if (temp99_1 != temp100_1)
                                                break
                                        
                                        if (not(cond:93_1))
                                            return 0x10b
                                        
                                        int32_t i_16 = 7
                                        char const* const edi_19 = "double"
                                        char* esi_18 = eax_19
                                        bool cond:111_1 = false
                                        
                                        while (i_16 != 0)
                                            char temp117_1 = *esi_18
                                            char const temp118_1 = *edi_19
                                            cond:111_1 = temp117_1 != temp118_1
                                            esi_18 = &esi_18[1]
                                            edi_19 = &edi_19[1]
                                            i_16 -= 1
                                            
                                            if (temp117_1 != temp118_1)
                                                break
                                        
                                        if (not(cond:111_1))
                                            return 0x10a
                                        
                                        char* esi_19 = eax_19
                                        char const* const edi_20 = "dynamic_cast"
                                        int32_t i_17 = 0xd
                                        bool cond:123_1 = true
                                        
                                        while (i_17 != 0)
                                            char temp131_1 = *esi_19
                                            char const temp132_1 = *edi_20
                                            cond:123_1 = temp131_1 == temp132_1
                                            esi_19 = &esi_19[1]
                                            edi_20 = &edi_20[1]
                                            i_17 -= 1
                                            
                                            if (temp131_1 != temp132_1)
                                                break
                                        
                                        if (not(cond:123_1))
                                            goto label_43d87c
                            case 0x65
                                char const* const edi_21 = "else"
                                char* esi_20 = eax_19
                                int32_t i_18 = 5
                                bool cond:11_1 = false
                                
                                while (i_18 != 0)
                                    char temp11_1 = *esi_20
                                    char const temp12_1 = *edi_21
                                    cond:11_1 = temp11_1 != temp12_1
                                    esi_20 = &esi_20[1]
                                    edi_21 = &edi_21[1]
                                    i_18 -= 1
                                    
                                    if (temp11_1 != temp12_1)
                                        break
                                
                                if (not(cond:11_1))
                                    return 0x10c
                                
                                char const* const edi_22 = "enum"
                                char* esi_21 = eax_19
                                int32_t i_19 = 5
                                bool cond:46_1 = true
                                
                                while (i_19 != 0)
                                    char temp56_1 = *esi_21
                                    char const temp57_1 = *edi_22
                                    cond:46_1 = temp56_1 == temp57_1
                                    esi_21 = &esi_21[1]
                                    edi_22 = &edi_22[1]
                                    i_19 -= 1
                                    
                                    if (temp56_1 != temp57_1)
                                        break
                                
                                if (not(cond:46_1))
                                    char const* const edi_23 = "explicit"
                                    char* esi_22 = eax_19
                                    int32_t i_20 = 9
                                    bool cond:72_1 = true
                                    
                                    while (i_20 != 0)
                                        char temp79_1 = *esi_22
                                        char const temp80_1 = *edi_23
                                        cond:72_1 = temp79_1 == temp80_1
                                        esi_22 = &esi_22[1]
                                        edi_23 = &edi_23[1]
                                        i_20 -= 1
                                        
                                        if (temp79_1 != temp80_1)
                                            break
                                    
                                    if (not(cond:72_1))
                                        char* esi_23 = eax_19
                                        char const* const edi_24 = "extern"
                                        int32_t i_21 = 7
                                        bool cond:95_1 = false
                                        
                                        while (i_21 != 0)
                                            char temp101_1 = *esi_23
                                            char const temp102_1 = *edi_24
                                            cond:95_1 = temp101_1 != temp102_1
                                            esi_23 = &esi_23[1]
                                            edi_24 = &edi_24[1]
                                            i_21 -= 1
                                            
                                            if (temp101_1 != temp102_1)
                                                break
                                        
                                        if (not(cond:95_1))
                                            return 0x10d
                                        
                                        goto label_43d87c
                            case 0x66
                                char const* const edi_25 = "false"
                                char* esi_24 = eax_19
                                int32_t i_22 = 6
                                bool cond:13_1 = false
                                
                                while (i_22 != 0)
                                    char temp13_1 = *esi_24
                                    char const temp14_1 = *edi_25
                                    cond:13_1 = temp13_1 != temp14_1
                                    esi_24 = &esi_24[1]
                                    edi_25 = &edi_25[1]
                                    i_22 -= 1
                                    
                                    if (temp13_1 != temp14_1)
                                        break
                                
                                if (not(cond:13_1))
                                    return 0x10e
                                
                                char const* const edi_26 = "float"
                                char* esi_25 = eax_19
                                int32_t i_23 = 6
                                bool cond:48_1 = false
                                
                                while (i_23 != 0)
                                    char temp58_1 = *esi_25
                                    char const temp59_1 = *edi_26
                                    cond:48_1 = temp58_1 != temp59_1
                                    esi_25 = &esi_25[1]
                                    edi_26 = &edi_26[1]
                                    i_23 -= 1
                                    
                                    if (temp58_1 != temp59_1)
                                        break
                                
                                if (not(cond:48_1))
                                    return 0x10f
                                
                                void* const edi_27 = &data_ac0920
                                char* esi_26 = eax_19
                                int32_t i_24 = 4
                                bool cond:74_1 = false
                                
                                while (i_24 != 0)
                                    char temp81_1 = *esi_26
                                    char temp82_1 = *edi_27
                                    cond:74_1 = temp81_1 != temp82_1
                                    esi_26 = &esi_26[1]
                                    edi_27 += 1
                                    i_24 -= 1
                                    
                                    if (temp81_1 != temp82_1)
                                        break
                                
                                if (not(cond:74_1))
                                    return 0x110
                                
                                edi_5 = "friend"
                                i_83 = 7
                                goto label_43d703
                            case 0x67
                                edi_5 = "goto"
                            label_43da34:
                                i_83 = 5
                            label_43d703:
                                char* esi_4 = eax_19
                                int32_t i_25 = i_83
                                bool cond:52_1 = false
                                
                                while (i_25 != 0)
                                    char temp45_1 = *esi_4
                                    char const temp46_1 = *edi_5
                                    cond:52_1 = temp45_1 != temp46_1
                                    esi_4 = &esi_4[1]
                                    edi_5 = &edi_5[1]
                                    i_25 -= 1
                                    
                                    if (temp45_1 != temp46_1)
                                        break
                                
                                if (cond:52_1)
                                    goto label_43d87c
                            case 0x68
                                char* esi_27 = eax_19
                                char const* const edi_28 = "half"
                                int32_t i_26 = 5
                                bool cond:15_1 = false
                                
                                while (i_26 != 0)
                                    char temp15_1 = *esi_27
                                    char const temp16_1 = *edi_28
                                    cond:15_1 = temp15_1 != temp16_1
                                    esi_27 = &esi_27[1]
                                    edi_28 = &edi_28[1]
                                    i_26 -= 1
                                    
                                    if (temp15_1 != temp16_1)
                                        break
                                
                                if (not(cond:15_1))
                                    return 0x111
                                
                                goto label_43d87c
                            case 0x69
                                void* const edi_29 = &data_ab7e60
                                char* esi_28 = eax_19
                                int32_t i_27 = 3
                                bool cond:17_1 = false
                                
                                while (i_27 != 0)
                                    char temp17_1 = *esi_28
                                    char temp18_1 = *edi_29
                                    cond:17_1 = temp17_1 != temp18_1
                                    esi_28 = &esi_28[1]
                                    edi_29 += 1
                                    i_27 -= 1
                                    
                                    if (temp17_1 != temp18_1)
                                        break
                                
                                if (not(cond:17_1))
                                    return 0x112
                                
                                void* const edi_30 = &data_ac090c
                                char* esi_29 = eax_19
                                int32_t i_28 = 3
                                bool cond:50_1 = false
                                
                                while (i_28 != 0)
                                    char temp60_1 = *esi_29
                                    char temp61_1 = *edi_30
                                    cond:50_1 = temp60_1 != temp61_1
                                    esi_29 = &esi_29[1]
                                    edi_30 += 1
                                    i_28 -= 1
                                    
                                    if (temp60_1 != temp61_1)
                                        break
                                
                                if (not(cond:50_1))
                                    return 0x113
                                
                                char const* const edi_31 = "inline"
                                char* esi_30 = eax_19
                                int32_t i_29 = 7
                                bool cond:76_1 = false
                                
                                while (i_29 != 0)
                                    char temp83_1 = *esi_30
                                    char const temp84_1 = *edi_31
                                    cond:76_1 = temp83_1 != temp84_1
                                    esi_30 = &esi_30[1]
                                    edi_31 = &edi_31[1]
                                    i_29 -= 1
                                    
                                    if (temp83_1 != temp84_1)
                                        break
                                
                                if (not(cond:76_1))
                                    return 0x114
                                
                                char const* const edi_32 = "inout"
                                char* esi_31 = eax_19
                                int32_t i_30 = 6
                                bool cond:97_1 = false
                                
                                while (i_30 != 0)
                                    char temp103_1 = *esi_31
                                    char const temp104_1 = *edi_32
                                    cond:97_1 = temp103_1 != temp104_1
                                    esi_31 = &esi_31[1]
                                    edi_32 = &edi_32[1]
                                    i_30 -= 1
                                    
                                    if (temp103_1 != temp104_1)
                                        break
                                
                                if (not(cond:97_1))
                                    return 0x115
                                
                                char* esi_32 = eax_19
                                void* const edi_33 = &data_b08bbc
                                int32_t i_31 = 4
                                bool cond:113_1 = false
                                
                                while (i_31 != 0)
                                    char temp119_1 = *esi_32
                                    char temp120_1 = *edi_33
                                    cond:113_1 = temp119_1 != temp120_1
                                    esi_32 = &esi_32[1]
                                    edi_33 += 1
                                    i_31 -= 1
                                    
                                    if (temp119_1 != temp120_1)
                                        break
                                
                                if (not(cond:113_1))
                                    return 0x116
                                
                                goto label_43d87c
                            case 0x6a, 0x6b, 0x71
                                goto label_43d87c
                            case 0x6c
                                edi_5 = "long"
                                goto label_43da34
                            case 0x6d
                                char const* const edi_34 = "matrix"
                                char* esi_33 = eax_19
                                int32_t i_32 = 7
                                bool cond:19_1 = false
                                
                                while (i_32 != 0)
                                    char temp19_1 = *esi_33
                                    char const temp20_1 = *edi_34
                                    cond:19_1 = temp19_1 != temp20_1
                                    esi_33 = &esi_33[1]
                                    edi_34 = &edi_34[1]
                                    i_32 -= 1
                                    
                                    if (temp19_1 != temp20_1)
                                        break
                                
                                if (not(cond:19_1))
                                    return 0x117
                                
                                edi_5 = "mutable"
                                i_83 = 8
                                goto label_43d703
                            case 0x6e
                                char const* const edi_35 = "namespace"
                                char* esi_34 = eax_19
                                int32_t i_33 = 0xa
                                bool cond:21_1 = true
                                
                                while (i_33 != 0)
                                    char temp21_1 = *esi_34
                                    char const temp22_1 = *edi_35
                                    cond:21_1 = temp21_1 == temp22_1
                                    esi_34 = &esi_34[1]
                                    edi_35 = &edi_35[1]
                                    i_33 -= 1
                                    
                                    if (temp21_1 != temp22_1)
                                        break
                                
                                if (not(cond:21_1))
                                    edi_5 = &data_ac08e4
                                    i_83 = 4
                                    goto label_43d703
                            case 0x6f
                                void* const edi_36 = &data_ac08e0
                                char* esi_35 = eax_19
                                int32_t i_34 = 4
                                bool cond:23_1 = false
                                
                                while (i_34 != 0)
                                    char temp23_1 = *esi_35
                                    char temp24_1 = *edi_36
                                    cond:23_1 = temp23_1 != temp24_1
                                    esi_35 = &esi_35[1]
                                    edi_36 += 1
                                    i_34 -= 1
                                    
                                    if (temp23_1 != temp24_1)
                                        break
                                
                                if (not(cond:23_1))
                                    return 0x118
                                
                                edi_5 = "operator"
                                goto label_43daa0
                            case 0x70
                                char const* const edi_37 = "pixelfragment"
                                char* esi_36 = eax_19
                                int32_t i_35 = 0xe
                                bool cond:25_1 = false
                                
                                while (i_35 != 0)
                                    char temp25_1 = *esi_36
                                    char const temp26_1 = *edi_37
                                    cond:25_1 = temp25_1 != temp26_1
                                    esi_36 = &esi_36[1]
                                    edi_37 = &edi_37[1]
                                    i_35 -= 1
                                    
                                    if (temp25_1 != temp26_1)
                                        break
                                
                                if (not(cond:25_1))
                                    return 0x11a
                                
                                char const* const edi_38 = "private"
                                char* esi_37 = eax_19
                                int32_t i_36 = 8
                                bool cond:54_1 = true
                                
                                while (i_36 != 0)
                                    char temp62_1 = *esi_37
                                    char const temp63_1 = *edi_38
                                    cond:54_1 = temp62_1 == temp63_1
                                    esi_37 = &esi_37[1]
                                    edi_38 = &edi_38[1]
                                    i_36 -= 1
                                    
                                    if (temp62_1 != temp63_1)
                                        break
                                
                                if (not(cond:54_1))
                                    char const* const edi_39 = "protected"
                                    char* esi_38 = eax_19
                                    int32_t i_37 = 0xa
                                    bool cond:78_1 = true
                                    
                                    while (i_37 != 0)
                                        char temp85_1 = *esi_38
                                        char const temp86_1 = *edi_39
                                        cond:78_1 = temp85_1 == temp86_1
                                        esi_38 = &esi_38[1]
                                        edi_39 = &edi_39[1]
                                        i_37 -= 1
                                        
                                        if (temp85_1 != temp86_1)
                                            break
                                    
                                    if (not(cond:78_1))
                                        char const* const edi_40 = "public"
                                        char* esi_39 = eax_19
                                        int32_t i_38 = 7
                                        bool cond:99_1 = true
                                        
                                        while (i_38 != 0)
                                            char temp105_1 = *esi_39
                                            char const temp106_1 = *edi_40
                                            cond:99_1 = temp105_1 == temp106_1
                                            esi_39 = &esi_39[1]
                                            edi_40 = &edi_40[1]
                                            i_38 -= 1
                                            
                                            if (temp105_1 != temp106_1)
                                                break
                                        
                                        if (not(cond:99_1))
                                            if (*(arg1 + 0x48) != 0)
                                                char* esi_40 = eax_19
                                                char const* const edi_41 = "pixelshader"
                                                int32_t i_39 = 0xc
                                                bool cond:125_1 = false
                                                
                                                while (i_39 != 0)
                                                    char temp127_1 = *esi_40
                                                    char const temp128_1 = *edi_41
                                                    cond:125_1 = temp127_1 != temp128_1
                                                    esi_40 = &esi_40[1]
                                                    edi_41 = &edi_41[1]
                                                    i_39 -= 1
                                                    
                                                    if (temp127_1 != temp128_1)
                                                        break
                                                
                                                if (not(cond:125_1))
                                                    return 0x11b
                                            
                                            goto label_43d87c
                            case 0x72
                                char const* const edi_42 = "register"
                                char* esi_41 = eax_19
                                int32_t i_40 = 9
                                bool cond:27_1 = false
                                
                                while (i_40 != 0)
                                    char temp27_1 = *esi_41
                                    char const temp28_1 = *edi_42
                                    cond:27_1 = temp27_1 != temp28_1
                                    esi_41 = &esi_41[1]
                                    edi_42 = &edi_42[1]
                                    i_40 -= 1
                                    
                                    if (temp27_1 != temp28_1)
                                        break
                                
                                if (not(cond:27_1))
                                    return 0x11c
                                
                                char const* const edi_43 = "reinterpret_cast"
                                char* esi_42 = eax_19
                                int32_t i_41 = 0x11
                                bool cond:56_1 = true
                                
                                while (i_41 != 0)
                                    char temp64_1 = *esi_42
                                    char const temp65_1 = *edi_43
                                    cond:56_1 = temp64_1 == temp65_1
                                    esi_42 = &esi_42[1]
                                    edi_43 = &edi_43[1]
                                    i_41 -= 1
                                    
                                    if (temp64_1 != temp65_1)
                                        break
                                
                                if (not(cond:56_1))
                                    char const* const edi_44 = "row_major"
                                    char* esi_43 = eax_19
                                    int32_t i_42 = 0xa
                                    bool cond:80_1 = false
                                    
                                    while (i_42 != 0)
                                        char temp87_1 = *esi_43
                                        char const temp88_1 = *edi_44
                                        cond:80_1 = temp87_1 != temp88_1
                                        esi_43 = &esi_43[1]
                                        edi_44 = &edi_44[1]
                                        i_42 -= 1
                                        
                                        if (temp87_1 != temp88_1)
                                            break
                                    
                                    if (not(cond:80_1))
                                        return 0x11e
                                    
                                    char* esi_44 = eax_19
                                    char const* const edi_45 = "return"
                                    int32_t i_43 = 7
                                    bool cond:101_1 = false
                                    
                                    while (i_43 != 0)
                                        char temp107_1 = *esi_44
                                        char const temp108_1 = *edi_45
                                        cond:101_1 = temp107_1 != temp108_1
                                        esi_44 = &esi_44[1]
                                        edi_45 = &edi_45[1]
                                        i_43 -= 1
                                        
                                        if (temp107_1 != temp108_1)
                                            break
                                    
                                    if (not(cond:101_1))
                                        return 0x11d
                                    
                                    goto label_43d87c
                            case 0x73
                                char const* const edi_46 = "sampler1D"
                                char* esi_45 = eax_19
                                int32_t i_44 = 0xa
                                bool cond:29_1 = false
                                
                                while (i_44 != 0)
                                    char temp29_1 = *esi_45
                                    char const temp30_1 = *edi_46
                                    cond:29_1 = temp29_1 != temp30_1
                                    esi_45 = &esi_45[1]
                                    edi_46 = &edi_46[1]
                                    i_44 -= 1
                                    
                                    if (temp29_1 != temp30_1)
                                        break
                                
                                if (not(cond:29_1))
                                    return 0x120
                                
                                char const* const edi_47 = "sampler2D"
                                char* esi_46 = eax_19
                                int32_t i_45 = 0xa
                                bool cond:58_1 = false
                                
                                while (i_45 != 0)
                                    char temp66_1 = *esi_46
                                    char const temp67_1 = *edi_47
                                    cond:58_1 = temp66_1 != temp67_1
                                    esi_46 = &esi_46[1]
                                    edi_47 = &edi_47[1]
                                    i_45 -= 1
                                    
                                    if (temp66_1 != temp67_1)
                                        break
                                
                                if (not(cond:58_1))
                                    return 0x121
                                
                                char const* const edi_48 = "sampler3D"
                                char* esi_47 = eax_19
                                int32_t i_46 = 0xa
                                bool cond:82_1 = false
                                
                                while (i_46 != 0)
                                    char temp89_1 = *esi_47
                                    char const temp90_1 = *edi_48
                                    cond:82_1 = temp89_1 != temp90_1
                                    esi_47 = &esi_47[1]
                                    edi_48 = &edi_48[1]
                                    i_46 -= 1
                                    
                                    if (temp89_1 != temp90_1)
                                        break
                                
                                if (not(cond:82_1))
                                    return 0x122
                                
                                char const* const edi_49 = "samplerCUBE"
                                char* esi_48 = eax_19
                                int32_t i_47 = 0xc
                                bool cond:103_1 = false
                                
                                while (i_47 != 0)
                                    char temp109_1 = *esi_48
                                    char const temp110_1 = *edi_49
                                    cond:103_1 = temp109_1 != temp110_1
                                    esi_48 = &esi_48[1]
                                    edi_49 = &edi_49[1]
                                    i_47 -= 1
                                    
                                    if (temp109_1 != temp110_1)
                                        break
                                
                                if (not(cond:103_1))
                                    return 0x123
                                
                                char const* const edi_50 = "sampler_state"
                                char* esi_49 = eax_19
                                int32_t i_48 = 0xe
                                bool cond:115_1 = false
                                
                                while (i_48 != 0)
                                    char temp121_1 = *esi_49
                                    char const temp122_1 = *edi_50
                                    cond:115_1 = temp121_1 != temp122_1
                                    esi_49 = &esi_49[1]
                                    edi_50 = &edi_50[1]
                                    i_48 -= 1
                                    
                                    if (temp121_1 != temp122_1)
                                        break
                                
                                if (not(cond:115_1))
                                    return 0x124
                                
                                char const* const edi_51 = "shared"
                                char* esi_50 = eax_19
                                int32_t i_49 = 7
                                bool cond:127_1 = false
                                
                                while (i_49 != 0)
                                    char temp133_1 = *esi_50
                                    char const temp134_1 = *edi_51
                                    cond:127_1 = temp133_1 != temp134_1
                                    esi_50 = &esi_50[1]
                                    edi_51 = &edi_51[1]
                                    i_49 -= 1
                                    
                                    if (temp133_1 != temp134_1)
                                        break
                                
                                if (not(cond:127_1))
                                    return 0x125
                                
                                char const* const edi_52 = "short"
                                char* esi_51 = eax_19
                                int32_t i_50 = 6
                                bool cond:133_1 = true
                                
                                while (i_50 != 0)
                                    char temp141_1 = *esi_51
                                    char const temp142_1 = *edi_52
                                    cond:133_1 = temp141_1 == temp142_1
                                    esi_51 = &esi_51[1]
                                    edi_52 = &edi_52[1]
                                    i_50 -= 1
                                    
                                    if (temp141_1 != temp142_1)
                                        break
                                
                                if (not(cond:133_1))
                                    char const* const edi_53 = "signed"
                                    char* esi_52 = eax_19
                                    int32_t i_51 = 7
                                    bool cond:141_1 = true
                                    
                                    while (i_51 != 0)
                                        char temp147_1 = *esi_52
                                        char const temp148_1 = *edi_53
                                        cond:141_1 = temp147_1 == temp148_1
                                        esi_52 = &esi_52[1]
                                        edi_53 = &edi_53[1]
                                        i_51 -= 1
                                        
                                        if (temp147_1 != temp148_1)
                                            break
                                    
                                    if (not(cond:141_1))
                                        char const* const edi_54 = "sizeof"
                                        char* esi_53 = eax_19
                                        int32_t i_52 = 7
                                        bool cond:147_1 = true
                                        
                                        while (i_52 != 0)
                                            char temp153_1 = *esi_53
                                            char const temp154_1 = *edi_54
                                            cond:147_1 = temp153_1 == temp154_1
                                            esi_53 = &esi_53[1]
                                            edi_54 = &edi_54[1]
                                            i_52 -= 1
                                            
                                            if (temp153_1 != temp154_1)
                                                break
                                        
                                        if (not(cond:147_1))
                                            char const* const edi_55 = "stateblock_state"
                                            char* esi_54 = eax_19
                                            int32_t i_53 = 0x11
                                            bool cond:151_1 = false
                                            
                                            while (i_53 != 0)
                                                char temp157_1 = *esi_54
                                                char const temp158_1 = *edi_55
                                                cond:151_1 = temp157_1 != temp158_1
                                                esi_54 = &esi_54[1]
                                                edi_55 = &edi_55[1]
                                                i_53 -= 1
                                                
                                                if (temp157_1 != temp158_1)
                                                    break
                                            
                                            if (not(cond:151_1))
                                                return 0x127
                                            
                                            char const* const edi_56 = "static"
                                            char* esi_55 = eax_19
                                            int32_t i_54 = 7
                                            bool cond:155_1 = false
                                            
                                            while (i_54 != 0)
                                                char temp161_1 = *esi_55
                                                char const temp162_1 = *edi_56
                                                cond:155_1 = temp161_1 != temp162_1
                                                esi_55 = &esi_55[1]
                                                edi_56 = &edi_56[1]
                                                i_54 -= 1
                                                
                                                if (temp161_1 != temp162_1)
                                                    break
                                            
                                            if (not(cond:155_1))
                                                return 0x128
                                            
                                            char const* const edi_57 = "static_cast"
                                            char* esi_56 = eax_19
                                            int32_t i_55 = 0xc
                                            bool cond:159_1 = true
                                            
                                            while (i_55 != 0)
                                                char temp165_1 = *esi_56
                                                char const temp166_1 = *edi_57
                                                cond:159_1 = temp165_1 == temp166_1
                                                esi_56 = &esi_56[1]
                                                edi_57 = &edi_57[1]
                                                i_55 -= 1
                                                
                                                if (temp165_1 != temp166_1)
                                                    break
                                            
                                            if (not(cond:159_1))
                                                char const* const edi_58 = "string"
                                                char* esi_57 = eax_19
                                                int32_t i_56 = 7
                                                bool cond:161_1 = false
                                                
                                                while (i_56 != 0)
                                                    char temp169_1 = *esi_57
                                                    char const temp170_1 = *edi_58
                                                    cond:161_1 = temp169_1 != temp170_1
                                                    esi_57 = &esi_57[1]
                                                    edi_58 = &edi_58[1]
                                                    i_56 -= 1
                                                    
                                                    if (temp169_1 != temp170_1)
                                                        break
                                                
                                                if (not(cond:161_1))
                                                    return 0x129
                                                
                                                char const* const edi_59 = "struct"
                                                char* esi_58 = eax_19
                                                int32_t i_57 = 7
                                                bool cond:165_1 = false
                                                
                                                while (i_57 != 0)
                                                    char temp171_1 = *esi_58
                                                    char const temp172_1 = *edi_59
                                                    cond:165_1 = temp171_1 != temp172_1
                                                    esi_58 = &esi_58[1]
                                                    edi_59 = &edi_59[1]
                                                    i_57 -= 1
                                                    
                                                    if (temp171_1 != temp172_1)
                                                        break
                                                
                                                if (not(cond:165_1))
                                                    return 0x12a
                                                
                                                int32_t i_58 = 7
                                                char const* const edi_60 = "switch"
                                                char* esi_59 = eax_19
                                                bool cond:167_1 = true
                                                
                                                while (i_58 != 0)
                                                    char temp173_1 = *esi_59
                                                    char const temp174_1 = *edi_60
                                                    cond:167_1 = temp173_1 == temp174_1
                                                    esi_59 = &esi_59[1]
                                                    edi_60 = &edi_60[1]
                                                    i_58 -= 1
                                                    
                                                    if (temp173_1 != temp174_1)
                                                        break
                                                
                                                if (not(cond:167_1))
                                                    if (*(arg1 + 0x48) != 0)
                                                        char const* const edi_61 = "sampler"
                                                        char* esi_60 = eax_19
                                                        int32_t i_59 = 8
                                                        bool cond:169_1 = false
                                                        
                                                        while (i_59 != 0)
                                                            char temp175_1 = *esi_60
                                                            char const temp176_1 = *edi_61
                                                            cond:169_1 = temp175_1 != temp176_1
                                                            esi_60 = &esi_60[1]
                                                            edi_61 = &edi_61[1]
                                                            i_59 -= 1
                                                            
                                                            if (temp175_1 != temp176_1)
                                                                break
                                                        
                                                        if (not(cond:169_1))
                                                            return 0x11f
                                                        
                                                        char* esi_61 = eax_19
                                                        char const* const edi_62 = "stateblock"
                                                        int32_t i_60 = 0xb
                                                        bool cond:171_1 = false
                                                        
                                                        while (i_60 != 0)
                                                            char temp177_1 = *esi_61
                                                            char const temp178_1 = *edi_62
                                                            cond:171_1 = temp177_1 != temp178_1
                                                            esi_61 = &esi_61[1]
                                                            edi_62 = &edi_62[1]
                                                            i_60 -= 1
                                                            
                                                            if (temp177_1 != temp178_1)
                                                                break
                                                        
                                                        if (not(cond:171_1))
                                                            return 0x126
                                                    
                                                    goto label_43d87c
                            case 0x74
                                char const* const edi_63 = "template"
                                char* esi_62 = eax_19
                                int32_t i_61 = 9
                                bool cond:31_1 = true
                                
                                while (i_61 != 0)
                                    char temp31_1 = *esi_62
                                    char const temp32_1 = *edi_63
                                    cond:31_1 = temp31_1 == temp32_1
                                    esi_62 = &esi_62[1]
                                    edi_63 = &edi_63[1]
                                    i_61 -= 1
                                    
                                    if (temp31_1 != temp32_1)
                                        break
                                
                                if (not(cond:31_1))
                                    char const* const edi_64 = "texture1D"
                                    char* esi_63 = eax_19
                                    int32_t i_62 = 0xa
                                    bool cond:60_1 = false
                                    
                                    while (i_62 != 0)
                                        char temp68_1 = *esi_63
                                        char const temp69_1 = *edi_64
                                        cond:60_1 = temp68_1 != temp69_1
                                        esi_63 = &esi_63[1]
                                        edi_64 = &edi_64[1]
                                        i_62 -= 1
                                        
                                        if (temp68_1 != temp69_1)
                                            break
                                    
                                    if (not(cond:60_1))
                                        return 0x12d
                                    
                                    char const* const edi_65 = "texture2D"
                                    char* esi_64 = eax_19
                                    int32_t i_63 = 0xa
                                    bool cond:84_1 = false
                                    
                                    while (i_63 != 0)
                                        char temp91_1 = *esi_64
                                        char const temp92_1 = *edi_65
                                        cond:84_1 = temp91_1 != temp92_1
                                        esi_64 = &esi_64[1]
                                        edi_65 = &edi_65[1]
                                        i_63 -= 1
                                        
                                        if (temp91_1 != temp92_1)
                                            break
                                    
                                    if (not(cond:84_1))
                                        return 0x12e
                                    
                                    char const* const edi_66 = "texture3D"
                                    char* esi_65 = eax_19
                                    int32_t i_64 = 0xa
                                    bool cond:105_1 = false
                                    
                                    while (i_64 != 0)
                                        char temp111_1 = *esi_65
                                        char const temp112_1 = *edi_66
                                        cond:105_1 = temp111_1 != temp112_1
                                        esi_65 = &esi_65[1]
                                        edi_66 = &edi_66[1]
                                        i_64 -= 1
                                        
                                        if (temp111_1 != temp112_1)
                                            break
                                    
                                    if (not(cond:105_1))
                                        return 0x12f
                                    
                                    char const* const edi_67 = "textureCUBE"
                                    char* esi_66 = eax_19
                                    int32_t i_65 = 0xc
                                    bool cond:117_1 = false
                                    
                                    while (i_65 != 0)
                                        char temp123_1 = *esi_66
                                        char const temp124_1 = *edi_67
                                        cond:117_1 = temp123_1 != temp124_1
                                        esi_66 = &esi_66[1]
                                        edi_67 = &edi_67[1]
                                        i_65 -= 1
                                        
                                        if (temp123_1 != temp124_1)
                                            break
                                    
                                    if (not(cond:117_1))
                                        return 0x130
                                    
                                    char const* const edi_68 = "this"
                                    char* esi_67 = eax_19
                                    int32_t i_66 = 5
                                    bool cond:129_1 = true
                                    
                                    while (i_66 != 0)
                                        char temp135_1 = *esi_67
                                        char const temp136_1 = *edi_68
                                        cond:129_1 = temp135_1 == temp136_1
                                        esi_67 = &esi_67[1]
                                        edi_68 = &edi_68[1]
                                        i_66 -= 1
                                        
                                        if (temp135_1 != temp136_1)
                                            break
                                    
                                    if (not(cond:129_1))
                                        char const* const edi_69 = "throw"
                                        char* esi_68 = eax_19
                                        int32_t i_67 = 6
                                        bool cond:135_1 = true
                                        
                                        while (i_67 != 0)
                                            char temp143_1 = *esi_68
                                            char const temp144_1 = *edi_69
                                            cond:135_1 = temp143_1 == temp144_1
                                            esi_68 = &esi_68[1]
                                            edi_69 = &edi_69[1]
                                            i_67 -= 1
                                            
                                            if (temp143_1 != temp144_1)
                                                break
                                        
                                        if (not(cond:135_1))
                                            char const* const edi_70 = "true"
                                            char* esi_69 = eax_19
                                            int32_t i_68 = 5
                                            bool cond:143_1 = false
                                            
                                            while (i_68 != 0)
                                                char temp149_1 = *esi_69
                                                char const temp150_1 = *edi_70
                                                cond:143_1 = temp149_1 != temp150_1
                                                esi_69 = &esi_69[1]
                                                edi_70 = &edi_70[1]
                                                i_68 -= 1
                                                
                                                if (temp149_1 != temp150_1)
                                                    break
                                            
                                            if (not(cond:143_1))
                                                return 0x131
                                            
                                            void* const edi_71 = &data_ac081c
                                            char* esi_70 = eax_19
                                            int32_t i_69 = 4
                                            bool cond:149_1 = true
                                            
                                            while (i_69 != 0)
                                                char temp155_1 = *esi_70
                                                char temp156_1 = *edi_71
                                                cond:149_1 = temp155_1 == temp156_1
                                                esi_70 = &esi_70[1]
                                                edi_71 += 1
                                                i_69 -= 1
                                                
                                                if (temp155_1 != temp156_1)
                                                    break
                                            
                                            if (not(cond:149_1))
                                                char const* const edi_72 = "typedef"
                                                char* esi_71 = eax_19
                                                int32_t i_70 = 8
                                                bool cond:153_1 = false
                                                
                                                while (i_70 != 0)
                                                    char temp159_1 = *esi_71
                                                    char const temp160_1 = *edi_72
                                                    cond:153_1 = temp159_1 != temp160_1
                                                    esi_71 = &esi_71[1]
                                                    edi_72 = &edi_72[1]
                                                    i_70 -= 1
                                                    
                                                    if (temp159_1 != temp160_1)
                                                        break
                                                
                                                if (not(cond:153_1))
                                                    return 0x132
                                                
                                                char const* const edi_73 = "typename"
                                                char* esi_72 = eax_19
                                                int32_t i_71 = 9
                                                bool cond:157_1 = true
                                                
                                                while (i_71 != 0)
                                                    char temp163_1 = *esi_72
                                                    char const temp164_1 = *edi_73
                                                    cond:157_1 = temp163_1 == temp164_1
                                                    esi_72 = &esi_72[1]
                                                    edi_73 = &edi_73[1]
                                                    i_71 -= 1
                                                    
                                                    if (temp163_1 != temp164_1)
                                                        break
                                                
                                                if (not(cond:157_1))
                                                    if (*(arg1 + 0x48) != 0)
                                                        char* esi_73 = eax_19
                                                        char const* const edi_74 = "texture"
                                                        int32_t i_72 = 8
                                                        bool cond:163_1 = false
                                                        
                                                        while (i_72 != 0)
                                                            char temp167_1 = *esi_73
                                                            char const temp168_1 = *edi_74
                                                            cond:163_1 = temp167_1 != temp168_1
                                                            esi_73 = &esi_73[1]
                                                            edi_74 = &edi_74[1]
                                                            i_72 -= 1
                                                            
                                                            if (temp167_1 != temp168_1)
                                                                break
                                                        
                                                        if (not(cond:163_1))
                                                            return 0x12c
                                                    
                                                    goto label_43d87c
                            case 0x75
                                char const* const edi_75 = "uniform"
                                char* esi_74 = eax_19
                                int32_t i_73 = 8
                                bool cond:33_1 = false
                                
                                while (i_73 != 0)
                                    char temp33_1 = *esi_74
                                    char const temp34_1 = *edi_75
                                    cond:33_1 = temp33_1 != temp34_1
                                    esi_74 = &esi_74[1]
                                    edi_75 = &edi_75[1]
                                    i_73 -= 1
                                    
                                    if (temp33_1 != temp34_1)
                                        break
                                
                                if (not(cond:33_1))
                                    return 0x133
                                
                                char const* const edi_76 = "union"
                                char* esi_75 = eax_19
                                int32_t i_74 = 6
                                bool cond:62_1 = true
                                
                                while (i_74 != 0)
                                    char temp70_1 = *esi_75
                                    char const temp71_1 = *edi_76
                                    cond:62_1 = temp70_1 == temp71_1
                                    esi_75 = &esi_75[1]
                                    edi_76 = &edi_76[1]
                                    i_74 -= 1
                                    
                                    if (temp70_1 != temp71_1)
                                        break
                                
                                if (not(cond:62_1))
                                    char const* const edi_77 = "unsigned"
                                    char* esi_76 = eax_19
                                    int32_t i_75 = 9
                                    bool cond:86_1 = true
                                    
                                    while (i_75 != 0)
                                        char temp93_1 = *esi_76
                                        char const temp94_1 = *edi_77
                                        cond:86_1 = temp93_1 == temp94_1
                                        esi_76 = &esi_76[1]
                                        edi_77 = &edi_77[1]
                                        i_75 -= 1
                                        
                                        if (temp93_1 != temp94_1)
                                            break
                                    
                                    if (not(cond:86_1))
                                        edi_5 = "using"
                                    label_43d701:
                                        i_83 = 6
                                        goto label_43d703
                            case 0x76
                                char const* const edi_78 = "vector"
                                char* esi_77 = eax_19
                                int32_t i_76 = 7
                                bool cond:35_1 = false
                                
                                while (i_76 != 0)
                                    char temp35_1 = *esi_77
                                    char const temp36_1 = *edi_78
                                    cond:35_1 = temp35_1 != temp36_1
                                    esi_77 = &esi_77[1]
                                    edi_78 = &edi_78[1]
                                    i_76 -= 1
                                    
                                    if (temp35_1 != temp36_1)
                                        break
                                
                                if (not(cond:35_1))
                                    return 0x134
                                
                                char const* const edi_79 = "vertexfragment"
                                char* esi_78 = eax_19
                                int32_t i_77 = 0xf
                                bool cond:64_1 = false
                                
                                while (i_77 != 0)
                                    char temp72_1 = *esi_78
                                    char const temp73_1 = *edi_79
                                    cond:64_1 = temp72_1 != temp73_1
                                    esi_78 = &esi_78[1]
                                    edi_79 = &edi_79[1]
                                    i_77 -= 1
                                    
                                    if (temp72_1 != temp73_1)
                                        break
                                
                                if (not(cond:64_1))
                                    return 0x135
                                
                                char const* const edi_80 = "virtual"
                                char* esi_79 = eax_19
                                int32_t i_78 = 8
                                bool cond:88_1 = false
                                
                                while (i_78 != 0)
                                    char temp95_1 = *esi_79
                                    char const temp96_1 = *edi_80
                                    cond:88_1 = temp95_1 != temp96_1
                                    esi_79 = &esi_79[1]
                                    edi_80 = &edi_80[1]
                                    i_78 -= 1
                                    
                                    if (temp95_1 != temp96_1)
                                        break
                                
                                if (cond:88_1)
                                    char const* const edi_81 = "void"
                                    char* esi_80 = eax_19
                                    int32_t i_79 = 5
                                    bool cond:107_1 = false
                                    
                                    while (i_79 != 0)
                                        char temp113_1 = *esi_80
                                        char const temp114_1 = *edi_81
                                        cond:107_1 = temp113_1 != temp114_1
                                        esi_80 = &esi_80[1]
                                        edi_81 = &edi_81[1]
                                        i_79 -= 1
                                        
                                        if (temp113_1 != temp114_1)
                                            break
                                    
                                    if (not(cond:107_1))
                                        return 0x137
                                    
                                    char const* const edi_82 = "volatile"
                                    char* esi_81 = eax_19
                                    int32_t i_80 = 9
                                    bool cond:119_1 = false
                                    
                                    while (i_80 != 0)
                                        char temp125_1 = *esi_81
                                        char const temp126_1 = *edi_82
                                        cond:119_1 = temp125_1 != temp126_1
                                        esi_81 = &esi_81[1]
                                        edi_82 = &edi_82[1]
                                        i_80 -= 1
                                        
                                        if (temp125_1 != temp126_1)
                                            break
                                    
                                    if (not(cond:119_1))
                                        return 0x138
                                    
                                    if (*(arg1 + 0x48) != 0)
                                        char* esi_82 = eax_19
                                        char const* const edi_83 = "vertexshader"
                                        int32_t i_81 = 0xd
                                        bool cond:137_1 = false
                                        
                                        while (i_81 != 0)
                                            char temp137_1 = *esi_82
                                            char const temp138_1 = *edi_83
                                            cond:137_1 = temp137_1 != temp138_1
                                            esi_82 = &esi_82[1]
                                            edi_83 = &edi_83[1]
                                            i_81 -= 1
                                            
                                            if (temp137_1 != temp138_1)
                                                break
                                        
                                        if (not(cond:137_1))
                                            return 0x136
                                    
                                    goto label_43d87c
                            case 0x77
                                char* esi_83 = eax_19
                                char const* const edi_84 = "while"
                                int32_t i_82 = 6
                                bool cond:37_1 = false
                                
                                while (i_82 != 0)
                                    char temp37_1 = *esi_83
                                    char const temp38_1 = *edi_84
                                    cond:37_1 = temp37_1 != temp38_1
                                    esi_83 = &esi_83[1]
                                    edi_84 = &edi_84[1]
                                    i_82 -= 1
                                    
                                    if (temp37_1 != temp38_1)
                                        break
                                
                                if (not(cond:37_1))
                                    return 0x139
                                
                                goto label_43d87c
                        
                        break
                    
                label_43d87c:
                    uint32_t eax_20 = _tolower(ecx_2)
                    
                    if (eax_20 == 0x61)
                        if (__stricmp(*(arg1 + 0x28), "asm") == 0)
                            return 0x101
                    else if (eax_20 == 0x64)
                        if (__stricmp(*(arg1 + 0x28), "decl") == 0)
                            return 0x108
                    else if (eax_20 == 0x70)
                        if (__stricmp(*(arg1 + 0x28), "pass") == 0)
                            return 0x119
                    else if (eax_20 == 0x74 && __stricmp(*(arg1 + 0x28), "technique") == 0)
                        return 0x12b
                    
                    int32_t eax_25 = sub_43be42(arg1, 0, arg1 + 0x20, nullptr, nullptr, 
                        *(arg1 + 0x10), 0, nullptr, nullptr)
                    int32_t eax_26 = neg.d(eax_25)
                    return neg.d(sbb.d(eax_26, eax_26, eax_25 != 0)) + 0x14f
                case 0xa
                    return 0x14e
                case 0xb, 0xc
                    continue
    else
        *(arg1 + 0x40) = 1
    
    return 0xffffffff

return 0x151
