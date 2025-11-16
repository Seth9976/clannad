// 函数: sub_4da450
// 地址: 0x4da450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg1

if (arg2 == 0)
    return 0

uint32_t eax_1 = zx.d(RegisterClassExA(arg2))
var_8 = eax_1

if (eax_1.w != 0)
    sub_4ded80(&data_20f34b0, &var_8)
    eax_1 = var_8

return zx.d(eax_1.w)
