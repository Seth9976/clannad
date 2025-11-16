// 函数: sub_4119a0
// 地址: 0x4119a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (arg1 u<= 0x20 && result u<= 0x20)
    if ((&data_976b50)[result * 8] == 0)
        sub_411500(result, data_70300c, result, data_7030dc)
    
    sub_411500(sub_411350(arg1), (&data_976b58)[result * 8], arg1, (&data_976b5c)[result * 8])
    result = ((&data_976b58)[result * 8] * (&data_976b5c)[result * 8]) << 2
    sub_4d1c30(result, (&data_976b54)[result * 8], (&data_976b54)[arg1 * 8], result)

return result
