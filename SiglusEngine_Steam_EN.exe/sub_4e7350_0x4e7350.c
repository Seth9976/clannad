// 函数: sub_4e7350
// 地址: 0x4e7350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0

if (arg2 != 0)
    *arg2 = arg3

arg1 = *arg3

if (arg1 != 0 && arg1 != 0xa && arg1 == 0x5c)
    arg1 = arg3[1]
    
    if (arg1 u>= 0x28 && arg1 u<= 0x3b)
        *arg4 = zx.d(arg1) - 0x28
        
        if (arg2 != 0)
            *arg2 = &arg3[2]
        
        return 1

return 0
