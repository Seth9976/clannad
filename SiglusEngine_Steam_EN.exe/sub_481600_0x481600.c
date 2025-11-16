// 函数: sub_481600
// 地址: 0x481600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg5 = 0xffffffff
*arg4 = 0xffffffff

if (arg3 u> 0xff || *(arg3 * 0x58 + 0x1b164d0) == 0 || arg2 s< 0
        || arg2 s>= *(*(arg3 * 0x58 + 0x1b164c0) + 0x8c))
    return 

int32_t* ecx_2 = arg2 * 0x60 + *(arg3 * 0x58 + 0x1b164c4)

if (ecx_2[0x10] s>= 0)
    *arg4 = ecx_2[2] - *ecx_2
    *arg5 = ecx_2[3] - ecx_2[1]
