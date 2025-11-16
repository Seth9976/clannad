// 函数: __ftbuf
// 地址: 0x75b413
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || (arg2[3] & 0x1000) == 0)
    return 

__flush(arg2)
arg2[3] &= 0xffffeeff
arg2[6] = 0
*arg2 = 0
arg2[2] = 0
