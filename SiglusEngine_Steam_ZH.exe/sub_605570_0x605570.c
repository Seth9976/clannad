// 函数: sub_605570
// 地址: 0x605570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
void* eax_1 = arg2[1]
arg1[1] = eax_1

if (eax_1 != 0)
    *(eax_1 + 4)
    *(eax_1 + 4) += 1

return arg1
