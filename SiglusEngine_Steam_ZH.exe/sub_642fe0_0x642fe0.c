// 函数: sub_642fe0
// 地址: 0x642fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg1 + 0x110)
void* ecx = *(arg1 + 0x114)
arg2[1] = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

return arg2
