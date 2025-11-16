// 函数: sub_577660
// 地址: 0x577660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx_2 = data_1332b60 - arg5 - 1
*(arg3 * 0x2d0 + 0x8fcd70) = arg2
int32_t edx_1 = data_1332b64 - arg6
*(arg3 * 0x2d0 + 0x8fcd7c) = arg6
int32_t result = arg2
*(arg3 * 0x2d0 + &data_8fcd74) = arg4
*(arg3 * 0x2d0 + 0x8fcd78) = arg5

if (arg5 s>= data_1332b60 || result s<= ebx_2)
    if (arg6 s< data_1332b64 && arg4 s> edx_1 - 1)
        *(arg3 * 0x2d0 + 0x8fcd60) = 0
        *(arg3 * 0x2d0 + 0x8fcd64) = 1
        *(arg3 * 0x2d0 + 0x8fcd68) = result
        *(arg3 * 0x2d0 + 0x8fcd6c) = edx_1 - 1
        return result
    
    *(arg3 * 0x2d0 + 0x8fcd60) = 0
    *(arg3 * 0x2d0 + 0x8fcd68) = result
else
    result = data_1332b64
    
    if (arg6 s< result && arg4 s> edx_1 - 1)
        *(arg3 * 0x2d0 + 0x8fcd68) = ebx_2
        *(arg3 * 0x2d0 + 0x8fcd60) = 1
        *(arg3 * 0x2d0 + 0x8fcd64) = 1
        *(arg3 * 0x2d0 + 0x8fcd6c) = edx_1 - 1
        return result
    
    *(arg3 * 0x2d0 + 0x8fcd60) = 1
    *(arg3 * 0x2d0 + 0x8fcd68) = ebx_2

*(arg3 * 0x2d0 + 0x8fcd6c) = arg4
*(arg3 * 0x2d0 + 0x8fcd64) = 0
return result
