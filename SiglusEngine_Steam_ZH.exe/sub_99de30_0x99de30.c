// 函数: sub_99de30
// 地址: 0x99de30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x24) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x20)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 8)

if (eax_2 != 0)
    _free(eax_2)

__builtin_memset(arg1, 0, 0x28)
_free(arg1)
