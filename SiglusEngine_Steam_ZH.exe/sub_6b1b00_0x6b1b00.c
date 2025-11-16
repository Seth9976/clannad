// 函数: sub_6b1b00
// 地址: 0x6b1b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_124

if (arg5(arg2, arg3) != 0)
    __builtin_memcpy(&var_124, arg2, 0x11c)
    __builtin_memcpy(arg2, arg3, 0x11c)
    __builtin_memcpy(arg3, &var_124, 0x11c)

char result = arg5(arg4, arg2)

if (result != 0)
    __builtin_memcpy(&var_124, arg4, 0x11c)
    __builtin_memcpy(arg4, arg2, 0x11c)
    __builtin_memcpy(arg2, &var_124, 0x11c)
    result = arg5(arg2, arg3)
    
    if (result != 0)
        __builtin_memcpy(&var_124, arg2, 0x11c)
        __builtin_memcpy(arg2, arg3, 0x11c)
        __builtin_memcpy(arg3, &var_124, 0x11c)

return result
