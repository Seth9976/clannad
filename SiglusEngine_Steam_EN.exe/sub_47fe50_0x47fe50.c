// 函数: sub_47fe50
// 地址: 0x47fe50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t var_c = 0

if (arg3 s< 0 || arg3 s>= data_7031bc)
    sub_476410(arg1, arg2, arg3, arg4)
else if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || arg4 s< 0
        || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    sub_476410(arg4, arg2, arg3, arg4)
else
    int32_t* ecx_1 = arg4 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)
    int32_t eax_1 = ecx_1[0x64]
    
    if (eax_1 == 1 || eax_1 == 6 || eax_1 == 9)
        int32_t edx = arg5
        
        if (edx == 0xffffffff)
            edx = ecx_1[0xb4]
        
        sub_426690(&var_8, edx, *ecx_1, &var_8, &var_c)
        int32_t edx_1 = var_8
        
        if (edx_1 s> 0)
            int32_t ecx_3 = var_c
            
            if (ecx_3 s> 0)
                *arg6 = edx_1
                *arg7 = ecx_3
                return arg7

*arg6 = 0
*arg7 = 0
return arg7
