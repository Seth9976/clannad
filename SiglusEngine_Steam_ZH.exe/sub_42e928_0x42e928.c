// 函数: sub_42e928
// 地址: 0x42e928
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi
int32_t var_c = edi
data_b966f0 = 0
data_b966ec = 0
data_b966e4 = &data_b962f0
data_b966e0 = 0xb95b20
data_b962f0 = 0

while (true)
    int32_t eax_1 = 0xffffffff
    data_b966e8 = 0xffffffff
    
    while (true)
        int32_t ecx_9 = sx.d(*((esi << 1) + &data_b4ed10))
        
        if (ecx_9 != 0)
            goto label_42ea4a
        
        if (eax_1 s< 0)
            eax_1 = sub_42db95(data_b96718)
            data_b966e8 = eax_1
            
            if (eax_1 s< 0)
                eax_1 = 0
                data_b966e8 = 0
        
        int32_t ecx_2 = sx.d(*((esi << 1) + &data_b4edd0))
        
        if (ecx_2 == 0)
        label_42ea0d:
            int32_t ecx_6 = sx.d(*((esi << 1) + &data_b4ee70))
            int32_t eax_18
            
            if (ecx_6 == 0)
            label_42ecbc:
                
                if (data_b966ec == 0)
                    sub_42bdbd(data_b96718, "syntax error")
                    data_b966f0 += 1
                    eax_1 = data_b966e8
                
                if (data_b966ec s< 3)
                    data_b966ec = 3
                    void* ecx_18 = data_b966e4
                    int32_t eax_20
                    
                    while (true)
                        eax_20 = sx.d(*((sx.d(*ecx_18) << 1) + &data_b4edd0))
                        
                        if (eax_20 != 0 && eax_20 + 0x100 s>= 0 && eax_20 + 0x100 s<= 0x171
                                && *(((eax_20 + 0x100) << 1) + &data_b4f218) == 0x100)
                            break
                        
                        if (ecx_18 u<= &data_b962f0)
                            return 1
                        
                        ecx_18 -= 2
                        data_b966e0 -= 4
                        data_b966e4 = ecx_18
                    
                    if (ecx_18 u< 0xb966d6)
                        esi = sx.d(*(((eax_20 + 0x100) << 1) + &data_b4ef30))
                        data_b966e4 = ecx_18 + 2
                        *(ecx_18 + 2) = esi.w
                        eax_18 = data_b966d8
                        goto label_42ed55
                    
                    sub_42bdbd(data_b96718, "yacc stack overflow")
                else if (eax_1 != 0)
                    break
            else
                int32_t ecx_7 = ecx_6 + eax_1
                
                if (ecx_6 + eax_1 s< 0 || ecx_7 s> 0x171)
                    goto label_42ecbc
                
                int32_t ecx_8 = ecx_7 * 2
                
                if (sx.d(*(ecx_8 + &data_b4f218)) != eax_1)
                    goto label_42ecbc
                
                ecx_9 = sx.d(*(ecx_8 + &data_b4ef30))
            label_42ea4a:
                int32_t edi_1 = ecx_9 * 2
                int32_t esi_1 = sx.d(*(edi_1 + 0xb4ecb0))
                int32_t ebx_2 = esi_1 << 2
                data_b966dc = *(data_b966e0 - ebx_2 + 4)
                
                if (ecx_9 - 1 u<= 0x2e)
                    void*** var_14_1
                    int32_t var_10_1
                    
                    switch (ecx_9)
                        case 1
                            var_10_1 = 1
                            var_14_1 = nullptr
                        case 2
                            var_10_1 = 1
                            var_14_1 = 1
                        case 3
                            var_10_1 = 1
                            var_14_1 = 2
                        case 4
                            var_10_1 = 2
                            var_14_1 = 3
                        case 5
                            var_10_1 = 0
                            var_14_1 = 4
                        case 6
                            var_10_1 = 0
                            var_14_1 = 5
                        case 7
                            var_10_1 = 1
                            var_14_1 = 6
                        case 8
                            var_10_1 = 1
                            var_14_1 = 7
                        case 9
                            var_10_1 = 1
                            var_14_1 = 8
                        case 0xa
                            var_10_1 = 1
                            var_14_1 = 9
                        case 0xb
                            var_10_1 = 0
                            var_14_1 = 0xa
                        case 0xc
                            var_10_1 = 0
                            var_14_1 = 0xb
                        case 0xd
                            var_10_1 = 0
                            var_14_1 = 0xc
                        case 0xe
                            var_10_1 = 0
                            var_14_1 = 0xd
                        case 0xf
                            var_10_1 = 0
                            var_14_1 = 0xe
                        case 0x10
                            var_10_1 = 1
                            var_14_1 = 0xf
                        case 0x11
                            var_10_1 = 1
                            var_14_1 = 0x10
                        case 0x12
                            var_10_1 = 1
                            var_14_1 = 0x11
                        case 0x13
                            var_10_1 = 1
                            var_14_1 = 0x12
                        case 0x14
                            var_10_1 = 1
                            var_14_1 = 0x13
                        case 0x15
                            var_10_1 = 1
                            var_14_1 = 0x14
                        case 0x16
                            var_10_1 = 1
                            var_14_1 = 0x15
                        case 0x17
                            var_10_1 = 1
                            var_14_1 = 0x16
                        case 0x18
                            var_10_1 = 1
                            var_14_1 = 0x17
                        case 0x19
                            var_10_1 = 2
                            var_14_1 = 0x18
                        case 0x1a
                            var_10_1 = 2
                            var_14_1 = 0x19
                        case 0x1b
                            var_10_1 = 1
                            var_14_1 = 0x1a
                        case 0x1c
                            var_10_1 = 2
                            var_14_1 = 0x1b
                        case 0x1d
                            var_10_1 = 2
                            var_14_1 = 0x1c
                        case 0x1e
                            var_10_1 = 1
                            var_14_1 = 0x1d
                        case 0x1f
                            var_10_1 = 2
                            var_14_1 = 0x1e
                        case 0x20
                            var_10_1 = 2
                            var_14_1 = 0x1f
                        case 0x21
                            var_10_1 = 2
                            var_14_1 = 0x20
                        case 0x22
                            var_10_1 = 2
                            var_14_1 = 0x21
                        case 0x23
                            var_10_1 = 1
                            var_14_1 = 0x22
                        case 0x24
                            var_10_1 = 2
                            var_14_1 = 0x23
                        case 0x25
                            var_10_1 = 2
                            var_14_1 = 0x24
                        case 0x26
                            var_10_1 = 1
                            var_14_1 = 0x25
                        case 0x27
                            var_10_1 = 2
                            var_14_1 = 0x26
                        case 0x28
                            var_10_1 = 1
                            var_14_1 = 0x27
                        case 0x29
                            var_10_1 = 2
                            var_14_1 = 0x28
                        case 0x2a
                            var_10_1 = 1
                            var_14_1 = 0x29
                        case 0x2b
                            var_10_1 = 3
                            var_14_1 = 0x2a
                        case 0x2c
                            var_10_1 = 1
                            var_14_1 = 0x2b
                        case 0x2d
                            var_10_1 = 0
                            var_14_1 = 0x2c
                        case 0x2e
                            var_10_1 = 0
                            var_14_1 = 0x2d
                        case 0x2f
                            var_10_1 = 0
                            var_14_1 = 0x2e
                    
                    sub_42e508(data_b96718, var_14_1, var_10_1)
                
                int32_t ecx_11 = sx.d(*(edi_1 + 0xb4ec50))
                int16_t* eax_11 = data_b966e4 + (neg.d(esi_1) << 1)
                data_b966e4 = eax_11
                int32_t edx_3 = sx.d(*eax_11)
                data_b966e0 -= ebx_2
                
                if (edx_3 == 0 && ecx_11 == 0)
                    data_b966e4 = &eax_11[1]
                    esi = 0xf
                    eax_11[1] = 0xf
                    data_b966e0 += 4
                    *data_b966e0 = data_b966dc
                    eax_1 = data_b966e8
                    bool cond:1_1 = eax_1 != 0
                    
                    if (eax_1 s< 0)
                        eax_1 = sub_42db95(data_b96718)
                        cond:1_1 = eax_1 != 0
                        data_b966e8 = eax_1
                        
                        if (eax_1 s< 0)
                            eax_1 = 0
                            data_b966e8 = 0
                            cond:1_1 = false
                    
                    if (not(cond:1_1))
                        return 0
                    
                    continue
                
                int32_t esi_3 = ecx_11 * 2
                int32_t ecx_14 = sx.d(*(esi_3 + 0xb4ef10))
                
                if (ecx_14 == 0)
                    esi = sx.d(*(esi_3 + 0xb4edb0))
                else
                    int32_t ecx_15 = ecx_14 + edx_3
                    
                    if (ecx_14 + edx_3 s< 0 || ecx_15 s> 0x171)
                        esi = sx.d(*(esi_3 + 0xb4edb0))
                    else
                        int32_t ecx_16 = ecx_15 * 2
                        
                        if (sx.d(*(ecx_16 + &data_b4f218)) != edx_3)
                            esi = sx.d(*(esi_3 + 0xb4edb0))
                        else
                            esi = sx.d(*(ecx_16 + &data_b4ef30))
                
                if (eax_11 u>= 0xb966d6)
                    sub_42bdbd(data_b96718, "yacc stack overflow")
                else
                    data_b966e4 = &eax_11[1]
                    eax_11[1] = esi.w
                    eax_18 = data_b966dc
                label_42ed55:
                    data_b966e0 += 4
                    *data_b966e0 = eax_18
                    eax_1 = data_b966e8
                    continue
        else
            int32_t ecx_3 = ecx_2 + eax_1
            
            if (ecx_2 + eax_1 s< 0 || ecx_3 s> 0x171)
                goto label_42ea0d
            
            int32_t ecx_4 = ecx_3 * 2
            
            if (sx.d(*(ecx_4 + &data_b4f218)) != eax_1)
                goto label_42ea0d
            
            void* eax_2 = data_b966e4
            
            if (eax_2 u< 0xb966d6)
                esi = sx.d(*(ecx_4 + &data_b4ef30))
                data_b966e4 = eax_2 + 2
                *(eax_2 + 2) = esi.w
                data_b966e0 += 4
                *data_b966e0 = data_b966d8
                eax_1 = 0xffffffff
                bool cond:3_1 = data_b966ec s<= 0
                data_b966e8 = 0xffffffff
                
                if (cond:3_1)
                    continue
                else
                    data_b966ec -= 1
                    continue
            
            sub_42bdbd(data_b96718, "yacc stack overflow")
        
        return 1
