// 函数: sub_4472d6
// 地址: 0x4472d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
uint32_t ecx
int16_t* edx

if (arg4 == 0)
    ecx = *(*arg1 + 4)
    edx = arg6
else
    edx = arg4 + arg5
    ecx = zx.d(*edx)

int32_t* result = arg7
int32_t* ebx = arg1

if (result == 0xffffffff)
    result = *(*ebx + 0x10)
    arg5 = result
    
    if (result == 0)
        arg5 = 1
else
    arg5 = result

if (ecx s>= 0)
    int16_t x87control
    
    if (ecx s<= 1)
    label_447506:
        result = *ebx
        void* esi_4 = result[6]
        int32_t edx_3 = *result
        int32_t* result_2 = nullptr
        
        if (ecx == 3)
            result = (4 - esi_4) << 2
            result_2 = result
        
        int32_t* ecx_7
        int32_t i
        int32_t** esi_6
        
        if (edx_3 == 1)
            i = *arg6
            esi_6 = arg3
            ecx_7 = *esi_6
            result = *arg2
            arg3 = nullptr
            
            if (arg5 u> 0)
                while (i != 0)
                    int32_t edi_12 = 0
                    
                    if (esi_4 u> 0)
                        while (i != 0)
                            int32_t ebx_9 = *result
                            result = &result[4]
                            *ecx_7 = ebx_9
                            ecx_7 = &ecx_7[1]
                            i -= 1
                            edi_12 += 1
                            
                            if (edi_12 u>= esi_4)
                                break
                    
                    arg3 += 1
                    result = &result[result_2]
                    
                    if (arg3 u>= arg5)
                        break
            
        label_447669:
            *esi_6 = ecx_7
            *arg6 = i
            *arg2 = result
            *arg1 += 0x1c
        else
            if (edx_3 == 2)
                i = *arg6
                esi_6 = arg3
                ecx_7 = *esi_6
                result = *arg2
                arg3 = nullptr
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t edi_9 = 0
                        
                        if (esi_4 u> 0)
                            while (i != 0)
                                int32_t ebx_8 = *result
                                result = &result[4]
                                *ecx_7 = ebx_8
                                ecx_7 = &ecx_7[1]
                                i -= 1
                                edi_9 += 1
                                
                                if (edi_9 u>= esi_4)
                                    break
                        
                        arg3 += 1
                        result = &result[result_2]
                        
                        if (arg3 u>= arg5)
                            break
                
                goto label_447669
            
            if (edx_3 == 3)
                int32_t* edi_8 = *arg3
                arg7 = *arg6
                float* esi_5 = *arg2
                int32_t var_10_2 = 0
                
                if (arg5 u> 0)
                    while (arg7 != 0)
                        int32_t var_c_1 = 0
                        
                        if (esi_4 u> 0)
                            while (arg7 != 0)
                                int32_t eax_27
                                int16_t x87control_1
                                eax_27, x87control_1 = __ftol(x87control, fconvert.t(*esi_5))
                                *edi_8 = eax_27
                                int32_t eax_28
                                int16_t x87control_2
                                eax_28, x87control_2 = __ftol(x87control_1, fconvert.t(esi_5[1]))
                                edi_8[1] = eax_28
                                int32_t eax_29
                                int16_t x87control_3
                                eax_29, x87control_3 = __ftol(x87control_2, fconvert.t(esi_5[2]))
                                edi_8[2] = eax_29
                                int32_t eax_30
                                eax_30, x87control = __ftol(x87control_3, fconvert.t(esi_5[3]))
                                esi_5 = &esi_5[4]
                                arg7 -= 1
                                var_c_1 += 1
                                edi_8[3] = eax_30
                                edi_8 = &edi_8[1]
                                
                                if (var_c_1 u>= esi_4)
                                    break
                        
                        var_10_2 += 1
                        ebx = arg1
                        esi_5 = &esi_5[result_2]
                        
                        if (var_10_2 u>= arg5)
                            break
                
                *arg3 = edi_8
                *arg6 = arg7
                result = arg2
                *result = esi_5
                *ebx += 0x1c
    else if (ecx == 2)
        int32_t* eax_4 = *ebx
        void* ecx_2 = eax_4[5]
        int32_t eax_5 = *eax_4
        int32_t* eax_19
        int32_t* ecx_4
        int32_t i_1
        int32_t esi_3
        
        if (eax_5 == 1)
            i_1 = *arg6
            ecx_4 = arg2
            arg2 = nullptr
            eax_19 = *arg3
            esi_3 = *ecx_4
            
            if (arg5 u> 0)
                while (i_1 != 0)
                    int32_t edi_5 = 0
                    
                    if (ecx_2 u> 0)
                        while (i_1 != 0)
                            *eax_19 = *(*ecx_4 + (edi_5 << 2))
                            eax_19 = &eax_19[1]
                            i_1 -= 1
                            edi_5 += 1
                            
                            if (edi_5 u>= ecx_2)
                                break
                    
                    esi_3 += 0x40
                    arg2 += 1
                    
                    if (arg2 u>= arg5)
                        break
            
        label_4474f2:
            *arg3 = eax_19
            *arg6 = i_1
            *ecx_4 = esi_3
            result = arg1
            *result += 0x1c
        else
            if (eax_5 == 2)
                i_1 = *arg6
                ecx_4 = arg2
                arg2 = nullptr
                eax_19 = *arg3
                esi_3 = *ecx_4
                
                if (arg5 u> 0)
                    while (i_1 != 0)
                        int32_t edi_3 = 0
                        
                        if (ecx_2 u> 0)
                            while (i_1 != 0)
                                *eax_19 = *(*ecx_4 + (edi_3 << 2))
                                eax_19 = &eax_19[1]
                                i_1 -= 1
                                edi_3 += 1
                                
                                if (edi_3 u>= ecx_2)
                                    break
                        
                        esi_3 += 0x40
                        arg2 += 1
                        
                        if (arg2 u>= arg5)
                            break
                
                goto label_4474f2
            
            result = eax_5 - 3
            
            if (eax_5 == 3)
                int32_t* edi_2 = *arg3
                int32_t i_2 = *arg6
                int32_t var_8_1 = 0
                int32_t esi_2 = *arg2
                
                if (arg5 u> 0)
                    while (i_2 != 0)
                        arg7 = nullptr
                        
                        if (ecx_2 u> 0)
                            while (i_2 != 0)
                                int32_t eax_12
                                eax_12, x87control =
                                    __ftol(x87control, fconvert.t(*(esi_2 + (arg7 << 2))))
                                *edi_2 = eax_12
                                edi_2 = &edi_2[1]
                                i_2 -= 1
                                arg7 += 1
                                
                                if (arg7 u>= ecx_2)
                                    break
                        
                        esi_2 += 0x40
                        var_8_1 += 1
                        
                        if (var_8_1 u>= arg5)
                            break
                
                *arg3 = edi_2
                *arg6 = i_2
                *arg2 = esi_2
                result = arg1
                *result += 0x1c
    else
        if (ecx == 3)
            goto label_447506
        
        if (ecx == 5)
            int32_t var_10_1 = 0
            void* var_c
            
            if (arg4 != 0)
                var_c = *(edx + 0xc) + arg4
            
            result = *ebx
            int32_t* result_1 = nullptr
            int32_t edi_1 = result[5]
            void* esi_1 = &result[6]
            *ebx = esi_1
            
            if (arg5 u> 0)
                while (true)
                    result = arg6
                    
                    if (*result == 0)
                        break
                    
                    arg7 = nullptr
                    *ebx = esi_1
                    
                    if (edi_1 u> 0)
                        void* ebx_2 = var_c + 4
                        
                        while (*result != 0)
                            if (arg4 != 0)
                                var_10_1 = *ebx_2
                            
                            sub_4472d6(arg1, arg2, arg3, arg4, var_10_1, result, 0xffffffff)
                            arg7 += 1
                            ebx_2 += 8
                            
                            if (arg7 u>= edi_1)
                                break
                            
                            result = arg6
                    
                    result_1 += 1
                    result = result_1
                    
                    if (result u>= arg5)
                        break
                    
                    ebx = arg1

return result
