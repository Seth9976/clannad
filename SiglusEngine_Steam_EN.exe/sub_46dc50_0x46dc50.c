// 函数: sub_46dc50
// 地址: 0x46dc50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t edx = arg5
    int32_t ecx = (result + (arg3 << 1)) * 0x650
    int32_t esi_1 = arg6
    result = arg4 * 9
    
    if (edx s<= 0)
        edx = 1
    
    *(ecx + (result << 2) + 0x72da3c) = edx.w
    
    if (esi_1 s< 0)
        esi_1 = 0
    
    *(ecx + (result << 2) + 0x72da40) = esi_1

return result
