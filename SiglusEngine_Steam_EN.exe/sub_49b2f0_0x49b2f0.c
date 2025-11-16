// 函数: sub_49b2f0
// 地址: 0x49b2f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2

if ((eax == 1 || eax == 2) && arg8 == 0 && arg2[5] == 0 && arg2[6] == 0 && arg3 u<= 0x20
        && (&data_976b50)[arg3 * 8] != 0 && (&data_976b58)[arg3 * 8] == arg6
        && (&data_976b5c)[arg3 * 8] == arg7)
    int32_t var_14 = arg7 - 1
    int32_t var_18 = arg6 - 1
    sub_494c90(0, 0)
    sub_4d6c40(&(&data_976b50)[arg3 * 8], &(&data_976b54)[arg3 * 8])
    sub_4d66b0(arg4)
    (&data_976b54)[arg3 * 8] = arg5
    (&data_976b50)[arg3 * 8] = arg4
    return 1

return 0
