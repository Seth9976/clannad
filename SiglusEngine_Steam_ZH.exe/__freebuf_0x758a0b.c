// 函数: __freebuf
// 地址: 0x758a0b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg1[3].b & 0x83) == 0 || (arg1[3].b & 8) == 0)
    return 

_free(arg1[2])
arg1[3] &= 0xfffffbf7
*arg1 = 0
arg1[2] = 0
arg1[1] = 0
