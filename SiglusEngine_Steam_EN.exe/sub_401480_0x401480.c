// 函数: sub_401480
// 地址: 0x401480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*__errno() = 0

if (*arg1 == 0)
    return 0

int32_t result = arg1[0xb0](sub_410270(&arg1[6], 0x2134), 1, 0x2134, *arg1)

if (result s> 0)
    sub_4102f0(&arg1[6], result)

if (result == 0 && *__errno() != 0)
    return 0xffffffff

return result
