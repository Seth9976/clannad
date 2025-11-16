// 函数: sub_42be87
// 地址: 0x42be87
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(*(arg1 + 0x26c) + 0x1c) = arg2

if (*(arg1 + 0x278) != 0xc)
    void* eax_1 = *(arg1 + 0x26c)
    *(eax_1 + 0x1c) -= 1

if (arg3 != 0)
    *(*(arg1 + 0x26c) + 0x18) = arg3

return 0
