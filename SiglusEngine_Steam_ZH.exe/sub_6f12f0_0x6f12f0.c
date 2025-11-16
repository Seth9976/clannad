// 函数: sub_6f12f0
// 地址: 0x6f12f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 3)
    *arg2 = 0
    arg2[1] = 0
    return arg2

*arg2 = *(arg1 + (arg3 << 3) + 0xd8)
void* ecx = *(arg1 + (arg3 << 3) + 0xdc)
arg2[1] = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

return arg2
