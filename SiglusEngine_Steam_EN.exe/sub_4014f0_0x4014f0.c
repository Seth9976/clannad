// 函数: sub_4014f0
// 地址: 0x4014f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x16] != 1)
    return 0xffffff7d

int32_t eax_1 = arg1[1]
arg1[0x16] = 2

if (eax_1 == 0)
    arg1[0x16] = 3
    return 0

uint32_t result = sub_401540(arg1)

if (result != 0)
    *arg1 = 0
    sub_401000(arg1)

return result
