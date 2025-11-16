// 函数: sub_456275
// 地址: 0x456275
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    int32_t* ebx_1 = arg3
    
    if (ebx_1 == 0)
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
        label_456477:
            int32_t* esi_4 = ecx_2[4]
            
            if (esi_4 == 0 || *(eax_1 + 8) != 0xffffffff)
                esi_4 = 1
            
            int32_t j_13 = ecx_2[5]
            int32_t ecx_18 = *ecx_2
            int32_t* edx_2 = *eax_1
            
            if (ecx_18 == 1)
                if (esi_4 u> 0)
                    arg3 = esi_4
                    int32_t* i
                    
                    do
                        if (j_13 u> 0)
                            int32_t j_11 = j_13
                            int32_t j
                            
                            do
                                int32_t ecx_25
                                ecx_25.b = *edx_2 != 0
                                edx_2 = &edx_2[1]
                                *ebx_1 = ecx_25
                                ebx_1 = &ebx_1[1]
                                j = j_11
                                j_11 -= 1
                            while (j != 1)
                        
                        edx_2 = &edx_2[4 - j_13]
                        i = arg3
                        arg3 -= 1
                    while (i != 1)
            else if (ecx_18 == 2)
                if (esi_4 u> 0)
                    arg3 = esi_4
                    int32_t* i_1
                    
                    do
                        if (j_13 u> 0)
                            int32_t j_10 = j_13
                            int32_t j_1
                            
                            do
                                int32_t ecx_24
                                ecx_24.b = *edx_2 != 0
                                edx_2 = &edx_2[1]
                                *ebx_1 = ecx_24
                                ebx_1 = &ebx_1[1]
                                j_1 = j_10
                                j_10 -= 1
                            while (j_1 != 1)
                        
                        edx_2 = &edx_2[4 - j_13]
                        i_1 = arg3
                        arg3 -= 1
                    while (i_1 != 1)
            else if (ecx_18 != 3)
                result = 0x8876086c
            else if (esi_4 u> 0)
                arg3 = esi_4
                int32_t* i_2
                
                do
                    if (j_13 u> 0)
                        int32_t j_9 = j_13
                        int32_t j_2
                        
                        do
                            long double x87_r7_2 = fconvert.t(*edx_2)
                            long double x87_r6_2 = fconvert.t(0f)
                            x87_r6_2 - x87_r7_2
                            eax_1.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            eax_1 = not(p_2) ? 0 : 1
                            
                            *ebx_1 = eax_1
                            ebx_1 = &ebx_1[1]
                            edx_2 = &edx_2[1]
                            j_2 = j_9
                            j_9 -= 1
                        while (j_2 != 1)
                    
                    edx_2 = &edx_2[4 - j_13]
                    i_2 = arg3
                    arg3 -= 1
                while (i_2 != 1)
        else if (edx_1 == 2)
            int32_t i_9 = ecx_2[4]
            
            if (i_9 == 0 || *(eax_1 + 8) != 0xffffffff)
                i_9 = 1
            
            int32_t k_6 = ecx_2[5]
            int32_t j_12 = ecx_2[6]
            int32_t ecx_3 = *ecx_2
            int32_t k_7 = k_6
            arg4 = *eax_1
            
            if (ecx_3 == 1)
                if (i_9 u> 0)
                    int32_t i_8 = i_9
                    int32_t i_3
                    
                    do
                        if (j_12 u> 0)
                            arg1 = arg3
                            arg2 = arg4
                            int32_t j_8 = j_12
                            int32_t j_3
                            
                            do
                                if (k_6 u> 0)
                                    int32_t* esi_3 = arg2
                                    int32_t* edi_5 = arg1
                                    int32_t k_4 = k_6
                                    int32_t k
                                    
                                    do
                                        int32_t ebx_3
                                        ebx_3.b = *esi_3 != 0
                                        esi_3 = &esi_3[1]
                                        *edi_5 = ebx_3
                                        edi_5 = &edi_5[j_12]
                                        k = k_4
                                        k_4 -= 1
                                    while (k != 1)
                                    k_6 = k_7
                                
                                arg2 = &arg2[4]
                                arg1 = &arg1[1]
                                j_3 = j_8
                                j_8 -= 1
                            while (j_3 != 1)
                        
                        arg4 = &arg4[0x10]
                        arg3 = &arg3[j_12 * k_6]
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
            else if (ecx_3 == 2)
                if (i_9 u> 0)
                    int32_t i_7 = i_9
                    int32_t i_4
                    
                    do
                        if (j_12 u> 0)
                            arg1 = arg3
                            arg2 = arg4
                            int32_t j_7 = j_12
                            int32_t j_4
                            
                            do
                                if (k_6 u> 0)
                                    int32_t* esi_2 = arg2
                                    int32_t* edi_4 = arg1
                                    int32_t k_3 = k_6
                                    int32_t k_1
                                    
                                    do
                                        int32_t ebx_2
                                        ebx_2.b = *esi_2 != 0
                                        esi_2 = &esi_2[1]
                                        *edi_4 = ebx_2
                                        edi_4 = &edi_4[j_12]
                                        k_1 = k_3
                                        k_3 -= 1
                                    while (k_1 != 1)
                                    k_6 = k_7
                                
                                arg2 = &arg2[4]
                                arg1 = &arg1[1]
                                j_4 = j_7
                                j_7 -= 1
                            while (j_4 != 1)
                        
                        arg4 = &arg4[0x10]
                        arg3 = &arg3[j_12 * k_6]
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
            else if (ecx_3 != 3)
                result = 0x80004005
            else if (i_9 u> 0)
                int32_t i_6 = i_9
                int32_t i_5
                
                do
                    if (j_12 u> 0)
                        int32_t* var_c_1 = arg3
                        arg1 = arg4
                        int32_t j_6 = j_12
                        int32_t j_5
                        
                        do
                            if (k_6 u> 0)
                                int32_t* esi_1 = var_c_1
                                arg2 = arg1
                                int32_t k_5 = k_6
                                int32_t k_2
                                
                                do
                                    long double x87_r7_1 = fconvert.t(*arg2)
                                    long double x87_r6_1 = fconvert.t(0f)
                                    x87_r6_1 - x87_r7_1
                                    int32_t* eax_7
                                    eax_7.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                    bool p_1 = unimplemented  {test ah, 0x44}
                                    int32_t eax_8
                                    
                                    eax_8 = not(p_1) ? 0 : 1
                                    
                                    arg2 = &arg2[1]
                                    *esi_1 = eax_8
                                    esi_1 = &esi_1[j_12]
                                    k_2 = k_5
                                    k_5 -= 1
                                while (k_2 != 1)
                            
                            arg1 = &arg1[4]
                            var_c_1 = &var_c_1[1]
                            j_5 = j_6
                            j_6 -= 1
                        while (j_5 != 1)
                    
                    arg4 = &arg4[0x10]
                    arg3 = &arg3[j_12 * k_6]
                    i_5 = i_6
                    i_6 -= 1
                while (i_5 != 1)
        else
            if (edx_1 == 3)
                goto label_456477
            
            result = 0x8876086c
    else
        result = 0x8876086c

return result
