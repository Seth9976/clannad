// 函数: sub_481520
// 地址: 0x481520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg5 = 0

if (arg3 u> 0xff || *(arg3 * 0x58 + 0x1b164d0) == 0 || arg2 s< 0
        || arg2 s>= *(*(arg3 * 0x58 + 0x1b164c0) + 0x8c))
    return 

arg1 = arg2 * 0x60 + *(arg3 * 0x58 + 0x1b164c4)
int32_t ecx_2 = *(arg1 + 0x40)

if (ecx_2 s>= 0 && sub_427d40(arg1, arg4, arg3 * 0x58 + 0x1b164d0, arg5, nullptr, ecx_2, 
        *(arg1 + 0x10), *(arg1 + 0x14)) != 0)
    *arg5 = 1
