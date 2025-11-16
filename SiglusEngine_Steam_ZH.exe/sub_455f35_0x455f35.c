// 函数: sub_455f35
// 地址: 0x455f35
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t var_10

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 1
    *(*(arg1 + 0xc4) + 0x10) = arg4
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    int32_t eax_3 = sub_4538a9(arg1, arg2, 1, 1)
    var_10 = eax_3
    
    if (eax_3 != 0)
        goto label_455f8a
else
    var_10 = not.d(arg2)
label_455f8a:
    
    if (*(arg1 + 0x3c) == 3)
        return sub_44de6f(arg1, not.d(var_10), arg3, arg4)
    
    int32_t* edx_2 = *(var_10 + 4)
    int32_t ecx_4 = edx_2[1]
    
    if (ecx_4 s>= 0)
        if (ecx_4 s<= 1)
        label_45617e:
            char* eax_21 = edx_2[4]
            arg2 = eax_21
            
            if (eax_21 == 0 || *(var_10 + 8) != 0xffffffff)
                eax_21 = 1
                arg2 = 1
            
            int32_t esi_6 = edx_2[5]
            int32_t edx_10 = *edx_2
            float* ecx_20 = *var_10
            
            if (edx_10 == 1)
                int32_t edi_9 = 0
                
                if (eax_21 u> 0)
                    float* edx_16 = arg3
                    
                    do
                        int32_t eax_26 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                float ebx_5 = *edx_16
                                edx_16 = &edx_16[1]
                                arg4 -= 1
                                *ecx_20 = ebx_5
                                ecx_20 = &ecx_20[1]
                                eax_26 += 1
                                
                                if (eax_26 u>= esi_6)
                                    break
                        
                        edi_9 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (edi_9 u< arg2)
                
                return sub_448129(arg1, var_10)
            
            if (edx_10 == 2)
                int32_t edi_8 = 0
                
                if (eax_21 u> 0)
                    float* edx_15 = arg3
                    
                    do
                        int32_t eax_24 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                float ebx_4 = *edx_15
                                edx_15 = &edx_15[1]
                                arg4 -= 1
                                *ecx_20 = ebx_4
                                ecx_20 = &ecx_20[1]
                                eax_24 += 1
                                
                                if (eax_24 u>= esi_6)
                                    break
                        
                        edi_8 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (edi_8 u< arg2)
                
                return sub_448129(arg1, var_10)
            
            if (edx_10 == 3)
                int32_t edi_7 = 0
                
                if (eax_21 u> 0)
                    int32_t* edx_14 = arg3
                    
                    do
                        int32_t eax_22 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (esi_6 u> 0)
                            while (arg4 != 0)
                                long double x87_r7_2 = float.t(*edx_14)
                                edx_14 = &edx_14[1]
                                arg4 -= 1
                                *ecx_20 = fconvert.s(x87_r7_2)
                                ecx_20 = &ecx_20[1]
                                eax_22 += 1
                                
                                if (eax_22 u>= esi_6)
                                    break
                        
                        edi_7 += 1
                        ecx_20 = &ecx_20[4 - esi_6]
                    while (edi_7 u< arg2)
                
                return sub_448129(arg1, var_10)
        else
            if (ecx_4 == 2)
                char* ecx_5 = edx_2[4]
                int32_t eax_7 = edx_2[5]
                int32_t edi_6 = edx_2[6]
                arg2 = ecx_5
                int32_t var_c_1 = eax_7
                
                if (ecx_5 == 0 || *(var_10 + 8) != 0xffffffff)
                    arg2 = 1
                
                int32_t edx_3 = *edx_2
                int32_t ebx_3 = *var_10
                
                if (edx_3 == 1)
                    int32_t var_14_2 = 0
                    
                    if (arg2 u> 0)
                        float* edx_9 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_6 u> 0)
                                do
                                    int32_t var_8_3 = 0
                                    
                                    if (eax_7 u> 0)
                                        void* ecx_16 = &edx_9[arg3]
                                        
                                        while (arg4 != 0)
                                            int32_t eax_17 = var_8_3
                                            arg4 -= 1
                                            var_8_3 += 1
                                            *(ebx_3 + ((eax_17 + (arg3 << 2)) << 2)) = *ecx_16
                                            ecx_16 += edi_6 << 2
                                            eax_7 = var_c_1
                                            
                                            if (var_8_3 u>= eax_7)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< edi_6)
                            
                            ebx_3 += 0x40
                            var_14_2 += 1
                            edx_9 = &edx_9[edi_6 * eax_7]
                            
                            if (var_14_2 u>= arg2)
                                break
                else if (edx_3 == 2)
                    int32_t var_14_1 = 0
                    
                    if (arg2 u> 0)
                        float* edx_8 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_6 u> 0)
                                do
                                    int32_t var_8_2 = 0
                                    
                                    if (eax_7 u> 0)
                                        void* ecx_11 = &edx_8[arg3]
                                        
                                        while (arg4 != 0)
                                            int32_t eax_13 = var_8_2
                                            arg4 -= 1
                                            var_8_2 += 1
                                            *(ebx_3 + ((eax_13 + (arg3 << 2)) << 2)) = *ecx_11
                                            ecx_11 += edi_6 << 2
                                            eax_7 = var_c_1
                                            
                                            if (var_8_2 u>= eax_7)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< edi_6)
                            
                            ebx_3 += 0x40
                            var_14_1 += 1
                            edx_8 = &edx_8[edi_6 * eax_7]
                            
                            if (var_14_1 u>= arg2)
                                break
                else
                    if (edx_3 != 3)
                        return 0x80004005
                    
                    int32_t var_8_1 = 0
                    
                    if (arg2 u> 0)
                        float* edx_7 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (edi_6 u> 0)
                                do
                                    int32_t esi_1 = 0
                                    
                                    if (eax_7 u> 0)
                                        void* ecx_6 = &edx_7[arg3]
                                        
                                        do
                                            if (arg4 == 0)
                                                eax_7 = var_c_1
                                                break
                                            
                                            arg4 -= 1
                                            *(ebx_3 + ((esi_1 + (arg3 << 2)) << 2)) =
                                                fconvert.s(float.t(*ecx_6))
                                            ecx_6 += edi_6 << 2
                                            eax_7 = var_c_1
                                            esi_1 += 1
                                        while (esi_1 u< eax_7)
                                    
                                    arg3 += 1
                                while (arg3 u< edi_6)
                            
                            ebx_3 += 0x40
                            var_8_1 += 1
                            edx_7 = &edx_7[edi_6 * eax_7]
                            
                            if (var_8_1 u>= arg2)
                                break
                
                return sub_448129(arg1, var_10)
            
            if (ecx_4 == 3)
                goto label_45617e
return 0x8876086c
