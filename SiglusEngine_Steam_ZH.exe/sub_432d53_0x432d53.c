// 函数: sub_432d53
// 地址: 0x432d53
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (arg4 != 0)
    void* ebx_1 = *(arg1 + 0x14)
    void* var_8_1 = ebx_1
    arg1 = 4
    
    if (ebx_1 u<= 4)
        arg1 = ebx_1
    
    int32_t ecx_2 = arg4 << 4
    int32_t edi
    int32_t var_14_1 = edi
    int32_t esi_2 = arg2
    __builtin_memset(__builtin_memset(arg3, 0, ecx_2 u>> 2 << 2), 0, ecx_2 & 3)
    
    do
        int32_t edi_3 = 0
        
        if (arg1 u> 0)
            float* ebx_2 = arg3
            
            do
                result = sub_432568(esi_2, ebx_2)
                
                if (result s< 0)
                    return result
                
                esi_2 = *(esi_2 + 0xc)
                edi_3 += 1
                ebx_2 = &ebx_2[1]
            while (edi_3 u< arg1)
            
            ebx_1 = var_8_1
        
        if (edi_3 u< ebx_1)
            void* j_1 = ebx_1 - edi_3
            void* j
            
            do
                j = j_1
                j_1 -= 1
                esi_2 = *(esi_2 + 0xc)
            while (j != 1)
        
        arg4 -= 1
        arg3 = &arg3[4]
    while (arg4 != 0)

return result
