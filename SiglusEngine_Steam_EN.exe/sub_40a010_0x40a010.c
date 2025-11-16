// 函数: sub_40a010
// 地址: 0x40a010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = arg1[1]

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = arg1[2]

if (eax_2 != 0)
    _free(eax_2)

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
