// 函数: sub_52c390
// 地址: 0x52c390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_9 = data_1af4e84

if (eax_9 == 0)
    return sub_57d5b0(sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
        data_1b8a720, *(arg1 + 0x13b3c), data_1b8a734)

int32_t eax_2

if (eax_9 == 1)
    sub_4ef190(eax_9 - 1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
    eax_2 = *(arg1 + 0x13b3c)
    int32_t ecx_5 = data_1b8a720
    
    if (eax_2 u<= 0x3f)
        if (ecx_5 == 0xffffffff)
            int32_t eax_6 = *(eax_2 * 0x1d4 + &data_1090b18)
            *(eax_2 * 0x2d0 + 0x8fcae8) = *(eax_2 * 0x1d4 + 0x1090b14)
            *(eax_2 * 0x2d0 + &data_8fcaec) = eax_6
            return eax_6
        
        if (ecx_5 == 0xfffffffe || ecx_5 s< 0 || ecx_5 s>= 0x100)
            ecx_5 = *(eax_2 * 0x2d0 + 0x8fcae8)
        
        int32_t eax_7 = *(eax_2 * 0x1d4 + &data_1090b18)
        *(eax_2 * 0x2d0 + 0x8fcae8) = ecx_5
        *(eax_2 * 0x2d0 + &data_8fcaec) = eax_7
        return eax_7
else
    eax_2 = eax_9 - 2
    
    if (eax_9 == 2)
        eax_2 = *(arg1 + 0x13b3c)
        
        if (eax_2 u<= 0x3f)
            int32_t eax_3 = *(eax_2 * 0x1d4 + 0x1090b14)
            int32_t ecx_2 = *(eax_2 * 0x1d4 + &data_1090b18)
            *(eax_2 * 0x2d0 + 0x8fcae8) = eax_3
            *(eax_2 * 0x2d0 + &data_8fcaec) = ecx_2
            return eax_3

return eax_2
