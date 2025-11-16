// 函数: sub_6b2350
// 地址: 0x6b2350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = arg3

if ((result & 0x40000000) == 0)
    sub_6b1df0(arg2 * 0x50 + arg1)
    
    if (arg2 == 0x10)
        result = ((result & &data_1000000) | 0xa0ffffff) u>> 0x18
        sub_6b1df0(result * 0x50 + arg1)
    else if (arg2 == 0x11)
        result = ((result & &data_1000000) | 0xa2ffffff) u>> 0x18
        sub_6b1df0(result * 0x50 + arg1)
    else if (arg2 == 0x12)
        result = ((result & &data_1000000) | 0xa4ffffff) u>> 0x18
        sub_6b1df0(result * 0x50 + arg1)

return result
