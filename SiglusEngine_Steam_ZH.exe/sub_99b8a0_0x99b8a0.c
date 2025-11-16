// 函数: sub_99b8a0
// 地址: 0x99b8a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x1c)

if (ecx == 0)
    return 0xffffffff

return *(ecx + (arg2 << 2))
