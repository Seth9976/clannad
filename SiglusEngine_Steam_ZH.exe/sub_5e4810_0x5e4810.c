// 函数: sub_5e4810
// 地址: 0x5e4810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg1 + 0x1580)
void* ecx = *(arg1 + 0x1584)
arg2[1] = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

return arg2
