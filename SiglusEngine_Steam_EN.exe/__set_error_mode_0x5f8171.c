// 函数: __set_error_mode
// 地址: 0x5f8171
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0)
    if (arg1 s<= 2)
        int32_t result = data_641870
        data_641870 = arg1
        return result
    
    if (arg1 == 3)
        return data_641870

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
