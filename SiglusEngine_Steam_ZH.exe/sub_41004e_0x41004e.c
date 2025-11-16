// 函数: sub_41004e
// 地址: 0x41004e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    bool cond:0
    
    if (not(cond:0))
        int32_t edi = arg2[6]
        int32_t ebx_1 = arg2[5]
        
        while (true)
            arg2[4] += 1
            arg3 = &arg3[3]
            
            if (arg2[4] u>= edi)
                void* edx_1 = arg2[-4]
                int32_t* ecx = arg2[-2]
                
                while (true)
                    ecx = &ecx[5]
                    int32_t temp4_1 = arg2[-7]
                    arg2[-7] -= 1
                    arg2[-2] = ecx
                    
                    if (temp4_1 == 1)
                        int32_t ecx_2 = ebx_1 * 0xc
                        __builtin_memset(__builtin_memset(arg2[9], 0xffffffff, ecx_2 u>> 2 << 2), 
                            0xff, ecx_2 & 3)
                        int32_t eax_1 = arg2[7]
                        
                        if (eax_1 u> 0)
                            int32_t* edx_2 = edx_1 + 4
                            arg2[-7] = edx_2
                            arg2[-8] = eax_1
                            int32_t i
                            
                            do
                                int32_t eax_2 = *edx_2
                                int32_t esi_2 = edx_2[1] + eax_2
                                int32_t edi_3 = eax_2
                                arg2[6] = esi_2
                                arg2[4] = edi_3
                                
                                if (edi_3 u< esi_2)
                                    int32_t edx_3 = arg2[2]
                                    int32_t eax_4 = edi_3 * 0xc
                                    void* ebx_4 = &arg2[-0xf] - eax_4 - arg2[9]
                                    arg2[5] = arg2[9] + eax_4
                                    int32_t* ecx_8 = eax_4 + edx_3 + 8
                                    int32_t eax_6 = arg2[9] - edx_3
                                    arg2[-2] = ecx_8
                                    arg2[-5] = ebx_4
                                    arg2[-0xc] = eax_6
                                    
                                    do
                                        int32_t edx_4 = ecx_8[-2]
                                        
                                        if (edx_4 != arg2[0xa])
                                            int32_t eax_7 = arg2[8]
                                            int32_t eax_8
                                            int32_t edx_7
                                            
                                            if (eax_7 == 0)
                                                eax_8 = *ecx_8
                                                arg2[-0xf] = edx_4
                                                edx_7 = ecx_8[-1]
                                            else
                                                int32_t esi_3 = *ecx_8
                                                arg2[-0xf] = *(eax_7 + (edx_4 << 2))
                                                edx_7 = *(eax_7 + (ecx_8[-1] << 2))
                                                eax_8 = *(eax_7 + (esi_3 << 2))
                                                esi_2 = arg2[6]
                                            
                                            bool cond:7_1 = arg2[-0xf] == edx_7
                                            arg2[-0xe] = edx_7
                                            arg2[-0xd] = eax_8
                                            
                                            if (cond:7_1 || arg2[-0xf] == eax_8 || edx_7 == eax_8)
                                                int32_t* eax_18 = arg2[5]
                                                *eax_18 = 0xffffffff
                                                eax_18[1] = 0xffffffff
                                                *(arg2[-0xc] + ecx_8) = 0xffffffff
                                            else
                                                int32_t* esi_4 = arg2[5]
                                                int32_t edi_4 = 1
                                                
                                                do
                                                    if (*esi_4 == 0xffffffff)
                                                        int32_t var_4_1 = arg2[0xb]
                                                        int32_t ebx_5 = *(esi_4 + ebx_4)
                                                        float* var_8_1 = arg2[3]
                                                        int32_t var_10_1 = arg2[-3]
                                                        int32_t* var_14_1 = arg2[-1]
                                                        arg2[-4] = arg2[modu.dp.d(0:edi_4, 3) - 0xf]
                                                        int32_t eax_13 = sub_40db19(arg2[-4], 
                                                            ebx_5, 
                                                            arg2[modu.dp.d(0:(edi_4 + 1), 3)
                                                                - 0xf], 
                                                            var_14_1, var_10_1, 0xffffffff, 
                                                            var_8_1, var_4_1)
                                                        *esi_4 = eax_13
                                                        
                                                        if (eax_13 != 0xffffffff)
                                                            sub_40af74(ebx_5, arg2[-4], arg2[4], 
                                                                arg2[-1], arg2[-3])
                                                            int32_t ecx_9 = 0
                                                            
                                                            if (edi_4 - 1 u<= 0)
                                                            label_4101b0:
                                                                int32_t eax_15 = *esi_4
                                                                int32_t edx_13 = arg2[2]
                                                                arg2[7] = 0
                                                                int32_t* ecx_11 = edx_13 + eax_15 * 0xc
                                                                
                                                                do
                                                                    int32_t ebx_7 = arg2[8]
                                                                    int32_t edx_14 = *ecx_11
                                                                    
                                                                    if (ebx_7 != 0)
                                                                        edx_14 = *(ebx_7 + (edx_14 << 2))
                                                                    
                                                                    if (edx_14 == arg2[-4])
                                                                        break
                                                                    
                                                                    arg2[7] += 1
                                                                    ecx_11 = &ecx_11[1]
                                                                while (arg2[7] u< 3)
                                                                
                                                                *(arg2[9]
                                                                    + ((eax_15 * 3 + arg2[7]) << 2)) =
                                                                    arg2[4]
                                                            else
                                                                while (*esi_4
                                                                        != *(arg2[5] + (ecx_9 << 2)))
                                                                    ecx_9 += 1
                                                                    
                                                                    if (ecx_9 u>= edi_4 - 1)
                                                                        goto label_4101b0
                                                                
                                                                *esi_4 = 0xffffffff
                                                        
                                                        ecx_8 = arg2[-2]
                                                    
                                                    ebx_4 = arg2[-5]
                                                    edi_4 += 1
                                                    esi_4 = &esi_4[1]
                                                while (edi_4 - 1 u< 3)
                                                
                                                edi_3 = arg2[4]
                                                esi_2 = arg2[6]
                                        
                                        arg2[5] += 0xc
                                        edi_3 += 1
                                        ebx_4 -= 0xc
                                        ecx_8 = &ecx_8[3]
                                        arg2[4] = edi_3
                                        arg2[-5] = ebx_4
                                        arg2[-2] = ecx_8
                                    while (edi_3 u< esi_2)
                                    
                                    edx_2 = arg2[-7]
                                
                                edx_2 = &edx_2[5]
                                i = arg2[-8]
                                arg2[-8] -= 1
                                arg2[-7] = edx_2
                            while (i != 1)
                        
                        if (arg2[-0xa] s> arg2[-9])
                            arg2[-6] = 0x80004005
                        
                        j__free(arg2[-1])
                        j__free(arg2[-0xb])
                        *arg2
                        return arg2[-6]
                    
                    int32_t eax_22 = *ecx
                    edi = ecx[1] + eax_22
                    arg2[6] = edi
                    arg2[4] = eax_22
                    
                    if (eax_22 u< edi)
                        arg3 = arg2[2] + eax_22 * 0xc + 8
                        break
            
            int32_t ecx_17 = arg3[-2]
            
            if (ecx_17 != arg2[0xa])
                int32_t eax_24 = arg2[8]
                int32_t eax_25
                int32_t ecx_20
                
                if (eax_24 == 0)
                    eax_25 = *arg3
                    arg2[-0xf] = ecx_17
                    ecx_20 = arg3[-1]
                else
                    int32_t edx_16 = *arg3
                    arg2[-0xf] = *(eax_24 + (ecx_17 << 2))
                    ecx_20 = *(eax_24 + (arg3[-1] << 2))
                    eax_25 = *(eax_24 + (edx_16 << 2))
                
                bool cond:3_1 = arg2[-0xf] == ecx_20
                arg2[-0xe] = ecx_20
                arg2[-0xd] = eax_25
                
                if (not(cond:3_1) && arg2[-0xf] != eax_25)
                    if (ecx_20 != eax_25)
                        break
        
        arg1 = 1
        arg4 = &arg2[-0xf]
        arg2[-5] = 3
    
    int32_t var_8_4 = arg2[-3]
    int32_t var_c_2 = arg2[-0xb]
    int32_t var_10_3 = arg2[-1]
    arg2[-8] = arg1 + 1
    sub_40af29(*arg4, arg2[modu.dp.d(0:arg1, 3) - 0xf], arg2[modu.dp.d(0:(arg1 + 1), 3) - 0xf], 
        arg2[4], var_10_3, var_c_2, var_8_4, &arg2[-0xa])
    arg1 = arg2[-8]
    arg4 += 4
    int32_t temp3_1 = arg2[-5]
    arg2[-5] -= 1
    cond:0 = temp3_1 != 1
