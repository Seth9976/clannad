// 函数: sub_494940
// 地址: 0x494940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u<= 0x270f)
    int32_t ecx = arg1 * 9
    
    if (*((ecx << 2) + &data_1b8c890) != 0 && arg2 s< *((ecx << 2) + &data_1b8c8a8))
        int32_t eax_1 = arg2 & 0x80000007
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffff8) + 1
        
        eax_1.b = *((eax_1 << 2) + &data_611440)
        int32_t result
        result.b = (*((arg2 s>> 3) + *((ecx << 2) + &data_1b8c894)) & eax_1.b) != 0
        return result

return 2
