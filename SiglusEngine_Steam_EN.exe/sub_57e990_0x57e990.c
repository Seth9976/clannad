// 函数: sub_57e990
// 地址: 0x57e990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || *(arg1 * 0x1d4 + 0x1090c00) == 0 || *(arg1 * 0x2d0 + &data_8fcb20) != 1)
    return 

if (*(arg1 * 0x2d0 + 0x8fcb24) == 0)
    if (*(arg1 * 0x2d0 + 0x8fcb28) != 0)
        *(arg1 * 0x2d0 + 0x8fcb34) = *(arg1 * 0x2d0 + 0x8fcb0c) + *(arg1 * 0x2d0 + &data_8fcadc)
        return 
    
    int32_t ecx = *(arg1 * 0x2d0 + 0x8fcb0c)
    int32_t eax_2 = *(arg1 * 0x2d0 + &data_8fcadc) + ecx
    *(arg1 * 0x2d0 + 0x8fcb30) = ecx
    *(arg1 * 0x2d0 + 0x8fcb34) = eax_2
    *(arg1 * 0x2d0 + 0x8fcb38) = *(arg1 * 0x2d0 + 0x8fcb10)
    *(arg1 * 0x2d0 + 0x8fcb28) = 1
    return 

if (*(arg1 * 0x2d0 + 0x8fcb2c) == 0)
    int32_t ecx_1 = *(arg1 * 0x2d0 + 0x8fcb0c)
    int32_t eax_7 = *(arg1 * 0x2d0 + &data_8fcadc) + ecx_1
    *(arg1 * 0x2d0 + 0x8fcb3c) = ecx_1
    *(arg1 * 0x2d0 + 0x8fcb40) = eax_7
    *(arg1 * 0x2d0 + 0x8fcb44) = *(arg1 * 0x2d0 + 0x8fcb10)
    *(arg1 * 0x2d0 + 0x8fcb2c) = 1
    return 

*(arg1 * 0x2d0 + 0x8fcb40) = *(arg1 * 0x2d0 + 0x8fcb0c) + *(arg1 * 0x2d0 + &data_8fcadc)
