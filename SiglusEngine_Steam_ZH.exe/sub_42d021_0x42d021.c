// 函数: sub_42d021
// 地址: 0x42d021
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    return arg2

if (*(arg1 + 0x44) == arg2)
    sub_42aba3(arg1 + 0x18, arg1 + 0x278, arg2, "internal error: production failed")
    *(arg1 + 0x44) = 1

return 0
