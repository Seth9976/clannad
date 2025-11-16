// 函数: sub_446e64
// 地址: 0x446e64
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t** edx = arg1
int32_t edi
int32_t var_24 = edi
int16_t* result
uint32_t ecx

if (arg4 == 0)
    ecx = *(*edx + 4)
    result = arg6
else
    result = arg5 + arg4
    ecx = zx.d(*result)

if (arg7 == 0xffffffff)
    int32_t edi_3 = *(*edx + 0x10)
    arg5 = edi_3
    
    if (edi_3 == 0)
        arg5 = 1
else
    arg5 = arg7

if (ecx s>= 0)
    int16_t x87control
    
    if (ecx s<= 1)
    label_447114:
        int16_t* eax_23 = *arg1
        int32_t k_4 = *(eax_23 + 0x14)
        int32_t edx_1 = *eax_23
        result = *(eax_23 + 0x18)
        int32_t esi_12 = 0
        int32_t k_5 = k_4
        arg7 = 0
        
        if (ecx == 3)
            esi_12 = (4 - result) << 2
            arg7 = esi_12
        
        int32_t eax_40
        int32_t* ecx_9
        int32_t i
        
        if (edx_1 == 1)
            ecx_9 = *arg3
            i = *arg6
            int32_t var_14_4 = 0
            eax_40 = *arg2
            
            if (arg5 u> 0)
                while (i != 0)
                    int32_t var_18_7 = 0
                    
                    if (result u> 0)
                        while (i != 0)
                            if (k_4 u> 0)
                                int32_t* esi_16 = ecx_9
                                int32_t k_3 = k_4
                                int32_t k
                                
                                do
                                    *esi_16 = *(eax_40 - ecx_9 + esi_16)
                                    esi_16 = &esi_16[1]
                                    k = k_3
                                    k_3 -= 1
                                while (k != 1)
                                esi_12 = arg7
                                k_4 = k_5
                            
                            ecx_9 = &ecx_9[4]
                            eax_40 += 0x10
                            i -= 1
                            var_18_7 += 1
                            
                            if (var_18_7 u>= result)
                                break
                    
                    var_14_4 += 1
                    eax_40 += esi_12 << 2
                    
                    if (var_14_4 u>= arg5)
                        break
            
        label_4472bd:
            *arg3 = ecx_9
            *arg6 = i
            *arg2 = eax_40
            result = arg1
            *result += 0x1c
        else
            if (edx_1 == 2)
                ecx_9 = *arg3
                i = *arg6
                int32_t var_14_3 = 0
                eax_40 = *arg2
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t var_18_6 = 0
                        
                        if (result u> 0)
                            while (i != 0)
                                if (k_4 u> 0)
                                    int32_t* esi_15 = ecx_9
                                    int32_t k_2 = k_4
                                    int32_t k_1
                                    
                                    do
                                        *esi_15 = *(eax_40 - ecx_9 + esi_15)
                                        esi_15 = &esi_15[1]
                                        k_1 = k_2
                                        k_2 -= 1
                                    while (k_1 != 1)
                                    k_4 = k_5
                                    esi_12 = arg7
                                
                                ecx_9 = &ecx_9[4]
                                eax_40 += 0x10
                                i -= 1
                                var_18_6 += 1
                                
                                if (var_18_6 u>= result)
                                    break
                        
                        var_14_3 += 1
                        eax_40 += esi_12 << 2
                        
                        if (var_14_3 u>= arg5)
                            break
                
                goto label_4472bd
            
            if (edx_1 == 3)
                int32_t* edi_9 = *arg3
                int32_t i_1 = *arg6
                int32_t var_14_2 = 0
                float* esi_14 = *arg2
                
                if (arg5 u> 0)
                    while (i_1 != 0)
                        int32_t var_18_5 = 0
                        
                        if (result u> 0)
                            while (i_1 != 0)
                                int32_t eax_27
                                int16_t x87control_1
                                eax_27, x87control_1 = __ftol(x87control, fconvert.t(*esi_14))
                                *edi_9 = eax_27
                                int32_t eax_28
                                int16_t x87control_2
                                eax_28, x87control_2 = __ftol(x87control_1, fconvert.t(esi_14[1]))
                                edi_9[1] = eax_28
                                int32_t eax_29
                                int16_t x87control_3
                                eax_29, x87control_3 = __ftol(x87control_2, fconvert.t(esi_14[2]))
                                edi_9[2] = eax_29
                                int32_t eax_30
                                eax_30, x87control = __ftol(x87control_3, fconvert.t(esi_14[3]))
                                edi_9[3] = eax_30
                                edi_9 = &edi_9[4]
                                esi_14 = &esi_14[4]
                                i_1 -= 1
                                var_18_5 += 1
                                
                                if (var_18_5 u>= result)
                                    break
                        
                        var_14_2 += 1
                        esi_14 = &esi_14[arg7]
                        
                        if (var_14_2 u>= arg5)
                            break
                
                *arg3 = edi_9
                *arg6 = i_1
                *arg2 = esi_14
                result = arg1
                *result += 0x1c
    else if (ecx == 2)
        int16_t* eax_6 = *edx
        int32_t ecx_1 = *(eax_6 + 0x14)
        int32_t ecx_2 = *(eax_6 + 0x18)
        int32_t eax_7 = *eax_6
        int32_t eax_19
        int32_t* ecx_6
        int32_t i_2
        
        if (eax_7 == 1)
            i_2 = *arg6
            ecx_6 = arg2
            int32_t var_18_4 = 0
            eax_19 = *arg3
            arg4 = *ecx_6
            
            if (arg5 u> 0)
                while (i_2 != 0)
                    arg2 = nullptr
                    
                    if (ecx_1 u> 0)
                        while (i_2 != 0)
                            int32_t esi_8 = 0
                            
                            if (ecx_2 u> 0)
                                int32_t edi_8 = arg2 << 2
                                
                                do
                                    *(eax_19 + (esi_8 << 2)) = *(edi_8 + *ecx_6)
                                    esi_8 += 1
                                    edi_8 += 0x10
                                while (esi_8 u< ecx_2)
                            
                            eax_19 += 0x10
                            i_2 -= 1
                            arg2 += 1
                            
                            if (arg2 u>= ecx_1)
                                break
                    
                    arg4 = &arg4[0x20]
                    var_18_4 += 1
                    
                    if (var_18_4 u>= arg5)
                        break
            
        label_4470fa:
            *arg3 = eax_19
            *arg6 = i_2
            result = arg4
            *ecx_6 = result
            *arg1 = &(*arg1)[0xe]
        else
            if (eax_7 == 2)
                i_2 = *arg6
                ecx_6 = arg2
                int32_t var_18_3 = 0
                eax_19 = *arg3
                arg4 = *ecx_6
                
                if (arg5 u> 0)
                    while (i_2 != 0)
                        arg2 = nullptr
                        
                        if (ecx_1 u> 0)
                            while (i_2 != 0)
                                int32_t esi_4 = 0
                                
                                if (ecx_2 u> 0)
                                    int32_t edi_6 = arg2 << 2
                                    
                                    do
                                        *(eax_19 + (esi_4 << 2)) = *(edi_6 + *ecx_6)
                                        esi_4 += 1
                                        edi_6 += 0x10
                                    while (esi_4 u< ecx_2)
                                
                                eax_19 += 0x10
                                i_2 -= 1
                                arg2 += 1
                                
                                if (arg2 u>= ecx_1)
                                    break
                        
                        arg4 = &arg4[0x20]
                        var_18_3 += 1
                        
                        if (var_18_3 u>= arg5)
                            break
                
                goto label_4470fa
            
            result = eax_7 - 3
            
            if (eax_7 == 3)
                int32_t esi_2 = *arg3
                int32_t i_3 = *arg6
                result = *arg2
                int32_t var_18_2 = 0
                arg4 = result
                
                if (arg5 u> 0)
                    while (i_3 != 0)
                        int32_t var_14_1 = 0
                        
                        if (ecx_1 u> 0)
                            int16_t* result_1 = result
                            
                            while (i_3 != 0)
                                int32_t ebx_3 = 0
                                
                                if (ecx_2 u> 0)
                                    int16_t* result_3 = result_1
                                    
                                    do
                                        int32_t eax_15
                                        eax_15, x87control =
                                            __ftol(x87control, fconvert.t(*result_3))
                                        result_3 = &result_3[8]
                                        *(esi_2 + (ebx_3 << 2)) = eax_15
                                        ebx_3 += 1
                                    while (ebx_3 u< ecx_2)
                                
                                result_1 = &result_1[2]
                                esi_2 += 0x10
                                i_3 -= 1
                                var_14_1 += 1
                                
                                if (var_14_1 u>= ecx_1)
                                    break
                        
                        edx = arg1
                        result = &arg4[0x20]
                        var_18_2 += 1
                        arg4 = result
                        
                        if (var_18_2 u>= arg5)
                            break
                
                *arg3 = esi_2
                *arg6 = i_3
                *arg2 = result
                *edx = &(*edx)[0xe]
    else
        if (ecx == 3)
            goto label_447114
        
        if (ecx == 5)
            int32_t var_18_1 = 0
            void* var_14
            
            if (arg4 != 0)
                var_14 = *(result + 0xc) + arg4
            
            result = *edx
            int16_t* result_2 = nullptr
            int32_t edi_4 = *(result + 0x14)
            void* esi_1 = &result[0xc]
            *edx = esi_1
            
            if (arg5 u> 0)
                do
                    result = arg6
                    
                    if (*result == 0)
                        break
                    
                    arg7 = 0
                    *edx = esi_1
                    
                    if (edi_4 u> 0)
                        int32_t* ebx_2 = var_14 + 4
                        
                        while (*arg6 != 0)
                            if (arg4 != 0)
                                var_18_1 = *ebx_2
                            
                            sub_446e64(arg1, arg2, arg3, arg4, var_18_1, arg6, 0xffffffff)
                            arg7 += 1
                            edx = arg1
                            ebx_2 = &ebx_2[2]
                            
                            if (arg7 u>= edi_4)
                                break
                    
                    result_2 += 1
                    result = result_2
                while (result u< arg5)

return result
