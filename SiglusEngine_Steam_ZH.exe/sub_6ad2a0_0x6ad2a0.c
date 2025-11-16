// 函数: sub_6ad2a0
// 地址: 0x6ad2a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = arg4 - arg1
int32_t edi = arg2

if (ecx_1 s<= edi)
    if (ecx_1 s> 0)
        return ecx_1
    
    return 0

int16_t* ecx_5 = arg1 + (((edi s>> 1) - 1) << 1)

if (ecx_5 u>= arg3)
    int32_t eax_1 = arg4
    
    if (ecx_5 u< eax_1)
        int32_t esi_1 = sx.d(*ecx_5)
        
        if (esi_1 s< 0)
            esi_1 = neg.d(esi_1)
        
        void* ecx_6 = ecx_5 - 2
        int32_t ebx_1 = 0
        int32_t edx_1 = 0
        
        while (ecx_6 u>= arg3)
            if (ecx_6 u>= eax_1)
                break
            
            int32_t eax_2 = sx.d(*ecx_6)
            
            if (eax_2 s< 0)
                eax_2 = neg.d(eax_2)
            
            if (eax_2 s< esi_1)
                esi_1 = eax_2
                ebx_1 = edx_1 + 1
            
            eax_1 = arg4
            edx_1 += 1
            ecx_6 -= 2
            
            if (edx_1 s>= 0xa)
                break
        
        if (ebx_1 != 0)
            edi -= ebx_1 * 2
            arg2 = edi
        
        int32_t eax_5 = edi s>> 1
        void* ecx_8 = arg1 + (eax_5 << 1)
        
        if (ecx_8 - 2 u>= arg3 && ecx_8 - 2 u< arg4)
            int32_t esi_2 = sx.d(*(ecx_8 - 2))
            int32_t ebx_2
            
            if (esi_2 s>= 0)
                ebx_2 = 0
            else
                esi_2 = neg.d(esi_2)
                ebx_2 = 1
            
            if (esi_2 s> 0)
                int32_t var_8_1 = esi_2
                int32_t eax_8 = edi s>> 3
                int32_t edx_2 = 1
                int32_t eax_9 = arg3
                int32_t var_10_1 = 0
                
                if (ecx_8 u>= eax_9)
                    while (ecx_8 u< arg4)
                        int32_t eax_10 = sx.d(*ecx_8)
                        
                        if (eax_10 s< 0)
                            if (ebx_2 == 0)
                                eax_9 = arg3
                                break
                                break
                            
                            eax_10 = neg.d(eax_10)
                        else if (ebx_2 == 1)
                            eax_9 = arg3
                            break
                            break
                        
                        if (eax_10 s< var_8_1)
                            var_10_1 = edx_2
                            var_8_1 = eax_10
                            
                            if (eax_10 == 0)
                                eax_9 = arg3
                                break
                        
                        eax_9 = arg3
                        edx_2 += 1
                        
                        if (edx_2 s>= eax_8)
                            break
                        
                        ecx_8 += 2
                        
                        if (ecx_8 u< eax_9)
                            break
                
                int32_t edx_3 = 1
                int32_t var_14_1 = 0
                int16_t* ecx_10 = arg1 - 4 + (eax_5 << 1)
                
                if (ecx_10 u>= eax_9)
                    int16_t* ecx_11 = ecx_10
                    
                    while (ecx_11 u< arg4)
                        int32_t eax_11 = sx.d(*ecx_11)
                        
                        if (eax_11 s< 0)
                            if (ebx_2 == 0)
                                break
                            
                            eax_11 = neg.d(eax_11)
                        else if (ebx_2 == 1)
                            break
                        
                        if (eax_11 s< esi_2)
                            var_14_1 = edx_3
                            esi_2 = eax_11
                            
                            if (eax_11 == 0)
                                break
                        
                        edx_3 += 1
                        
                        if (edx_3 s>= eax_8)
                            break
                        
                        ecx_11 -= 2
                        
                        if (ecx_11 u< arg3)
                            break
                
                if (var_8_1 s> esi_2)
                    return arg2 - var_14_1 * 2
                
                return arg2 + (var_10_1 << 1)

return edi
