// 函数: sub_456554
// 地址: 0x456554
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t var_10

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 2
    *(*(arg1 + 0xc4) + 0x10) = arg4
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    int32_t eax_4 = sub_4538a9(arg1, arg2, 1, 1)
    var_10 = eax_4
    
    if (eax_4 != 0)
        goto label_4565ac
else
    var_10 = not.d(arg2)
label_4565ac:
    
    if (*(arg1 + 0x3c) == 3)
        return sub_44df18(arg1, not.d(var_10), arg3, arg4)
    
    int32_t* edx_5 = *(var_10 + 4)
    int32_t ecx_4 = edx_5[1]
    
    if (ecx_4 s>= 0)
        if (ecx_4 s<= 1)
        label_4567ad:
            char* edi_3 = edx_5[4]
            arg2 = edi_3
            
            if (edi_3 == 0 || *(var_10 + 8) != 0xffffffff)
                edi_3 = 1
                arg2 = 1
            
            int32_t esi_6 = edx_5[5]
            int32_t edx_13 = *edx_5
            float* ecx_20 = *var_10
            
            if (edx_13 == 1)
                int32_t eax_23 = 0
                
                if (edi_3 u> 0)
                    float* edx_21 = arg3
                    
                    do
                        int32_t edi_6 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                float ebx_6
                                ebx_6.b = *edx_21 != 0
                                edx_21 = &edx_21[1]
                                arg4 -= 1
                                *ecx_20 = ebx_6
                                ecx_20 = &ecx_20[1]
                                edi_6 += 1
                                
                                if (edi_6 u>= esi_6)
                                    break
                        
                        eax_23 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (eax_23 u< arg2)
                
                return sub_448129(arg1, var_10)
            
            if (edx_13 == 2)
                int32_t eax_22 = 0
                
                if (edi_3 u> 0)
                    float* edi_5 = arg3
                    
                    do
                        int32_t edx_19 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                float ebx_5 = *edi_5
                                edi_5 = &edi_5[1]
                                arg4 -= 1
                                *ecx_20 = ebx_5
                                ecx_20 = &ecx_20[1]
                                edx_19 += 1
                                
                                if (edx_19 u>= esi_6)
                                    break
                        
                        eax_22 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (eax_22 u< arg2)
                
                return sub_448129(arg1, var_10)
            
            if (edx_13 == 3)
                int32_t eax_21 = 0
                
                if (edi_3 u> 0)
                    int32_t* edi_4 = arg3
                    
                    do
                        int32_t edx_17 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                long double x87_r7_2 = float.t(*edi_4)
                                edi_4 = &edi_4[1]
                                arg4 -= 1
                                *ecx_20 = fconvert.s(x87_r7_2)
                                ecx_20 = &ecx_20[1]
                                edx_17 += 1
                                
                                if (edx_17 u>= esi_6)
                                    break
                        
                        eax_21 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (eax_21 u< arg2)
                
                return sub_448129(arg1, var_10)
        else
            if (ecx_4 == 2)
                char* ecx_5 = edx_5[4]
                int32_t eax_8 = edx_5[5]
                int32_t edi_2 = edx_5[6]
                arg2 = ecx_5
                int32_t var_c_1 = eax_8
                
                if (ecx_5 == 0 || *(var_10 + 8) != 0xffffffff)
                    arg2 = 1
                
                int32_t edx_6 = *edx_5
                int32_t ebx_3 = *var_10
                int32_t var_18_1 = ebx_3
                
                if (edx_6 == 1)
                    int32_t var_14_2 = 0
                    
                    if (arg2 u> 0)
                        float* edx_12 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_2 u> 0)
                                do
                                    int32_t var_8_3 = 0
                                    
                                    if (eax_8 u> 0)
                                        void* ecx_16 = &edx_12[arg3]
                                        
                                        while (arg4 != 0)
                                            int32_t esi_5 = var_8_3 + (arg3 << 2)
                                            ebx_3 = var_18_1
                                            int32_t eax_18
                                            eax_18.b = *ecx_16 != 0
                                            arg4 -= 1
                                            var_8_3 += 1
                                            *(ebx_3 + (esi_5 << 2)) = eax_18
                                            ecx_16 += edi_2 << 2
                                            eax_8 = var_c_1
                                            
                                            if (var_8_3 u>= eax_8)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< edi_2)
                            
                            ebx_3 += 0x40
                            var_14_2 += 1
                            edx_12 = &edx_12[edi_2 * eax_8]
                            var_18_1 = ebx_3
                            
                            if (var_14_2 u>= arg2)
                                break
                else if (edx_6 == 2)
                    int32_t var_14_1 = 0
                    
                    if (arg2 u> 0)
                        float* edx_11 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_2 u> 0)
                                do
                                    int32_t var_8_2 = 0
                                    
                                    if (eax_8 u> 0)
                                        void* ecx_11 = &edx_11[arg3]
                                        
                                        while (arg4 != 0)
                                            int32_t eax_14 = var_8_2
                                            arg4 -= 1
                                            var_8_2 += 1
                                            *(ebx_3 + ((eax_14 + (arg3 << 2)) << 2)) = *ecx_11
                                            ecx_11 += edi_2 << 2
                                            eax_8 = var_c_1
                                            
                                            if (var_8_2 u>= eax_8)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< edi_2)
                            
                            ebx_3 += 0x40
                            var_14_1 += 1
                            edx_11 = &edx_11[edi_2 * eax_8]
                            
                            if (var_14_1 u>= arg2)
                                break
                else
                    if (edx_6 != 3)
                        return 0x80004005
                    
                    int32_t var_8_1 = 0
                    
                    if (arg2 u> 0)
                        float* edx_10 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_2 u> 0)
                                do
                                    int32_t esi_1 = 0
                                    
                                    if (eax_8 u> 0)
                                        void* ecx_6 = &edx_10[arg3]
                                        
                                        do
                                            if (arg4 == 0)
                                                eax_8 = var_c_1
                                                break
                                            
                                            arg4 -= 1
                                            *(ebx_3 + ((esi_1 + (arg3 << 2)) << 2)) =
                                                fconvert.s(float.t(*ecx_6))
                                            ecx_6 += edi_2 << 2
                                            eax_8 = var_c_1
                                            esi_1 += 1
                                        while (esi_1 u< eax_8)
                                    
                                    arg3 += 1
                                while (arg3 u< edi_2)
                            
                            ebx_3 += 0x40
                            var_8_1 += 1
                            edx_10 = &edx_10[edi_2 * eax_8]
                            
                            if (var_8_1 u>= arg2)
                                break
                
                return sub_448129(arg1, var_10)
            
            if (ecx_4 == 3)
                goto label_4567ad
return 0x8876086c
