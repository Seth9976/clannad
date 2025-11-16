// 函数: sub_9a59c0
// 地址: 0x9a59c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
int32_t eax = 0
int32_t edi = arg5

if (edi s> 0)
    do
        if (*(arg4 + (eax << 2)) != 0)
            ecx += 1
        
        eax += 1
    while (eax s< edi)
    
    if (ecx != 0)
        int32_t* edx_3 = *arg2
        int32_t ebx = *(arg1 + 0x48)
        int32_t eax_1 = edx_3[3]
        int32_t ecx_1 = edx_3[2]
        int32_t temp0 = divs.dp.d(sx.q(edx_3[1] - *edx_3), ecx_1)
        
        if (ebx + 8 s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_6 = _malloc(8)
                int32_t ecx_3 = *(arg1 + 0x54)
                *(arg1 + 0x50) += ebx
                eax_6[1] = ecx_3
                *eax_6 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_6
            
            *(arg1 + 0x4c) = 8
            *(arg1 + 0x44) = _malloc(8)
            *(arg1 + 0x48) = 0
        
        int32_t eax_8 = *(arg1 + 0x48)
        void* ecx_5 = *(arg1 + 0x44)
        char** result = ecx_5 + eax_8
        int32_t edx_7 = temp0 << 2
        *(arg1 + 0x48) = eax_8 + 8
        uint32_t ebx_2 = (edx_7 + 7) & 0xfffffff8
        
        if (eax_8 + 8 + ebx_2 s> *(arg1 + 0x4c))
            if (ecx_5 != 0)
                int32_t* eax_11 = _malloc(8)
                *(arg1 + 0x50) += eax_8 + 8
                eax_11[1] = *(arg1 + 0x54)
                *eax_11 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_11
            
            *(arg1 + 0x4c) = ebx_2
            *(arg1 + 0x44) = _malloc(ebx_2)
            *(arg1 + 0x48) = 0
        
        int32_t eax_13 = *(arg1 + 0x48)
        char* ecx_10 = *(arg1 + 0x44) + eax_13
        *(arg1 + 0x48) = eax_13 + ebx_2
        *result = ecx_10
        _memset(ecx_10, 0, edx_7)
        int32_t var_20_1 = 0
        int32_t eax_19 = divs.dp.d(sx.q(*edx_3), edi)
        arg5 = eax_19
        
        if (temp0 s> 0)
            bool cond:1_1
            
            do
                int32_t ecx_13 = 0
                int32_t ebx_3 = 0
                int32_t esi_1 = 0
                int32_t var_10_1 = 0
                
                if (ecx_1 s> 0)
                    int32_t edx_11 = *arg3
                    int32_t var_24_1 = edx_11
                    
                    do
                        int32_t eax_21
                        int32_t edx_12
                        edx_12:eax_21 = sx.q(*(edx_11 + (eax_19 << 2)))
                        int32_t eax_23 = (eax_21 ^ edx_12) - edx_12
                        
                        if (eax_23 s> esi_1)
                            esi_1 = eax_23
                        
                        int32_t esi_2 = 1
                        
                        if (edi s> 1)
                            do
                                int32_t eax_27
                                int32_t edx_13
                                edx_13:eax_27 = sx.q(*(arg3[esi_2] + (arg5 << 2)))
                                int32_t eax_29 = (eax_27 ^ edx_13) - edx_13
                                
                                if (eax_29 s> ecx_13)
                                    ecx_13 = eax_29
                                
                                esi_2 += 1
                            while (esi_2 s< edi)
                            
                            ebx_3 = var_10_1
                        
                        ebx_3 += edi
                        eax_19 = arg5 + 1
                        edx_11 = var_24_1
                        arg5 = eax_19
                        var_10_1 = ebx_3
                    while (ebx_3 s< ecx_1)
                
                int32_t edx_14 = 0
                
                if (eax_1 - 1 s> 0)
                    void* eax_32 = &edx_3[0x286]
                    
                    while (esi_1 s> *(eax_32 - 0x100) || ecx_13 s> *eax_32)
                        edx_14 += 1
                        eax_32 += 4
                        
                        if (edx_14 s>= eax_1 - 1)
                            break
                
                *(*result + (var_20_1 << 2)) = edx_14
                cond:1_1 = var_20_1 + 1 s< temp0
                var_20_1 += 1
                eax_19 = arg5
            while (cond:1_1)
        
        arg2[0xa] += 1
        return result

return 0
