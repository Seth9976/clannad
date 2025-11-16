// 函数: sub_1000ae87
// 地址: 0x1000ae87
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_1001c584)
        int32_t* eax_5 = (&data_1001b0a0)[arg1 s>> 5]
        
        if ((eax_5[(arg1 & 0x1f) * 0x10 + 1].b & 1) != 0)
            return eax_5[(arg1 & 0x1f) * 0x10]
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
