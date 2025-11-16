// 函数: sub_410030
// 地址: 0x410030
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0xffffffff

__builtin_memset(arg1, 0, 0x168)
arg1[1] = 0x4000
*arg1 = _malloc(0x4000)
arg1[6] = 0x400
arg1[4] = _malloc(0x1000)
arg1[5] = _malloc(arg1[6] << 3)
arg1[0x54] = arg2
return 0
