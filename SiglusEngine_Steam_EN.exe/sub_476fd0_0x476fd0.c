// 函数: sub_476fd0
// 地址: 0x476fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg3 + 8) = arg2
*(arg3 + 0xc) = arg5

if (arg2 != 0xffffffff)
    sub_4cfdf0(arg5, arg4, arg3 + 0x1dc, 0x24)

int32_t result = *(arg3 + 0x16c) + 1
*(arg3 + 0xe0) = result
return result
