// 函数: sub_5b9d20
// 地址: 0x5b9d20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND result = arg3
void* var_c = arg1

if (result s< arg4)
    int32_t edi_1 = result * 0x150
    int32_t i_1 = arg4 - result
    int32_t i
    
    do
        char* edx_1 = *arg2
        void* ecx_1 = *(arg1 + 0xa4) + edi_1
        
        if (edx_1 == arg2[1])
            edx_1 = nullptr
        
        int32_t eax
        eax.b = edx_1[arg2[3]]
        *(ecx_1 + 0xa0) = eax.b
        arg2[3] += 1
        int32_t eax_1 = *arg2
        
        if (eax_1 == arg2[1])
            eax_1 = 0
        
        *(ecx_1 + 0xa4) = *(arg2[3] + eax_1)
        arg2[3] += 0x10
        int32_t eax_2 = *arg2
        
        if (eax_2 == arg2[1])
            eax_2 = 0
        
        result = *(arg2[3] + eax_2)
        *(ecx_1 + 0xb4) = result
        arg2[3] += 4
        
        if (*(ecx_1 + 0xa0) != 0)
            result = sub_5b96e0(ecx_1, *(ecx_1 + 0xb4), *(ecx_1 + 0xa4))
        
        arg1 = var_c
        edi_1 += 0x150
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
