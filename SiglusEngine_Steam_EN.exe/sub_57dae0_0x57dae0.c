// 函数: sub_57dae0
// 地址: 0x57dae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u<= 3)
    switch (arg2)
        case 0
            if (arg3 u<= 0x3f)
                sub_576f50(arg3)
                *(arg3 * 0x2d0 + 0x8fcd68) = arg4
                int32_t eax = *(arg3 * 0x3920 + 0xf89d98)
                *(arg3 * 0x2d0 + 0x8fcd70) = arg4
                *(arg3 * 0x2d0 + 0x8fcd60) = 0
                *(arg3 * 0x2d0 + 0x8fcd78) = eax + arg4 - 1
                int32_t eax_3 = *(arg3 * 0x3920 + 0xf89d9c) - 1
                *(arg3 * 0x2d0 + 0x8fcd64) = 0
                *(arg3 * 0x2d0 + &data_8fcd74) = arg5
                *(arg3 * 0x2d0 + 0x8fcd7c) = eax_3 + arg5
                *(arg3 * 0x2d0 + 0x8fcd6c) = arg5
        case 1
            if (arg3 u<= 0x3f)
                sub_576f50(arg3)
                int32_t eax_7 = data_1332b60 - arg4 - 1
                *(arg3 * 0x2d0 + 0x8fcd78) = eax_7
                int32_t eax_9 = eax_7 - *(arg3 * 0x3920 + 0xf89d98) + 1
                *(arg3 * 0x2d0 + 0x8fcd68) = arg4
                *(arg3 * 0x2d0 + 0x8fcd70) = eax_9
                int32_t eax_11 = *(arg3 * 0x3920 + 0xf89d9c) - 1
                *(arg3 * 0x2d0 + 0x8fcd64) = 0
                *(arg3 * 0x2d0 + &data_8fcd74) = arg5
                *(arg3 * 0x2d0 + 0x8fcd7c) = eax_11 + arg5
                *(arg3 * 0x2d0 + 0x8fcd60) = 1
                *(arg3 * 0x2d0 + 0x8fcd6c) = arg5
        case 2
            if (arg3 u<= 0x3f)
                sub_576f50(arg3)
                *(arg3 * 0x2d0 + 0x8fcd68) = arg4
                int32_t eax_13 = *(arg3 * 0x3920 + 0xf89d98)
                *(arg3 * 0x2d0 + 0x8fcd70) = arg4
                *(arg3 * 0x2d0 + 0x8fcd60) = 0
                *(arg3 * 0x2d0 + 0x8fcd78) = eax_13 + arg4 - 1
                int32_t eax_16 = data_1332b64 - arg5
                *(arg3 * 0x2d0 + 0x8fcd64) = 1
                *(arg3 * 0x2d0 + 0x8fcd7c) = eax_16 - 1
                *(arg3 * 0x2d0 + &data_8fcd74) = eax_16 - 1 - *(arg3 * 0x3920 + 0xf89d9c) + 1
                *(arg3 * 0x2d0 + 0x8fcd6c) = arg5
        case 3
            goto label_57dc71
    
    return 

label_57dc71:

if (arg3 u> 0x3f)
    return 

sub_576f50(arg3)
int32_t eax_22 = data_1332b60 - arg4 - 1
*(arg3 * 0x2d0 + 0x8fcd78) = eax_22
int32_t eax_24 = eax_22 - *(arg3 * 0x3920 + 0xf89d98) + 1
*(arg3 * 0x2d0 + 0x8fcd68) = arg4
*(arg3 * 0x2d0 + 0x8fcd70) = eax_24
int32_t eax_27 = data_1332b64 - arg5 - 1
*(arg3 * 0x2d0 + 0x8fcd7c) = eax_27
*(arg3 * 0x2d0 + &data_8fcd74) = eax_27 - *(arg3 * 0x3920 + 0xf89d9c) + 1
*(arg3 * 0x2d0 + 0x8fcd64) = 1
*(arg3 * 0x2d0 + 0x8fcd60) = 1
*(arg3 * 0x2d0 + 0x8fcd6c) = arg5
