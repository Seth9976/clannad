// 函数: __sptype
// 地址: 0x7504bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0x7ff00000)
    if (arg2 == 0xfff00000 && arg1 == 0)
        return 2
else if (arg1 == 0)
    return arg1 + 1

int16_t ecx_1 = arg2:2.w & 0x7ff8

if (ecx_1 == 0x7ff8)
    return 3

if (ecx_1 == 0x7ff0 && ((arg2 & 0x7ffff) != 0 || arg1 != 0))
    return 4

return 0
