// 函数: sub_4344cf
// 地址: 0x4344cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax = sub_433f9c(arg1, arg2, 1)

if (eax != 0)
    void* ecx_5 = *(*(eax + 4) + 0x40) i+ arg1[0xd1] + *(eax + 0x18)
    
    if (*(ecx_5 + 0x10) == 0 || *(eax + 0x10) != 0xffffffff)
        int32_t edx_2 = *(ecx_5 + 4) - 1
        int32_t result
        
        if (edx_2 == 1)
            int32_t edx_6 = *(ecx_5 + 0x14)
            void* esi_3 = *(eax + 0x1c)
            float* var_c_2 = arg3
            char* k_5 = *(ecx_5 + 0x18)
            result = 0
            int32_t i = 1
            int32_t var_18_2 = edx_6
            char* k_7 = k_5
            int32_t var_10_1 = 4
            
            if (edx_6 u<= 4)
                var_10_1 = edx_6
            
            arg2 = 4
            
            if (k_5 u<= 4)
                arg2 = k_5
            
            do
                arg3 = nullptr
                
                if (var_10_1 u> 0)
                    float* ecx_9 = var_c_2
                    arg1 = ecx_9
                    
                    do
                        int32_t ebx_2 = 0
                        
                        if (arg2 u> 0)
                            float* edi_3 = arg1
                            
                            do
                                float* var_28_3 = ecx_9
                                result = sub_43250c(esi_3, fconvert.s(fconvert.t(*edi_3)))
                                
                                if (result s< 0)
                                    return result
                                
                                esi_3 = *(esi_3 + 0xc)
                                ebx_2 += 1
                                edi_3 = &edi_3[1]
                            while (ebx_2 u< arg2)
                            
                            edx_6 = var_18_2
                            k_5 = k_7
                        
                        if (ebx_2 u< k_5)
                            void* j_6 = k_5 - ebx_2
                            void* j
                            
                            do
                                j = j_6
                                j_6 -= 1
                                esi_3 = *(esi_3 + 0xc)
                            while (j != 1)
                        
                        arg3 += 1
                        ecx_9 = arg3
                        arg1 = &arg1[4]
                    while (ecx_9 u< var_10_1)
                
                if (arg3 u< edx_6)
                    void* j_7 = edx_6 - arg3
                    void* j_1
                    
                    do
                        if (k_5 u> 0)
                            char* k_3 = k_5
                            char* k
                            
                            do
                                k = k_3
                                k_3 -= 1
                                esi_3 = *(esi_3 + 0xc)
                            while (k != 1)
                        
                        j_1 = j_7
                        j_7 -= 1
                    while (j_1 != 1)
                
                i -= 1
                var_c_2 = &var_c_2[0x10]
            while (i != 0)
            
            return result
        
        if (edx_2 == 2)
            int32_t edx_5 = *(ecx_5 + 0x14)
            void* esi_2 = *(eax + 0x1c)
            float* var_c_1 = arg3
            char* k_4 = *(ecx_5 + 0x18)
            result = 0
            int32_t i_1 = 1
            int32_t var_18_1 = edx_5
            char* k_6 = k_4
            int32_t var_8_1 = 4
            
            if (edx_5 u<= 4)
                var_8_1 = edx_5
            
            arg2 = 4
            
            if (k_4 u<= 4)
                arg2 = k_4
            
            do
                arg3 = nullptr
                
                if (var_8_1 u> 0)
                    float* ecx_6 = var_c_1
                    arg1 = ecx_6
                    
                    do
                        int32_t ebx_1 = 0
                        
                        if (arg2 u> 0)
                            float* edi_2 = arg1
                            
                            do
                                float* var_28_1 = ecx_6
                                result = sub_43250c(esi_2, fconvert.s(fconvert.t(*edi_2)))
                                
                                if (result s< 0)
                                    return result
                                
                                esi_2 = *(esi_2 + 0xc)
                                ebx_1 += 1
                                edi_2 = &edi_2[4]
                            while (ebx_1 u< arg2)
                            
                            k_4 = k_6
                            edx_5 = var_18_1
                        
                        if (ebx_1 u< k_4)
                            void* j_4 = k_4 - ebx_1
                            void* j_2
                            
                            do
                                j_2 = j_4
                                j_4 -= 1
                                esi_2 = *(esi_2 + 0xc)
                            while (j_2 != 1)
                        
                        arg3 += 1
                        ecx_6 = arg3
                        arg1 = &arg1[1]
                    while (ecx_6 u< var_8_1)
                
                if (arg3 u< edx_5)
                    void* j_5 = edx_5 - arg3
                    void* j_3
                    
                    do
                        if (k_4 u> 0)
                            char* k_2 = k_4
                            char* k_1
                            
                            do
                                k_1 = k_2
                                k_2 -= 1
                                esi_2 = *(esi_2 + 0xc)
                            while (k_1 != 1)
                        
                        j_3 = j_5
                        j_5 -= 1
                    while (j_3 != 1)
                
                i_1 -= 1
                var_c_1 = &var_c_1[0x10]
            while (i_1 != 0)
            
            return result

return 0x8876086c
