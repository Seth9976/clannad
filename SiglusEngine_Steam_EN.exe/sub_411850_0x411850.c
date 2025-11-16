// 函数: sub_411850
// 地址: 0x411850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
BOOL result

if (arg1 != 0)
    sub_4d6c40(&(&data_976b50)[arg1 * 8], &(&data_976b54)[arg1 * 8])
    (&data_976b58)[arg1 * 8] = (&data_976b68)[arg1 * 8]
    (&data_976b5c)[arg1 * 8] = (&data_976b6c)[arg1 * 8]
    (&data_976b50)[arg1 * 8] = (&data_976b60)[arg1 * 8]
    result = (&data_976b64)[arg1 * 8]
    (&data_976b54)[arg1 * 8] = result
    
    if (arg1 s< 2)
        goto label_4118e3
else
    int32_t eax_2 = (data_976b5c * data_976b58) << 2
    sub_4d1c30(eax_2, data_976b64, data_976b54, eax_2)
    result = sub_4d6c40(&data_976b60, &data_976b64)
label_4118e3:
    
    if ((&data_976b50)[arg1 * 8] == 0)
        (&data_976b58)[arg1 * 8] = data_70300c
        int32_t eax_7 = data_7030dc
        (&data_976b5c)[arg1 * 8] = eax_7
        int32_t eax_9 = (eax_7 * (&data_976b58)[arg1 * 8]) << 2
        return sub_4d6960(eax_9, &(&data_976b54)[arg1 * 8], &(&data_976b50)[arg1 * 8], eax_9, 
            "AVG_BANK")

return result
