// 函数: sub_57d5b0
// 地址: 0x57d5b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

if (arg2 == 0xffffffff)
    arg2 = *(arg3 * 0x1d4 + 0x1090b14)
else if (arg2 == 0xfffffffe || arg2 s< 0 || arg2 s>= 0x100)
    arg2 = *(arg3 * 0x2d0 + 0x8fcae8)

arg1 = arg4

if (arg1 == 0xffffffff)
    int32_t eax = *(arg3 * 0x1d4 + &data_1090b18)
    *(arg3 * 0x2d0 + 0x8fcae8) = arg2
    *(arg3 * 0x2d0 + &data_8fcaec) = eax
    return 

if (arg1 == 0xfffffffe || arg1 s< 0 || arg1 s>= 0x100)
    arg1 = *(arg3 * 0x2d0 + &data_8fcaec)

*(arg3 * 0x2d0 + 0x8fcae8) = arg2
*(arg3 * 0x2d0 + &data_8fcaec) = arg1
