// 函数: sub_5c5490
// 地址: 0x5c5490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg1

if (arg2 == 0)
    return 0

uint32_t eax_1 = zx.d(RegisterClassExW(arg2))
var_8 = eax_1

if (eax_1.w != 0)
    sub_5cbbf0(&data_4ecd1a0, &var_8)
    eax_1 = var_8

return zx.d(eax_1.w)
