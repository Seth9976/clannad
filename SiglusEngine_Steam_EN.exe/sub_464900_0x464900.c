// 函数: sub_464900
// 地址: 0x464900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg2 + 8) = arg4
*(arg2 + 0xc) = arg6

if (arg4 != 0xffffffff)
    sub_4cfdf0(arg6, arg5, arg3 + 0x58, 0x24)

int32_t result = *(arg2 + 0x380) + 1
*(arg2 + 0x2f4) = result
return result
