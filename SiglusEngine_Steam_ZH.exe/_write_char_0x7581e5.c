// 函数: _write_char
// 地址: 0x7581e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (((arg2[3].b & 0x40) == 0 || arg2[2] != 0) && __fputwc_nolock(arg1, arg2) == 0xffff)
    *arg3 = 0xffffffff
    return arg3

*arg3 += 1
return arg3
