// 函数: sub_40d26c
// 地址: 0x40d26c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = arg2 * 6
int16_t* result = *(arg1 + 0x24c) + edx_1
int16_t* esi_1 = *(arg1 + 0x250) + edx_1

if (*result != 0xffff)
    int32_t edi
    int32_t var_10_1 = edi
    int16_t* edx_2 = esi_1
    result -= esi_1
    int32_t i_1 = 3
    int32_t i
    
    do
        uint32_t esi_2
        esi_2.w = *(arg3 + (zx.d(*(result + edx_2)) << 2))
        *(result + edx_2) = esi_2.w
        
        if ((*(arg1 + 0x218) & 1) != 0)
            esi_2.w = *edx_2
            
            if (esi_2.w == 0xffff)
                *edx_2 = 0xffff
            else
                uint32_t esi_3
                esi_3.w = *(arg4 + (zx.d(esi_2.w) << 2))
                *edx_2 = esi_3.w
        
        edx_2 = &edx_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
