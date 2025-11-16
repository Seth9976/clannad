// 函数: sub_411500
// 地址: 0x411500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg3
int32_t result = arg2
int32_t result_1 = result

if ((&data_976b50)[arg3 * 8] == 0 || (&data_976b58)[arg3 * 8] != result
        || (&data_976b5c)[arg3 * 8] != arg4)
    sub_4d6c40(&(&data_976b50)[arg3 * 8], &(&data_976b54)[arg3 * 8])
    result = result_1
    
    if (result s> 0 && arg4 s> 0)
        uint32_t eax_1 = (result * arg4) << 2
        sub_4d6960(eax_1, &(&data_976b54)[arg3 * 8], &(&data_976b50)[arg3 * 8], eax_1, "AVG_BANK")
        result = result_1
    
    bool cond:1_1 = data_702fc0 == 0
    (&data_976b58)[arg3 * 8] = result
    (&data_976b5c)[arg3 * 8] = arg4
    
    if (not(cond:1_1) && data_1af0a78 != 0)
        bool cond:2_1
        
        if (arg3 u<= 0x10)
            cond:2_1 = data_1318520 != 2
            *((arg3 << 2) + &data_20cc940) = 1
        label_4115bb:
            
            if (not(cond:2_1))
                return sub_563b20(0)
        else if (arg3 == 0xffffffff)
            cond:2_1 = data_1318520 != 1
            goto label_4115bb

return result
