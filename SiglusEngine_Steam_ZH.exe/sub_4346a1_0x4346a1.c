// 函数: sub_4346a1
// 地址: 0x4346a1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) i+ arg1[0xd1] + *(eax_1 + 0x18)
    
    if (*(ecx_5 + 0x10) == 0 || *(eax_1 + 0x10) != 0xffffffff)
        int32_t edx_2 = *(ecx_5 + 4) - 1
        int32_t result
        
        if (edx_2 == 1)
            int32_t esi_3 = *(eax_1 + 0x1c)
            char* k_5 = *(ecx_5 + 0x18)
            result = 0
            int32_t ebx_3 = *(ecx_5 + 0x14)
            int32_t i = 1
            float* var_c_2 = arg3
            int32_t var_1c_1 = ebx_3
            char* k_7 = k_5
            int32_t var_10_1 = 4
            
            if (ebx_3 u<= 4)
                var_10_1 = ebx_3
            
            arg2 = 4
            
            if (k_5 u<= 4)
                arg2 = k_5
            
            __builtin_memset(arg3, 0, 0x40)
            
            do
                arg3 = nullptr
                
                if (var_10_1 u> 0)
                    arg1 = var_c_2
                    
                    do
                        int32_t edi_3 = 0
                        
                        if (arg2 u> 0)
                            float* ebx_4 = arg1
                            
                            do
                                int32_t result_2 = sub_432568(esi_3, ebx_4)
                                result = result_2
                                
                                if (result_2 s< 0)
                                    return result
                                
                                esi_3 = *(esi_3 + 0xc)
                                edi_3 += 1
                                ebx_4 = &ebx_4[1]
                            while (edi_3 u< arg2)
                            
                            ebx_3 = var_1c_1
                            k_5 = k_7
                        
                        if (edi_3 u< k_5)
                            void* j_6 = k_5 - edi_3
                            void* j
                            
                            do
                                j = j_6
                                j_6 -= 1
                                esi_3 = *(esi_3 + 0xc)
                            while (j != 1)
                        
                        arg3 += 1
                        arg1 = &arg1[4]
                    while (arg3 u< var_10_1)
                
                if (arg3 u< ebx_3)
                    void* j_7 = ebx_3 - arg3
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
            int32_t esi_2 = *(eax_1 + 0x1c)
            char* k_4 = *(ecx_5 + 0x18)
            result = 0
            int32_t ebx_1 = *(ecx_5 + 0x14)
            int32_t i_1 = 1
            float* var_c_1 = arg3
            int32_t var_18_1 = ebx_1
            char* k_6 = k_4
            int32_t var_8_1 = 4
            
            if (ebx_1 u<= 4)
                var_8_1 = ebx_1
            
            arg2 = 4
            
            if (k_4 u<= 4)
                arg2 = k_4
            
            __builtin_memset(arg3, 0, 0x40)
            
            do
                arg3 = nullptr
                
                if (var_8_1 u> 0)
                    arg1 = var_c_1
                    
                    do
                        int32_t edi_2 = 0
                        
                        if (arg2 u> 0)
                            float* ebx_2 = arg1
                            
                            do
                                int32_t result_1 = sub_432568(esi_2, ebx_2)
                                result = result_1
                                
                                if (result_1 s< 0)
                                    return result
                                
                                esi_2 = *(esi_2 + 0xc)
                                edi_2 += 1
                                ebx_2 = &ebx_2[4]
                            while (edi_2 u< arg2)
                            
                            ebx_1 = var_18_1
                            k_4 = k_6
                        
                        if (edi_2 u< k_4)
                            void* j_4 = k_4 - edi_2
                            void* j_2
                            
                            do
                                j_2 = j_4
                                j_4 -= 1
                                esi_2 = *(esi_2 + 0xc)
                            while (j_2 != 1)
                        
                        arg3 += 1
                        arg1 = &arg1[1]
                    while (arg3 u< var_8_1)
                
                if (arg3 u< ebx_1)
                    void* j_5 = ebx_1 - arg3
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
