// 函数: sub_447a8c
// 地址: 0x447a8c
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

void** result = arg7
int32_t* ebx = arg1

if (result == 0xffffffff)
    result = *(*ebx + 0x10)
    arg5 = result
    
    if (result == 0)
        arg5 = 1
else
    arg5 = result

if (ecx s>= 0)
    float* eax_10
    void* i
    
    if (ecx s<= 1)
    label_447c90:
        result = *ebx
        void* esi_4 = result[6]
        void* edx_3 = *result
        arg7 = nullptr
        
        if (ecx == 3)
            result = (4 - esi_4) << 2
            arg7 = result
        
        double* ecx_13
        double** esi_5
        
        if (edx_3 == 1)
            i = *arg6
            esi_5 = arg3
            ecx_13 = *esi_5
            eax_10 = *arg2
            arg3 = nullptr
            
            if (arg5 u> 0)
                while (i != 0)
                    int32_t edi_12 = 0
                    
                    if (esi_4 u> 0)
                        while (i != 0)
                            long double x87_r7_9 = float.t(*eax_10)
                            eax_10 = &eax_10[4]
                            *ecx_13 = fconvert.d(x87_r7_9)
                            ecx_13 = &ecx_13[1]
                            i -= 1
                            edi_12 += 1
                            
                            if (edi_12 u>= esi_4)
                                break
                    
                    arg3 += 1
                    eax_10 = &eax_10[arg7]
                    
                    if (arg3 u>= arg5)
                        break
            
        label_447db9:
            *esi_5 = ecx_13
        label_447dbe:
            *arg6 = i
        label_447dc3:
            *arg2 = eax_10
            result = arg1
            *result += 0x1c
        else
            if (edx_3 == 2)
                i = *arg6
                esi_5 = arg3
                ecx_13 = *esi_5
                eax_10 = *arg2
                arg3 = nullptr
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t edi_9 = 0
                        
                        if (esi_4 u> 0)
                            while (i != 0)
                                long double x87_r7_8 = float.t(*eax_10)
                                eax_10 = &eax_10[4]
                                *ecx_13 = fconvert.d(x87_r7_8)
                                ecx_13 = &ecx_13[1]
                                i -= 1
                                edi_9 += 1
                                
                                if (edi_9 u>= esi_4)
                                    break
                        
                        arg3 += 1
                        eax_10 = &eax_10[arg7]
                        
                        if (arg3 u>= arg5)
                            break
                
                goto label_447db9
            
            if (edx_3 == 3)
                void* i_1 = *arg6
                int32_t* edi_8 = arg3
                double* ecx_11 = *edi_8
                eax_10 = *arg2
                arg3 = nullptr
                
                if (arg5 u> 0)
                    while (i_1 != 0)
                        int32_t ebx_5 = 0
                        
                        if (esi_4 u> 0)
                            while (i_1 != 0)
                                *ecx_11 = fconvert.d(fconvert.t(*eax_10))
                                eax_10 = &eax_10[4]
                                i_1 -= 1
                                ecx_11[1] = fconvert.d(fconvert.t(eax_10[-3]))
                                ebx_5 += 1
                                ecx_11[2] = fconvert.d(fconvert.t(eax_10[-2]))
                                ecx_11[3] = fconvert.d(fconvert.t(eax_10[-1]))
                                ecx_11 = &ecx_11[1]
                                
                                if (ebx_5 u>= esi_4)
                                    break
                        
                        arg3 += 1
                        eax_10 = &eax_10[arg7]
                        
                        if (arg3 u>= arg5)
                            break
                
                *edi_8 = ecx_11
                *arg6 = i_1
                goto label_447dc3
    else if (ecx == 2)
        int32_t* eax_4 = *ebx
        void* ecx_6 = eax_4[5]
        int32_t eax_5 = *eax_4
        double* eax_12
        int32_t* ecx_9
        void* i_2
        int32_t esi_3
        
        if (eax_5 == 1)
            i_2 = *arg6
            ecx_9 = arg2
            arg2 = nullptr
            eax_12 = *arg3
            esi_3 = *ecx_9
            
            if (arg5 u> 0)
                while (i_2 != 0)
                    int32_t edi_5 = 0
                    
                    if (ecx_6 u> 0)
                        while (i_2 != 0)
                            *eax_12 = fconvert.d(float.t(*(*ecx_9 + (edi_5 << 2))))
                            eax_12 = &eax_12[1]
                            i_2 -= 1
                            edi_5 += 1
                            
                            if (edi_5 u>= ecx_6)
                                break
                    
                    esi_3 += 0x40
                    arg2 += 1
                    
                    if (arg2 u>= arg5)
                        break
            
        label_447c82:
            *arg3 = eax_12
            *arg6 = i_2
            *ecx_9 = esi_3
            result = arg1
            *result += 0x1c
        else
            if (eax_5 == 2)
                i_2 = *arg6
                ecx_9 = arg2
                arg2 = nullptr
                eax_12 = *arg3
                esi_3 = *ecx_9
                
                if (arg5 u> 0)
                    while (i_2 != 0)
                        int32_t edi_3 = 0
                        
                        if (ecx_6 u> 0)
                            while (i_2 != 0)
                                *eax_12 = fconvert.d(float.t(*(*ecx_9 + (edi_3 << 2))))
                                eax_12 = &eax_12[1]
                                i_2 -= 1
                                edi_3 += 1
                                
                                if (edi_3 u>= ecx_6)
                                    break
                        
                        esi_3 += 0x40
                        arg2 += 1
                        
                        if (arg2 u>= arg5)
                            break
                
                goto label_447c82
            
            result = eax_5 - 3
            
            if (eax_5 == 3)
                i = *arg6
                double* ecx_7 = *arg3
                eax_10 = *arg2
                int32_t ebx_2 = 0
                
                if (arg5 u> 0)
                    while (i != 0)
                        int32_t esi_2 = 0
                        
                        if (ecx_6 u> 0)
                            while (i != 0)
                                *ecx_7 = fconvert.d(fconvert.t(eax_10[esi_2]))
                                ecx_7 = &ecx_7[1]
                                i -= 1
                                esi_2 += 1
                                
                                if (esi_2 u>= ecx_6)
                                    break
                        
                        eax_10 = &eax_10[0x10]
                        ebx_2 += 1
                        
                        if (ebx_2 u>= arg5)
                            break
                
                *arg3 = ecx_7
                goto label_447dbe
    else
        if (ecx == 3)
            goto label_447c90
        
        if (ecx == 5)
            int32_t var_c_1 = 0
            void* var_10
            
            if (arg4 != 0)
                var_10 = *(edx + 0xc) + arg4
            
            result = *ebx
            void** result_1 = nullptr
            int32_t edi_1 = result[5]
            void* esi_1 = &result[6]
            *ebx = esi_1
            
            if (arg5 u> 0)
                do
                    result = arg6
                    int32_t ebx_1 = 0
                    
                    if (*result == 0)
                        break
                    
                    *arg1 = esi_1
                    
                    if (edi_1 u> 0)
                        arg7 = var_10 + 4
                        
                        while (*result != 0)
                            if (arg4 != 0)
                                var_c_1 = *arg7
                            
                            sub_447a8c(arg1, arg2, arg3, arg4, var_c_1, result, 0xffffffff)
                            arg7 += 8
                            ebx_1 += 1
                            
                            if (ebx_1 u>= edi_1)
                                break
                            
                            result = arg6
                    
                    result_1 += 1
                    result = result_1
                while (result u< arg5)

return result
