// 函数: sub_69e640
// 地址: 0x69e640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0x14)
void* eax_2 = *(arg2 + 0x18)
*(arg1 + 0x18) = eax_2

if (eax_2 != 0)
    *(eax_2 + 4)
    *(eax_2 + 4) += 1

*(arg1 + 0x1c) = *(arg2 + 0x1c)
int32_t eax_4
eax_4.b = arg2[2].b
arg1[2].b = eax_4.b
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
return arg1
