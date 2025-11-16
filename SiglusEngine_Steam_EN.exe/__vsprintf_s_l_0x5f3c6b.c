// 函数: __vsprintf_s_l
// 地址: 0x5f3c6b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if (arg1 == 0 || arg2 u<= 0)
    *__errno() = 0x16
else
    int32_t result = sub_5f3ba1(sub_5fccde, arg1, arg2, arg3, arg4, arg5)
    
    if (result s< 0)
        *arg1 = 0
    
    if (result != 0xfffffffe)
        return result
    
    *__errno() = 0x22

__invalid_parameter_noinfo()
return 0xffffffff
