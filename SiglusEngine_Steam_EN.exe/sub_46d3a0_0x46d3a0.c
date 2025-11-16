// 函数: sub_46d3a0
// 地址: 0x46d3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t var_c = 0

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t eax = arg2 + (arg3 << 1)
    
    switch (*(eax * 0x650 + &data_72d6bc) - 1)
        case 0, 4, 5, 7, 8
            int32_t edx = arg4
            
            if (edx == 0xffffffff)
                edx = *(eax * 0x650 + &data_72d7fc)
            
            sub_426690(&var_8, edx, *(eax * 0x7a0 + &data_98bf04), &var_8, &var_c)
        label_46d44a:
            int32_t ecx_4 = var_8
            
            if (ecx_4 s> 0)
                int32_t edx_2 = var_c
                
                if (edx_2 s> 0)
                    *arg5 = ecx_4
                    *arg6 = edx_2
                    return arg6
        case 1
            int32_t edx_1 = arg4
            
            if (*(eax * 0x650 + &data_72d8f8) != 3)
                if (edx_1 == 0xffffffff)
                    edx_1 = 0
            else if (edx_1 == 0xffffffff)
                edx_1 = *(eax * 0x650 + 0x72d938)
            
            sub_481600(&var_8, edx_1, *(eax * 0x7a0 + &data_98bf04), &var_8, &var_c)
            goto label_46d44a

*arg5 = 0
*arg6 = 0
return arg6
