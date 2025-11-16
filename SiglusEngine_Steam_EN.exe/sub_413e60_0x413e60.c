// 函数: sub_413e60
// 地址: 0x413e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = arg2
*arg7 = 0
*arg6 = 0
*arg5 = 0

if (arg3 u<= 0x20 && (&data_976b50)[arg3 * 8] != 0 && result s>= 0)
    int32_t edx_1 = (&data_976b58)[arg3 * 8]
    
    if (result s< edx_1 && arg4 s>= 0 && arg4 s< (&data_976b5c)[arg3 * 8])
        int32_t edx_3 = edx_1 * arg4 + result
        int32_t eax = (&data_976b54)[arg3 * 8]
        char* edx_4 = eax + (edx_3 << 2)
        *arg8 = zx.d(*(eax + (edx_3 << 2) + 3))
        *arg5 = zx.d(edx_4[2])
        *arg6 = zx.d(edx_4[1])
        result = zx.d(*edx_4)
        *arg7 = result

return result
