// 函数: __set_error_mode
// 地址: 0x1000906d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 s>= 0)
    if (arg1 s<= 2)
        int32_t result = data_1001b480
        data_1001b480 = arg1
        return result
    
    if (arg1 == 3)
        return data_1001b480

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
