// 函数: sub_411690
// 地址: 0x411690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 2)
    (&data_976b68)[arg1 * 8] = (&data_976b58)[arg1 * 8]
    (&data_976b6c)[arg1 * 8] = (&data_976b5c)[arg1 * 8]
    (&data_976b60)[arg1 * 8] = (&data_976b50)[arg1 * 8]
    int32_t eax_17 = (&data_976b54)[arg1 * 8]
    (&data_976b64)[arg1 * 8] = eax_17
    (&data_976b58)[arg1 * 8] = 0
    (&data_976b5c)[arg1 * 8] = 0
    (&data_976b50)[arg1 * 8] = 0
    (&data_976b54)[arg1 * 8] = 0
    return eax_17

if (arg1 == 0)
    int32_t ecx = data_976b5c
    int32_t eax = data_976b58
    data_976b6c = ecx
    data_976b68 = eax
    data_976b60 = arg1
    data_976b64 = arg1
    sub_4d6960(eax, &data_976b64, &data_976b60, (ecx * eax) << 2, "AVG_BANK_EXCALL_ZERO")
    int32_t eax_3 = (data_976b5c * data_976b58) << 2
    sub_4d1c30(eax_3, data_976b54, data_976b64, eax_3)
    return eax_3

(&data_976b68)[arg1 * 8] = (&data_976b58)[arg1 * 8]
(&data_976b6c)[arg1 * 8] = (&data_976b5c)[arg1 * 8]
(&data_976b60)[arg1 * 8] = (&data_976b50)[arg1 * 8]
(&data_976b64)[arg1 * 8] = (&data_976b54)[arg1 * 8]
(&data_976b58)[arg1 * 8] = data_70300c
(&data_976b5c)[arg1 * 8] = data_7030dc
int32_t eax_11 = (&data_976b58)[arg1 * 8] * (&data_976b5c)[arg1 * 8]
(&data_976b50)[arg1 * 8] = 0
(&data_976b54)[arg1 * 8] = 0
uint32_t eax_12 = eax_11 << 2
return sub_4d6960(eax_12, &(&data_976b54)[arg1 * 8], &(&data_976b50)[arg1 * 8], eax_12, 
    "AVG_BANK_EXCALL")
