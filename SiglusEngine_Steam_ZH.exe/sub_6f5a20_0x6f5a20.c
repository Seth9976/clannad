// 函数: sub_6f5a20
// 地址: 0x6f5a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg1 + 0xd0)
void* ecx = *(arg1 + 0xd4)
arg2[1] = ecx

if (ecx != 0)
    *(ecx + 4)
    *(ecx + 4) += 1

return arg2
