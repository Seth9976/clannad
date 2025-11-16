// 函数: sub_6e9c50
// 地址: 0x6e9c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg4
int32_t i = 0
int32_t i_1 = 0
int32_t var_24 = 0
int32_t var_2c = ecx + 0x140
void* result

do
    int32_t j = 0
    int32_t eax_1 = i << 2
    int32_t j_1 = 0
    
    do
        int32_t ebx_1 = 0
        int32_t var_1c_1 = 0
        void* result_2 = nullptr
        result = ecx + (var_24 + j) * 0xc
        int32_t ecx_1 = *(result + 0x140)
        void* result_1 = result
        
        if (ecx_1 s>= 0)
            void* var_20_1 = nullptr
            void* eax_6 = var_2c + j * 0xc
            int32_t edi_2 = *((i << 2) + 0xadc134)
            int32_t edi_3 = arg3
            
            do
                int128_t* eax_10 = *(result_1 + 0x148) + var_20_1
                int128_t var_9c = *eax_10
                int128_t var_8c_1 = eax_10[1]
                int128_t var_7c_1 = eax_10[2]
                int128_t var_6c_1 = eax_10[3]
                int32_t eax_11
                
                if (result_2 != ecx_1)
                    eax_11 = *(*(arg4 + (var_24 + 0x1b + j) * 0xc) + (result_2 << 2)) + ebx_1
                else
                    eax_11 = ebx_1 + 1
                
                int32_t var_3c_1 = 0
                int32_t ecx_4 = ebx_1 * 3
                int32_t var_40_1 = ebx_1 * 6
                int32_t var_28_1 = ecx_4
                int32_t var_34_1 = eax_11 - ebx_1
                int32_t var_44_1 = (j << 3) + ebx_1 * 0x18 + edi_3
                int32_t* edi_4 = edi_3 + ((i_1 + ((ecx_4 + j) << 1)) << 2)
                int32_t* var_10_1 = edi_4
                
                while (true)
                    int32_t ecx_7 = zx.d(*(arg4 + (ebx_1 << 1))) * zx.d(var_9c.b)
                    
                    if (arg2 != 0)
                        *(arg2 + (ebx_1 << 2)) = ecx_7 u/ 0xa0
                    
                    int32_t edx_2
                    edx_2.w = edi_2.w
                    uint32_t esi_5 = (ecx_7 u/ 0x64) << 2
                    int32_t ecx_9
                    ecx_9.w = neg.w(neg.d(sbb.d(ecx_7, ecx_7, 0x1000 u< esi_5)).w)
                    ecx_9.w &= 0x1000 - esi_5.w
                    edx_2.w -= ecx_9.w
                    edx_2.w -= esi_5.w
                    int32_t ecx_14
                    ecx_14.w = edi_2.w
                    edx_2.w &= neg.w((neg.d(sbb.d(0x1000 - esi_5, 0x1000 - esi_5, 
                        edi_2 u< (neg.d(neg.d(sbb.d(ecx_9, ecx_9, 0x1000 u< esi_5)))
                            & (0x1000 - esi_5)) + esi_5))).w)
                    ecx_14.w -= edx_2.w
                    void* k = 1
                    **edi_4 = ecx_14.w
                    
                    do
                        int32_t ecx_16 = zx.d(*(&var_9c + zx.d(*(k + 0xadc310))))
                            * zx.d(*(arg4 + (ebx_1 << 1) + 0x80))
                        uint32_t esi_9 = (ecx_16 u/ 0x64) << 2
                        int32_t ecx_18
                        ecx_18.w = neg.w(neg.d(sbb.d(ecx_16, ecx_16, 0x1000 u< esi_9)).w)
                        ecx_18.w &= 0x1000 - esi_9.w
                        int32_t edx_3
                        edx_3.w = *(eax_1 + 0xadc12c)
                        edx_3.w -= ecx_18.w
                        edx_3.w -= esi_9.w
                        int32_t esi_10 = *(eax_1 + 0xadc12c)
                        int32_t ecx_23
                        ecx_23.w = esi_10.w
                        edx_3.w &= neg.w((neg.d(sbb.d(eax_1, eax_1, 
                            esi_10 u< (neg.d(neg.d(sbb.d(ecx_18, ecx_18, 0x1000 u< esi_9)))
                                & (0x1000 - esi_9)) + esi_9))).w)
                        ecx_23.w -= edx_3.w
                        *(*var_10_1 + (k << 1)) = ecx_23.w
                        k += 1
                    while (k s< 0x40)
                    
                    i = i_1
                    int32_t ecx_24 = 0
                    
                    if (i s< 0)
                    label_6e9f30:
                        edi_3 = arg3
                    else
                        int32_t j_2 = j_1
                        
                        while (true)
                            int32_t ebx_2 = 0
                            int32_t j_3 = j_2
                            
                            if (ecx_24 s< i)
                                j_3 = 3
                            
                            if (j_3 s> 0)
                                int32_t* eax_50 = arg3 + ((var_40_1 + ecx_24) << 2)
                                int32_t* var_50_1 = eax_50
                            label_6e9ed6:
                                int32_t k_3 = 0x7c
                                int32_t* esi_13 = *(eax_1 + var_44_1)
                                int32_t* edi_6 = *eax_50
                                int32_t k_1
                                
                                do
                                    if (*esi_13 != *edi_6)
                                        ebx_2 += 1
                                        eax_50 = &var_50_1[2]
                                        var_50_1 = eax_50
                                        
                                        if (ebx_2 s< j_3)
                                            goto label_6e9ed6
                                        
                                        i = i_1
                                        j_2 = j_1
                                        goto label_6e9f28
                                    
                                    esi_13 = &esi_13[1]
                                    edi_6 = &edi_6[1]
                                    k_1 = k_3
                                    k_3 -= 4
                                while (k_1 u>= 4)
                                edi_3 = arg3
                                i = i_1
                                ebx_1 = var_1c_1
                                *var_10_1 = *(edi_3 + ((ecx_24 + ((var_28_1 + ebx_2) << 1)) << 2))
                                break
                            
                        label_6e9f28:
                            ecx_24 += 1
                            
                            if (ecx_24 s> i)
                                ebx_1 = var_1c_1
                                goto label_6e9f30
                    
                    var_44_1 += 0x18
                    ebx_1 += 1
                    var_40_1 += 6
                    var_28_1 += 3
                    var_10_1 = &var_10_1[6]
                    var_3c_1 += 1
                    var_34_1 -= 1
                    var_1c_1 = ebx_1
                    
                    if (ebx_1 s>= eax_11)
                        break
                    
                    int32_t k_2 = 0
                    void* esi_15 = var_20_1 + *(eax_6 + 8)
                    int32_t edi_7 = *(*(eax_6 + 4) + (result_2 << 2))
                    
                    do
                        *(&var_9c + k_2) = (divs.dp.d(
                            sx.q(edi_7 + ((zx.d(*(esi_15 + k_2)) * var_34_1
                                + zx.d(*(esi_15 + k_2 + 0x40)) * var_3c_1) << 1)), 
                            edi_7 * 2)).b
                        k_2 += 1
                    while (k_2 s< 0x40)
                    
                    ebx_1 = var_1c_1
                    edi_4 = var_10_1
                
                var_20_1 += 0x40
                result = result_2 + 1
                j = j_1
                ecx_1 = *(result_1 + 0x140)
                result_2 = result
            while (result s<= ecx_1)
        
        ecx = arg4
        j += 1
        j_1 = j
    while (j s< 3)
    
    var_2c += 0x24
    i += 1
    var_24 += 3
    i_1 = i
while (i s< 2)

return result
