// 函数: __set_error_mode
// 地址: 0x755ae8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0)
    if (arg1 s<= 2)
        int32_t result = data_b95a2c
        data_b95a2c = arg1
        return result
    
    if (arg1 == 3)
        return data_b95a2c

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
