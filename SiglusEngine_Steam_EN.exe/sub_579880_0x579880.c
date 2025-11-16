// 函数: sub_579880
// 地址: 0x579880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 0xffffffff

int32_t eax_2 = (&data_1090ae4)[arg1 * 0x75]

if (eax_2 == 2 || (arg2 != 0 && eax_2 == 0))
    return 0xffffffff

if (data_131256c == 0 && data_13125b4 == 0 && data_1311174 == 0
        && *(arg1 * 0x2d0 + &data_8fcd48) != 0 && *(arg1 * 0x3920 + &data_f89ba4) != 0
        && *(arg1 * 0x3920 + 0xf89ba0) != 0 && (data_1311178 == 0 || *(arg1 + 0x1b8c220) == 0))
    return 1

return 0
