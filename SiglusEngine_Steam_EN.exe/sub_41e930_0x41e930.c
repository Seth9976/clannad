// 函数: sub_41e930
// 地址: 0x41e930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u<= 0xf && *(arg1 * 0x134 + &data_925270) != 0)
    return SetFocus(*(arg1 * 0x14 + &data_f899ac))

int32_t i

for (i = 1; i s< 0x10; i += 1)
    int32_t edx_2 = (i + arg1) & 0x8000000f
    
    if (edx_2 s< 0)
        edx_2 = ((edx_2 - 1) | 0xfffffff0) + 1
    
    if (*(edx_2 * 0x134 + &data_925270) != 0 && *(edx_2 * 0x14 + &data_f899ac) != 0)
        return SetFocus(*(edx_2 * 0x14 + &data_f899ac))

return i
