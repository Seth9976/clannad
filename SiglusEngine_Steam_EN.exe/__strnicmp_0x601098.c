// 函数: __strnicmp
// 地址: 0x601098
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641878 != 0)
    return __strnicmp_l(arg1, arg2, arg3, nullptr)

if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff

if (arg3 u<= 0x7fffffff)
    return ___ascii_strnicmp(arg1, arg2, arg3) __tailcall

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
