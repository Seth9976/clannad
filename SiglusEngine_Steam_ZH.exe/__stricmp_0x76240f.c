// 函数: __stricmp
// 地址: 0x76240f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_b94eec != 0)
    return __stricmp_l(arg1, arg2, nullptr)

if (arg1 != 0 && arg2 != 0)
    return ___ascii_stricmp(arg1, arg2) __tailcall

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
