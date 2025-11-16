// 函数: sub_49ef00
// 地址: 0x49ef00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = arg4

if (result u<= 0xc)
    result = zx.d(lookup_table_49f190[result])
    int32_t var_2b0_2
    uint32_t result_1
    uint32_t result_2
    int32_t var_298
    void var_294
    
    switch (result)
        case 0
            int32_t var_2a8_1 = arg3
            result = sub_4c4320(arg2)
            
            if (arg5 == 0 || result s< arg5)
                if (arg2 == 0)
                    int32_t var_2a8_4 = 0x1350598
                    char* var_2ac_2 = &data_1352208
                    int32_t ecx_3
                    result, ecx_3 = sub_4c84d0(&var_294, "%s\%s")
                    int32_t var_2a8_5 = ecx_3
                    int32_t var_2b4_3 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 0, 0xffffffff)
                else
                    char* var_2a8_2 = arg2
                    int32_t var_2ac_1 = 0x1350598
                    char* var_2b0_1 = &data_1352208
                    int32_t ecx_2
                    result, ecx_2 = sub_4c84d0(&var_294, "%s\%s\%s")
                    int32_t var_2a8_3 = ecx_2
                    int32_t var_2b4_1 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 0, 0xffffffff)
        case 1
            int32_t var_2a8_6 = arg3
            result = sub_4c4320(arg2)
            
            if (arg5 == 0 || result s< arg5)
                if (arg2 == 0)
                    int32_t var_2a8_9 = 0x1350598
                    char* var_2ac_4 = &data_1352208
                    int32_t ecx_7
                    result, ecx_7 = sub_4c84d0(&var_294, "%s\%s")
                    int32_t var_2a8_10 = ecx_7
                    int32_t var_2b4_6 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 1, 0xffffffff)
                else
                    char* var_2a8_7 = arg2
                    int32_t var_2ac_3 = 0x1350598
                    char* var_2b0_3 = &data_1352208
                    int32_t ecx_6
                    result, ecx_6 = sub_4c84d0(&var_294, "%s\%s\%s")
                    int32_t var_2a8_8 = ecx_6
                    int32_t var_2b4_4 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 1, 0xffffffff)
        case 2
            int32_t var_2a8_11 = arg3
            result = sub_4c4320(arg2)
            
            if (arg5 == 0 || result s< arg5)
                if (arg2 == 0)
                    int32_t var_2a8_14 = 0x1350598
                    char* var_2ac_6 = &data_1352208
                    int32_t ecx_11
                    result, ecx_11 = sub_4c84d0(&var_294, "%s\%s")
                    int32_t var_2a8_15 = ecx_11
                    int32_t var_2b4_9 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 2, 0xffffffff)
                else
                    char* var_2a8_12 = arg2
                    int32_t var_2ac_5 = 0x1350598
                    char* var_2b0_4 = &data_1352208
                    int32_t ecx_10
                    result, ecx_10 = sub_4c84d0(&var_294, "%s\%s\%s")
                    int32_t var_2a8_13 = ecx_10
                    int32_t var_2b4_7 = 1
                    result = sub_4cd600(result, &var_294, arg3, 0, 0xffffffff, 1, 2, 0xffffffff)
        case 3
            sub_4c5550(&var_294, arg2, data_7031a8, 5, &var_294, &result_2, &var_298)
            result = result_2
            
            if (arg5 == 0 || result u< arg5)
                int32_t var_2a8_17 = arg5
                result_1 = 0xffffffff
                var_2b0_2 = 0
            label_49f14a:
                int32_t var_2b4_10 = 1
                result = sub_4cd600(result, &var_294, arg3, var_298, result, 1, var_2b0_2, result_1)
        case 4
            sub_4c5550(&var_294, arg2, data_7031a8, 5, &var_294, &result_2, &var_298)
            result = result_2
            
            if (arg5 == 0 || result u< arg5)
                int32_t var_2a8_19 = arg5
                result_1 = 0xffffffff
                var_2b0_2 = 1
                goto label_49f14a
        case 5
            sub_4c5550(&var_294, arg2, data_7031a8, 5, &var_294, &result_2, &var_298)
            result = result_2
            
            if (arg5 == 0 || result u< arg5)
                int32_t var_2a8_21 = arg5
                result_1 = result
                var_2b0_2 = 2
                goto label_49f14a

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
