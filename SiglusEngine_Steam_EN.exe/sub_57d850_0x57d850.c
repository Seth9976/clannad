// 函数: sub_57d850
// 地址: 0x57d850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx_3

if (arg2 u> 3)
label_57d8fa:
    
    if (arg3 u<= 0x3f)
        ecx_3 = arg3 * 0x2d0 + &data_8fcadc
        *(ecx_3 + 0x280) = 1
    label_57d918:
        *(ecx_3 + 0x27c) = 1
        *(ecx_3 + 0x274) = arg4
        *(ecx_3 + 0x278) = arg5
else
    switch (arg2)
        case 0
            if (arg3 u<= 0x3f)
                *(arg3 * 0x2d0 + 0x8fcd58) = 0
                *(arg3 * 0x2d0 + 0x8fcd5c) = 0
                *(arg3 * 0x2d0 + 0x8fcd50) = arg4
                *(arg3 * 0x2d0 + 0x8fcd54) = arg5
        case 1
            if (arg3 u<= 0x3f)
                ecx_3 = arg3 * 0x2d0 + &data_8fcadc
                *(ecx_3 + 0x280) = 0
                goto label_57d918
        case 2
            if (arg3 u<= 0x3f)
                *(arg3 * 0x2d0 + 0x8fcd58) = 0
                *(arg3 * 0x2d0 + 0x8fcd5c) = 1
                *(arg3 * 0x2d0 + 0x8fcd50) = arg4
                *(arg3 * 0x2d0 + 0x8fcd54) = arg5
        case 3
            goto label_57d8fa
