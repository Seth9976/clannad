// 函数: sub_40d67a
// 地址: 0x40d67a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = arg2 * 0xc
int32_t* result = *(arg1 + 0x24c) + edx_1
int32_t* esi_1 = *(arg1 + 0x250) + edx_1

if (*result != 0xffffffff)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t* edx_2 = esi_1
    result -= esi_1
    int32_t i_1 = 3
    int32_t i
    
    do
        *(result + edx_2) = *(arg3 + (*(result + edx_2) << 2))
        
        if ((*(arg1 + 0x218) & 1) != 0)
            int32_t esi_4 = *edx_2
            
            if (esi_4 == 0xffffffff)
                *edx_2 = 0xffffffff
            else
                *edx_2 = *(arg4 + (esi_4 << 2))
        
        edx_2 = &edx_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
