// 函数: sub_447682
// 地址: 0x447682
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** edx = arg1
int32_t edi
int32_t var_1c = edi
int16_t* result
uint32_t ecx

if (arg4 == 0)
    ecx = *(*edx + 4)
    result = arg6
else
    result = arg5 + arg4
    ecx = zx.d(*result)

if (arg7 == 0xffffffff)
    void* edi_3 = *(*edx + 0x10)
    arg5 = edi_3
    
    if (edi_3 == 0)
        arg5 = 1
else
    arg5 = arg7

if (ecx s>= 0)
    if (ecx s<= 1)
    label_44791c:
        void* eax_17 = *arg1
        void* esi_13 = *(eax_17 + 0x14)
        int32_t edx_3 = *eax_17
        result = *(eax_17 + 0x18)
        int32_t var_8_4 = 0
        
        if (ecx == 3)
            var_8_4 = (4 - result) << 2
        
        float* eax_20
        int32_t ecx_10
        int32_t i
        int32_t* edi_14
        
        if (edx_3 == 1)
            i = *arg6
            edi_14 = arg3
            ecx_10 = *edi_14
            eax_20 = *arg2
            int32_t var_c_5 = 0
            
            if (arg5 u> 0)
                while (i != 0)
                    arg3 = nullptr
                    
                    if (result u> 0)
                        while (i != 0)
                            int32_t esi_18 = 0
                            
                            if (esi_13 u> 0)
                                do
                                    *(ecx_10 + (esi_18 << 3)) = fconvert.d(float.t(eax_20[esi_18]))
                                    esi_18 += 1
                                while (esi_18 u< esi_13)
                            
                            ecx_10 += 0x20
                            eax_20 = &eax_20[4]
                            i -= 1
                            arg3 += 1
                            
                            if (arg3 u>= result)
                                break
                    
                    var_c_5 += 1
                    eax_20 = &eax_20[var_8_4]
                    
                    if (var_c_5 u>= arg5)
                        break
            
        label_447a73:
            *edi_14 = ecx_10
        label_447a78:
            *arg6 = i
            *arg2 = eax_20
            result = arg1
            *result += 0x1c
        else
            if (edx_3 == 2)
                i = *arg6
                edi_14 = arg3
                ecx_10 = *edi_14
                eax_20 = *arg2
                arg3 = nullptr
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t ebx_6 = 0
                        
                        if (result u> 0)
                            while (i != 0)
                                int32_t esi_15 = 0
                                
                                if (esi_13 u> 0)
                                    do
                                        *(ecx_10 + (esi_15 << 3)) =
                                            fconvert.d(float.t(eax_20[esi_15]))
                                        esi_15 += 1
                                    while (esi_15 u< esi_13)
                                
                                ecx_10 += 0x20
                                eax_20 = &eax_20[4]
                                i -= 1
                                ebx_6 += 1
                                
                                if (ebx_6 u>= result)
                                    break
                        
                        arg3 += 1
                        eax_20 = &eax_20[var_8_4]
                        
                        if (arg3 u>= arg5)
                            break
                
                goto label_447a73
            
            if (edx_3 == 3)
                i = *arg6
                int32_t* esi_14 = arg3
                double* ecx_9 = *esi_14
                eax_20 = *arg2
                arg3 = nullptr
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t edi_11 = 0
                        
                        if (result u> 0)
                            while (i != 0)
                                long double x87_r7_4 = fconvert.t(*eax_20)
                                eax_20 = &eax_20[4]
                                *ecx_9 = fconvert.d(x87_r7_4)
                                ecx_9 = &ecx_9[4]
                                i -= 1
                                ecx_9[-3] = fconvert.d(fconvert.t(eax_20[-3]))
                                edi_11 += 1
                                ecx_9[-2] = fconvert.d(fconvert.t(eax_20[-2]))
                                ecx_9[-1] = fconvert.d(fconvert.t(eax_20[-1]))
                                
                                if (edi_11 u>= result)
                                    break
                        
                        arg3 += 1
                        eax_20 = &eax_20[var_8_4]
                        
                        if (arg3 u>= arg5)
                            break
                
                *esi_14 = ecx_9
                goto label_447a78
    else if (ecx == 2)
        void* eax_6 = *edx
        void* ecx_1 = *(eax_6 + 0x14)
        int16_t* ecx_2 = *(eax_6 + 0x18)
        int32_t eax_7 = *eax_6
        int32_t eax_13
        int16_t** ecx_5
        int32_t i_1
        
        if (eax_7 == 1)
            i_1 = *arg6
            ecx_5 = arg2
            int32_t var_c_4 = 0
            eax_13 = *arg3
            arg2 = *ecx_5
            
            if (arg5 u> 0)
                while (i_1 != 0)
                    int32_t var_8_3 = 0
                    
                    if (ecx_1 u> 0)
                        do
                            int32_t esi_9 = 0
                            
                            if (i_1 == 0)
                                break
                            
                            if (ecx_2 u> 0)
                                int32_t* edi_10 = var_8_3 << 2
                                
                                do
                                    long double x87_r7_3 = float.t(*(edi_10 + *ecx_5))
                                    edi_10 = &edi_10[4]
                                    *(eax_13 + (esi_9 << 3)) = fconvert.d(x87_r7_3)
                                    esi_9 += 1
                                while (esi_9 u< ecx_2)
                            
                            eax_13 += 0x20
                            i_1 -= 1
                            var_8_3 += 1
                        while (var_8_3 u< ecx_1)
                    
                    arg2 = &arg2[0x10]
                    var_c_4 += 1
                    
                    if (var_c_4 u>= arg5)
                        break
            
        label_447902:
            *arg3 = eax_13
            *arg6 = i_1
            result = arg2
            *ecx_5 = result
            *arg1 += 0x1c
        else
            if (eax_7 == 2)
                i_1 = *arg6
                ecx_5 = arg2
                int32_t var_c_3 = 0
                eax_13 = *arg3
                arg2 = *ecx_5
                
                if (arg5 u> 0)
                    while (i_1 != 0)
                        int32_t var_8_2 = 0
                        
                        if (ecx_1 u> 0)
                            do
                                int32_t esi_5 = 0
                                
                                if (i_1 == 0)
                                    break
                                
                                if (ecx_2 u> 0)
                                    int32_t* edi_8 = var_8_2 << 2
                                    
                                    do
                                        long double x87_r7_2 = float.t(*(edi_8 + *ecx_5))
                                        edi_8 = &edi_8[4]
                                        *(eax_13 + (esi_5 << 3)) = fconvert.d(x87_r7_2)
                                        esi_5 += 1
                                    while (esi_5 u< ecx_2)
                                
                                eax_13 += 0x20
                                i_1 -= 1
                                var_8_2 += 1
                            while (var_8_2 u< ecx_1)
                        
                        arg2 = &arg2[0x10]
                        var_c_3 += 1
                        
                        if (var_c_3 u>= arg5)
                            break
                
                goto label_447902
            
            result = eax_7 - 3
            
            if (eax_7 == 3)
                int32_t* ebx_3 = arg3
                int32_t var_c_2 = 0
                int32_t eax_10 = *ebx_3
                int32_t i_2 = *arg6
                int32_t* esi_3 = *arg2
                
                if (arg5 u> 0)
                    while (i_2 != 0)
                        int32_t var_8_1 = 0
                        
                        if (ecx_1 u> 0)
                            arg3 = esi_3
                            
                            while (i_2 != 0)
                                int32_t edx_1 = 0
                                
                                if (ecx_2 u> 0)
                                    int32_t* edi_5 = arg3
                                    
                                    do
                                        long double x87_r7_1 = fconvert.t(*edi_5)
                                        edi_5 = &edi_5[4]
                                        *(eax_10 + (edx_1 << 3)) = fconvert.d(x87_r7_1)
                                        edx_1 += 1
                                    while (edx_1 u< ecx_2)
                                
                                arg3 = &arg3[1]
                                eax_10 += 0x20
                                i_2 -= 1
                                var_8_1 += 1
                                edx = arg1
                                
                                if (var_8_1 u>= ecx_1)
                                    break
                        
                        esi_3 = &esi_3[0x10]
                        var_c_2 += 1
                        
                        if (var_c_2 u>= arg5)
                            break
                
                *ebx_3 = eax_10
                *arg6 = i_2
                result = arg2
                *result = esi_3
                *edx += 0x1c
    else
        if (ecx == 3)
            goto label_44791c
        
        if (ecx == 5)
            int32_t var_c_1 = 0
            void* var_10
            
            if (arg4 != 0)
                var_10 = *(result + 0xc) + arg4
            
            result = *edx
            int16_t* result_1 = nullptr
            int32_t edi_4 = *(result + 0x14)
            void* esi_1 = &result[0xc]
            *edx = esi_1
            
            if (arg5 u> 0)
                do
                    result = arg6
                    
                    if (*result == 0)
                        break
                    
                    arg7 = nullptr
                    *edx = esi_1
                    
                    if (edi_4 u> 0)
                        int32_t* ebx_2 = var_10 + 4
                        
                        while (*arg6 != 0)
                            if (arg4 != 0)
                                var_c_1 = *ebx_2
                            
                            sub_447682(arg1, arg2, arg3, arg4, var_c_1, arg6, 0xffffffff)
                            arg7 += 1
                            edx = arg1
                            ebx_2 = &ebx_2[2]
                            
                            if (arg7 u>= edi_4)
                                break
                    
                    result_1 += 1
                    result = result_1
                while (result u< arg5)

return result
