// 函数: sub_42d2f0
// 地址: 0x42d2f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_2 = result

if (arg1 u<= 1)
    int32_t eax_3 = (&data_ef08e8)[arg1 * 0x60]
    
    if (eax_3 == 1)
        result = sub_425d50(*(arg1 * 0x180 + 0xef08ec), arg1 * 0x180 + 0xef0950)
    label_42d34f:
        int32_t ebx_1 = (&data_703020)[arg1 * 8]
        int32_t esi_2 = (&data_703024)[arg1 * 8]
        
        if (ebx_1 != 0 || esi_2 != 0)
            int32_t eax_5 = (&data_ef08e8)[arg1 * 0x60]
            int32_t result_1
            int32_t var_60
            int32_t result_3
            int32_t edx_2
            
            if (eax_5 == 1)
                sub_426690(&var_60, 0, *(arg1 * 0x180 + 0xef08ec), &var_60, &result_1)
                edx_2 = var_60
                result_3 = result_1
            else if (eax_5 != 2)
                edx_2 = var_60
                result_3 = result_1
            else
                edx_2 = *(arg1 * 0x180 + 0xef093c)
                result_3 = *(arg1 * 0x180 + 0xef0940)
            
            int32_t var_5c[0x4]
            sub_4d7660(&(&data_8c4ca4)[arg1 * 0x22], edx_2, &var_5c, result_3, 
                ebx_1 - (&data_8c4cfc)[arg1 * 0x22] - (&data_8c4cf4)[arg1 * 0x22], 
                esi_2 - (&data_8c4d00)[arg1 * 0x22] - (&data_8c4cf8)[arg1 * 0x22])
            int32_t eax_10 = data_702ff4
            int32_t ecx_4 = data_702ff8
            int32_t ebx_4 = eax_10
            int32_t edx_3 = data_702ffc
            int32_t i = 0
            int32_t result_4 = data_703000
            int32_t var_68_2 = ecx_4
            var_60 = edx_3
            result_1 = result_4
            
            do
                if (var_5c[i] != 0)
                    int32_t var_78_2 = 0
                    int32_t var_7c_2 = 0xff
                    int32_t var_80_2 = 0
                    int32_t var_84_2 = 0
                    int32_t var_a8_1 = 0
                    int32_t var_ac_1 = 0
                    int32_t var_b0_1 = 0
                    int32_t var_b4_1 = 0
                    int32_t var_4c[0x4]
                    int32_t var_3c[0x4]
                    int32_t var_2c[0x4]
                    int32_t var_1c[0x5]
                    sub_586580(eax_10, data_702fec, data_702fe8, data_702ff0, var_4c[i], var_3c[i], 
                        var_2c[i], var_1c[i], 0, 0, 0, eax_10, ecx_4.b, edx_3, result_4, ecx_4, 0, 
                        0, 0, 0)
                    result_4 = data_703000
                    edx_3 = data_702ffc
                    ecx_4 = data_702ff8
                    eax_10 = data_702ff4
                
                i += 1
            while (i s< 4)
            
            data_702ff8 = var_68_2
            data_702ffc = var_60
            result = result_1
            data_702ff4 = ebx_4
            data_703000 = result
    else
        result = eax_3 - 2
        
        if (eax_3 == 2)
            result = sub_430440(&(&data_ef08f8)[arg1 * 0x60])
            goto label_42d34f

sub_5f02dd(result_2 ^ &__saved_ebp)
return result
