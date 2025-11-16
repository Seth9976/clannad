// 函数: sub_456b73
// 地址: 0x456b73
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t var_18
int32_t ecx_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 3
    *(*(arg1 + 0xc4) + 0x10) = arg4
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    ecx_1 = sub_4538a9(arg1, arg2, 1, 1)
    var_18 = ecx_1
    
    if (ecx_1 != 0)
        goto label_456bce
else
    ecx_1 = not.d(arg2)
    var_18 = ecx_1
label_456bce:
    
    if (*(arg1 + 0x3c) == 3)
        return sub_44dfc1(arg1, not.d(ecx_1), arg3, arg4)
    
    int32_t* eax_4 = *(ecx_1 + 4)
    int32_t edx_6 = eax_4[1]
    
    if (edx_6 s>= 0)
        int16_t x87control
        
        if (edx_6 s<= 1)
        label_456ddf:
            char* edx_12 = eax_4[4]
            arg2 = edx_12
            
            if (edx_12 == 0 || *(ecx_1 + 8) != 0xffffffff)
                arg2 = 1
            
            int32_t ebx_2 = eax_4[5]
            int32_t eax_31 = *eax_4
            int32_t* esi_8 = *var_18
            
            if (eax_31 == 1)
                int32_t edi_8 = 0
                
                if (arg2 u> 0)
                    int32_t* edx_14 = arg3
                    
                    do
                        int32_t ecx_12 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (ebx_2 u> 0)
                            while (arg4 != 0)
                                long double x87_r7_5 = fconvert.t(*edx_14)
                                long double x87_r6_2 = fconvert.t(0f)
                                x87_r6_2 - x87_r7_5
                                int32_t eax_32
                                eax_32.w = (x87_r6_2 < x87_r7_5 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                eax_32 = not(p_2) ? 0 : 1
                                
                                edx_14 = &edx_14[1]
                                arg4 -= 1
                                *esi_8 = eax_32
                                esi_8 = &esi_8[1]
                                ecx_12 += 1
                                
                                if (ecx_12 u>= ebx_2)
                                    break
                        
                        edi_8 += 1
                        esi_8 = &esi_8[4 - ebx_2]
                    while (edi_8 u< arg2)
                
                return sub_448129(arg1, var_18)
            
            if (eax_31 == 2)
                int32_t var_14_3 = 0
                
                if (arg2 u> 0)
                    do
                        int32_t edi_7 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (ebx_2 u> 0)
                            while (arg4 != 0)
                                int32_t eax_38
                                eax_38, x87control = __ftol(x87control, fconvert.t(*arg3))
                                arg3 = &arg3[1]
                                arg4 -= 1
                                *esi_8 = eax_38
                                esi_8 = &esi_8[1]
                                edi_7 += 1
                                
                                if (edi_7 u>= ebx_2)
                                    break
                        
                        var_14_3 += 1
                        esi_8 = &esi_8[4 - ebx_2]
                    while (var_14_3 u< arg2)
                
                return sub_448129(arg1, var_18)
            
            if (eax_31 == 3)
                int32_t edx_13 = 0
                
                if (arg2 u> 0)
                    int32_t* ecx_11 = arg3
                    
                    do
                        int32_t eax_35 = 0
                        
                        if (arg4 == 0)
                            break
                        
                        if (ebx_2 u> 0)
                            while (arg4 != 0)
                                int32_t edi_6 = *ecx_11
                                ecx_11 = &ecx_11[1]
                                arg4 -= 1
                                *esi_8 = edi_6
                                esi_8 = &esi_8[1]
                                eax_35 += 1
                                
                                if (eax_35 u>= ebx_2)
                                    break
                        
                        edx_13 += 1
                        esi_8 = &esi_8[4 - ebx_2]
                    while (edx_13 u< arg2)
                
                return sub_448129(arg1, var_18)
        else
            if (edx_6 == 2)
                int32_t edi_2 = eax_4[5]
                int32_t edx_7 = eax_4[4]
                int32_t ebx_1 = eax_4[6]
                int32_t var_10_1 = edx_7
                
                if (edx_7 == 0 || *(ecx_1 + 8) != 0xffffffff)
                    edx_7 = 1
                    var_10_1 = 1
                
                int32_t eax_5 = *eax_4
                arg2 = *ecx_1
                
                if (eax_5 == 1)
                    int32_t var_c_3 = 0
                    
                    if (edx_7 u> 0)
                        int32_t* ecx_9 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (ebx_1 u> 0)
                                do
                                    int32_t edx_11 = 0
                                    
                                    if (edi_2 u> 0)
                                        void* var_14_2 = &ecx_9[arg3]
                                        
                                        while (arg4 != 0)
                                            long double x87_r7_3 = fconvert.t(*var_14_2)
                                            long double x87_r6_1 = fconvert.t(0f)
                                            x87_r6_1 - x87_r7_3
                                            void* eax_24
                                            eax_24.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0)
                                                << 0xa | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                                            bool p_1 = unimplemented  {test ah, 0x44}
                                            int32_t eax_25
                                            
                                            eax_25 = not(p_1) ? 0 : 1
                                            
                                            arg4 -= 1
                                            *(arg2 + ((edx_11 + (arg3 << 2)) << 2)) = eax_25
                                            var_14_2 += ebx_1 << 2
                                            edx_11 += 1
                                            
                                            if (edx_11 u>= edi_2)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< ebx_1)
                            
                            arg2 = &arg2[0x40]
                            var_c_3 += 1
                            ecx_9 = &ecx_9[ebx_1 * edi_2]
                            
                            if (var_c_3 u>= var_10_1)
                                break
                else if (eax_5 == 2)
                    int32_t var_14_1 = 0
                    
                    if (edx_7 u> 0)
                        int32_t* edi_4 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (ebx_1 u> 0)
                                do
                                    int32_t var_c_2 = 0
                                    
                                    if (edi_2 u> 0)
                                        void* esi_5 = &edi_4[arg3]
                                        
                                        while (arg4 != 0)
                                            int32_t eax_15
                                            eax_15, x87control =
                                                __ftol(x87control, fconvert.t(*esi_5))
                                            int32_t ecx_7 = var_c_2
                                            arg4 -= 1
                                            var_c_2 += 1
                                            *(arg2 + ((ecx_7 + (arg3 << 2)) << 2)) = eax_15
                                            esi_5 += ebx_1 << 2
                                            
                                            if (var_c_2 u>= edi_2)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< ebx_1)
                            
                            arg2 = &arg2[0x40]
                            var_14_1 += 1
                            edi_4 = &edi_4[ebx_1 * edi_2]
                            
                            if (var_14_1 u>= var_10_1)
                                break
                else
                    if (eax_5 != 3)
                        return 0x80004005
                    
                    int32_t var_c_1 = 0
                    
                    if (edx_7 u> 0)
                        int32_t* ecx_6 = arg3
                        
                        while (arg4 != 0)
                            arg3 = nullptr
                            
                            if (ebx_1 u> 0)
                                do
                                    int32_t edx_8 = 0
                                    
                                    if (edi_2 u> 0)
                                        float* eax_10 = &ecx_6[arg3]
                                        
                                        while (arg4 != 0)
                                            arg4 -= 1
                                            *(arg2 + ((edx_8 + (arg3 << 2)) << 2)) =
                                                fconvert.s(fconvert.t(*eax_10))
                                            edx_8 += 1
                                            eax_10 = &eax_10[ebx_1]
                                            
                                            if (edx_8 u>= edi_2)
                                                break
                                    
                                    arg3 += 1
                                while (arg3 u< ebx_1)
                            
                            arg2 = &arg2[0x40]
                            var_c_1 += 1
                            ecx_6 = &ecx_6[ebx_1 * edi_2]
                            
                            if (var_c_1 u>= var_10_1)
                                break
                
                return sub_448129(arg1, var_18)
            
            if (edx_6 == 3)
                goto label_456ddf
return 0x8876086c
