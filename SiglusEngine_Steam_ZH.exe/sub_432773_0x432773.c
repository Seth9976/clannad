// 函数: sub_432773
// 地址: 0x432773
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    int32_t eax_1 = *(arg1 + 0x14)
    int32_t edi
    int32_t var_1c_1 = edi
    int32_t k_2 = *(arg1 + 0x18)
    int32_t var_14_1 = eax_1
    int32_t k_3 = k_2
    int32_t var_c_1 = 4
    
    if (eax_1 u<= 4)
        var_c_1 = eax_1
    
    int32_t k_4 = 4
    
    if (k_2 u<= 4)
        k_4 = k_2
    
    void* esi_1 = arg2
    
    do
        arg1 = nullptr
        
        if (var_c_1 u> 0)
            void* ecx_2 = arg3
            arg2 = ecx_2
            
            do
                int32_t ebx_1 = 0
                
                if (k_4 u> 0)
                    void* edi_1 = arg2
                    
                    do
                        void* var_28_1 = ecx_2
                        int32_t result_1 = sub_43250c(esi_1, fconvert.s(fconvert.t(*edi_1)))
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        esi_1 = *(esi_1 + 0xc)
                        ebx_1 += 1
                        edi_1 += 0x10
                    while (ebx_1 u< k_4)
                    
                    eax_1 = var_14_1
                    k_2 = k_3
                
                if (ebx_1 u< k_2)
                    int32_t j_2 = k_2 - ebx_1
                    int32_t j
                    
                    do
                        j = j_2
                        j_2 -= 1
                        esi_1 = *(esi_1 + 0xc)
                    while (j != 1)
                
                arg1 += 1
                ecx_2 = arg1
                arg2 += 4
            while (ecx_2 u< var_c_1)
        
        if (arg1 u< eax_1)
            void* j_3 = eax_1 - arg1
            void* j_1
            
            do
                if (k_2 u> 0)
                    int32_t k_1 = k_2
                    int32_t k
                    
                    do
                        k = k_1
                        k_1 -= 1
                        esi_1 = *(esi_1 + 0xc)
                    while (k != 1)
                
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        arg4 -= 1
        arg3 += 0x40
    while (arg4 != 0)

return result
