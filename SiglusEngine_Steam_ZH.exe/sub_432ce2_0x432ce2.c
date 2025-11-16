// 函数: sub_432ce2
// 地址: 0x432ce2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (arg4 != 0)
    void* edx_1 = *(arg1 + 0x14)
    void* j_1 = 4
    void* var_8_1 = edx_1
    arg1 = 4
    
    if (edx_1 u<= 4)
        arg1 = edx_1
    
    int32_t ebx_1 = arg3
    int32_t edi
    int32_t var_10_1 = edi
    void* edi_1 = arg2
    
    do
        int32_t esi_1 = 0
        
        if (arg1 u> 0)
            do
                void* j_2 = j_1
                result = sub_43250c(edi_1, fconvert.s(fconvert.t(*(ebx_1 + (esi_1 << 2)))))
                
                if (result s< 0)
                    return result
                
                edi_1 = *(edi_1 + 0xc)
                esi_1 += 1
            while (esi_1 u< arg1)
            
            edx_1 = var_8_1
        
        if (esi_1 u< edx_1)
            j_1 = edx_1 - esi_1
            void* j
            
            do
                j = j_1
                j_1 -= 1
                edi_1 = *(edi_1 + 0xc)
            while (j != 1)
        
        arg4 -= 1
        ebx_1 += 0x10
    while (arg4 != 0)

return result
