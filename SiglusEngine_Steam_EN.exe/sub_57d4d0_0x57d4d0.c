// 函数: sub_57d4d0
// 地址: 0x57d4d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

if (arg2 == 0xffffffff)
    arg2 = *(arg1 * 0x1d4 + 0x1090ae8)
else if (arg2 s> 0x100)
    arg2 = 0x100
else if (arg2 s< 8)
    arg2 = 8

int32_t eax = *(arg1 * 0x1d4 + &data_1090aec)
*(arg1 * 0x2d0 + &data_8fcae4) = *(arg1 * 0x1d4 + 0x1090af0)
*(arg1 * 0x2d0 + &data_8fcadc) = arg2
*(arg1 * 0x2d0 + 0x8fcae0) = eax
return sub_57f830(arg1) __tailcall
