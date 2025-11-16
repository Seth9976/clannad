// 函数: sub_460709
// 地址: 0x460709
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 4)

if (eax != 0)
    _free(eax)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
