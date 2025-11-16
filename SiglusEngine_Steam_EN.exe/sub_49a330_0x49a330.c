// 函数: sub_49a330
// 地址: 0x49a330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3ff)
    return 0

if (*(arg3 * 0x2c + &data_8c52dc) == 0)
    return 0

bool cond:0 = *(arg3 * 0x2c + &data_8c52b4) != 0
*arg4 = *(arg3 * 0x34 + 0xf2e708)
*arg5 = *(arg3 * 0x34 + 0xf2e70c)
*arg6 = *(arg3 * 0x34 + 0xf2e710)

if (not(cond:0))
    return 2

*arg2 = *(arg3 * 0x34 + &data_f2e6fc)
return 1
