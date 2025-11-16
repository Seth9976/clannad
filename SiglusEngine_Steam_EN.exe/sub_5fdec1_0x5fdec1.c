// 函数: sub_5fdec1
// 地址: 0x5fdec1
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PWSTR var_8 = arg3
var_8 = nullptr

if (___copy_path_to_wide_string(arg6, &var_8) == 0)
    return 0xffffffff

int32_t var_10_1 = arg10
int32_t result = sub_6008cd(arg4, arg5, var_8, arg7, arg8, arg9)
_free(var_8)
return result
