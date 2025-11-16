// 函数: sub_432844
// 地址: 0x432844
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    int32_t edx_1 = *(arg1 + 0x14)
    int32_t k_2 = *(arg1 + 0x18)
    int32_t var_14_1 = edx_1
    int32_t k_3 = k_2
    int32_t var_c_1 = 4
    
    if (edx_1 u<= 4)
        var_c_1 = edx_1
    
    int32_t k_4 = 4
    
    if (k_2 u<= 4)
        k_4 = k_2
    
    int32_t ecx_1 = arg4 << 6
    int32_t edi
    int32_t var_24_1 = edi
    int32_t esi_2 = arg2
    __builtin_memset(__builtin_memset(arg3, 0, ecx_1 u>> 2 << 2), 0, ecx_1 & 3)
    
    do
        arg1 = nullptr
        
        if (var_c_1 u> 0)
            arg2 = arg3
            
            do
                int32_t edi_3 = 0
                
                if (k_4 u> 0)
                    int32_t ebx_1 = arg2
                    
                    do
                        int32_t result_1 = sub_432568(esi_2, ebx_1)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        esi_2 = *(esi_2 + 0xc)
                        edi_3 += 1
                        ebx_1 += 0x10
                    while (edi_3 u< k_4)
                    
                    edx_1 = var_14_1
                    k_2 = k_3
                
                if (edi_3 u< k_2)
                    int32_t j_2 = k_2 - edi_3
                    int32_t j
                    
                    do
                        j = j_2
                        j_2 -= 1
                        esi_2 = *(esi_2 + 0xc)
                    while (j != 1)
                
                arg1 += 1
                arg2 += 4
            while (arg1 u< var_c_1)
        
        if (arg1 u< edx_1)
            void* j_3 = edx_1 - arg1
            void* j_1
            
            do
                if (k_2 u> 0)
                    int32_t k_1 = k_2
                    int32_t k
                    
                    do
                        k = k_1
                        k_1 -= 1
                        esi_2 = *(esi_2 + 0xc)
                    while (k != 1)
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        arg4 -= 1
        arg3 += 0x40
    while (arg4 != 0)

return result
