// 函数: sub_480de5
// 地址: 0x480de5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi
int32_t var_c = edi
data_b98070 = 0
data_b9806c = 0
data_b98064 = &data_b97c70
data_b98060 = 0xb974a0
data_b97c70 = 0

while (true)
    int32_t eax_1 = 0xffffffff
    data_b98068 = 0xffffffff
    
    while (true)
        int32_t ecx_9 = sx.d(*((esi << 1) + &data_b54ef0))
        
        if (ecx_9 != 0)
            goto label_480f07
        
        if (eax_1 s< 0)
            eax_1 = sub_4801b8(data_b98078)
            data_b98068 = eax_1
            
            if (eax_1 s< 0)
                eax_1 = 0
                data_b98068 = 0
        
        int32_t ecx_2 = sx.d(*((esi << 1) + &data_b55038))
        
        if (ecx_2 == 0)
        label_480eca:
            int32_t ecx_6 = sx.d(*((esi << 1) + &data_b55140))
            int32_t eax_18
            
            if (ecx_6 == 0)
            label_481200:
                
                if (data_b9806c == 0)
                    sub_47e196(data_b98078, "syntax error")
                    data_b98070 += 1
                    eax_1 = data_b98068
                
                if (data_b9806c s< 3)
                    data_b9806c = 3
                    void* ecx_18 = data_b98064
                    int32_t eax_20
                    
                    while (true)
                        eax_20 = sx.d(*((sx.d(*ecx_18) << 1) + &data_b55038))
                        
                        if (eax_20 != 0 && eax_20 + 0x100 s>= 0 && eax_20 + 0x100 s<= 0x127
                                && *(((eax_20 + 0x100) << 1) + &data_b554d8) == 0x100)
                            break
                        
                        if (ecx_18 u<= &data_b97c70)
                            return 1
                        
                        ecx_18 -= 2
                        data_b98060 -= 4
                        data_b98064 = ecx_18
                    
                    if (ecx_18 u< 0xb98056)
                        esi = sx.d(*(((eax_20 + 0x100) << 1) + &data_b55288))
                        data_b98064 = ecx_18 + 2
                        *(ecx_18 + 2) = esi.w
                        eax_18 = data_b98058
                        goto label_481299
                    
                    sub_47e196(data_b98078, "yacc stack overflow")
                else if (eax_1 != 0)
                    break
            else
                int32_t ecx_7 = ecx_6 + eax_1
                
                if (ecx_6 + eax_1 s< 0 || ecx_7 s> 0x127)
                    goto label_481200
                
                int32_t ecx_8 = ecx_7 * 2
                
                if (sx.d(*(ecx_8 + &data_b554d8)) != eax_1)
                    goto label_481200
                
                ecx_9 = sx.d(*(ecx_8 + &data_b55288))
            label_480f07:
                int32_t edi_1 = ecx_9 * 2
                int32_t esi_1 = sx.d(*(edi_1 + 0xb54e70))
                int32_t ebx_2 = esi_1 << 2
                data_b9805c = *(data_b98060 - ebx_2 + 4)
                
                if (ecx_9 - 1 u<= 0x3d)
                    uint32_t var_14_1
                    int32_t var_10_1
                    
                    switch (ecx_9)
                        case 1
                            var_10_1 = 0
                            var_14_1 = 0
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
                            var_10_1 = 1
                            var_14_1 = 4
                        case 6
                            var_10_1 = 1
                            var_14_1 = 5
                        case 7
                            var_10_1 = 0
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
                            var_10_1 = 1
                            var_14_1 = 0xa
                        case 0xc
                            var_10_1 = 2
                            var_14_1 = 0xb
                        case 0xd
                            var_10_1 = 1
                            var_14_1 = 0xc
                        case 0xe
                            var_10_1 = 2
                            var_14_1 = 0xd
                        case 0xf
                            var_10_1 = 3
                            var_14_1 = 0xe
                        case 0x10
                            var_10_1 = 4
                            var_14_1 = 0xf
                        case 0x11
                            var_10_1 = 5
                            var_14_1 = 0x10
                        case 0x12
                            var_10_1 = 6
                            var_14_1 = 0x11
                        case 0x13
                            var_10_1 = 6
                            var_14_1 = 0x12
                        case 0x14
                            var_10_1 = 6
                            var_14_1 = 0x13
                        case 0x15
                            var_10_1 = 3
                            var_14_1 = 0x14
                        case 0x16
                            var_10_1 = 2
                            var_14_1 = 0x15
                        case 0x17
                            var_10_1 = 3
                            var_14_1 = 0x16
                        case 0x18
                            var_10_1 = 1
                            var_14_1 = 0x17
                        case 0x19
                            var_10_1 = 2
                            var_14_1 = 0x18
                        case 0x1a
                            var_10_1 = 1
                            var_14_1 = 0x19
                        case 0x1b
                            var_10_1 = 1
                            var_14_1 = 0x1a
                        case 0x1c
                            var_10_1 = 1
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
                            var_10_1 = 1
                            var_14_1 = 0x21
                        case 0x21
                            var_10_1 = 2
                            var_14_1 = 0x22
                        case 0x22
                            var_10_1 = 1
                            var_14_1 = 0x23
                        case 0x23
                            var_10_1 = 2
                            var_14_1 = 0x24
                        case 0x24
                            var_10_1 = 1
                            var_14_1 = 0x25
                        case 0x25
                            var_10_1 = 1
                            var_14_1 = 0x26
                        case 0x26
                            var_10_1 = 0
                            var_14_1 = 0x27
                        case 0x27
                            var_10_1 = 0
                            var_14_1 = 0x28
                        case 0x28
                            var_10_1 = 1
                            var_14_1 = 0x29
                        case 0x29
                            var_10_1 = 1
                            var_14_1 = 0x2a
                        case 0x2a
                            var_10_1 = 1
                            var_14_1 = 0x2b
                        case 0x2b
                            var_10_1 = 1
                            var_14_1 = 0x2c
                        case 0x2c
                            var_10_1 = 1
                            var_14_1 = 0x2d
                        case 0x2d
                            var_10_1 = 1
                            var_14_1 = 0x2e
                        case 0x2e
                            var_10_1 = 1
                            var_14_1 = 0x2f
                        case 0x2f
                            var_10_1 = 1
                            var_14_1 = 0x30
                        case 0x30
                            var_10_1 = 1
                            var_14_1 = 0x31
                        case 0x31
                            var_10_1 = 0
                            var_14_1 = 0x32
                        case 0x32
                            var_10_1 = 0
                            var_14_1 = 0x33
                        case 0x33
                            var_10_1 = 0
                            var_14_1 = 0x34
                        case 0x34
                            var_10_1 = 0
                            var_14_1 = 0x35
                        case 0x35
                            var_10_1 = 0
                            var_14_1 = 0x36
                        case 0x36
                            var_10_1 = 0
                            var_14_1 = 0x37
                        case 0x37
                            var_10_1 = 0
                            var_14_1 = 0x38
                        case 0x38
                            var_10_1 = 0
                            var_14_1 = 0x39
                        case 0x39
                            var_10_1 = 0
                            var_14_1 = 0x3a
                        case 0x3a
                            var_10_1 = 0
                            var_14_1 = 0x3b
                        case 0x3b
                            var_10_1 = 0
                            var_14_1 = 0x3c
                        case 0x3c
                            var_10_1 = 0
                            var_14_1 = 0x3d
                        case 0x3d
                            var_10_1 = 0
                            var_14_1 = 0x3e
                        case 0x3e
                            var_10_1 = 0
                            var_14_1 = 0x3f
                    
                    sub_480838(data_b98078, var_14_1, var_10_1)
                
                int32_t ecx_11 = sx.d(*(edi_1 + 0xb54df0))
                int16_t* eax_11 = data_b98064 + (neg.d(esi_1) << 1)
                data_b98064 = eax_11
                int32_t edx_3 = sx.d(*eax_11)
                data_b98060 -= ebx_2
                
                if (edx_3 == 0 && ecx_11 == 0)
                    data_b98064 = &eax_11[1]
                    esi = 0x10
                    eax_11[1] = 0x10
                    data_b98060 += 4
                    *data_b98060 = data_b9805c
                    eax_1 = data_b98068
                    bool cond:1_1 = eax_1 != 0
                    
                    if (eax_1 s< 0)
                        eax_1 = sub_4801b8(data_b98078)
                        cond:1_1 = eax_1 != 0
                        data_b98068 = eax_1
                        
                        if (eax_1 s< 0)
                            eax_1 = 0
                            data_b98068 = 0
                            cond:1_1 = false
                    
                    if (not(cond:1_1))
                        return 0
                    
                    continue
                
                int32_t esi_3 = ecx_11 * 2
                int32_t ecx_14 = sx.d(*(esi_3 + 0xb55248))
                
                if (ecx_14 == 0)
                    esi = sx.d(*(esi_3 + 0xb54ff8))
                else
                    int32_t ecx_15 = ecx_14 + edx_3
                    
                    if (ecx_14 + edx_3 s< 0 || ecx_15 s> 0x127)
                        esi = sx.d(*(esi_3 + 0xb54ff8))
                    else
                        int32_t ecx_16 = ecx_15 * 2
                        
                        if (sx.d(*(ecx_16 + &data_b554d8)) != edx_3)
                            esi = sx.d(*(esi_3 + 0xb54ff8))
                        else
                            esi = sx.d(*(ecx_16 + &data_b55288))
                
                if (eax_11 u>= 0xb98056)
                    sub_47e196(data_b98078, "yacc stack overflow")
                else
                    data_b98064 = &eax_11[1]
                    eax_11[1] = esi.w
                    eax_18 = data_b9805c
                label_481299:
                    data_b98060 += 4
                    *data_b98060 = eax_18
                    eax_1 = data_b98068
                    continue
        else
            int32_t ecx_3 = ecx_2 + eax_1
            
            if (ecx_2 + eax_1 s< 0 || ecx_3 s> 0x127)
                goto label_480eca
            
            int32_t ecx_4 = ecx_3 * 2
            
            if (sx.d(*(ecx_4 + &data_b554d8)) != eax_1)
                goto label_480eca
            
            void* eax_2 = data_b98064
            
            if (eax_2 u< 0xb98056)
                esi = sx.d(*(ecx_4 + &data_b55288))
                data_b98064 = eax_2 + 2
                *(eax_2 + 2) = esi.w
                data_b98060 += 4
                *data_b98060 = data_b98058
                eax_1 = 0xffffffff
                bool cond:3_1 = data_b9806c s<= 0
                data_b98068 = 0xffffffff
                
                if (cond:3_1)
                    continue
                else
                    data_b9806c -= 1
                    continue
            
            sub_47e196(data_b98078, "yacc stack overflow")
        
        return 1
