// 函数: sub_4a3df0
// 地址: 0x4a3df0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg6

if (data_70300c != *arg8 - esi + 1)
    *arg6 = divs.dp.d(sx.q(esi * arg4), data_70300c) + arg3
    data_70300c
    *arg8 = divs.dp.d(sx.q(*arg8 * arg4), data_70300c) + arg3
else
    *arg6 = esi + arg3
    *arg8 = arg4 - 1 + arg3

int32_t edx_5 = *arg7

if (data_7030dc == *arg9 - edx_5 + 1)
    *arg7 = edx_5 + arg2
    int32_t eax_22 = arg5 - 1 + arg2
    *arg9 = eax_22
    return eax_22

*arg7 = divs.dp.d(sx.q(edx_5 * arg5), data_7030dc) + arg2
data_7030dc
int32_t eax_31 = divs.dp.d(sx.q(*arg9 * arg5), data_7030dc) + arg2
*arg9 = eax_31
return eax_31
