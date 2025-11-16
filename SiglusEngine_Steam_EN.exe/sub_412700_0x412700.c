// 函数: sub_412700
// 地址: 0x412700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2c = arg3
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10
int32_t var_c
int32_t result = sub_495d90(arg2, &var_14, arg2, &var_18, &var_c, &var_10, 0)

if (result != 0)
    if ((&data_976b54)[arg3 * 8] == 0)
        result = sub_411f70(result, data_70300c, arg3, data_7030dc)
    
    int32_t var_2c_2 = 0xff
    int32_t var_30_1 = 0xffffffff
    int32_t var_34_1 = 0xffffffff
    int32_t var_38_1 = 0xffffffff
    sub_584e80(result, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], 
        (&data_976b5c)[arg3 * 8], var_18, var_c, var_10, 0, 0, 0, arg4, arg5, 0xff)
    result = sub_4d6c40(&var_14, &var_18)
    
    if (arg3 == 0)
        int32_t var_2c_3 = var_10 - 1 + arg5
        int32_t var_30_2 = var_c - 1 + arg4
        result = sub_494c90(arg4, arg5)
        data_703004 = 1
    
    if (data_702fc0 != 0 && data_1af0a78 != 0)
        bool cond:0_1
        
        if (arg3 u<= 0x10)
            cond:0_1 = data_1318520 != 2
            *((arg3 << 2) + &data_20cc940) = 1
        label_41281b:
            
            if (not(cond:0_1))
                return sub_563b20(0)
        else if (arg3 == 0xffffffff)
            cond:0_1 = data_1318520 != 1
            goto label_41281b

return result
