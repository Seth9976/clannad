// 函数: sub_5d4f60
// 地址: 0x5d4f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
int32_t eax
eax.w = *(arg2 + 0xc)
*(arg1 + 0xc) = eax.w
arg1[2].d = *arg3
void* eax_2 = arg3[1]
*(arg1 + 0x14) = eax_2

if (eax_2 != 0)
    *(eax_2 + 4)
    *(eax_2 + 4) += 1

return arg1
