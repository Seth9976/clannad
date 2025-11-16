// 函数: sub_52c540
// 地址: 0x52c540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_6 = data_1af4e84
int32_t result

if (eax_6 == 0)
    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
    int32_t ecx_5 = *(arg1 + 0x13b3c)
    result = data_1b8a734
    int32_t edx_2 = data_1b8a720
    
    if (ecx_5 u<= 0x3f)
        if (edx_2 s< 0 || edx_2 s>= 0x100)
            edx_2 = 0xffffffff
        
        if (result s< 0 || result s>= 0x100)
            result = 0xffffffff
        
        *(ecx_5 * 0x2d0 + 0x8fcb04) = edx_2
        *(ecx_5 * 0x2d0 + &data_8fcb08) = result
else if (eax_6 == 1)
    sub_4ef190(eax_6 - 1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    result = *(arg1 + 0x13b3c)
    int32_t ecx_2 = data_1b8a720
    
    if (result u<= 0x3f)
        if (ecx_2 s< 0 || ecx_2 s>= 0x100)
            ecx_2 = 0xffffffff
        
        *(result * 0x2d0 + 0x8fcb04) = ecx_2
        *(result * 0x2d0 + &data_8fcb08) = 0xffffffff
        return result * 0x2d0 + &data_8fcadc
else
    result = eax_6 - 2
    
    if (eax_6 == 2)
        result = *(arg1 + 0x13b3c)
        
        if (result u<= 0x3f)
            *(result * 0x2d0 + 0x8fcb04) = 0xffffffff
            *(result * 0x2d0 + &data_8fcb08) = 0xffffffff
            return result * 0x2d0 + &data_8fcadc

return result
