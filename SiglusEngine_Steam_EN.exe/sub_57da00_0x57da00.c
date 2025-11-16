// 函数: sub_57da00
// 地址: 0x57da00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

sub_576f50(arg3)

if (arg2 == 0 || arg2 == 1)
    *(arg3 * 0x2d0 + 0x8fcd60) = arg2
    *(arg3 * 0x2d0 + 0x8fcd68) = arg5
    
    if (arg2 != 0)
        int32_t eax_5 = data_1332b60 - arg5 - 1
        *(arg3 * 0x2d0 + 0x8fcd78) = eax_5
        *(arg3 * 0x2d0 + 0x8fcd70) = eax_5 - *(arg3 * 0x3920 + 0xf89d98) + 1
    else
        int32_t eax_1 = *(arg3 * 0x3920 + 0xf89d98) - 1
        *(arg3 * 0x2d0 + 0x8fcd70) = arg5
        *(arg3 * 0x2d0 + 0x8fcd78) = eax_1 + arg5

if (arg4 != 0 && arg4 != 1)
    return 

*(arg3 * 0x2d0 + 0x8fcd64) = arg4
*(arg3 * 0x2d0 + 0x8fcd6c) = arg6

if (arg4 == 0)
    int32_t eax_9 = *(arg3 * 0x3920 + 0xf89d9c) - 1
    *(arg3 * 0x2d0 + &data_8fcd74) = arg6
    *(arg3 * 0x2d0 + 0x8fcd7c) = eax_9 + arg6
    return 

int32_t eax_13 = data_1332b64 - arg6 - 1
*(arg3 * 0x2d0 + 0x8fcd7c) = eax_13
*(arg3 * 0x2d0 + &data_8fcd74) = eax_13 - *(arg3 * 0x3920 + 0xf89d9c) + 1
