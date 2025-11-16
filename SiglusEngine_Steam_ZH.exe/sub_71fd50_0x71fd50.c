// 函数: sub_71fd50
// 地址: 0x71fd50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char var_5 = 0
char* eax = arg1[0x32]

if (eax != 0)
    *eax = 0

char edx = arg1[0x1e].b

if (edx != 0 && arg1[0x20] != 0 && arg1[0x21] != 0)
    eax = arg1[0x1d]
    char* var_c_1 = eax
    
    if (eax != 4)
        goto label_71fdcc
    
    eax.b = arg1[0x31].b
    
    if (eax.b != 0)
        if (eax.b == 0xff)
        label_71fdc9:
            eax = var_c_1
        label_71fdcc:
            
            if (*arg1 != 0 && arg1[1] s> 0 && arg1[2] s> 0)
                if (eax == 0x65)
                    arg1[0x15] = 0
                    arg1[0x14] = 0
                label_71fe09:
                    int32_t ecx_3 = arg1[0x17]
                    int32_t edx_4 = arg1[0x19]
                    arg1[0xa] = &arg1[0x15]
                    int32_t eax_7 = edx_4
                    
                    if (ecx_3 s< edx_4)
                        eax_7 = ecx_3
                    
                    arg1[0xd] -= eax_7
                    arg1[0x17] = ecx_3 - eax_7
                    int32_t ecx_5 = arg1[0x1a]
                    
                    if (arg1[0x18] s< ecx_5)
                        ecx_5 = arg1[0x18]
                    
                    arg1[0x18] -= ecx_5
                    arg1[0x1a] -= ecx_5
                    arg1[0xe] -= ecx_5
                    int32_t ecx_6 = arg1[0x17]
                    int32_t ebx = arg1[0x18]
                    arg1[0x19] = edx_4 - eax_7
                    int32_t edx_6 = arg1[0x1a]
                    int32_t esi = arg1[0x19]
                    int32_t eax_9
                    
                    if (ecx_6 s> esi)
                        eax_9 = ecx_6 - esi
                    else
                        eax_9 = esi - ecx_6
                    
                    arg1[0xb] = eax_9 + 1
                    int32_t eax_13
                    
                    if (ebx s> edx_6)
                        eax_13 = ebx - edx_6
                    else
                        eax_13 = edx_6 - ebx
                    
                    bool cond:6 = arg1[0xf].b != 0
                    arg1[0xc] = eax_13 + 1
                    
                    if (not(cond:6))
                        int32_t eax_16 = esi
                        
                        if (ecx_6 s< esi)
                            eax_16 = ecx_6
                        
                        arg1[0x10] = eax_16 - arg1[0xd]
                        int32_t eax_18 = edx_6
                        
                        if (ebx s< edx_6)
                            eax_18 = ebx
                        
                        bool cond:4_1 = arg1[0x17] s> esi
                        arg1[0x11] = eax_18 - arg1[0xe]
                        
                        if (cond:4_1)
                            esi = arg1[0x17]
                        
                        arg1[0x12] = esi - arg1[0xd]
                        
                        if (ebx s> edx_6)
                            edx_6 = ebx
                        
                        arg1[0x13] = edx_6 - arg1[0xe]
                    
                    int32_t eax_20 = arg1[0x16]
                    
                    if (eax_20 == 0 || eax_20 == 1)
                        ebx.b = 1
                        var_5 = 1
                    else
                        ebx.b = 0
                    
                    arg1[0x34].b = 0
                    
                    if (arg1[0x20] != 0x3e8 || arg1[0x21] != 0x3e8 || arg1[0x22] != 0)
                        arg1[0x34].b = 1
                    
                    int32_t edx_8 = arg1[3]
                    int32_t eax_22 = arg1[0x1b] + edx_8
                    int32_t esi_2 = arg1[4]
                    int32_t ecx_8 = arg1[0x1c] + esi_2
                    ebx:1.b = arg1[0x34].b
                    arg1[0x1b] = eax_22
                    arg1[0x1c] = ecx_8
                    
                    if (ebx:1.b == 0 && ebx.b == 0)
                        int32_t ecx_9 = ecx_8 - arg1[0xe]
                        arg1[0x1b] = eax_22 - arg1[0xd]
                        arg1[0x1c] = ecx_9
                    
                    int32_t ecx_10 = arg1[1]
                    
                    if (arg1[5].b == 0)
                        arg1[6] = neg.d(edx_8)
                        arg1[7] = neg.d(esi_2)
                        arg1[8] = ecx_10 - edx_8 - 1
                        arg1[9] = arg1[2] - esi_2 - 1
                    
                    int32_t ebx_1 = arg1[0x10]
                    int32_t eax_34
                    
                    if (ebx_1 s<= arg1[0x12])
                        eax_34 = arg1[0x11]
                        
                        if (eax_34 s<= arg1[0x13])
                            int32_t ebx_2 = ebx_1 + arg1[0xd]
                            
                            if (ebx_1 + arg1[0xd] s< 0)
                                ebx_2 = 0
                            
                            arg1[0x10] = ebx_2
                            int32_t ebx_3 = arg1[0xe]
                            int32_t ebx_4 = ebx_3 + eax_34
                            
                            if (ebx_3 + eax_34 s< 0)
                                ebx_4 = 0
                            
                            int32_t esi_4 = arg1[0x12] + arg1[0xd]
                            int32_t eax_36 = arg1[0xb] - 1
                            arg1[0x11] = ebx_4
                            
                            if (eax_36 s< esi_4)
                                esi_4 = eax_36
                            
                            int32_t eax_38 = arg1[0xc] - 1
                            arg1[0x12] = esi_4
                            int32_t esi_6 = arg1[0xe] + arg1[0x13]
                            
                            if (eax_38 s< esi_6)
                                esi_6 = eax_38
                            
                            arg1[0x13] = esi_6
                            int32_t esi_7 = arg1[4]
                            
                            if (ebx_2 s<= esi_4 && ebx_2 s< arg1[0xb] && ebx_4 s<= esi_6
                                    && ebx_4 s< arg1[0xc])
                                int32_t eax_39 = arg1[6]
                                int32_t eax_40 = eax_39 + edx_8
                                
                                if (eax_39 + edx_8 s< 0)
                                    eax_40 = 0
                                
                                arg1[6] = eax_40
                                int32_t eax_41 = arg1[7]
                                int32_t eax_42 = eax_41 + esi_7
                                
                                if (eax_41 + esi_7 s< 0)
                                    eax_42 = 0
                                
                                int32_t edx_9 = edx_8 + arg1[8]
                                arg1[7] = eax_42
                                
                                if (ecx_10 - 1 s< edx_9)
                                    edx_9 = ecx_10 - 1
                                
                                arg1[8] = edx_9
                                int32_t edx_11 = arg1[9] + esi_7
                                int32_t esi_8 = arg1[2]
                                
                                if (esi_8 - 1 s< edx_11)
                                    edx_11 = esi_8 - 1
                                
                                int32_t var_28_1 = edx_11
                                arg1[9] = edx_11
                                edx_11.b = arg1[0x34].b
                                
                                if (edx_11.b == 0)
                                    int32_t eax_44
                                    eax_44.b = var_5
                                    
                                    if (eax_44.b == 0)
                                        int32_t eax_46 = ebx_2 + arg1[0x1b]
                                        int32_t ecx_11 = eax_40
                                        int32_t esi_9 = eax_42
                                        edx_11 = edx_9
                                        
                                        if (eax_46 s> ecx_11)
                                            ecx_11 = eax_46
                                        
                                        arg1[6] = ecx_11
                                        int32_t ecx_12 = arg1[0x1c]
                                        int32_t eax_47 = ecx_12 + ebx_4
                                        
                                        if (eax_47 s> esi_9)
                                            esi_9 = eax_47
                                        
                                        int32_t eax_49 = esi_4 + arg1[0x1b]
                                        arg1[7] = esi_9
                                        esi_8 = arg1[2]
                                        
                                        if (eax_49 s< edx_11)
                                            edx_11 = eax_49
                                        
                                        int32_t eax_51 = esi_6 + ecx_12
                                        arg1[8] = edx_11
                                        int32_t ecx_13 = var_28_1
                                        edx_11.b = arg1[0x34].b
                                        
                                        if (eax_51 s< ecx_13)
                                            ecx_13 = eax_51
                                        
                                        arg1[9] = ecx_13
                                        ecx_10 = arg1[1]
                                
                                eax_34 = arg1[6]
                                
                                if (eax_34 s<= arg1[8] && eax_34 s< ecx_10)
                                    eax_34 = arg1[7]
                                    
                                    if (eax_34 s<= arg1[9] && eax_34 s< esi_8)
                                        int32_t ecx_14 = arg1[0x23]
                                        ebx_4.b = 0
                                        
                                        if (ecx_14 == 0 || arg1[0x24] s<= 0 || arg1[0x25] s<= 0)
                                            goto label_72011a
                                        
                                        ebx_4.b = 1
                                        
                                        if (*(arg1 + 0xa1) u> 8)
                                            *(arg1 + 0xa1) = 8
                                        
                                        ecx_14.b = *(arg1 + 0xa1)
                                        eax_34 = 0xffffff01 << ecx_14.b
                                        int32_t ecx_15 = arg1[0x29]
                                        
                                        if (ecx_15 s< eax_34)
                                            arg1[0x29] = eax_34
                                        else if (ecx_15 s> 0xff)
                                            arg1[0x29] = 0xff
                                        
                                        if (arg1[0x29] != eax_34)
                                            ecx_14 = arg1[0x23]
                                        label_72011a:
                                            
                                            if (edx_11.b != 0)
                                                int32_t eax_52 = arg1[0x20]
                                                
                                                if (eax_52 s< 0xffffb1e0)
                                                    arg1[0x20] = 0xffffb1e0
                                                else if (eax_52 s> 0x4e20)
                                                    arg1[0x20] = 0x4e20
                                                
                                                int32_t eax_53 = arg1[0x21]
                                                
                                                if (eax_53 s< 0xffffb1e0)
                                                    arg1[0x21] = 0xffffb1e0
                                                else if (eax_53 s> 0x4e20)
                                                    arg1[0x21] = 0x4e20
                                                
                                                int32_t temp1_1 = mods.dp.d(sx.q(arg1[0x22]), 0xe10)
                                                arg1[0x22] = temp1_1
                                                
                                                if (temp1_1 s< 0)
                                                    arg1[0x22] = temp1_1 + 0xe10
                                            
                                            if (*(arg1 + 0xc5) != 0)
                                                if (ebx_4.b != 0)
                                                    arg1[0x57] = arg1[0x24]
                                                    arg1[0x58] = arg1[0x25]
                                                    arg1[0x59] = zx.d(arg1[0x28].b)
                                                    arg1[0x5a] = zx.d(*(arg1 + 0xa1))
                                                    arg1[0x5b] = arg1[0x29]
                                                    int32_t eax_61 = arg1[0x25]
                                                    arg1[0x56] = ecx_14
                                                    int32_t ecx_16 = arg1[0x24]
                                                    arg1[0x62] = ecx_16
                                                    arg1[0x63] = eax_61 * ecx_16
                                                
                                                eax_34.b = arg1[0x1e].b
                                                uint32_t ecx_17 = zx.d(eax_34.b)
                                                char var_6_1 = eax_34.b
                                                arg1[0x3f] = ecx_17 << 2
                                                arg1[0x40] = *((ecx_17 << 2) + &data_4e3da80)
                                                int32_t eax_64 = arg1[0x1f]
                                                arg1[0x41] = ecx_17
                                                
                                                if (eax_64 s< 0xffffff01)
                                                    arg1[0x1f] = 0xffffff01
                                                else if (eax_64 s> 0xff)
                                                    arg1[0x1f] = 0xff
                                                
                                                int32_t eax_65 = arg1[0x2b]
                                                
                                                if (eax_65 s< 0xffffff01)
                                                    arg1[0x2b] = 0xffffff01
                                                else if (eax_65 s> 0xff)
                                                    arg1[0x2b] = 0xff
                                                
                                                int32_t eax_66 = arg1[0x2c]
                                                
                                                if (eax_66 s< 0xffffff01)
                                                    arg1[0x2c] = 0xffffff01
                                                else if (eax_66 s> 0xff)
                                                    arg1[0x2c] = 0xff
                                                
                                                int32_t eax_67 = arg1[0x2d]
                                                
                                                if (eax_67 s< 0xffffff01)
                                                    arg1[0x2d] = 0xffffff01
                                                else if (eax_67 s> 0xff)
                                                    arg1[0x2d] = 0xff
                                                
                                                int32_t ebx_5 = arg1[0x1f]
                                                int32_t eax_78
                                                
                                                if (ebx_5 s< 0)
                                                    int32_t esi_10 = arg1[0x2b]
                                                    int32_t esi_11 = arg1[0x2c]
                                                    arg1[0x45] =
                                                        (esi_10 + 0xff) * ebx_5 s/ 0xff + esi_10
                                                    int32_t esi_12 = arg1[0x2d]
                                                    arg1[0x46] =
                                                        (esi_11 + 0xff) * ebx_5 s/ 0xff + esi_11
                                                    eax_78 =
                                                        (esi_12 + 0xff) * ebx_5 s/ 0xff + esi_12
                                                else if (ebx_5 s<= 0)
                                                    arg1[0x45] = arg1[0x2b]
                                                    arg1[0x46] = arg1[0x2c]
                                                    eax_78 = arg1[0x2d]
                                                else
                                                    int32_t esi_13 = arg1[0x2b]
                                                    int32_t esi_14 = arg1[0x2c]
                                                    arg1[0x45] =
                                                        (0xff - esi_13) * ebx_5 s/ 0xff + esi_13
                                                    int32_t esi_15 = arg1[0x2d]
                                                    arg1[0x46] =
                                                        (0xff - esi_14) * ebx_5 s/ 0xff + esi_14
                                                    eax_78 =
                                                        (0xff - esi_15) * ebx_5 s/ 0xff + esi_15
                                                
                                                arg1[0x47] = eax_78
                                                
                                                if (var_c_1 == 2)
                                                    arg1[0x45] = neg.d(arg1[0x45])
                                                    arg1[0x46] = neg.d(arg1[0x46])
                                                    arg1[0x47] = neg.d(arg1[0x47])
                                                
                                                int32_t eax_101 = arg1[0x45]
                                                int32_t eax_103
                                                
                                                if (eax_101 s< 0)
                                                    eax_103 = *((eax_101 << 2) + &data_4e3de7c)
                                                    arg1[0x48] = 0
                                                else
                                                    eax_103 = *(&data_4e3de7c - (eax_101 << 2))
                                                    arg1[0x48] = 0xff
                                                
                                                arg1[0x4b] = eax_103
                                                int32_t eax_104 = arg1[0x46]
                                                int32_t eax_106
                                                
                                                if (eax_104 s< 0)
                                                    eax_106 = *((eax_104 << 2) + &data_4e3de7c)
                                                    arg1[0x49] = 0
                                                else
                                                    eax_106 = *(&data_4e3de7c - (eax_104 << 2))
                                                    arg1[0x49] = 0xff
                                                
                                                int32_t ebx_6 = arg1[0x47]
                                                arg1[0x4c] = eax_106
                                                int32_t eax_108
                                                
                                                if (ebx_6 s< 0)
                                                    eax_108 = *((ebx_6 << 2) + &data_4e3de7c)
                                                    arg1[0x4a] = 0
                                                else
                                                    eax_108 = *(&data_4e3de7c - (ebx_6 << 2))
                                                    arg1[0x4a] = 0xff
                                                
                                                arg1[0x4d] = eax_108
                                                arg1[0x4e] = zx.d(arg1[0x2a].b)
                                                arg1[0x4f] = zx.d(*(arg1 + 0xa9))
                                                arg1[0x50] = zx.d(*(arg1 + 0xaa))
                                                uint32_t eax_111
                                                eax_111.b = *(arg1 + 0xab)
                                                arg1[0x51] =
                                                    *(&data_4e3de7c - (zx.d(eax_111.b) << 2))
                                                int32_t eax_113
                                                eax_113.b = *(arg1 + 0x7a)
                                                void* edx_32
                                                edx_32.b = *(arg1 + 0x79)
                                                arg1[0x52] =
                                                    *(&data_4e3de7c - (zx.d(eax_113.b) << 2))
                                                arg1[0x53] = (0xff - zx.d(edx_32.b)) << 2
                                                
                                                if (var_c_1 == 4)
                                                    arg1[0x64] = arg1[0x2e]
                                                    arg1[0x65] = arg1[0x2f]
                                                    arg1[0x66] = arg1[0x30]
                                                
                                                eax_34.b = arg1[0x14] != 0
                                                arg1[0x67].b = eax_34.b
                                                eax_34.b = var_6_1 != 0xff
                                                bool cond:20_1 = arg1[0x45] != 0
                                                *(arg1 + 0x19d) = eax_34.b
                                                
                                                if (cond:20_1 || arg1[0x46] != 0 || ebx_6 != 0)
                                                    eax_34.b = 1
                                                else
                                                    eax_34.b = 0
                                                
                                                *(arg1 + 0x19e) = eax_34.b
                                                eax_34.b = eax_111.b != 0
                                                *(arg1 + 0x19f) = eax_34.b
                                                eax_34.b = eax_113.b != 0
                                                arg1[0x68].b = eax_34.b
                                                eax_34.b = edx_32.b != 0
                                                bool cond:24_1 = arg1[0x23] == 0
                                                *(arg1 + 0x1a1) = eax_34.b
                                                
                                                if (cond:24_1 || arg1[0x29] == 0xff)
                                                    eax_34.b = 0
                                                else
                                                    eax_34.b = 1
                                                
                                                *(arg1 + 0x1a2) = eax_34.b
                                                
                                                if (var_c_1 s>= 0 && var_c_1 s<= 6)
                                                    arg1[0x69] = var_c_1
                                                    eax_34.b = 1
                                                    arg1[0x6a].b = 1
                                                    return eax_34
                                                
                                                arg1[0x69] = 0
                                                arg1[0x6a].b = 1
                                            
                                            eax_34.b = 1
                                            return eax_34
                    
                    eax_34.b = 0
                    return eax_34
                
                int32_t ecx_2
                ecx_2.b = *(arg1 + 0x57)
                
                if (ecx_2.b != 0)
                    int32_t eax_5
                    eax_5.b = ecx_2.b != 0xff
                    arg1[0x14] = eax_5
                    goto label_71fe09
        else
            eax = zx.d(eax.b) * zx.d(edx) s/ 0xff
            arg1[0x1e].b = eax.b
            
            if (eax.b != 0)
                goto label_71fdc9

eax.b = 0
return eax
