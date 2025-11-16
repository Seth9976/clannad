// 函数: sub_413ef0
// 地址: 0x413ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_2 = result

if (arg1 != 3)
    result = 0
    int32_t var_64_1 = 0
    int32_t edi_1 = 0
    int32_t result_1 = 0
    int32_t esi_1 = 0
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    
    if (arg1 u<= 4)
        int32_t ecx
        int32_t edx_1
        int32_t ebx_1
        
        switch (arg1)
            case 0
                data_7030a8
                ecx = (&data_976b54)[data_7030a8 * 8]
                ebx_1 = (&data_976b58)[data_7030a8 * 8]
                edx_1 = (&data_976b5c)[data_7030a8 * 8]
                result = 0
                esi_1 = data_703024
                edi_1 = data_703020
            case 1
                edi_1 = data_703040
                data_703094
                var_6c_1 = data_703088
                var_68_1 = data_70308c
                ecx = (&data_976b54)[data_703094 * 8]
                ebx_1 = (&data_976b58)[data_703094 * 8]
                edx_1 = (&data_976b5c)[data_703094 * 8]
                esi_1 = data_703044
                var_64_1 = data_703078
                result = data_70307c
                result_1 = result
            case 2
                ecx = data_976e94
                ebx_1 = data_976e98
                edx_1 = data_976e9c
            case 4
                ecx = data_976b54
                ebx_1 = data_976b58
                edx_1 = data_976b5c
                esi_1 = data_703024
                edi_1 = data_703020
        
        if (ecx != 0)
            int32_t var_80_1 = 0xff
            int32_t var_84_1 = data_703000
            int32_t var_88_1 = data_702ffc
            int32_t var_8c_1 = data_702ff8
            int32_t eax_8 = var_64_1 - edi_1
            result = sub_584e80(eax_8, data_702fec, data_702fe8, data_702ff0, ecx, ebx_1, edx_1, 
                eax_8, result - esi_1, 0, var_6c_1, var_68_1, (data_702ff4).b)
            
            if (edi_1 != 0 || esi_1 != 0)
                int32_t var_5c[0x4]
                int32_t* ecx_2 = &var_5c
                result = sub_4d7660(result, ebx_1, ecx_2, edx_1, edi_1 - var_64_1 + var_6c_1, 
                    esi_1 - result_1 + var_68_1)
                
                for (int32_t i = 0; i s< 4; i += 1)
                    if (var_5c[i] != 0)
                        int32_t var_80_2 = 0
                        int32_t var_84_2 = 0xff
                        int32_t var_88_3 = 0
                        int32_t var_8c_3 = 0
                        int32_t var_b0_2 = 0
                        int32_t var_b4_2 = 0
                        int32_t var_b8_1 = 0
                        int32_t var_bc_1 = 0
                        int32_t var_4c[0x4]
                        int32_t var_3c[0x4]
                        int32_t var_2c[0x4]
                        int32_t var_1c[0x5]
                        result, ecx_2 = sub_586580(result, data_702fec, data_702fe8, data_702ff0, 
                            var_4c[i], var_3c[i], var_2c[i], var_1c[i], 0, 0, 0, data_702ff4, 
                            (data_702ff8).b, data_702ffc, data_703000, ecx_2, 0, 0, 0, 0)

sub_5f02dd(result_2 ^ &__saved_ebp)
return result
