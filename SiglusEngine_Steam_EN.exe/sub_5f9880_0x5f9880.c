// 函数: sub_5f9880
// 地址: 0x5f9880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_20f34c8)
        int32_t* eax_5 = (&data_640ff8)[arg1 s>> 5]
        
        if ((eax_5[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0)
            return eax_5[(arg1 & 0x1f) * 0x10]
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
