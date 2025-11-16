// 函数: sub_4e73a0
// 地址: 0x4e73a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

switch (arg3)
    case 0
        *arg5 = arg4 + arg2
    case 1
        *arg5 = arg2 - arg4
    case 2
        *arg5 = arg2 * arg4
    case 3
        if (arg4 != 0)
            *arg5 = divs.dp.d(sx.q(arg2), arg4)
            return 
        
        *arg5 = arg2
    case 4
        if (arg4 != 0)
            *arg5 = mods.dp.d(sx.q(arg2), arg4)
            return 
        
        *arg5 = arg2
    case 5
        *arg5 = arg2 & arg4
    case 6
        *arg5 = arg2 | arg4
    case 7
        *arg5 = arg2 ^ arg4
    case 8
        *arg5 = arg2 << arg4.b
    case 9
        *arg5 = arg2 s>> arg4.b
