// 函数: sub_48adc0
// 地址: 0x48adc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL result = arg3
BOOL result_2 = result

if (result s< 0x21)
    int32_t ecx = data_1332b60
    
    if (ecx s> 0)
        int32_t esi_1 = data_1332b64
        
        if (esi_1 s> 0)
            if (result != 0)
                BOOL result_4
                
                if (ecx != (&data_976b58)[result * 8] || esi_1 != (&data_976b5c)[result * 8])
                    result_4 = result_2
                    result = sub_411500(sub_411350(result), data_1332b60, result_4, data_1332b64)
                else
                    result_4 = result
                
                int32_t ecx_12 = (&data_976b54)[result * 8]
                
                if (ecx_12 != 0)
                    sub_48a8c0(result, (&data_976b58)[result * 8], ecx_12, 
                        (&data_976b5c)[result * 8], arg2.b, arg4)
                    return sub_564200(result_4)
            else
                BOOL result_1 = result
                BOOL result_3 = result
                int32_t esi_3 = (esi_1 * ecx) << 2
                result = sub_4d6960(result, &result_3, &result_1, esi_3, "disp_memory")
                BOOL result_5 = result_3
                
                if (result_5 != 0)
                    sub_48a8c0(result, data_1332b60, result_5, data_1332b64, arg2.b, arg4)
                    int32_t edx_2 = data_1332b60
                    int32_t eax = data_1332b64
                    void* ecx_3 = data_976b5c
                    
                    if (edx_2 == data_976b58 && eax == ecx_3)
                        sub_4d1c30(eax, result_5, data_976b54, esi_3)
                        sub_4d6c40(&result_1, &result_3)
                        return sub_564200(result_2)
                    
                    int32_t var_24_2 = 0xff
                    int32_t var_28_2 = 0xffffffff
                    int32_t var_2c_2 = 0xffffffff
                    int32_t var_30_2 = 0xffffffff
                    sub_584e80(eax, data_976b58, data_976b54, ecx_3, result_5, edx_2, eax, 0, 0, 0, 
                        0, 0, 0xff)
                    sub_4d6c40(&result_1, &result_3)
                    return sub_564200(result_2)

return result
