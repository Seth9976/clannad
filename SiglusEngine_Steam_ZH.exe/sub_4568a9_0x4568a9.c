// 函数: sub_4568a9
// 地址: 0x4568a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    if (arg3 == 0)
        return 0x8876086c
    
    int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (eax_1 == 0)
        return 0x8876086c
    
    int32_t* ecx_2 = *(eax_1 + 4)
    int32_t edx_1 = ecx_2[1]
    int32_t edi
    int32_t var_2c_1 = edi
    
    if (edx_1 s< 0)
        result = 0x8876086c
    else
        int16_t x87control
        
        if (edx_1 s<= 1)
        label_456aa2:
            char* edx_5 = ecx_2[4]
            
            if (edx_5 == 0 || *(eax_1 + 8) != 0xffffffff)
                edx_5 = 1
            
            char* j_11 = ecx_2[5]
            int32_t ecx_15 = *ecx_2
            float* esi_1 = *eax_1
            
            if (ecx_15 == 1)
                if (edx_5 u> 0)
                    arg4 = edx_5
                    char* i
                    
                    do
                        if (j_11 u> 0)
                            char* j_10 = j_11
                            char* j
                            
                            do
                                int32_t* edx_7 = arg3
                                int32_t ecx_21
                                ecx_21.b = *esi_1 != 0
                                arg3 = &arg3[1]
                                esi_1 = &esi_1[1]
                                j = j_10
                                j_10 -= 1
                                *edx_7 = ecx_21
                            while (j != 1)
                        
                        esi_1 = &esi_1[4 - j_11]
                        i = arg4
                        arg4 -= 1
                    while (i != 1)
            else if (ecx_15 == 2)
                if (edx_5 u> 0)
                    int32_t* ecx_20 = arg3
                    arg4 = edx_5
                    char* i_1
                    
                    do
                        if (j_11 u> 0)
                            char* j_9 = j_11
                            char* j_1
                            
                            do
                                *ecx_20 = *esi_1
                                ecx_20 = &ecx_20[1]
                                esi_1 = &esi_1[1]
                                j_1 = j_9
                                j_9 -= 1
                            while (j_1 != 1)
                        
                        esi_1 = &esi_1[4 - j_11]
                        i_1 = arg4
                        arg4 -= 1
                    while (i_1 != 1)
            else if (ecx_15 != 3)
                result = 0x8876086c
            else if (edx_5 u> 0)
                arg2 = edx_5
                char* i_2
                
                do
                    if (j_11 u> 0)
                        arg4 = j_11
                        char* j_2
                        
                        do
                            int32_t eax_17
                            eax_17, x87control = __ftol(x87control, fconvert.t(*esi_1))
                            int32_t* ecx_19 = arg3
                            arg3 = &arg3[1]
                            esi_1 = &esi_1[1]
                            j_2 = arg4
                            arg4 -= 1
                            *ecx_19 = eax_17
                        while (j_2 != 1)
                    
                    esi_1 = &esi_1[4 - j_11]
                    i_2 = arg2
                    arg2 -= 1
                while (i_2 != 1)
        else if (edx_1 == 2)
            int32_t i_9 = ecx_2[4]
            
            if (i_9 == 0 || *(eax_1 + 8) != 0xffffffff)
                i_9 = 1
            
            char* k_6 = ecx_2[5]
            int32_t j_12 = ecx_2[6]
            int32_t ecx_3 = *ecx_2
            arg2 = k_6
            arg4 = *eax_1
            
            if (ecx_3 == 1)
                if (i_9 u> 0)
                    int32_t i_8 = i_9
                    int32_t i_3
                    
                    do
                        if (j_12 u> 0)
                            int32_t* var_14_3 = arg3
                            arg1 = arg4
                            int32_t j_8 = j_12
                            int32_t j_3
                            
                            do
                                if (arg2 u> 0)
                                    char* ecx_14 = arg1
                                    int32_t* edi_6 = var_14_3
                                    char* k_4 = arg2
                                    char* k
                                    
                                    do
                                        int32_t ebx_5
                                        ebx_5.b = *ecx_14 != 0
                                        ecx_14 = &ecx_14[4]
                                        *edi_6 = ebx_5
                                        edi_6 = &edi_6[j_12]
                                        k = k_4
                                        k_4 -= 1
                                    while (k != 1)
                                
                                arg1 = &arg1[0x10]
                                var_14_3 = &var_14_3[1]
                                j_3 = j_8
                                j_8 -= 1
                            while (j_3 != 1)
                        
                        arg4 = &arg4[0x40]
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
                            int32_t* var_14_2 = arg3
                            arg1 = arg4
                            int32_t j_7 = j_12
                            int32_t j_4
                            
                            do
                                if (k_6 u> 0)
                                    char* edx_2 = arg1
                                    int32_t* edi_5 = var_14_2
                                    char* k_3 = k_6
                                    char* k_1
                                    
                                    do
                                        *edi_5 = *edx_2
                                        edx_2 = &edx_2[4]
                                        edi_5 = &edi_5[j_12]
                                        k_1 = k_3
                                        k_3 -= 1
                                    while (k_1 != 1)
                                    k_6 = arg2
                                
                                arg1 = &arg1[0x10]
                                var_14_2 = &var_14_2[1]
                                j_4 = j_7
                                j_7 -= 1
                            while (j_4 != 1)
                        
                        arg4 = &arg4[0x40]
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
                        int32_t* var_14_1 = arg3
                        char* var_10_1 = arg4
                        int32_t j_6 = j_12
                        int32_t j_5
                        
                        do
                            if (arg2 u> 0)
                                arg1 = var_10_1
                                int32_t* var_c_1 = var_14_1
                                char* k_5 = arg2
                                char* k_2
                                
                                do
                                    int32_t eax_10
                                    eax_10, x87control = __ftol(x87control, fconvert.t(*arg1))
                                    int32_t* ecx_7 = var_c_1
                                    arg1 = &arg1[4]
                                    var_c_1 = &var_c_1[j_12]
                                    k_2 = k_5
                                    k_5 -= 1
                                    *ecx_7 = eax_10
                                while (k_2 != 1)
                            
                            var_10_1 = &var_10_1[0x10]
                            var_14_1 = &var_14_1[1]
                            j_5 = j_6
                            j_6 -= 1
                        while (j_5 != 1)
                    
                    arg4 = &arg4[0x40]
                    arg3 = &arg3[j_12 * k_6]
                    i_5 = i_6
                    i_6 -= 1
                while (i_5 != 1)
        else
            if (edx_1 == 3)
                goto label_456aa2
            
            result = 0x8876086c

return result
