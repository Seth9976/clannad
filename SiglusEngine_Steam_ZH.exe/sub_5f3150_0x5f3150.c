// 函数: sub_5f3150
// 地址: 0x5f3150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg1 + 0xc8)
void* ecx = *(arg1 + 0xcc)
arg2[1] = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

return arg2
