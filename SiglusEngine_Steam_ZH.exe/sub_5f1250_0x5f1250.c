// 函数: sub_5f1250
// 地址: 0x5f1250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (sub_536100(arg1, arg2) != 0)
    if (arg2 != 0)
        __builtin_memset(*arg1, 0, arg2 << 2)
    
    arg1[1] += arg2 << 2

return arg1
