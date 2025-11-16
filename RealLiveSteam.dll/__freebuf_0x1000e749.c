// 函数: __freebuf
// 地址: 0x1000e749
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if ((arg1[3].b & 0x83) == 0 || (arg1[3].b & 8) == 0)
    return 

_free(arg1[2])
arg1[3] &= 0xfffffbf7
*arg1 = 0
arg1[2] = 0
arg1[1] = 0
