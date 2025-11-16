// 函数: sub_4c8a40
// 地址: 0x4c8a40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
*arg8 = zx.d(*arg3)
*arg9 = zx.d(*(arg3 + 1))
*arg10 = zx.d(*(arg3 + 3))
arg8:3.b = *arg4 == 0
BOOL result

if (arg11 != 0)
    result = sub_4bbdb0(arg11, 0 - 5 + arg2, &arg3[5], arg4, arg5, arg11)
else
    result = sub_4bbcf0(arg11, arg4, &arg3[5], arg5)

if (arg8:3.b != 0)
    sub_4d6560(result, result, *arg4, arg7)

if (arg6 != 0)
    *arg6 = result

return result
