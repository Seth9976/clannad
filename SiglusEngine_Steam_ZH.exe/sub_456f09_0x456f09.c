// 函数: sub_456f09
// 地址: 0x456f09
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    if (arg3 == 0)
        return 0x8876086c
    
    int32_t edi
    int32_t var_20_1 = edi
    int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (eax_1 != 0)
        int32_t* ecx_2 = *(eax_1 + 4)
        int32_t edx_1 = ecx_2[1]
        
        if (edx_1 s< 0)
            result = 0x8876086c
        else if (edx_1 s<= 1)
        label_4570e8:
            int32_t i_9 = ecx_2[4]
            
            if (i_9 == 0 || *(eax_1 + 8) != 0xffffffff)
                i_9 = 1
            
            int32_t j_13 = ecx_2[5]
            int32_t ecx_16 = *ecx_2
            int32_t* eax_16 = *eax_1
            
            if (ecx_16 == 1)
                if (i_9 u> 0)
                    int32_t i
                    
                    do
                        if (j_13 u> 0)
                            int32_t j_11 = j_13
                            int32_t j
                            
                            do
                                int32_t ebx_3
                                ebx_3.b = *eax_16 != 0
                                eax_16 = &eax_16[1]
                                float* ebx_4 = arg3
                                arg3 = &arg3[1]
                                j = j_11
                                j_11 -= 1
                                *ebx_4 = fconvert.s(float.t(ebx_3))
                            while (j != 1)
                        
                        eax_16 = &eax_16[4 - j_13]
                        i = i_9
                        i_9 -= 1
                    while (i != 1)
            else if (ecx_16 == 2)
                if (i_9 u> 0)
                    float* edi_6 = arg3
                    int32_t i_1
                    
                    do
                        if (j_13 u> 0)
                            int32_t j_10 = j_13
                            int32_t j_1
                            
                            do
                                long double x87_r7_3 = float.t(*eax_16)
                                eax_16 = &eax_16[1]
                                *edi_6 = fconvert.s(x87_r7_3)
                                edi_6 = &edi_6[1]
                                j_1 = j_10
                                j_10 -= 1
                            while (j_1 != 1)
                        
                        eax_16 = &eax_16[4 - j_13]
                        i_1 = i_9
                        i_9 -= 1
                    while (i_1 != 1)
            else if (ecx_16 != 3)
                result = 0x8876086c
            else if (i_9 u> 0)
                int32_t* edi_5 = arg3
                arg4 = i_9
                int32_t i_2
                
                do
                    if (j_13 u> 0)
                        int32_t j_9 = j_13
                        int32_t j_2
                        
                        do
                            *edi_5 = *eax_16
                            edi_5 = &edi_5[1]
                            eax_16 = &eax_16[1]
                            j_2 = j_9
                            j_9 -= 1
                        while (j_2 != 1)
                    
                    eax_16 = &eax_16[4 - j_13]
                    i_2 = arg4
                    arg4 -= 1
                while (i_2 != 1)
        else if (edx_1 == 2)
            int32_t i_10 = ecx_2[4]
            
            if (i_10 == 0 || *(eax_1 + 8) != 0xffffffff)
                i_10 = 1
            
            int32_t k_5 = ecx_2[5]
            int32_t j_12 = ecx_2[6]
            int32_t ecx_3 = *ecx_2
            int32_t k_6 = k_5
            arg4 = *eax_1
            
            if (ecx_3 == 1)
                if (i_10 u> 0)
                    int32_t i_8 = i_10
                    int32_t i_3
                    
                    do
                        if (j_12 u> 0)
                            arg1 = arg3
                            arg2 = arg4
                            int32_t j_8 = j_12
                            int32_t j_3
                            
                            do
                                if (k_5 u> 0)
                                    int32_t* esi_3 = arg2
                                    float* edi_4 = arg1
                                    int32_t k_3 = k_5
                                    int32_t k
                                    
                                    do
                                        int32_t ebx_2
                                        ebx_2.b = *esi_3 != 0
                                        esi_3 = &esi_3[1]
                                        *edi_4 = fconvert.s(float.t(ebx_2))
                                        edi_4 = &edi_4[j_12]
                                        k = k_3
                                        k_3 -= 1
                                    while (k != 1)
                                    k_5 = k_6
                                
                                arg2 = &arg2[0x10]
                                arg1 = &arg1[1]
                                j_3 = j_8
                                j_8 -= 1
                            while (j_3 != 1)
                        
                        arg4 += 0x40
                        arg3 = &arg3[j_12 * k_5]
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
            else if (ecx_3 == 2)
                if (i_10 u> 0)
                    int32_t i_7 = i_10
                    int32_t i_4
                    
                    do
                        if (j_12 u> 0)
                            arg1 = arg3
                            arg2 = arg4
                            int32_t j_6 = j_12
                            int32_t j_4
                            
                            do
                                if (k_5 u> 0)
                                    char* esi_2 = arg2
                                    float* edi_3 = arg1
                                    int32_t k_1
                                    
                                    do
                                        long double x87_r7_1 = float.t(*esi_2)
                                        esi_2 = &esi_2[4]
                                        *edi_3 = fconvert.s(x87_r7_1)
                                        edi_3 = &edi_3[j_12]
                                        k_1 = k_5
                                        k_5 -= 1
                                    while (k_1 != 1)
                                    k_5 = k_6
                                
                                arg2 = &arg2[0x10]
                                arg1 = &arg1[1]
                                j_4 = j_6
                                j_6 -= 1
                            while (j_4 != 1)
                        
                        arg4 += 0x40
                        arg3 = &arg3[j_12 * k_5]
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
            else if (ecx_3 != 3)
                result = 0x80004005
            else if (i_10 u> 0)
                int32_t i_6 = i_10
                int32_t i_5
                
                do
                    if (j_12 u> 0)
                        arg1 = arg3
                        arg2 = arg4
                        int32_t j_7 = j_12
                        int32_t j_5
                        
                        do
                            if (k_5 u> 0)
                                char* esi_1 = arg2
                                float* edi_2 = arg1
                                int32_t k_4 = k_5
                                int32_t k_2
                                
                                do
                                    *edi_2 = *esi_1
                                    esi_1 = &esi_1[4]
                                    edi_2 = &edi_2[j_12]
                                    k_2 = k_4
                                    k_4 -= 1
                                while (k_2 != 1)
                                k_5 = k_6
                            
                            arg2 = &arg2[0x10]
                            arg1 = &arg1[1]
                            j_5 = j_7
                            j_7 -= 1
                        while (j_5 != 1)
                    
                    arg4 += 0x40
                    arg3 = &arg3[j_12 * k_5]
                    i_5 = i_6
                    i_6 -= 1
                while (i_5 != 1)
        else
            if (edx_1 == 3)
                goto label_4570e8
            
            result = 0x8876086c
    else
        result = 0x8876086c

return result
