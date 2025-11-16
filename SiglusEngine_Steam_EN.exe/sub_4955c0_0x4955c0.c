// 函数: sub_4955c0
// 地址: 0x4955c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 == 0x7e8 && arg1[0x1f8] == 0x273990 && mods.dp.d(sx.q(arg1[1]), 0x64) == 2
        && sub_4d0f10(&arg1[7], &data_108f5cc) == 0)
    if (arg2 == 0)
        return arg2 + 1
    
    int32_t ecx_1 = arg1[0x1f7]
    int32_t eax_6
    eax_6.b = arg2 - ecx_1 != *(ecx_1 + arg1)
    return eax_6 + 1

return 0
