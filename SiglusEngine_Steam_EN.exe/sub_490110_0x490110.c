// 函数: sub_490110
// 地址: 0x490110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg3
int32_t eax = *arg3
char* result = sub_48f110(eax, arg2, arg3, 1, arg4)

if (result != 0)
    sub_48e950(sub_48ef60(arg3, arg2), arg2, arg3, *arg3, 0)
    result = sub_48d1d0(&arg3[5], *(arg2[3] + 0x24), arg2[6], &arg3[2], &arg3[5])
    
    if (result == 0)
        if (data_702fc0 != 0)
            int32_t eax_6 = 8
            
            if (arg4 u<= 7)
                eax_6 = arg4
            
            int32_t var_1c_2 = (&data_611558)[eax_6]
            result = sub_4c84d0(&data_7027c0, 0x613844)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
                result = sub_4a1e40(3)
        
        *arg2 = 1
    else
        result = *arg3
        
        if (result s<= 0 || result s>= 0x2710 || arg2[1] == 0)
            arg2[8] = 0xffffffff
        else
            result = arg2[6] + arg3[2]
            arg2[8] = result
        
        if (data_702fc0 != 0 && arg4 != 4)
            int32_t var_1c_1 = eax
            int32_t var_20_2 = *arg3
            char* eax_4 = sub_4c84d0(&data_7027c0, "Seen%04d ")
            int32_t ecx_4 = 8
            
            if (arg4 u<= 7)
                ecx_4 = arg4
            
            return sub_55fa50(eax_4, &data_7027c0, (&data_611558)[ecx_4], 0, 
                *((ecx_4 << 2) + &data_610f84))

return result
