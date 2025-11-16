// 函数: sub_40a230
// 地址: 0x40a230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 0xc)

if (eax_2 != 0)
    _free(eax_2)

__builtin_memset(arg1, 0, 0x14)
