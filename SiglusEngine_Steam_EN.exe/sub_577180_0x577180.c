// 函数: sub_577180
// 地址: 0x577180
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

if (*(arg3 * 0x1d4 + &data_1090b6c) == 0xffffffff)
    *(arg3 * 0x2d0 + 0x8fcd80) = *(arg3 * 0x1d4 + 0x1090b78)
    *(arg3 * 0x2d0 + 0x8fcd84) = *(arg3 * 0x1d4 + 0x1090b7c)
    return 

if (arg5 == 0)
    *(arg3 * 0x2d0 + 0x8fcd80) += arg2
    *(arg3 * 0x2d0 + 0x8fcd84) += arg4
    *(arg3 * 0x3920 + 0xf89d90) += arg2
    *(arg3 * 0x3920 + 0xf89d94) += arg4
    *(arg3 * 0x3920 + 0xf89da0) += arg2
    *(arg3 * 0x3920 + 0xf89da4) += arg4
    return 

int32_t eax_3 = *(arg3 * 0x3920 + 0xf89d90)
int32_t eax_4 = eax_3 + arg2
int32_t ebx_1 = arg4
int32_t ecx_3 = *(arg3 * 0x3920 + 0xf89d94) + ebx_1
arg1 = *(arg3 * 0x3920 + 0xf89d9c) - 1 + ecx_3

if (eax_3 + arg2 s>= 0)
    ebx_1 = arg4
    
    if (*(arg3 * 0x3920 + 0xf89d98) + eax_4 - 1 s< data_1332b60)
        *(arg3 * 0x2d0 + 0x8fcd80) += arg2
        *(arg3 * 0x3920 + 0xf89da0) += arg2
        *(arg3 * 0x3920 + 0xf89d90) = eax_4

if (ecx_3 s< 0 || arg1 s>= data_1332b64)
    return 

*(arg3 * 0x2d0 + 0x8fcd84) += ebx_1
*(arg3 * 0x3920 + 0xf89da4) += ebx_1
*(arg3 * 0x3920 + 0xf89d94) = ecx_3
