// 函数: sub_49b930
// 地址: 0x49b930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t edx = arg11 - 1
int32_t var_44 = arg11 - 1
int32_t edi_2 = arg6 - esi + 1
int32_t var_30 = 0
int32_t var_1c = arg10
int32_t var_20 = arg11
int32_t result

while (true)
    if (edx - arg8 + 1 s>= edi_2)
        var_30 = 1
        var_44 = edx + edi_2 - (edx - arg8 + 1)
    
    void* edi_3 = arg2
    void* eax_8 = arg5 - arg2 + 1
    int32_t edx_2 = arg7
    int32_t var_3c_1 = 0
    int32_t var_28 = esi
    
    while (true)
        void* ecx_4 = arg10 - 1
        void* esi_3 = ecx_4 - edx_2 + 1
        
        if (esi_3 s>= eax_8)
            var_3c_1 = 1
            ecx_4 += eax_8 - esi_3
        
        int32_t var_18 = var_44
        result = arg8
        void* var_14 = ecx_4
        int32_t result_3 = result
        int32_t var_50 = edx_2
        void* var_24 = edi_3
        
        if (arg3 u<= 0x21 && (&data_976b54)[arg3 * 8] != 0)
            int32_t result_2
            int32_t var_58
            int32_t var_4c
            int32_t var_48
            result = sub_49b390(&var_14, &result_3, &var_50, &var_14, &var_18, &var_1c, &var_20, 
                &var_24, &var_28, arg3, &var_48, &result_2, &var_4c, &var_58)
            
            if (result != 0)
                int32_t ecx_6 = var_58
                int32_t edx_4 = var_4c
                result = result_2
                
                if (arg12 == 0 || arg12 == 1)
                    int32_t var_74_3 = 0xff
                    int32_t var_78_3 = ecx_6
                    int32_t var_7c_2 = edx_4
                    int32_t result_1 = result
                    sub_584e80(result, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], 
                        (&data_976b5c)[arg3 * 8], arg9, arg10, arg11, var_50, result_3, arg12, 
                        edi_3, arg4, var_48.b)
                label_49bb23:
                    edx_4 = var_4c
                    ecx_6 = var_58
                    result = result_2
                else if (arg12 == 3)
                    void* eax_14 = (zx.d(*arg9) << 2) + 2
                    var_14 = eax_14 + arg9
                    
                    if (eax_14 != neg.d(arg9))
                        int32_t var_74_2 = ecx_6
                        int32_t var_78_2 = edx_4
                        int32_t result_4 = result_2
                        int32_t var_80_2 = var_48
                        sub_58d2d0(&arg9[1], (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], 
                            (&data_976b5c)[arg3 * 8], var_14, arg10, arg11, var_50, result_3, 
                            &arg9[1], edi_3, arg4, 0xff)
                        goto label_49bb23
                    
                    result = result_2
                
                if (arg13 != 0)
                    int32_t var_74_4 = ecx_6
                    int32_t var_78_4 = edx_4
                    result = sub_494c90(var_48, result)
                    data_13926ac = 0
                    data_13926a8 = 0xffffffff
                
                if (data_702fc0 != 0 && data_1af0a78 != 0)
                    bool cond:2_1
                    
                    if (arg3 s<= 0x10)
                        cond:2_1 = data_1318520 != 2
                        *((arg3 << 2) + &data_20cc940) = 1
                    label_49bb90:
                        
                        if (not(cond:2_1))
                            result = sub_563b20(0)
                    else if (arg3 == 0xffffffff)
                        cond:2_1 = data_1318520 != 1
                        goto label_49bb90
        
        if (var_3c_1 != 0)
            break
        
        edx_2 = 0
        eax_8 -= esi_3
        edi_3 += esi_3
    
    if (var_30 != 0)
        break
    
    edi_2 -= edx - arg8 + 1
    esi = arg4 + edx - arg8 + 1
    edx = arg11 - 1
    arg8 = 0
    var_44 = edx
    arg4 = esi

return result
