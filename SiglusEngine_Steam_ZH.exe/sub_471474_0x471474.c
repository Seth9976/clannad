// 函数: sub_471474
// 地址: 0x471474
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10
int32_t result
int32_t* var_1c
int32_t* var_18
int32_t* esi_6
int32_t edi_12

if ((*(arg1[2] + 0x71) & 0x10) != 0)
    int32_t ebx_2 = arg7
    int32_t eax_14 = sub_745f3f(ebx_2 * 0xc)
    var_10 = eax_14
    
    if (eax_14 != 0)
        sub_46cc96(var_10, ebx_2 * 3)
        int32_t ecx_12 = var_10
        int32_t i = 0
        int32_t edx_4 = ebx_2 << 2
        arg7 = edx_4
        
        do
            (&var_1c)[i] = ecx_12
            i += 1
            ecx_12 += edx_4
        while (i u< 3)
        
        void* esi_8 = ebx_2 & 0xfffff
        void* var_c_2
        var_c_2:2.w = esi_8:2.w | 0x1010
        result = sub_46ea58(arg1, arg3, var_c_2, var_1c, arg6, nullptr, 0, arg2.b)
        
        if (result s>= 0)
            result = sub_46ea58(arg1, arg3, esi_8 | 0x20100000, var_18, arg6, var_1c, 4)
            
            if (result s>= 0)
                int32_t* var_14
                result = sub_46ea58(arg1, arg3, var_c_2, var_14, var_18, nullptr, 8)
                
                if (result s>= 0)
                    int32_t eax_19 = 0
                    
                    if (ebx_2 u> 0)
                        while ((**(*(arg1[2] + 0x14) + (arg6[eax_19] << 2)) & 0x17) != 0)
                            eax_19 += 1
                            
                            if (eax_19 u>= ebx_2)
                                break
                    
                    if (eax_19 == ebx_2)
                        int32_t ecx_18 = 0
                        
                        if (ebx_2 u> 0)
                            do
                                int32_t* eax_22 = *(*(arg1[2] + 0x14) + (var_18[ecx_18] << 2))
                                *eax_22 |= 0x17
                                ecx_18 += 1
                            while (ecx_18 u< ebx_2)
                    
                    if (arg4 != 0)
                        int32_t esi_12
                        int32_t edi_11
                        edi_11, esi_12 = __builtin_memcpy(arg4, var_18, arg7 u>> 2 << 2)
                        __builtin_memcpy(edi_11, esi_12, arg7 & 3)
                    
                    edi_12 = arg5
                    
                    if (edi_12 != 0)
                        esi_6 = var_14
                        goto label_4716d6
                    
                    result = 0
    else
        result = 0x8007000e
else
    int32_t esi_1 = arg7
    int32_t eax_3 = sub_745f3f(esi_1 << 3)
    var_10 = eax_3
    
    if (eax_3 == 0)
        result = 0x8007000e
    else
        sub_46cc96(eax_3, esi_1 * 2)
        int32_t i_1 = 0
        int32_t edx_2 = esi_1 << 2
        arg7 = edx_2
        int32_t ecx_2 = eax_3
        
        do
            (&var_1c)[i_1] = ecx_2
            i_1 += 1
            ecx_2 += edx_2
        while (i_1 u< 2)
        
        int32_t ecx_3 = 0
        int32_t var_c_1 = 4
        
        if (esi_1 u> 0)
            do
                var_c_1 &= *(*(arg1[2] + 0x14))[arg6[ecx_3]] & 4
                ecx_3 += 1
            while (ecx_3 u< esi_1)
        
        int32_t* var_34_1
        int32_t* var_30_2
        void* eax_7
        int32_t esi_2
        
        if (esi_1 u> 0 && var_c_1 == 0)
            int32_t var_2c_3 = 4
            var_30_2 = arg6
            esi_2 = esi_1 & 0xfffff
            var_34_1 = arg6
            eax_7 = esi_2 | 0x20500000
        else
            int32_t var_2c_2 = 4
            esi_2 = esi_1 & 0xfffff
            var_30_2 = nullptr
            var_34_1 = arg6
            eax_7 = esi_2 | 0x10000000
        
        result = sub_46ea58(arg1, arg3, eax_7, var_1c, var_34_1, var_30_2, 4, arg2.b)
        
        if (result s>= 0)
            result = sub_46ea58(arg1, arg3, esi_2 | 0x10100000, var_18, var_1c, nullptr, 8)
            
            if (result s>= 0)
                if (arg4 != 0)
                    int32_t esi_5
                    int32_t edi_9
                    edi_9, esi_5 = __builtin_memcpy(arg4, var_1c, arg7 u>> 2 << 2)
                    __builtin_memcpy(edi_9, esi_5, arg7 & 3)
                
                edi_12 = arg5
                
                if (edi_12 == 0)
                    result = 0
                else
                    esi_6 = var_18
                label_4716d6:
                    int32_t esi_13
                    int32_t edi_13
                    edi_13, esi_13 = __builtin_memcpy(edi_12, esi_6, arg7 u>> 2 << 2)
                    __builtin_memcpy(edi_13, esi_13, arg7 & 3)
                    result = 0
j__free(var_10)
return result
