// 函数: sub_46b8ab
// 地址: 0x46b8ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (sub_46b56e(arg1, arg2) == 0 || *(arg1 + 0x10) != *(arg2 + 0x10)
        || *(arg1 + 0x14) != *(arg2 + 0x14) || *(arg1 + 0x18) != *(arg2 + 0x18))
    return 0

int32_t eax_4 = sub_46b589(*(arg1 + 0x1c), *(arg2 + 0x1c))
int32_t eax_5 = neg.d(eax_4)
return neg.d(sbb.d(eax_5, eax_5, eax_4 != 0))
